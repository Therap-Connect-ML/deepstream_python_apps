#pragma once

namespace pydsdoc
{
    namespace nvpreprocessmeta
    {
        namespace NvDsPreProcessTensorMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about preprocessed tensor metadata
                
                :ivar raw_tensor_buffer: *void*, raw_tensor_buffer
                :ivar buffer_size: *int*, buffer_size
                :ivar tensor_shape: *vector*, tensor_shape
                :ivar data_type: *NvDsDataType*, data_type
                :ivar tensor_name: *string*, tensor_name
                :ivar gpu_id: *int*, gpu_id
                :ivar private_data: *void*, private_data
                :ivar meta_id: *int*, meta_id)pyds";
            
            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsPreProcessTensorMeta`, call pyds.NvDsPreProcessTensorMeta.cast(data))pyds";
        }

        namespace GstNvDsPreProcessBatchMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about preprocess batch metadata
                
                :ivar target_unique_ids: *int*, target_unique_ids
                :ivar tensor_meta: *NvDsPreProcessTensorMeta*, tensor_meta
                :ivar roi_vector: *vector*, roi_vector
                :ivar private_data: *void*, private_data)pyds";
            
            constexpr const char* cast=R"pyds(cast given object/data to :class:`GstNvDsPreProcessBatchMeta`, call pyds.GstNvDsPreProcessBatchMeta.cast(data))pyds";
        }
    }
}