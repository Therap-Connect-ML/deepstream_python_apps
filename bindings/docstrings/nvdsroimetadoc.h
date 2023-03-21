#pragma once

namespace pydsdoc
{
    namespace nvroimeta
    {
        namespace NvDsDataTypeDoc
        {
            constexpr const char* descr = R"pyds(
                *Enumerator*. Specifies the type of meta data. 
                NvDsDataType will be present in the range from NvDsDataType_FP32 to NvDsDataType_FP16.
                User can add its own metadata type NvDsDataType_FP16 onwards.)pyds";
            
            constexpr const char* NvDsDataType_FP32=R"pyds(metadata type to be set for FP32 datatype)pyds";
            constexpr const char* NvDsDataType_UINT8=R"pyds(metadata type to be set for UINT8 datatype)pyds";
            constexpr const char* NvDsDataType_INT8=R"pyds(metadata type to be set for INT8 datatype)pyds";
            constexpr const char* NvDsDataType_UINT32=R"pyds(metadata type to be set for UINT32 datatype)pyds";
            constexpr const char* NvDsDataType_INT32=R"pyds(metadata type to be set for INT32 datatype)pyds";
            constexpr const char* NvDsDataType_FP16=R"pyds(metadata type to be set for FP16 datatype)pyds";
        }

        namespace NvDsUnitTypeDoc
        {
            constexpr const char* descr = R"pyds(
                *Enumerator*. Specifies the type of meta data. 
                NvDsUnitType will be present in the range from NvDsUnitType_FullFrame to NvDsDataType_Object.
                User can add its own metadata type NvDsUnitType_Object onwards.)pyds";
            
            constexpr const char* NvDsUnitType_FullFrame=R"pyds(metadata type to be set for Full Frames)pyds";
            constexpr const char* NvDsUnitType_ROI=R"pyds(metadata type to be set for Region of Interests)pyds";
            constexpr const char* NvDsUnitType_Object=R"pyds(metadata type to be set for Cropped Objects)pyds";
        }
        
        namespace NvDsRoiMetaDoc
        {          
            constexpr const char* descr = R"pyds(
                Holds information about roi metadata in the roi_vector of preprocessed batch meta.
                
                :ivar roi: :class:`NvOSD_RectParams`, Structure containing the positional parameters of the object in the frame.
                :ivar converted_buffer: :class:`NvBufSurfaceParams`.
                :ivar frame_meta: An object of type :class:`NvDsFrameMeta`.
                :ivar object_meta: An object of type :class:`NvDsObjectMeta`.
                :ivar classifier_meta_list: Holds a pointer to a list of pointers of type :class:`NvDsClassifierMeta`.
                :ivar roi_user_meta_list: Holds a pointer to a list of pointers of type :class:`NvDsClassifierMeta`.
                :ivar scale_ratio_x: :class:`gdouble`, Ratio by which the frame/ROI crop was scaled in horizontal direction Required when scaling co-ordinates/sizes in metadata back to input resolution.
                :ivar scale_ratio_y: :class:`gdouble`, Ratio by which the frame/ROI crop was scaled in vertical direction Required when scaling co-ordinates/sizes in metadata back to input resolution.
                :ivar offset_left: :class:`gdouble`, offsets in horizontal direction while scaling.                
                :ivar offset_top: :class:`gdouble`, offsets in vertical direction while scaling.
                )pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsRoiMeta`, call pyds.NvDsRoiMeta.cast(data))pyds";
        }
    }
}