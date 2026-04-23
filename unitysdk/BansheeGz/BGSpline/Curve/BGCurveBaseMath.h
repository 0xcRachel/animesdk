#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionPointInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveCalculatorClosestPoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x17234900)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x17235860)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADJUSTBOUNDARYPOINTSTANGENTS_OFFSET UNITYSDK_OFFSET(0x17258700)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_AFTERINIT_OFFSET UNITYSDK_OFFSET(0x172547F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_BINARYSEARCHBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1725AD40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_1_OFFSET UNITYSDK_OFFSET(0x17255E50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17255CA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x17255EA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17255CF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17256030)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17256070)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x17234050)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET UNITYSDK_OFFSET(0x17233EB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x172341E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x172560B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17256100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYT_OFFSET UNITYSDK_OFFSET(0x17254800)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17234300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1722DB60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17256150)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x172561A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYT_OFFSET UNITYSDK_OFFSET(0x17255400)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESECTION_OFFSET UNITYSDK_OFFSET(0x17258BA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESPLITSECTION_OFFSET UNITYSDK_OFFSET(0x17259260)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x172561F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIGONUPDATE_OFFSET UNITYSDK_OFFSET(0x1725B0F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CURVECHANGED_OFFSET UNITYSDK_OFFSET(0x1725B0A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17257DF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISTANCEBYRATIO_OFFSET UNITYSDK_OFFSET(0x17256300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_FINDSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x17256230)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x17257F60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLFIRST_OFFSET UNITYSDK_OFFSET(0x17257A30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLSECOND_OFFSET UNITYSDK_OFFSET(0x17257C00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x172578A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x17257900)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CONFIGURATION_OFFSET UNITYSDK_OFFSET(0x17254660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x17254640)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1722FA20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_NEEDTANGENTFORMULA_OFFSET UNITYSDK_OFFSET(0x17254670)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x17232C90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONINFOS_OFFSET UNITYSDK_OFFSET(0x17254650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONSCOUNT_OFFSET UNITYSDK_OFFSET(0x17236150)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SUPPRESSWARNING_OFFSET UNITYSDK_OFFSET(0x17254620)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_INIT_OFFSET UNITYSDK_OFFSET(0x17252250)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISCALCULATED_OFFSET UNITYSDK_OFFSET(0x17257DD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET UNITYSDK_OFFSET(0x172591C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x172580B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x17233730)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x17233790)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESET_OFFSET UNITYSDK_OFFSET(0x17259220)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESIZE_OFFSET UNITYSDK_OFFSET(0x17259080)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SET_SUPPRESSWARNING_OFFSET UNITYSDK_OFFSET(0x17254630)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1725AF70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_WARNING_OFFSET UNITYSDK_OFFSET(0x17258A90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172347A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x172546E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x172546A0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_TypeDefinitionIndex = 33797;

	class BGCurveBaseMath : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* poolSectionInfos; // 0x10
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* poolPointInfos; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config; // 0x20
		::System::EventHandler* Changed; // 0x28
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* cachedSectionInfos; // 0x30
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x38
		::System::EventHandler* ChangeRequested; // 0x40
		::BansheeGz::BGSpline::Curve::BGCurveCalculatorClosestPoint* closestPointCalculator; // 0x48
		::System::Double h2; // 0x50
		::System::Single cachedLength; // 0x58
		::System::Int32 recalculatedAtFrame; // 0x5C
		::System::Double h; // 0x60
		::System::Double h3; // 0x68
		::System::Int32 createdAtFrame; // 0x70
		::System::Boolean _SuppressWarning_k__BackingField; // 0x74
		::System::Boolean cacheTangent; // 0x75
		::System::Boolean ignoreSectionChangedCheck; // 0x76
		::System::Boolean cachePosition; // 0x77

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_OFFSET))(this, curve);
		}

		::System::Void _ctor_1(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_1_OFFSET))(this, curve, config);
		}

		::System::Void _ctor_2(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::System::Boolean traceChanges, ::System::Int32 parts, ::System::Boolean usePointPositionsToCalcTangents)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH__CTOR_2_OFFSET))(this, curve, traceChanges, parts, usePointPositionsToCalcTangents);
		}

		::System::Void add_ChangeRequested(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGEREQUESTED_OFFSET))(this, value);
		}

		::System::Void remove_ChangeRequested(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGEREQUESTED_OFFSET))(this, value);
		}

		::System::Void add_Changed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADD_CHANGED_OFFSET))(this, value);
		}

		::System::Void remove_Changed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_REMOVE_CHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_SuppressWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SUPPRESSWARNING_OFFSET))(this);
		}

		::System::Void set_SuppressWarning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SET_SUPPRESSWARNING_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CURVE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>* get_SectionInfos()
		{
			return ((::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONINFOS_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* get_Item(::System::Int32 i)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_ITEM_OFFSET))(this, i);
		}

		::System::Int32 get_SectionsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_SECTIONSCOUNT_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* get_Configuration()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_CONFIGURATION_OFFSET))(this);
		}

		::System::Boolean get_NeedTangentFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_NEEDTANGENTFORMULA_OFFSET))(this);
		}

		::System::Int32 get_PointsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GET_POINTSCOUNT_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_INIT_OFFSET))(this, config);
		}

		::System::Void AfterInit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_AFTERINIT_OFFSET))(this, config);
		}

		::UnityEngine::Vector3 CalcPositionByT(::BansheeGz::BGSpline::Curve::BGCurvePoint* from, ::BansheeGz::BGSpline::Curve::BGCurvePoint* to, ::System::Single t, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYT_OFFSET))(this, from, to, t, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByT(::BansheeGz::BGSpline::Curve::BGCurvePoint* from, ::BansheeGz::BGSpline::Curve::BGCurvePoint* to, ::System::Single t, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYT_OFFSET))(this, from, to, t, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_OFFSET))(this, distance, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single distanceRatio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCERATIO_1_OFFSET))(this, field, distanceRatio, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCBYDISTANCE_1_OFFSET))(this, field, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistanceRatio(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistance(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET))(this, distance, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single distanceRatio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, distanceRatio, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistanceRatio(::System::Single distanceRatio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCERATIO_OFFSET))(this, distanceRatio, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCTANGENTBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::System::Int32 CalcSectionIndexByDistance(::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET))(this, distance);
		}

		::System::Int32 CalcSectionIndexByDistanceRatio(::System::Single ratio)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET))(this, ratio);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 point, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, point, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_1(::UnityEngine::Vector3 point, ::System::Single& distance, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET))(this, point, distance, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_2(::UnityEngine::Vector3 point, ::System::Single& distance, ::UnityEngine::Vector3& tangent, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET))(this, point, distance, tangent, skipSectionsOptimization, skipPointsOptimization);
		}

		::System::Single GetDistance(::System::Int32 pointIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETDISTANCE_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETPOSITION_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 GetControlFirst(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLFIRST_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 GetControlSecond(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETCONTROLSECOND_OFFSET))(this, pointIndex);
		}

		::System::Boolean IsCalculated(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISCALCULATED_OFFSET))(this, field);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Bounds GetBoundingBox(::System::Int32 sectionIndex, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_GETBOUNDINGBOX_OFFSET))(this, sectionIndex, section);
		}

		::System::Void Recalculate(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RECALCULATE_OFFSET))(this, force);
		}

		::System::Void Warning(::System::String* message, ::System::Boolean condition, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_WARNING_OFFSET))(this, message, condition, callback);
		}

		::System::Void CalculateSection(::System::Int32 index, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* prevSection, ::BansheeGz::BGSpline::Curve::BGCurvePointI* from, ::BansheeGz::BGSpline::Curve::BGCurvePointI* to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESECTION_OFFSET))(this, index, section, prevSection, from, to);
		}

		::System::Void AdjustBoundaryPointsTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* prevSection)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ADJUSTBOUNDARYPOINTSTANGENTS_OFFSET))(this, section, prevSection);
		}

		::System::Boolean IsUseDistanceToAdjustTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* prevSection)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET))(this, section, prevSection);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurvePointI* from, ::BansheeGz::BGSpline::Curve::BGCurvePointI* to, ::System::Int32 pointsCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESET_OFFSET))(this, section, from, to, pointsCount);
		}

		::System::Void CalculateSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurvePointI* from, ::BansheeGz::BGSpline::Curve::BGCurvePointI* to)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CALCULATESPLITSECTION_OFFSET))(this, section, from, to);
		}

		::System::Void BinarySearchByDistance(::System::Single distance, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& tangent, ::System::Boolean calculatePosition, ::System::Boolean calculateTangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_BINARYSEARCHBYDISTANCE_OFFSET))(this, distance, position, tangent, calculatePosition, calculateTangent);
		}

		::System::Int32 FindSectionIndexByDistance(::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_FINDSECTIONINDEXBYDISTANCE_OFFSET))(this, distance);
		}

		::System::Single DistanceByRatio(::System::Single distanceRatio)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_DISTANCEBYRATIO_OFFSET))(this, distanceRatio);
		}

		::System::Single ClampDistance(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CLAMPDISTANCE_OFFSET))(this, distance);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_TOSTRING_OFFSET))(this);
		}

		::System::Void Resize(::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* points, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_RESIZE_OFFSET))(this, points, size);
		}

		::System::Void CurveChanged(::System::Object* sender, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CURVECHANGED_OFFSET))(this, sender, e);
		}

		::System::Void ConfigOnUpdate(::System::Object* sender, ::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIGONUPDATE_OFFSET))(this, sender, eventArgs);
		}
	};
}
