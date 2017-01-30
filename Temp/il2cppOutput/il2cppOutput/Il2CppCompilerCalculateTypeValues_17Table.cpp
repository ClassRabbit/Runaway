#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_U3CPrivateImplementationDetailsU3E_3379220348.h"
#include "UnityEngine_Analytics_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_MouseController3353569793.h"
#include "AssemblyU2DCSharp_Spine_Animation3189667530.h"
#include "AssemblyU2DCSharp_Spine_CurveTimeline3832230678.h"
#include "AssemblyU2DCSharp_Spine_RotateTimeline797007672.h"
#include "AssemblyU2DCSharp_Spine_TranslateTimeline3885208053.h"
#include "AssemblyU2DCSharp_Spine_ScaleTimeline3557798001.h"
#include "AssemblyU2DCSharp_Spine_ShearTimeline1449950472.h"
#include "AssemblyU2DCSharp_Spine_ColorTimeline308063626.h"
#include "AssemblyU2DCSharp_Spine_AttachmentTimeline223675776.h"
#include "AssemblyU2DCSharp_Spine_EventTimeline1195166145.h"
#include "AssemblyU2DCSharp_Spine_DrawOrderTimeline1733875985.h"
#include "AssemblyU2DCSharp_Spine_DeformTimeline4137511074.h"
#include "AssemblyU2DCSharp_Spine_IkConstraintTimeline1093250620.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraintTimeline682225104.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintPositionTime1949311752.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintSpacingTimel3184722984.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintMixTimeline3763089089.h"
#include "AssemblyU2DCSharp_Spine_AnimationState964829161.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_StartEndDel3416038005.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_EventDelega3743540456.h"
#include "AssemblyU2DCSharp_Spine_AnimationState_CompleteDel1469797013.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry1654022115.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData250640307.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData_Animati3461212529.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData_Animati3433344190.h"
#include "AssemblyU2DCSharp_Spine_Atlas361685585.h"
#include "AssemblyU2DCSharp_Spine_Format3497928563.h"
#include "AssemblyU2DCSharp_Spine_TextureFilter797599033.h"
#include "AssemblyU2DCSharp_Spine_TextureWrap1237141003.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage3096131840.h"
#include "AssemblyU2DCSharp_Spine_AtlasRegion1137030501.h"
#include "AssemblyU2DCSharp_Spine_AtlasAttachmentLoader384955783.h"
#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"
#include "AssemblyU2DCSharp_Spine_AttachmentType2955208569.h"
#include "AssemblyU2DCSharp_Spine_BoundingBoxAttachment3933059536.h"
#include "AssemblyU2DCSharp_Spine_MeshAttachment3373030252.h"
#include "AssemblyU2DCSharp_Spine_PathAttachment3159049124.h"
#include "AssemblyU2DCSharp_Spine_RegionAttachment2459988211.h"
#include "AssemblyU2DCSharp_Spine_VertexAttachment2433703843.h"
#include "AssemblyU2DCSharp_Spine_BlendMode2966755546.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"
#include "AssemblyU2DCSharp_Spine_BoneData2151574858.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"
#include "AssemblyU2DCSharp_Spine_EventData2102088874.h"
#include "AssemblyU2DCSharp_Spine_IkConstraint1121099739.h"
#include "AssemblyU2DCSharp_Spine_IkConstraintData4214992549.h"
#include "AssemblyU2DCSharp_Spine_Json1650731812.h"
#include "AssemblyU2DCSharp_SharpJson_Lexer2785281654.h"
#include "AssemblyU2DCSharp_SharpJson_Lexer_Token1134737626.h"
#include "AssemblyU2DCSharp_SharpJson_JsonDecoder1116455590.h"
#include "AssemblyU2DCSharp_Spine_MathUtils2811730383.h"
#include "AssemblyU2DCSharp_Spine_PathConstraint637206622.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintData1516901800.h"
#include "AssemblyU2DCSharp_Spine_PositionMode1978314152.h"
#include "AssemblyU2DCSharp_Spine_SpacingMode2053106316.h"
#include "AssemblyU2DCSharp_Spine_RotateMode439322522.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_SkeletonBinary1569363754.h"
#include "AssemblyU2DCSharp_Spine_SkeletonBinary_Vertices1382898063.h"
#include "AssemblyU2DCSharp_Spine_SkeletonBounds1575125470.h"
#include "AssemblyU2DCSharp_Spine_Polygon2078419392.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData3387199699.h"
#include "AssemblyU2DCSharp_Spine_SkeletonJson3387395601.h"
#include "AssemblyU2DCSharp_Spine_SkeletonJson_LinkedMesh3634160245.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2091264019.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTupleComp153954656.h"
#include "AssemblyU2DCSharp_Spine_Slot1650993210.h"
#include "AssemblyU2DCSharp_Spine_SlotData3389517700.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraint3246764911.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraintData4233287737.h"
#include "AssemblyU2DCSharp_BasicPlatformerController211022154.h"
#include "AssemblyU2DCSharp_ConstrainedCamera3991632635.h"
#include "AssemblyU2DCSharp_Raptor2440623542.h"
#include "AssemblyU2DCSharp_Raptor_U3CGunGrabRoutineU3Ec__Ite763188194.h"
#include "AssemblyU2DCSharp_SpineBeginnerTwo517921879.h"
#include "AssemblyU2DCSharp_SpineBeginnerTwo_U3CDoDemoRoutineU95077388.h"
#include "AssemblyU2DCSharp_SpineBlinkPlayer726077722.h"
#include "AssemblyU2DCSharp_SpineBlinkPlayer_U3CStartU3Ec__I2936432708.h"
#include "AssemblyU2DCSharp_SpineboyBeginnerInput3247046255.h"
#include "AssemblyU2DCSharp_SpineboyBeginnerModel3250758094.h"
#include "AssemblyU2DCSharp_SpineboyBeginnerModel_U3CJumpRou3510013669.h"
#include "AssemblyU2DCSharp_SpineBeginnerBodyState3071047130.h"
#include "AssemblyU2DCSharp_SpineboyBeginnerView1352051552.h"
#include "AssemblyU2DCSharp_Chimera2410953803.h"
#include "AssemblyU2DCSharp_FootSoldierExample1425608118.h"
#include "AssemblyU2DCSharp_FootSoldierExample_U3CBlinkU3Ec_1986935336.h"
#include "AssemblyU2DCSharp_Goblins1859914588.h"
#include "AssemblyU2DCSharp_RaggedySpineboy938186132.h"
#include "AssemblyU2DCSharp_RaggedySpineboy_U3CRestoreU3Ec__3556487381.h"
#include "AssemblyU2DCSharp_RaggedySpineboy_U3CWaitUntilStopp434628958.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (U24ArrayTypeU2412_t3379220351)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2412_t3379220351_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (U3CModuleU3E_t86524796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (U3CModuleU3E_t86524797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (MouseController_t3353569793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[5] = 
{
	MouseController_t3353569793::get_offset_of_ground_2(),
	MouseController_t3353569793::get_offset_of_targetPosition_3(),
	MouseController_t3353569793::get_offset_of_speed_4(),
	MouseController_t3353569793::get_offset_of_lookRight_5(),
	MouseController_t3353569793::get_offset_of_animator_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (Animation_t3189667530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[3] = 
{
	Animation_t3189667530::get_offset_of_timelines_0(),
	Animation_t3189667530::get_offset_of_duration_1(),
	Animation_t3189667530::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (CurveTimeline_t3832230678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[5] = 
{
	0,
	0,
	0,
	0,
	CurveTimeline_t3832230678::get_offset_of_curves_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (RotateTimeline_t797007672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[6] = 
{
	0,
	0,
	0,
	0,
	RotateTimeline_t797007672::get_offset_of_boneIndex_9(),
	RotateTimeline_t797007672::get_offset_of_frames_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (TranslateTimeline_t3885208053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	TranslateTimeline_t3885208053::get_offset_of_boneIndex_11(),
	TranslateTimeline_t3885208053::get_offset_of_frames_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (ScaleTimeline_t3557798001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (ShearTimeline_t1449950472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (ColorTimeline_t308063626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	ColorTimeline_t308063626::get_offset_of_slotIndex_15(),
	ColorTimeline_t308063626::get_offset_of_frames_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (AttachmentTimeline_t223675776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[3] = 
{
	AttachmentTimeline_t223675776::get_offset_of_slotIndex_0(),
	AttachmentTimeline_t223675776::get_offset_of_frames_1(),
	AttachmentTimeline_t223675776::get_offset_of_attachmentNames_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (EventTimeline_t1195166145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[2] = 
{
	EventTimeline_t1195166145::get_offset_of_frames_0(),
	EventTimeline_t1195166145::get_offset_of_events_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (DrawOrderTimeline_t1733875985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[2] = 
{
	DrawOrderTimeline_t1733875985::get_offset_of_frames_0(),
	DrawOrderTimeline_t1733875985::get_offset_of_drawOrders_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (DeformTimeline_t4137511074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[4] = 
{
	DeformTimeline_t4137511074::get_offset_of_slotIndex_5(),
	DeformTimeline_t4137511074::get_offset_of_frames_6(),
	DeformTimeline_t4137511074::get_offset_of_frameVertices_7(),
	DeformTimeline_t4137511074::get_offset_of_attachment_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (IkConstraintTimeline_t1093250620), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	IkConstraintTimeline_t1093250620::get_offset_of_ikConstraintIndex_11(),
	IkConstraintTimeline_t1093250620::get_offset_of_frames_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (TransformConstraintTimeline_t682225104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	TransformConstraintTimeline_t682225104::get_offset_of_transformConstraintIndex_15(),
	TransformConstraintTimeline_t682225104::get_offset_of_frames_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (PathConstraintPositionTimeline_t1949311752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1718[6] = 
{
	0,
	0,
	0,
	0,
	PathConstraintPositionTimeline_t1949311752::get_offset_of_pathConstraintIndex_9(),
	PathConstraintPositionTimeline_t1949311752::get_offset_of_frames_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (PathConstraintSpacingTimeline_t3184722984), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (PathConstraintMixTimeline_t3763089089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	PathConstraintMixTimeline_t3763089089::get_offset_of_pathConstraintIndex_11(),
	PathConstraintMixTimeline_t3763089089::get_offset_of_frames_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (AnimationState_t964829161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[8] = 
{
	AnimationState_t964829161::get_offset_of_data_0(),
	AnimationState_t964829161::get_offset_of_tracks_1(),
	AnimationState_t964829161::get_offset_of_events_2(),
	AnimationState_t964829161::get_offset_of_timeScale_3(),
	AnimationState_t964829161::get_offset_of_Start_4(),
	AnimationState_t964829161::get_offset_of_End_5(),
	AnimationState_t964829161::get_offset_of_Event_6(),
	AnimationState_t964829161::get_offset_of_Complete_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (StartEndDelegate_t3416038005), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (EventDelegate_t3743540456), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (CompleteDelegate_t1469797013), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (TrackEntry_t1654022115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[16] = 
{
	TrackEntry_t1654022115::get_offset_of_next_0(),
	TrackEntry_t1654022115::get_offset_of_previous_1(),
	TrackEntry_t1654022115::get_offset_of_animation_2(),
	TrackEntry_t1654022115::get_offset_of_loop_3(),
	TrackEntry_t1654022115::get_offset_of_delay_4(),
	TrackEntry_t1654022115::get_offset_of_time_5(),
	TrackEntry_t1654022115::get_offset_of_lastTime_6(),
	TrackEntry_t1654022115::get_offset_of_endTime_7(),
	TrackEntry_t1654022115::get_offset_of_timeScale_8(),
	TrackEntry_t1654022115::get_offset_of_mixTime_9(),
	TrackEntry_t1654022115::get_offset_of_mixDuration_10(),
	TrackEntry_t1654022115::get_offset_of_mix_11(),
	TrackEntry_t1654022115::get_offset_of_Start_12(),
	TrackEntry_t1654022115::get_offset_of_End_13(),
	TrackEntry_t1654022115::get_offset_of_Event_14(),
	TrackEntry_t1654022115::get_offset_of_Complete_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (AnimationStateData_t250640307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[3] = 
{
	AnimationStateData_t250640307::get_offset_of_skeletonData_0(),
	AnimationStateData_t250640307::get_offset_of_animationToMixTime_1(),
	AnimationStateData_t250640307::get_offset_of_defaultMix_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (AnimationPair_t3461212529)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1727[2] = 
{
	AnimationPair_t3461212529::get_offset_of_a1_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AnimationPair_t3461212529::get_offset_of_a2_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (AnimationPairComparer_t3433344190), -1, sizeof(AnimationPairComparer_t3433344190_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1728[1] = 
{
	AnimationPairComparer_t3433344190_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (Atlas_t361685585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[3] = 
{
	Atlas_t361685585::get_offset_of_pages_0(),
	Atlas_t361685585::get_offset_of_regions_1(),
	Atlas_t361685585::get_offset_of_textureLoader_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (Format_t3497928563)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1730[8] = 
{
	Format_t3497928563::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (TextureFilter_t797599033)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1731[8] = 
{
	TextureFilter_t797599033::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (TextureWrap_t1237141003)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1732[4] = 
{
	TextureWrap_t1237141003::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (AtlasPage_t3096131840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1733[9] = 
{
	AtlasPage_t3096131840::get_offset_of_name_0(),
	AtlasPage_t3096131840::get_offset_of_format_1(),
	AtlasPage_t3096131840::get_offset_of_minFilter_2(),
	AtlasPage_t3096131840::get_offset_of_magFilter_3(),
	AtlasPage_t3096131840::get_offset_of_uWrap_4(),
	AtlasPage_t3096131840::get_offset_of_vWrap_5(),
	AtlasPage_t3096131840::get_offset_of_rendererObject_6(),
	AtlasPage_t3096131840::get_offset_of_width_7(),
	AtlasPage_t3096131840::get_offset_of_height_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (AtlasRegion_t1137030501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1734[18] = 
{
	AtlasRegion_t1137030501::get_offset_of_page_0(),
	AtlasRegion_t1137030501::get_offset_of_name_1(),
	AtlasRegion_t1137030501::get_offset_of_x_2(),
	AtlasRegion_t1137030501::get_offset_of_y_3(),
	AtlasRegion_t1137030501::get_offset_of_width_4(),
	AtlasRegion_t1137030501::get_offset_of_height_5(),
	AtlasRegion_t1137030501::get_offset_of_u_6(),
	AtlasRegion_t1137030501::get_offset_of_v_7(),
	AtlasRegion_t1137030501::get_offset_of_u2_8(),
	AtlasRegion_t1137030501::get_offset_of_v2_9(),
	AtlasRegion_t1137030501::get_offset_of_offsetX_10(),
	AtlasRegion_t1137030501::get_offset_of_offsetY_11(),
	AtlasRegion_t1137030501::get_offset_of_originalWidth_12(),
	AtlasRegion_t1137030501::get_offset_of_originalHeight_13(),
	AtlasRegion_t1137030501::get_offset_of_index_14(),
	AtlasRegion_t1137030501::get_offset_of_rotate_15(),
	AtlasRegion_t1137030501::get_offset_of_splits_16(),
	AtlasRegion_t1137030501::get_offset_of_pads_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (AtlasAttachmentLoader_t384955783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[1] = 
{
	AtlasAttachmentLoader_t384955783::get_offset_of_atlasArray_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (Attachment_t2849733407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1737[1] = 
{
	Attachment_t2849733407::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (AttachmentType_t2955208569)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1739[6] = 
{
	AttachmentType_t2955208569::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (BoundingBoxAttachment_t3933059536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (MeshAttachment_t3373030252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1741[26] = 
{
	MeshAttachment_t3373030252::get_offset_of_regionOffsetX_4(),
	MeshAttachment_t3373030252::get_offset_of_regionOffsetY_5(),
	MeshAttachment_t3373030252::get_offset_of_regionWidth_6(),
	MeshAttachment_t3373030252::get_offset_of_regionHeight_7(),
	MeshAttachment_t3373030252::get_offset_of_regionOriginalWidth_8(),
	MeshAttachment_t3373030252::get_offset_of_regionOriginalHeight_9(),
	MeshAttachment_t3373030252::get_offset_of_uvs_10(),
	MeshAttachment_t3373030252::get_offset_of_regionUVs_11(),
	MeshAttachment_t3373030252::get_offset_of_triangles_12(),
	MeshAttachment_t3373030252::get_offset_of_r_13(),
	MeshAttachment_t3373030252::get_offset_of_g_14(),
	MeshAttachment_t3373030252::get_offset_of_b_15(),
	MeshAttachment_t3373030252::get_offset_of_a_16(),
	MeshAttachment_t3373030252::get_offset_of_hulllength_17(),
	MeshAttachment_t3373030252::get_offset_of_parentMesh_18(),
	MeshAttachment_t3373030252::get_offset_of_inheritDeform_19(),
	MeshAttachment_t3373030252::get_offset_of_U3CPathU3Ek__BackingField_20(),
	MeshAttachment_t3373030252::get_offset_of_U3CRendererObjectU3Ek__BackingField_21(),
	MeshAttachment_t3373030252::get_offset_of_U3CRegionUU3Ek__BackingField_22(),
	MeshAttachment_t3373030252::get_offset_of_U3CRegionVU3Ek__BackingField_23(),
	MeshAttachment_t3373030252::get_offset_of_U3CRegionU2U3Ek__BackingField_24(),
	MeshAttachment_t3373030252::get_offset_of_U3CRegionV2U3Ek__BackingField_25(),
	MeshAttachment_t3373030252::get_offset_of_U3CRegionRotateU3Ek__BackingField_26(),
	MeshAttachment_t3373030252::get_offset_of_U3CEdgesU3Ek__BackingField_27(),
	MeshAttachment_t3373030252::get_offset_of_U3CWidthU3Ek__BackingField_28(),
	MeshAttachment_t3373030252::get_offset_of_U3CHeightU3Ek__BackingField_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (PathAttachment_t3159049124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1742[3] = 
{
	PathAttachment_t3159049124::get_offset_of_lengths_4(),
	PathAttachment_t3159049124::get_offset_of_closed_5(),
	PathAttachment_t3159049124::get_offset_of_constantSpeed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (RegionAttachment_t2459988211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1743[29] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	RegionAttachment_t2459988211::get_offset_of_x_9(),
	RegionAttachment_t2459988211::get_offset_of_y_10(),
	RegionAttachment_t2459988211::get_offset_of_rotation_11(),
	RegionAttachment_t2459988211::get_offset_of_scaleX_12(),
	RegionAttachment_t2459988211::get_offset_of_scaleY_13(),
	RegionAttachment_t2459988211::get_offset_of_width_14(),
	RegionAttachment_t2459988211::get_offset_of_height_15(),
	RegionAttachment_t2459988211::get_offset_of_regionOffsetX_16(),
	RegionAttachment_t2459988211::get_offset_of_regionOffsetY_17(),
	RegionAttachment_t2459988211::get_offset_of_regionWidth_18(),
	RegionAttachment_t2459988211::get_offset_of_regionHeight_19(),
	RegionAttachment_t2459988211::get_offset_of_regionOriginalWidth_20(),
	RegionAttachment_t2459988211::get_offset_of_regionOriginalHeight_21(),
	RegionAttachment_t2459988211::get_offset_of_offset_22(),
	RegionAttachment_t2459988211::get_offset_of_uvs_23(),
	RegionAttachment_t2459988211::get_offset_of_r_24(),
	RegionAttachment_t2459988211::get_offset_of_g_25(),
	RegionAttachment_t2459988211::get_offset_of_b_26(),
	RegionAttachment_t2459988211::get_offset_of_a_27(),
	RegionAttachment_t2459988211::get_offset_of_U3CPathU3Ek__BackingField_28(),
	RegionAttachment_t2459988211::get_offset_of_U3CRendererObjectU3Ek__BackingField_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (VertexAttachment_t2433703843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1744[3] = 
{
	VertexAttachment_t2433703843::get_offset_of_bones_1(),
	VertexAttachment_t2433703843::get_offset_of_vertices_2(),
	VertexAttachment_t2433703843::get_offset_of_worldVerticesLength_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (BlendMode_t2966755546)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1745[5] = 
{
	BlendMode_t2966755546::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (Bone_t1650489600), -1, sizeof(Bone_t1650489600_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1746[22] = 
{
	Bone_t1650489600_StaticFields::get_offset_of_yDown_0(),
	Bone_t1650489600::get_offset_of_data_1(),
	Bone_t1650489600::get_offset_of_skeleton_2(),
	Bone_t1650489600::get_offset_of_parent_3(),
	Bone_t1650489600::get_offset_of_children_4(),
	Bone_t1650489600::get_offset_of_x_5(),
	Bone_t1650489600::get_offset_of_y_6(),
	Bone_t1650489600::get_offset_of_rotation_7(),
	Bone_t1650489600::get_offset_of_scaleX_8(),
	Bone_t1650489600::get_offset_of_scaleY_9(),
	Bone_t1650489600::get_offset_of_shearX_10(),
	Bone_t1650489600::get_offset_of_shearY_11(),
	Bone_t1650489600::get_offset_of_appliedRotation_12(),
	Bone_t1650489600::get_offset_of_a_13(),
	Bone_t1650489600::get_offset_of_b_14(),
	Bone_t1650489600::get_offset_of_worldX_15(),
	Bone_t1650489600::get_offset_of_c_16(),
	Bone_t1650489600::get_offset_of_d_17(),
	Bone_t1650489600::get_offset_of_worldY_18(),
	Bone_t1650489600::get_offset_of_worldSignX_19(),
	Bone_t1650489600::get_offset_of_worldSignY_20(),
	Bone_t1650489600::get_offset_of_sorted_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { sizeof (BoneData_t2151574858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1747[13] = 
{
	BoneData_t2151574858::get_offset_of_index_0(),
	BoneData_t2151574858::get_offset_of_name_1(),
	BoneData_t2151574858::get_offset_of_parent_2(),
	BoneData_t2151574858::get_offset_of_length_3(),
	BoneData_t2151574858::get_offset_of_x_4(),
	BoneData_t2151574858::get_offset_of_y_5(),
	BoneData_t2151574858::get_offset_of_rotation_6(),
	BoneData_t2151574858::get_offset_of_scaleX_7(),
	BoneData_t2151574858::get_offset_of_scaleY_8(),
	BoneData_t2151574858::get_offset_of_shearX_9(),
	BoneData_t2151574858::get_offset_of_shearY_10(),
	BoneData_t2151574858::get_offset_of_inheritRotation_11(),
	BoneData_t2151574858::get_offset_of_inheritScale_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { sizeof (Event_t365432928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1748[5] = 
{
	Event_t365432928::get_offset_of_U3CDataU3Ek__BackingField_0(),
	Event_t365432928::get_offset_of_U3CIntU3Ek__BackingField_1(),
	Event_t365432928::get_offset_of_U3CFloatU3Ek__BackingField_2(),
	Event_t365432928::get_offset_of_U3CStringU3Ek__BackingField_3(),
	Event_t365432928::get_offset_of_U3CTimeU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { sizeof (EventData_t2102088874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1749[4] = 
{
	EventData_t2102088874::get_offset_of_name_0(),
	EventData_t2102088874::get_offset_of_U3CIntU3Ek__BackingField_1(),
	EventData_t2102088874::get_offset_of_U3CFloatU3Ek__BackingField_2(),
	EventData_t2102088874::get_offset_of_U3CStringU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1750[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1751[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { sizeof (IkConstraint_t1121099739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1753[6] = 
{
	IkConstraint_t1121099739::get_offset_of_data_0(),
	IkConstraint_t1121099739::get_offset_of_bones_1(),
	IkConstraint_t1121099739::get_offset_of_target_2(),
	IkConstraint_t1121099739::get_offset_of_mix_3(),
	IkConstraint_t1121099739::get_offset_of_bendDirection_4(),
	IkConstraint_t1121099739::get_offset_of_level_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1754 = { sizeof (IkConstraintData_t4214992549), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1754[5] = 
{
	IkConstraintData_t4214992549::get_offset_of_name_0(),
	IkConstraintData_t4214992549::get_offset_of_bones_1(),
	IkConstraintData_t4214992549::get_offset_of_target_2(),
	IkConstraintData_t4214992549::get_offset_of_bendDirection_3(),
	IkConstraintData_t4214992549::get_offset_of_mix_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1755 = { sizeof (Json_t1650731812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1756 = { sizeof (Lexer_t2785281654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1756[6] = 
{
	Lexer_t2785281654::get_offset_of_json_0(),
	Lexer_t2785281654::get_offset_of_index_1(),
	Lexer_t2785281654::get_offset_of_success_2(),
	Lexer_t2785281654::get_offset_of_stringBuffer_3(),
	Lexer_t2785281654::get_offset_of_U3ClineNumberU3Ek__BackingField_4(),
	Lexer_t2785281654::get_offset_of_U3CparseNumbersAsFloatU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1757 = { sizeof (Token_t1134737626)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1757[13] = 
{
	Token_t1134737626::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1758 = { sizeof (JsonDecoder_t1116455590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1758[3] = 
{
	JsonDecoder_t1116455590::get_offset_of_lexer_0(),
	JsonDecoder_t1116455590::get_offset_of_U3CerrorMessageU3Ek__BackingField_1(),
	JsonDecoder_t1116455590::get_offset_of_U3CparseNumbersAsFloatU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1759 = { sizeof (MathUtils_t2811730383), -1, sizeof(MathUtils_t2811730383_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1759[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	MathUtils_t2811730383_StaticFields::get_offset_of_sin_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1760 = { sizeof (PathConstraint_t637206622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1760[16] = 
{
	0,
	0,
	0,
	PathConstraint_t637206622::get_offset_of_data_3(),
	PathConstraint_t637206622::get_offset_of_bones_4(),
	PathConstraint_t637206622::get_offset_of_target_5(),
	PathConstraint_t637206622::get_offset_of_position_6(),
	PathConstraint_t637206622::get_offset_of_spacing_7(),
	PathConstraint_t637206622::get_offset_of_rotateMix_8(),
	PathConstraint_t637206622::get_offset_of_translateMix_9(),
	PathConstraint_t637206622::get_offset_of_spaces_10(),
	PathConstraint_t637206622::get_offset_of_positions_11(),
	PathConstraint_t637206622::get_offset_of_world_12(),
	PathConstraint_t637206622::get_offset_of_curves_13(),
	PathConstraint_t637206622::get_offset_of_lengths_14(),
	PathConstraint_t637206622::get_offset_of_segments_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1761 = { sizeof (PathConstraintData_t1516901800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1761[11] = 
{
	PathConstraintData_t1516901800::get_offset_of_name_0(),
	PathConstraintData_t1516901800::get_offset_of_bones_1(),
	PathConstraintData_t1516901800::get_offset_of_target_2(),
	PathConstraintData_t1516901800::get_offset_of_positionMode_3(),
	PathConstraintData_t1516901800::get_offset_of_spacingMode_4(),
	PathConstraintData_t1516901800::get_offset_of_rotateMode_5(),
	PathConstraintData_t1516901800::get_offset_of_offsetRotation_6(),
	PathConstraintData_t1516901800::get_offset_of_position_7(),
	PathConstraintData_t1516901800::get_offset_of_spacing_8(),
	PathConstraintData_t1516901800::get_offset_of_rotateMix_9(),
	PathConstraintData_t1516901800::get_offset_of_translateMix_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1762 = { sizeof (PositionMode_t1978314152)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1762[3] = 
{
	PositionMode_t1978314152::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1763 = { sizeof (SpacingMode_t2053106316)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1763[4] = 
{
	SpacingMode_t2053106316::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1764 = { sizeof (RotateMode_t439322522)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1764[4] = 
{
	RotateMode_t439322522::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1765 = { sizeof (Skeleton_t2209335561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1765[19] = 
{
	Skeleton_t2209335561::get_offset_of_data_0(),
	Skeleton_t2209335561::get_offset_of_bones_1(),
	Skeleton_t2209335561::get_offset_of_slots_2(),
	Skeleton_t2209335561::get_offset_of_drawOrder_3(),
	Skeleton_t2209335561::get_offset_of_ikConstraints_4(),
	Skeleton_t2209335561::get_offset_of_ikConstraintsSorted_5(),
	Skeleton_t2209335561::get_offset_of_transformConstraints_6(),
	Skeleton_t2209335561::get_offset_of_pathConstraints_7(),
	Skeleton_t2209335561::get_offset_of_updateCache_8(),
	Skeleton_t2209335561::get_offset_of_skin_9(),
	Skeleton_t2209335561::get_offset_of_r_10(),
	Skeleton_t2209335561::get_offset_of_g_11(),
	Skeleton_t2209335561::get_offset_of_b_12(),
	Skeleton_t2209335561::get_offset_of_a_13(),
	Skeleton_t2209335561::get_offset_of_time_14(),
	Skeleton_t2209335561::get_offset_of_flipX_15(),
	Skeleton_t2209335561::get_offset_of_flipY_16(),
	Skeleton_t2209335561::get_offset_of_x_17(),
	Skeleton_t2209335561::get_offset_of_y_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1766 = { sizeof (SkeletonBinary_t1569363754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1766[16] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	SkeletonBinary_t1569363754::get_offset_of_attachmentLoader_12(),
	SkeletonBinary_t1569363754::get_offset_of_buffer_13(),
	SkeletonBinary_t1569363754::get_offset_of_linkedMeshes_14(),
	SkeletonBinary_t1569363754::get_offset_of_U3CScaleU3Ek__BackingField_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1767 = { sizeof (Vertices_t1382898063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1767[2] = 
{
	Vertices_t1382898063::get_offset_of_bones_0(),
	Vertices_t1382898063::get_offset_of_vertices_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1768 = { sizeof (SkeletonBounds_t1575125470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1768[7] = 
{
	SkeletonBounds_t1575125470::get_offset_of_polygonPool_0(),
	SkeletonBounds_t1575125470::get_offset_of_minX_1(),
	SkeletonBounds_t1575125470::get_offset_of_minY_2(),
	SkeletonBounds_t1575125470::get_offset_of_maxX_3(),
	SkeletonBounds_t1575125470::get_offset_of_maxY_4(),
	SkeletonBounds_t1575125470::get_offset_of_U3CBoundingBoxesU3Ek__BackingField_5(),
	SkeletonBounds_t1575125470::get_offset_of_U3CPolygonsU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1769 = { sizeof (Polygon_t2078419392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1769[2] = 
{
	Polygon_t2078419392::get_offset_of_U3CVerticesU3Ek__BackingField_0(),
	Polygon_t2078419392::get_offset_of_U3CCountU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1770 = { sizeof (SkeletonData_t3387199699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1770[15] = 
{
	SkeletonData_t3387199699::get_offset_of_name_0(),
	SkeletonData_t3387199699::get_offset_of_bones_1(),
	SkeletonData_t3387199699::get_offset_of_slots_2(),
	SkeletonData_t3387199699::get_offset_of_skins_3(),
	SkeletonData_t3387199699::get_offset_of_defaultSkin_4(),
	SkeletonData_t3387199699::get_offset_of_events_5(),
	SkeletonData_t3387199699::get_offset_of_animations_6(),
	SkeletonData_t3387199699::get_offset_of_ikConstraints_7(),
	SkeletonData_t3387199699::get_offset_of_transformConstraints_8(),
	SkeletonData_t3387199699::get_offset_of_pathConstraints_9(),
	SkeletonData_t3387199699::get_offset_of_width_10(),
	SkeletonData_t3387199699::get_offset_of_height_11(),
	SkeletonData_t3387199699::get_offset_of_version_12(),
	SkeletonData_t3387199699::get_offset_of_hash_13(),
	SkeletonData_t3387199699::get_offset_of_imagesPath_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1771 = { sizeof (SkeletonJson_t3387395601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1771[3] = 
{
	SkeletonJson_t3387395601::get_offset_of_attachmentLoader_0(),
	SkeletonJson_t3387395601::get_offset_of_linkedMeshes_1(),
	SkeletonJson_t3387395601::get_offset_of_U3CScaleU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1772 = { sizeof (LinkedMesh_t3634160245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1772[4] = 
{
	LinkedMesh_t3634160245::get_offset_of_parent_0(),
	LinkedMesh_t3634160245::get_offset_of_skin_1(),
	LinkedMesh_t3634160245::get_offset_of_slotIndex_2(),
	LinkedMesh_t3634160245::get_offset_of_mesh_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1773 = { sizeof (Skin_t1650992057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1773[2] = 
{
	Skin_t1650992057::get_offset_of_name_0(),
	Skin_t1650992057::get_offset_of_attachments_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1774 = { sizeof (AttachmentKeyTuple_t2091264019)+ sizeof (Il2CppObject), sizeof(AttachmentKeyTuple_t2091264019_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1774[3] = 
{
	AttachmentKeyTuple_t2091264019::get_offset_of_slotIndex_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AttachmentKeyTuple_t2091264019::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AttachmentKeyTuple_t2091264019::get_offset_of_nameHashCode_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1775 = { sizeof (AttachmentKeyTupleComparer_t153954656), -1, sizeof(AttachmentKeyTupleComparer_t153954656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1775[1] = 
{
	AttachmentKeyTupleComparer_t153954656_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1776 = { sizeof (Slot_t1650993210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1776[9] = 
{
	Slot_t1650993210::get_offset_of_data_0(),
	Slot_t1650993210::get_offset_of_bone_1(),
	Slot_t1650993210::get_offset_of_r_2(),
	Slot_t1650993210::get_offset_of_g_3(),
	Slot_t1650993210::get_offset_of_b_4(),
	Slot_t1650993210::get_offset_of_a_5(),
	Slot_t1650993210::get_offset_of_attachment_6(),
	Slot_t1650993210::get_offset_of_attachmentTime_7(),
	Slot_t1650993210::get_offset_of_attachmentVertices_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1777 = { sizeof (SlotData_t3389517700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1777[9] = 
{
	SlotData_t3389517700::get_offset_of_index_0(),
	SlotData_t3389517700::get_offset_of_name_1(),
	SlotData_t3389517700::get_offset_of_boneData_2(),
	SlotData_t3389517700::get_offset_of_r_3(),
	SlotData_t3389517700::get_offset_of_g_4(),
	SlotData_t3389517700::get_offset_of_b_5(),
	SlotData_t3389517700::get_offset_of_a_6(),
	SlotData_t3389517700::get_offset_of_attachmentName_7(),
	SlotData_t3389517700::get_offset_of_blendMode_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1778 = { sizeof (TransformConstraint_t3246764911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1778[7] = 
{
	TransformConstraint_t3246764911::get_offset_of_data_0(),
	TransformConstraint_t3246764911::get_offset_of_bones_1(),
	TransformConstraint_t3246764911::get_offset_of_target_2(),
	TransformConstraint_t3246764911::get_offset_of_rotateMix_3(),
	TransformConstraint_t3246764911::get_offset_of_translateMix_4(),
	TransformConstraint_t3246764911::get_offset_of_scaleMix_5(),
	TransformConstraint_t3246764911::get_offset_of_shearMix_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1779 = { sizeof (TransformConstraintData_t4233287737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1779[13] = 
{
	TransformConstraintData_t4233287737::get_offset_of_name_0(),
	TransformConstraintData_t4233287737::get_offset_of_bones_1(),
	TransformConstraintData_t4233287737::get_offset_of_target_2(),
	TransformConstraintData_t4233287737::get_offset_of_rotateMix_3(),
	TransformConstraintData_t4233287737::get_offset_of_translateMix_4(),
	TransformConstraintData_t4233287737::get_offset_of_scaleMix_5(),
	TransformConstraintData_t4233287737::get_offset_of_shearMix_6(),
	TransformConstraintData_t4233287737::get_offset_of_offsetRotation_7(),
	TransformConstraintData_t4233287737::get_offset_of_offsetX_8(),
	TransformConstraintData_t4233287737::get_offset_of_offsetY_9(),
	TransformConstraintData_t4233287737::get_offset_of_offsetScaleX_10(),
	TransformConstraintData_t4233287737::get_offset_of_offsetScaleY_11(),
	TransformConstraintData_t4233287737::get_offset_of_offsetShearY_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1780 = { sizeof (BasicPlatformerController_t211022154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1780[31] = 
{
	BasicPlatformerController_t211022154::get_offset_of_XAxis_2(),
	BasicPlatformerController_t211022154::get_offset_of_YAxis_3(),
	BasicPlatformerController_t211022154::get_offset_of_JumpButton_4(),
	BasicPlatformerController_t211022154::get_offset_of_walkSpeed_5(),
	BasicPlatformerController_t211022154::get_offset_of_runSpeed_6(),
	BasicPlatformerController_t211022154::get_offset_of_gravity_7(),
	BasicPlatformerController_t211022154::get_offset_of_jumpSpeed_8(),
	BasicPlatformerController_t211022154::get_offset_of_jumpDuration_9(),
	BasicPlatformerController_t211022154::get_offset_of_jumpInterruptFactor_10(),
	BasicPlatformerController_t211022154::get_offset_of_forceCrouchVelocity_11(),
	BasicPlatformerController_t211022154::get_offset_of_forceCrouchDuration_12(),
	BasicPlatformerController_t211022154::get_offset_of_graphicsRoot_13(),
	BasicPlatformerController_t211022154::get_offset_of_skeletonAnimation_14(),
	BasicPlatformerController_t211022154::get_offset_of_walkName_15(),
	BasicPlatformerController_t211022154::get_offset_of_runName_16(),
	BasicPlatformerController_t211022154::get_offset_of_idleName_17(),
	BasicPlatformerController_t211022154::get_offset_of_jumpName_18(),
	BasicPlatformerController_t211022154::get_offset_of_fallName_19(),
	BasicPlatformerController_t211022154::get_offset_of_crouchName_20(),
	BasicPlatformerController_t211022154::get_offset_of_jumpAudioSource_21(),
	BasicPlatformerController_t211022154::get_offset_of_hardfallAudioSource_22(),
	BasicPlatformerController_t211022154::get_offset_of_footstepAudioSource_23(),
	BasicPlatformerController_t211022154::get_offset_of_footstepEventName_24(),
	BasicPlatformerController_t211022154::get_offset_of_controller_25(),
	BasicPlatformerController_t211022154::get_offset_of_velocity_26(),
	BasicPlatformerController_t211022154::get_offset_of_lastVelocity_27(),
	BasicPlatformerController_t211022154::get_offset_of_lastGrounded_28(),
	BasicPlatformerController_t211022154::get_offset_of_jumpEndTime_29(),
	BasicPlatformerController_t211022154::get_offset_of_jumpInterrupt_30(),
	BasicPlatformerController_t211022154::get_offset_of_forceCrouchEndTime_31(),
	BasicPlatformerController_t211022154::get_offset_of_flippedRotation_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1781 = { sizeof (ConstrainedCamera_t3991632635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1781[5] = 
{
	ConstrainedCamera_t3991632635::get_offset_of_target_2(),
	ConstrainedCamera_t3991632635::get_offset_of_offset_3(),
	ConstrainedCamera_t3991632635::get_offset_of_min_4(),
	ConstrainedCamera_t3991632635::get_offset_of_max_5(),
	ConstrainedCamera_t3991632635::get_offset_of_smoothing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1782 = { sizeof (Raptor_t2440623542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1782[6] = 
{
	Raptor_t2440623542::get_offset_of_walk_2(),
	Raptor_t2440623542::get_offset_of_gungrab_3(),
	Raptor_t2440623542::get_offset_of_gunkeep_4(),
	Raptor_t2440623542::get_offset_of_footstepEvent_5(),
	Raptor_t2440623542::get_offset_of_footstepAudioSource_6(),
	Raptor_t2440623542::get_offset_of_skeletonAnimation_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1783 = { sizeof (U3CGunGrabRoutineU3Ec__Iterator0_t763188194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1783[3] = 
{
	U3CGunGrabRoutineU3Ec__Iterator0_t763188194::get_offset_of_U24PC_0(),
	U3CGunGrabRoutineU3Ec__Iterator0_t763188194::get_offset_of_U24current_1(),
	U3CGunGrabRoutineU3Ec__Iterator0_t763188194::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1784 = { sizeof (SpineBeginnerTwo_t517921879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1784[7] = 
{
	SpineBeginnerTwo_t517921879::get_offset_of_runAnimationName_2(),
	SpineBeginnerTwo_t517921879::get_offset_of_idleAnimationName_3(),
	SpineBeginnerTwo_t517921879::get_offset_of_walkAnimationName_4(),
	SpineBeginnerTwo_t517921879::get_offset_of_shootAnimationName_5(),
	SpineBeginnerTwo_t517921879::get_offset_of_skeletonAnimation_6(),
	SpineBeginnerTwo_t517921879::get_offset_of_spineAnimationState_7(),
	SpineBeginnerTwo_t517921879::get_offset_of_skeleton_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1785 = { sizeof (U3CDoDemoRoutineU3Ec__Iterator1_t95077388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1785[3] = 
{
	U3CDoDemoRoutineU3Ec__Iterator1_t95077388::get_offset_of_U24PC_0(),
	U3CDoDemoRoutineU3Ec__Iterator1_t95077388::get_offset_of_U24current_1(),
	U3CDoDemoRoutineU3Ec__Iterator1_t95077388::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1786 = { sizeof (SpineBlinkPlayer_t726077722), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1786[4] = 
{
	0,
	SpineBlinkPlayer_t726077722::get_offset_of_blinkAnimation_3(),
	SpineBlinkPlayer_t726077722::get_offset_of_minimumDelay_4(),
	SpineBlinkPlayer_t726077722::get_offset_of_maximumDelay_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1787 = { sizeof (U3CStartU3Ec__Iterator2_t2936432708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1787[4] = 
{
	U3CStartU3Ec__Iterator2_t2936432708::get_offset_of_U3CskeletonAnimationU3E__0_0(),
	U3CStartU3Ec__Iterator2_t2936432708::get_offset_of_U24PC_1(),
	U3CStartU3Ec__Iterator2_t2936432708::get_offset_of_U24current_2(),
	U3CStartU3Ec__Iterator2_t2936432708::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1788 = { sizeof (SpineboyBeginnerInput_t3247046255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1788[4] = 
{
	SpineboyBeginnerInput_t3247046255::get_offset_of_horizontalAxis_2(),
	SpineboyBeginnerInput_t3247046255::get_offset_of_attackButton_3(),
	SpineboyBeginnerInput_t3247046255::get_offset_of_jumpButton_4(),
	SpineboyBeginnerInput_t3247046255::get_offset_of_model_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1789 = { sizeof (SpineboyBeginnerModel_t3250758094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1789[6] = 
{
	SpineboyBeginnerModel_t3250758094::get_offset_of_state_2(),
	SpineboyBeginnerModel_t3250758094::get_offset_of_facingLeft_3(),
	SpineboyBeginnerModel_t3250758094::get_offset_of_currentSpeed_4(),
	SpineboyBeginnerModel_t3250758094::get_offset_of_shootInterval_5(),
	SpineboyBeginnerModel_t3250758094::get_offset_of_lastShootTime_6(),
	SpineboyBeginnerModel_t3250758094::get_offset_of_ShootEvent_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1790 = { sizeof (U3CJumpRoutineU3Ec__Iterator3_t3510013669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1790[8] = 
{
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CposU3E__0_0(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CtU3E__1_1(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CdU3E__2_2(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CtU3E__3_3(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CdU3E__4_4(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U24PC_5(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U24current_6(),
	U3CJumpRoutineU3Ec__Iterator3_t3510013669::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1791 = { sizeof (SpineBeginnerBodyState_t3071047130)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1791[4] = 
{
	SpineBeginnerBodyState_t3071047130::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1792 = { sizeof (SpineboyBeginnerView_t1352051552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1792[14] = 
{
	SpineboyBeginnerView_t1352051552::get_offset_of_model_2(),
	SpineboyBeginnerView_t1352051552::get_offset_of_skeletonAnimation_3(),
	SpineboyBeginnerView_t1352051552::get_offset_of_run_4(),
	SpineboyBeginnerView_t1352051552::get_offset_of_idle_5(),
	SpineboyBeginnerView_t1352051552::get_offset_of_shoot_6(),
	SpineboyBeginnerView_t1352051552::get_offset_of_jump_7(),
	SpineboyBeginnerView_t1352051552::get_offset_of_footstepEventName_8(),
	SpineboyBeginnerView_t1352051552::get_offset_of_footstepPitchOffset_9(),
	SpineboyBeginnerView_t1352051552::get_offset_of_gunsoundPitchOffset_10(),
	SpineboyBeginnerView_t1352051552::get_offset_of_footstepSource_11(),
	SpineboyBeginnerView_t1352051552::get_offset_of_gunSource_12(),
	SpineboyBeginnerView_t1352051552::get_offset_of_jumpSource_13(),
	SpineboyBeginnerView_t1352051552::get_offset_of_gunParticles_14(),
	SpineboyBeginnerView_t1352051552::get_offset_of_previousViewState_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1793 = { sizeof (Chimera_t2410953803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1793[3] = 
{
	Chimera_t2410953803::get_offset_of_skeletonDataSource_2(),
	Chimera_t2410953803::get_offset_of_attachmentPath_3(),
	Chimera_t2410953803::get_offset_of_targetSlot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1794 = { sizeof (FootSoldierExample_t1425608118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1794[12] = 
{
	FootSoldierExample_t1425608118::get_offset_of_idleAnimation_2(),
	FootSoldierExample_t1425608118::get_offset_of_attackAnimation_3(),
	FootSoldierExample_t1425608118::get_offset_of_moveAnimation_4(),
	FootSoldierExample_t1425608118::get_offset_of_eyesSlot_5(),
	FootSoldierExample_t1425608118::get_offset_of_eyesOpenAttachment_6(),
	FootSoldierExample_t1425608118::get_offset_of_blinkAttachment_7(),
	FootSoldierExample_t1425608118::get_offset_of_blinkDuration_8(),
	FootSoldierExample_t1425608118::get_offset_of_attackKey_9(),
	FootSoldierExample_t1425608118::get_offset_of_rightKey_10(),
	FootSoldierExample_t1425608118::get_offset_of_leftKey_11(),
	FootSoldierExample_t1425608118::get_offset_of_moveSpeed_12(),
	FootSoldierExample_t1425608118::get_offset_of_skeletonAnimation_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1795 = { sizeof (U3CBlinkU3Ec__Iterator4_t1986935336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1795[3] = 
{
	U3CBlinkU3Ec__Iterator4_t1986935336::get_offset_of_U24PC_0(),
	U3CBlinkU3Ec__Iterator4_t1986935336::get_offset_of_U24current_1(),
	U3CBlinkU3Ec__Iterator4_t1986935336::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1796 = { sizeof (Goblins_t1859914588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1796[3] = 
{
	Goblins_t1859914588::get_offset_of_girlSkin_2(),
	Goblins_t1859914588::get_offset_of_skeletonAnimation_3(),
	Goblins_t1859914588::get_offset_of_headBone_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1797 = { sizeof (RaggedySpineboy_t938186132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1797[5] = 
{
	RaggedySpineboy_t938186132::get_offset_of_groundMask_2(),
	RaggedySpineboy_t938186132::get_offset_of_restoreDuration_3(),
	RaggedySpineboy_t938186132::get_offset_of_launchVelocity_4(),
	RaggedySpineboy_t938186132::get_offset_of_ragdoll_5(),
	RaggedySpineboy_t938186132::get_offset_of_naturalCollider_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1798 = { sizeof (U3CRestoreU3Ec__Iterator5_t3556487381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1798[7] = 
{
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U3CestimatedPosU3E__0_0(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U3CrbPositionU3E__1_1(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U3CskeletonPointU3E__2_2(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U3ChitU3E__3_3(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U24PC_4(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U24current_5(),
	U3CRestoreU3Ec__Iterator5_t3556487381::get_offset_of_U3CU3Ef__this_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1799 = { sizeof (U3CWaitUntilStoppedU3Ec__Iterator6_t434628958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1799[4] = 
{
	U3CWaitUntilStoppedU3Ec__Iterator6_t434628958::get_offset_of_U3CtU3E__0_0(),
	U3CWaitUntilStoppedU3Ec__Iterator6_t434628958::get_offset_of_U24PC_1(),
	U3CWaitUntilStoppedU3Ec__Iterator6_t434628958::get_offset_of_U24current_2(),
	U3CWaitUntilStoppedU3Ec__Iterator6_t434628958::get_offset_of_U3CU3Ef__this_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
