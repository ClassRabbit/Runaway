#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.SkeletonBounds
struct SkeletonBounds_t1575125470;
// Spine.ExposedList`1<Spine.BoundingBoxAttachment>
struct ExposedList_1_t1013024898;
// Spine.ExposedList`1<Spine.Polygon>
struct ExposedList_1_t3453352050;
// Spine.Skeleton
struct Skeleton_t2209335561;
// Spine.Polygon
struct Polygon_t2078419392;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t3933059536;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton2209335561.h"
#include "AssemblyU2DCSharp_Spine_SkeletonBounds1575125470.h"
#include "AssemblyU2DCSharp_Spine_Polygon2078419392.h"
#include "AssemblyU2DCSharp_Spine_BoundingBoxAttachment3933059536.h"

// System.Void Spine.SkeletonBounds::.ctor()
extern "C"  void SkeletonBounds__ctor_m4194395822 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.BoundingBoxAttachment> Spine.SkeletonBounds::get_BoundingBoxes()
extern "C"  ExposedList_1_t1013024898 * SkeletonBounds_get_BoundingBoxes_m3684343410 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_BoundingBoxes(Spine.ExposedList`1<Spine.BoundingBoxAttachment>)
extern "C"  void SkeletonBounds_set_BoundingBoxes_m2892798669 (SkeletonBounds_t1575125470 * __this, ExposedList_1_t1013024898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Polygon> Spine.SkeletonBounds::get_Polygons()
extern "C"  ExposedList_1_t3453352050 * SkeletonBounds_get_Polygons_m733685806 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_Polygons(Spine.ExposedList`1<Spine.Polygon>)
extern "C"  void SkeletonBounds_set_Polygons_m2849527141 (SkeletonBounds_t1575125470 * __this, ExposedList_1_t3453352050 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MinX()
extern "C"  float SkeletonBounds_get_MinX_m1332580081 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MinX(System.Single)
extern "C"  void SkeletonBounds_set_MinX_m1572795058 (SkeletonBounds_t1575125470 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MinY()
extern "C"  float SkeletonBounds_get_MinY_m1332581042 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MinY(System.Single)
extern "C"  void SkeletonBounds_set_MinY_m1062260881 (SkeletonBounds_t1575125470 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MaxX()
extern "C"  float SkeletonBounds_get_MaxX_m1325489823 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MaxX(System.Single)
extern "C"  void SkeletonBounds_set_MaxX_m1607634372 (SkeletonBounds_t1575125470 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MaxY()
extern "C"  float SkeletonBounds_get_MaxY_m1325490784 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MaxY(System.Single)
extern "C"  void SkeletonBounds_set_MaxY_m1097100195 (SkeletonBounds_t1575125470 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_Width()
extern "C"  float SkeletonBounds_get_Width_m2932039517 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_Height()
extern "C"  float SkeletonBounds_get_Height_m1202726162 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::Update(Spine.Skeleton,System.Boolean)
extern "C"  void SkeletonBounds_Update_m2657320886 (SkeletonBounds_t1575125470 * __this, Skeleton_t2209335561 * ___skeleton0, bool ___updateAabb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::aabbCompute()
extern "C"  void SkeletonBounds_aabbCompute_m1678862755 (SkeletonBounds_t1575125470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbContainsPoint(System.Single,System.Single)
extern "C"  bool SkeletonBounds_AabbContainsPoint_m1860790951 (SkeletonBounds_t1575125470 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbIntersectsSegment(System.Single,System.Single,System.Single,System.Single)
extern "C"  bool SkeletonBounds_AabbIntersectsSegment_m4055456707 (SkeletonBounds_t1575125470 * __this, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbIntersectsSkeleton(Spine.SkeletonBounds)
extern "C"  bool SkeletonBounds_AabbIntersectsSkeleton_m2413654846 (SkeletonBounds_t1575125470 * __this, SkeletonBounds_t1575125470 * ___bounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::ContainsPoint(Spine.Polygon,System.Single,System.Single)
extern "C"  bool SkeletonBounds_ContainsPoint_m3616600260 (SkeletonBounds_t1575125470 * __this, Polygon_t2078419392 * ___polygon0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.SkeletonBounds::ContainsPoint(System.Single,System.Single)
extern "C"  BoundingBoxAttachment_t3933059536 * SkeletonBounds_ContainsPoint_m643280615 (SkeletonBounds_t1575125470 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.SkeletonBounds::IntersectsSegment(System.Single,System.Single,System.Single,System.Single)
extern "C"  BoundingBoxAttachment_t3933059536 * SkeletonBounds_IntersectsSegment_m889626627 (SkeletonBounds_t1575125470 * __this, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::IntersectsSegment(Spine.Polygon,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool SkeletonBounds_IntersectsSegment_m4175387872 (SkeletonBounds_t1575125470 * __this, Polygon_t2078419392 * ___polygon0, float ___x11, float ___y12, float ___x23, float ___y24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Polygon Spine.SkeletonBounds::getPolygon(Spine.BoundingBoxAttachment)
extern "C"  Polygon_t2078419392 * SkeletonBounds_getPolygon_m3395812437 (SkeletonBounds_t1575125470 * __this, BoundingBoxAttachment_t3933059536 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
