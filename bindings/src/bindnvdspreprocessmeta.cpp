// NvDsPreProcessMeta

#include "bind_string_property_definitions.h"
#include "bindnvdspreprocessmeta.hpp" // Include the corresponding header file

namespace py = pybind11;

namespace pydeepstream {

    void bindnvdspreprocessmeta(py::module &m) {
        py::class_<NvDsPreProcessTensorMeta>(m, "NvDsPreProcessTensorMeta",
                                pydsdoc::nvpreprocessmeta::NvDsPreProcessTensorMetaDoc::descr)
            .def(py::init<>())
            .def_readwrite("raw_tensor_buffer", &NvDsPreProcessTensorMeta::raw_tensor_buffer)
            .def_readwrite("buffer_size", &NvDsPreProcessTensorMeta::buffer_size)
            .def_readwrite("tensor_shape", &NvDsPreProcessTensorMeta::tensor_shape)
            .def_readwrite("data_type", &NvDsPreProcessTensorMeta::data_type)
            .def_readwrite("tensor_name", &NvDsPreProcessTensorMeta::tensor_name)
            .def_readwrite("gpu_id", &NvDsPreProcessTensorMeta::gpu_id)
            .def_readwrite("private_data", &NvDsPreProcessTensorMeta::private_data)
            .def_readwrite("meta_id", &NvDsPreProcessTensorMeta::meta_id)

            .def("cast",
                     [](void *data) {
                         return (NvDsPreProcessTensorMeta *) data;
                     },
                     py::return_value_policy::reference,
                     pydsdoc::nvpreprocessmeta::NvDsPreProcessTensorMetaDoc::cast)

            .def("cast",
                     [](size_t data) {
                         return (NvDsPreProcessTensorMeta *) data;
                     },
                     py::return_value_policy::reference,
                     pydsdoc::nvpreprocessmeta::NvDsPreProcessTensorMetaDoc::cast);


        py::class_<GstNvDsPreProcessBatchMeta>(m, "GstNvDsPreProcessBatchMeta",
                                pydsdoc::nvpreprocessmeta::GstNvDsPreProcessBatchMetaDoc::descr)
            .def(py::init<>())
            .def_readwrite("target_unique_ids", &GstNvDsPreProcessBatchMeta::target_unique_ids)
            .def_readwrite("tensor_meta", &GstNvDsPreProcessBatchMeta::tensor_meta)
            // .def_readwrite("roi_vector", &GstNvDsPreProcessBatchMeta::roi_vector)
            .def_readwrite("private_data", &GstNvDsPreProcessBatchMeta::private_data)

            .def_property_readonly("roi_vector",
                                    [](const GstNvDsPreProcessBatchMeta &self) {
                                        std::vector<const NvDsRoiMeta *> vRoiMetas;
                                        for (const auto &roi_meta : self.roi_vector) {
                                            vRoiMetas.push_back(
                                                    &roi_meta);
                                        }
                                        return vRoiMetas;
                                    },
                                    py::return_value_policy::reference)

            .def("cast",
                     [](void *data) {
                         return (GstNvDsPreProcessBatchMeta *) data;
                     },
                     py::return_value_policy::reference,
                     pydsdoc::nvpreprocessmeta::GstNvDsPreProcessBatchMetaDoc::cast)
            
            .def("cast",
                     [](size_t data) {
                         return (GstNvDsPreProcessBatchMeta *) data;
                     },
                     py::return_value_policy::reference,
                     pydsdoc::nvpreprocessmeta::GstNvDsPreProcessBatchMetaDoc::cast);   
    }
}