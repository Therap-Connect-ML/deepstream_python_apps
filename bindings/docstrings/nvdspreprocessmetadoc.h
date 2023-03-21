#pragma once

namespace pydsdoc
{
    namespace nvpreprocessmeta
    {
        namespace NvDsPreProcessTensorMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about preprocess tensor metadata in the preprocessed batch meta 
                
                :ivar raw_tensor_buffer: Holds raw tensor buffer preprocessed for infer.
                :ivar buffer_size: *int*, Size of raw tensor buffer.
                :ivar tensor_shape: *vector*, Shape of raw tensor buffer.
                :ivar data_type: *NvDsDataType*, Model datatype for which tensor prepared.
                :ivar tensor_name: *string*, Model input layer name.
                :ivar gpu_id: *int*, gpu-id on which tensor prepared.
                :ivar private_data: Private data used for the meta producer's internal memory management.)pyds";
            
            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsPreProcessTensorMeta`, call pyds.NvDsPreProcessTensorMeta.cast(data))pyds";
        }

        namespace GstNvDsPreProcessBatchMetaDoc
        {
            constexpr const char* descr = R"pyds(
                Holds information about preprocess batch metadata in the preprocessed meta
                
                :ivar target_unique_ids: *int*, Holds the list of component gie-id for which tensor is prepared.
                :ivar tensor_meta: Holds a pointer to object of type :class: NvDsPreProcessTensorMeta.
                :ivar roi_vector: *vector*, Holds the list of RoiMeta per batch.
                :ivar private_data: Private data used for the meta producer's internal memory management.
                
                Example Usage:
                ::

                    user_meta_list = batch_meta.batch_user_meta_list # Retrieve list of NvDsUserMeta objects in use in the current batch. See NvDsUserMeta documentation for more details.

                    while user_meta_list is not None:
                        try:
                            user_meta = pyds.NvDsUserMeta.cast(user_meta_list.data)
                        except StopIteration:
                            break

                        if user_meta.base_meta.meta_type == pyds.NVDS_PREPROCESS_BATCH_META:
                            # Casting user_meta.user_meta_data to pyds.GstNvDsPreProcessBatchMeta
                            preprocess_batch_meta = pyds.GstNvDsPreProcessBatchMeta.cast(user_meta.user_meta_data))pyds";
            
            constexpr const char* cast=R"pyds(cast given object/data to :class:`GstNvDsPreProcessBatchMeta`, call pyds.GstNvDsPreProcessBatchMeta.cast(data))pyds";
        }
    }
}