#pragma once

namespace pydsdoc
{
    namespace nvroimeta
    {
        namespace NvDsDataTypeDoc
        {
            constexpr const char* descr = R"pyds(Specifies the type of NVIDIA defined NvDsDataType)pyds";
            constexpr const char* NvDsDataType_FP32=R"pyds(FP32)pyds";
            constexpr const char* NvDsDataType_UINT8=R"pyds(UINT8)pyds";
            constexpr const char* NvDsDataType_INT8=R"pyds(INT8)pyds";
            constexpr const char* NvDsDataType_UINT32=R"pyds(UINT32)pyds";
            constexpr const char* NvDsDataType_INT32=R"pyds(INT32)pyds";
            constexpr const char* NvDsDataType_FP16=R"pyds(FP16)pyds";
        }

        namespace NvDsUnitTypeDoc
        {
            constexpr const char* descr = R"pyds(Specifies the type of nvNVIDIA defined NvDsUnitType)pyds";
            constexpr const char* NvDsUnitType_FullFrame=R"pyds(FullFrame)pyds";
            constexpr const char* NvDsUnitType_ROI=R"pyds(ROI)pyds";
            constexpr const char* NvDsUnitType_Object=R"pyds(Object)pyds";
        }
        
        namespace NvDsRoiMetaDoc
        {          
            constexpr const char* descr = R"pyds(
                Holds information about roi metadata
                
                :ivar roi: :class:`NvOSD_RectParams`,
                :ivar converted_buffer: :class:`NvBufSurfaceParams`,
                :ivar frame_meta: :class:`NvDsFrameMeta`,
                :ivar object_meta: :class:`NvDsObjectMeta`,
                :ivar classifier_meta_list: :class:`NvDsClassifierMetaList`,
                :ivar roi_user_meta_list: :class:`NvDsUserMetaList`,
                :ivar scale_ratio_x: :class:`gdouble`,
                :ivar scale_ratio_y: :class:`gdouble`,
                :ivar offset_left: :class:`gdouble`,                
                :ivar offset_top: :class:`gdouble`,
                :ivar roi_polygon: :class:`roi_polygon`
                )pyds";

            constexpr const char* cast=R"pyds(cast given object/data to :class:`NvDsRoiMeta`, call pyds.NvDsRoiMeta.cast(data))pyds";
        }
    }
}