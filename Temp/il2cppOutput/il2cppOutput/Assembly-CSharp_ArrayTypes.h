#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Spine.Timeline
struct Timeline_t2399905021;
// Spine.Event
struct Event_t365432928;
// Spine.Bone
struct Bone_t1650489600;
// Spine.Slot
struct Slot_t1650993210;
// Spine.IkConstraint
struct IkConstraint_t1121099739;
// Spine.TransformConstraint
struct TransformConstraint_t3246764911;
// Spine.PathConstraint
struct PathConstraint_t637206622;
// Spine.TrackEntry
struct TrackEntry_t1654022115;
// Spine.AtlasPage
struct AtlasPage_t3096131840;
// Spine.AtlasRegion
struct AtlasRegion_t1137030501;
// Spine.Atlas
struct Atlas_t361685585;
// Spine.BoneData
struct BoneData_t2151574858;
// Spine.IUpdatable
struct IUpdatable_t1413839369;
// Spine.SlotData
struct SlotData_t3389517700;
// Spine.IkConstraintData
struct IkConstraintData_t4214992549;
// Spine.TransformConstraintData
struct TransformConstraintData_t4233287737;
// Spine.PathConstraintData
struct PathConstraintData_t1516901800;
// Spine.Skin
struct Skin_t1650992057;
// Spine.Attachment
struct Attachment_t2849733407;
// Spine.SkeletonJson/LinkedMesh
struct LinkedMesh_t3634160245;
// Spine.EventData
struct EventData_t2102088874;
// Spine.Animation
struct Animation_t3189667530;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;
// Spine.Polygon
struct Polygon_t2078419392;
// Spine.Unity.AtlasAsset
struct AtlasAsset_t1266833143;
// Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer
struct SubmeshTriangleBuffer_t60517389;
// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair
struct SlotRegionPair_t202331861;
// Spine.Unity.Modules.CustomSkin/SkinPair
struct SkinPair_t1581379405;
// Spine.Unity.Modules.SkeletonGhostRenderer
struct SkeletonGhostRenderer_t2396092523;
// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t1973204173;
// Spine.Unity.Modules.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t3661907900;
// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_t3501047718;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Spine_Event365432928.h"
#include "AssemblyU2DCSharp_Spine_Bone1650489600.h"
#include "AssemblyU2DCSharp_Spine_Slot1650993210.h"
#include "AssemblyU2DCSharp_Spine_IkConstraint1121099739.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraint3246764911.h"
#include "AssemblyU2DCSharp_Spine_PathConstraint637206622.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry1654022115.h"
#include "AssemblyU2DCSharp_Spine_AnimationStateData_Animati3461212529.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage3096131840.h"
#include "AssemblyU2DCSharp_Spine_AtlasRegion1137030501.h"
#include "AssemblyU2DCSharp_Spine_Atlas361685585.h"
#include "AssemblyU2DCSharp_Spine_BoneData2151574858.h"
#include "AssemblyU2DCSharp_Spine_SlotData3389517700.h"
#include "AssemblyU2DCSharp_Spine_IkConstraintData4214992549.h"
#include "AssemblyU2DCSharp_Spine_TransformConstraintData4233287737.h"
#include "AssemblyU2DCSharp_Spine_PathConstraintData1516901800.h"
#include "AssemblyU2DCSharp_Spine_Skin1650992057.h"
#include "AssemblyU2DCSharp_Spine_Skin_AttachmentKeyTuple2091264019.h"
#include "AssemblyU2DCSharp_Spine_Attachment2849733407.h"
#include "AssemblyU2DCSharp_Spine_SkeletonJson_LinkedMesh3634160245.h"
#include "AssemblyU2DCSharp_Spine_EventData2102088874.h"
#include "AssemblyU2DCSharp_Spine_Animation3189667530.h"
#include "AssemblyU2DCSharp_Spine_BoundingBoxAttachment3933059536.h"
#include "AssemblyU2DCSharp_Spine_Polygon2078419392.h"
#include "AssemblyU2DCSharp_Spine_Unity_AtlasAsset1266833143.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_ArraysM60517389.h"
#include "AssemblyU2DCSharp_Spine_Unity_MeshGeneration_Subme3643321593.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_AtlasRegionAt202331861.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_SkeletonRend1741711424.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_SkeletonRend2372254351.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_CustomSkin_S1581379405.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_SkeletonGhos2396092523.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone1973204173.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_SkeletonPart3661907900.h"
#include "AssemblyU2DCSharp_Spine_Unity_Modules_SkeletonUtil1351226856.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonAnimator_Mix1511821544.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityConst3501047718.h"

#pragma once
// Spine.Timeline[]
struct TimelineU5BU5D_t2289057392  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Event[]
struct EventU5BU5D_t3124937249  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Event_t365432928 * m_Items[1];

public:
	inline Event_t365432928 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Event_t365432928 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Event_t365432928 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Bone[]
struct BoneU5BU5D_t1595507457  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Bone_t1650489600 * m_Items[1];

public:
	inline Bone_t1650489600 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Bone_t1650489600 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Bone_t1650489600 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Slot[]
struct SlotU5BU5D_t3107134879  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Slot_t1650993210 * m_Items[1];

public:
	inline Slot_t1650993210 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Slot_t1650993210 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Slot_t1650993210 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.IkConstraint[]
struct IkConstraintU5BU5D_t2201310810  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) IkConstraint_t1121099739 * m_Items[1];

public:
	inline IkConstraint_t1121099739 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline IkConstraint_t1121099739 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, IkConstraint_t1121099739 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.TransformConstraint[]
struct TransformConstraintU5BU5D_t2270346742  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TransformConstraint_t3246764911 * m_Items[1];

public:
	inline TransformConstraint_t3246764911 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TransformConstraint_t3246764911 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TransformConstraint_t3246764911 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.PathConstraint[]
struct PathConstraintU5BU5D_t4156607595  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PathConstraint_t637206622 * m_Items[1];

public:
	inline PathConstraint_t637206622 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathConstraint_t637206622 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathConstraint_t637206622 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.TrackEntry[]
struct TrackEntryU5BU5D_t4143951154  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TrackEntry_t1654022115 * m_Items[1];

public:
	inline TrackEntry_t1654022115 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TrackEntry_t1654022115 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TrackEntry_t1654022115 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.AnimationStateData/AnimationPair[]
struct AnimationPairU5BU5D_t515519916  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AnimationPair_t3461212529  m_Items[1];

public:
	inline AnimationPair_t3461212529  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AnimationPair_t3461212529 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AnimationPair_t3461212529  value)
	{
		m_Items[index] = value;
	}
};
// Spine.AtlasPage[]
struct AtlasPageU5BU5D_t2737554177  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AtlasPage_t3096131840 * m_Items[1];

public:
	inline AtlasPage_t3096131840 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AtlasPage_t3096131840 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AtlasPage_t3096131840 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.AtlasRegion[]
struct AtlasRegionU5BU5D_t1200494440  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AtlasRegion_t1137030501 * m_Items[1];

public:
	inline AtlasRegion_t1137030501 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AtlasRegion_t1137030501 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AtlasRegion_t1137030501 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Atlas[]
struct AtlasU5BU5D_t3146571084  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Atlas_t361685585 * m_Items[1];

public:
	inline Atlas_t361685585 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Atlas_t361685585 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Atlas_t361685585 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.BoneData[]
struct BoneDataU5BU5D_t148132431  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BoneData_t2151574858 * m_Items[1];

public:
	inline BoneData_t2151574858 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BoneData_t2151574858 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BoneData_t2151574858 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.IUpdatable[]
struct IUpdatableU5BU5D_t930289588  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.SlotData[]
struct SlotDataU5BU5D_t826502637  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SlotData_t3389517700 * m_Items[1];

public:
	inline SlotData_t3389517700 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SlotData_t3389517700 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SlotData_t3389517700 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.IkConstraintData[]
struct IkConstraintDataU5BU5D_t1236586792  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) IkConstraintData_t4214992549 * m_Items[1];

public:
	inline IkConstraintData_t4214992549 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline IkConstraintData_t4214992549 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, IkConstraintData_t4214992549 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.TransformConstraintData[]
struct TransformConstraintDataU5BU5D_t2875001540  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TransformConstraintData_t4233287737 * m_Items[1];

public:
	inline TransformConstraintData_t4233287737 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TransformConstraintData_t4233287737 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TransformConstraintData_t4233287737 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.PathConstraintData[]
struct PathConstraintDataU5BU5D_t8705721  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PathConstraintData_t1516901800 * m_Items[1];

public:
	inline PathConstraintData_t1516901800 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathConstraintData_t1516901800 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathConstraintData_t1516901800 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Skin[]
struct SkinU5BU5D_t878420292  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Skin_t1650992057 * m_Items[1];

public:
	inline Skin_t1650992057 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Skin_t1650992057 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Skin_t1650992057 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Skin/AttachmentKeyTuple[]
struct AttachmentKeyTupleU5BU5D_t4262350402  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AttachmentKeyTuple_t2091264019  m_Items[1];

public:
	inline AttachmentKeyTuple_t2091264019  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AttachmentKeyTuple_t2091264019 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AttachmentKeyTuple_t2091264019  value)
	{
		m_Items[index] = value;
	}
};
// Spine.Attachment[]
struct AttachmentU5BU5D_t3539071366  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Attachment_t2849733407 * m_Items[1];

public:
	inline Attachment_t2849733407 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Attachment_t2849733407 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Attachment_t2849733407 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.SkeletonJson/LinkedMesh[]
struct LinkedMeshU5BU5D_t2277884952  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LinkedMesh_t3634160245 * m_Items[1];

public:
	inline LinkedMesh_t3634160245 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LinkedMesh_t3634160245 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LinkedMesh_t3634160245 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.EventData[]
struct EventDataU5BU5D_t554238319  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EventData_t2102088874 * m_Items[1];

public:
	inline EventData_t2102088874 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline EventData_t2102088874 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, EventData_t2102088874 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Animation[]
struct AnimationU5BU5D_t75461327  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Animation_t3189667530 * m_Items[1];

public:
	inline Animation_t3189667530 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Animation_t3189667530 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Animation_t3189667530 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.BoundingBoxAttachment[]
struct BoundingBoxAttachmentU5BU5D_t814978289  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BoundingBoxAttachment_t3933059536 * m_Items[1];

public:
	inline BoundingBoxAttachment_t3933059536 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BoundingBoxAttachment_t3933059536 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BoundingBoxAttachment_t3933059536 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Polygon[]
struct PolygonU5BU5D_t3731175233  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Polygon_t2078419392 * m_Items[1];

public:
	inline Polygon_t2078419392 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Polygon_t2078419392 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Polygon_t2078419392 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.AtlasAsset[]
struct AtlasAssetU5BU5D_t79606606  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AtlasAsset_t1266833143 * m_Items[1];

public:
	inline AtlasAsset_t1266833143 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AtlasAsset_t1266833143 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AtlasAsset_t1266833143 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.MeshGeneration.ArraysMeshGenerator/SubmeshTriangleBuffer[]
struct SubmeshTriangleBufferU5BU5D_t1627892000  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SubmeshTriangleBuffer_t60517389 * m_Items[1];

public:
	inline SubmeshTriangleBuffer_t60517389 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SubmeshTriangleBuffer_t60517389 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SubmeshTriangleBuffer_t60517389 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.MeshGeneration.SubmeshInstruction[]
struct SubmeshInstructionU5BU5D_t2859174660  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SubmeshInstruction_t3643321593  m_Items[1];

public:
	inline SubmeshInstruction_t3643321593  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SubmeshInstruction_t3643321593 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SubmeshInstruction_t3643321593  value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.Modules.AtlasRegionAttacher/SlotRegionPair[]
struct SlotRegionPairU5BU5D_t504631864  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SlotRegionPair_t202331861 * m_Items[1];

public:
	inline SlotRegionPair_t202331861 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SlotRegionPair_t202331861 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SlotRegionPair_t202331861 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.Modules.SkeletonRendererCustomMaterials/SlotMaterialOverride[]
struct SlotMaterialOverrideU5BU5D_t2143399617  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SlotMaterialOverride_t1741711424  m_Items[1];

public:
	inline SlotMaterialOverride_t1741711424  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SlotMaterialOverride_t1741711424 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SlotMaterialOverride_t1741711424  value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.Modules.SkeletonRendererCustomMaterials/AtlasMaterialOverride[]
struct AtlasMaterialOverrideU5BU5D_t700126806  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AtlasMaterialOverride_t2372254351  m_Items[1];

public:
	inline AtlasMaterialOverride_t2372254351  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AtlasMaterialOverride_t2372254351 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AtlasMaterialOverride_t2372254351  value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.Modules.CustomSkin/SkinPair[]
struct SkinPairU5BU5D_t2030596320  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SkinPair_t1581379405 * m_Items[1];

public:
	inline SkinPair_t1581379405 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SkinPair_t1581379405 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SkinPair_t1581379405 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.Modules.SkeletonGhostRenderer[]
struct SkeletonGhostRendererU5BU5D_t132364682  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SkeletonGhostRenderer_t2396092523 * m_Items[1];

public:
	inline SkeletonGhostRenderer_t2396092523 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SkeletonGhostRenderer_t2396092523 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SkeletonGhostRenderer_t2396092523 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.SkeletonUtilityBone[]
struct SkeletonUtilityBoneU5BU5D_t3282724192  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SkeletonUtilityBone_t1973204173 * m_Items[1];

public:
	inline SkeletonUtilityBone_t1973204173 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SkeletonUtilityBone_t1973204173 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SkeletonUtilityBone_t1973204173 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.Modules.SkeletonPartsRenderer[]
struct SkeletonPartsRendererU5BU5D_t2338739669  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SkeletonPartsRenderer_t3661907900 * m_Items[1];

public:
	inline SkeletonPartsRenderer_t3661907900 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SkeletonPartsRenderer_t3661907900 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SkeletonPartsRenderer_t3661907900 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Spine.Unity.Modules.SkeletonUtilityKinematicShadow/TransformPair[]
struct TransformPairU5BU5D_t210603385  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TransformPair_t1351226856  m_Items[1];

public:
	inline TransformPair_t1351226856  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TransformPair_t1351226856 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TransformPair_t1351226856  value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.SkeletonAnimator/MixMode[]
struct MixModeU5BU5D_t213042809  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.SkeletonUtilityConstraint[]
struct SkeletonUtilityConstraintU5BU5D_t3355836163  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SkeletonUtilityConstraint_t3501047718 * m_Items[1];

public:
	inline SkeletonUtilityConstraint_t3501047718 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SkeletonUtilityConstraint_t3501047718 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SkeletonUtilityConstraint_t3501047718 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
