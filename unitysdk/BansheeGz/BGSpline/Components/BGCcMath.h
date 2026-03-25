#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcMath_MathTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcMath_UpdateModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCc.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Fields.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath_MathChangedEvent; }
namespace BansheeGz::BGSpline::Components { class BGCcMath_VisibilityCheck; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x16576790)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x16579A90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET UNITYSDK_OFFSET(0x165779F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16577960)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x16577C30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1656EEB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16577BA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16577DE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x16578010)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET UNITYSDK_OFFSET(0x165781A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x16577E70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16577A80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16577CC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16578330)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1656F150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16577B10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x16577D50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x1656EA00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ENSUREMATHISCREATED_OFFSET UNITYSDK_OFFSET(0x16577900)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x1656EBC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x16576AB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x16576940)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_INFO_OFFSET UNITYSDK_OFFSET(0x16576C40)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x16571050)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x16576850)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATH_OFFSET UNITYSDK_OFFSET(0x16571BE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_NEWMATHREQUIRED_OFFSET UNITYSDK_OFFSET(0x165773F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x16576900)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x165769F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x165768B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x16576DF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x16576E10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x16576DD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x16576DC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x16576DB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x16576920)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x16576990)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x16576970)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x16576B60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET UNITYSDK_OFFSET(0x16578A10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET UNITYSDK_OFFSET(0x16578680)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET UNITYSDK_OFFSET(0x16576E30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x165787E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET UNITYSDK_OFFSET(0x16578AB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET UNITYSDK_OFFSET(0x165752F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET UNITYSDK_OFFSET(0x16578C90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET UNITYSDK_OFFSET(0x165785E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16577640)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x16577910)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET UNITYSDK_OFFSET(0x165767F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET UNITYSDK_OFFSET(0x16578410)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET UNITYSDK_OFFSET(0x16576950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET UNITYSDK_OFFSET(0x16576860)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x16576910)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x16576A00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET UNITYSDK_OFFSET(0x165768D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET UNITYSDK_OFFSET(0x16576E00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET UNITYSDK_OFFSET(0x16576E20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET UNITYSDK_OFFSET(0x16576DE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET UNITYSDK_OFFSET(0x16576930)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x165769A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x16576980)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_START_OFFSET UNITYSDK_OFFSET(0x165774D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16579BA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x16579AF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET UNITYSDK_OFFSET(0x16579BD0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_TypeDefinitionIndex = 28217;

	class BGCcMath : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_EmptyVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BGCcMath_TypeDefinitionIndex)->GetStaticField(0x2B490);
		}
		// static const ::System::Int32 PartsMax = 0x3E8; // 0x0
		::System::EventHandler* ChangedMath; // 0x50
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields fields; // 0x58
		::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum mathType; // 0x5C
		::System::Int32 sectionParts; // 0x60
		::System::Boolean optimizeStraightLines; // 0x64
		::System::Single tolerance; // 0x68
		::System::Boolean usePositionToCalculateTangents; // 0x6C
		::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum updateMode; // 0x70
		::UnityEngine::Renderer* rendererForUpdateCheck; // 0x78
		::BansheeGz::BGSpline::Components::BGCcMath_MathChangedEvent* mathChangedEvent; // 0x80
		::System::Single spheresScale; // 0x88
		::UnityEngine::Color spheresColor; // 0x8C
		::System::Int32 spheresCount; // 0x9C
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math; // 0xA0
		::BansheeGz::BGSpline::Components::BGCcMath_VisibilityCheck* visibilityCheck; // 0xA8
		::UnityEngine::MeshFilter* meshFilter; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__CCTOR_OFFSET))();
		}

		::System::Void add_ChangedMath(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ADD_CHANGEDMATH_OFFSET))(this, value);
		}

		::System::Void remove_ChangedMath(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_REMOVE_CHANGEDMATH_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum get_MathType()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATHTYPE_OFFSET))(this);
		}

		::System::Void set_MathType(::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_MathTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_MATHTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_SectionParts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SECTIONPARTS_OFFSET))(this);
		}

		::System::Void set_SectionParts(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SECTIONPARTS_OFFSET))(this, value);
		}

		::System::Boolean get_OptimizeStraightLines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_OPTIMIZESTRAIGHTLINES_OFFSET))(this);
		}

		::System::Void set_OptimizeStraightLines(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_OPTIMIZESTRAIGHTLINES_OFFSET))(this, value);
		}

		::System::Single get_Tolerance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_TOLERANCE_OFFSET))(this);
		}

		::System::Void set_Tolerance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_TOLERANCE_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields get_Fields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_FIELDS_OFFSET))(this);
		}

		::System::Void set_Fields(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_FIELDS_OFFSET))(this, value);
		}

		::System::Boolean get_UsePositionToCalculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_UsePositionToCalculateTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_USEPOSITIONTOCALCULATETANGENTS_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum get_UpdateMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath_UpdateModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_RendererForUpdateCheck()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_RENDERERFORUPDATECHECK_OFFSET))(this);
		}

		::System::Void set_RendererForUpdateCheck(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_RENDERERFORUPDATECHECK_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Warning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_WARNING_OFFSET))(this);
		}

		::System::String* get_Info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_INFO_OFFSET))(this);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Single get_SpheresScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESSCALE_OFFSET))(this);
		}

		::System::Void set_SpheresScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_SpheresColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOLOR_OFFSET))(this);
		}

		::System::Void set_SpheresColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_SpheresCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_SPHERESCOUNT_OFFSET))(this);
		}

		::System::Void set_SpheresCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SET_SPHERESCOUNT_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_MATH_OFFSET))(this);
		}

		::System::Boolean get_NewMathRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_NEWMATHREQUIRED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ONDESTROY_OFFSET))(this);
		}

		::System::Void EnsureMathIsCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ENSUREMATHISCREATED_OFFSET))(this);
		}

		::System::Void Recalculate(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_RECALCULATE_OFFSET))(this, force);
		}

		::System::Boolean IsCalculated(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_ISCALCULATED_OFFSET))(this, field);
		}

		::System::Single ClampDistance(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CLAMPDISTANCE_OFFSET))(this, distance);
		}

		::System::Single GetDistance(::System::Int32 pointIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GETDISTANCE_OFFSET))(this, pointIndex);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_OFFSET))(this, field, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistanceRatio_1(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCERATIO_1_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistanceRatio(::System::Single ratio, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCERATIO_OFFSET))(this, ratio, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistanceRatio(::System::Single distanceRatio, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCERATIO_OFFSET))(this, distanceRatio, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_OFFSET))(this, field, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcByDistance_1(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCBYDISTANCE_1_OFFSET))(this, distance, tangent, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcTangentByDistance(::System::Single distance, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCTANGENTBYDISTANCE_OFFSET))(this, distance, useLocal);
		}

		::UnityEngine::Vector3 CalcPositionAndTangentByDistance(::System::Single distance, ::UnityEngine::Vector3& tangent, ::System::Boolean useLocal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONANDTANGENTBYDISTANCE_OFFSET))(this, distance, tangent, useLocal);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* get_Item(::System::Int32 i)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_GET_ITEM_OFFSET))(this, i);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint(::UnityEngine::Vector3 point, ::System::Single& distance, ::UnityEngine::Vector3& tangent, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_OFFSET))(this, point, distance, tangent, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_1(::UnityEngine::Vector3 point, ::System::Single& distance, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_1_OFFSET))(this, point, distance, skipSectionsOptimization, skipPointsOptimization);
		}

		::UnityEngine::Vector3 CalcPositionByClosestPoint_2(::UnityEngine::Vector3 point, ::System::Boolean skipSectionsOptimization, ::System::Boolean skipPointsOptimization)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCPOSITIONBYCLOSESTPOINT_2_OFFSET))(this, point, skipSectionsOptimization, skipPointsOptimization);
		}

		::System::Int32 CalcSectionIndexByDistance(::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCE_OFFSET))(this, distance);
		}

		::System::Int32 CalcSectionIndexByDistanceRatio(::System::Single distanceRatio)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_CALCSECTIONINDEXBYDISTANCERATIO_OFFSET))(this, distanceRatio);
		}

		::System::Void SendEventsIfMathIsNotCreated(::System::Object* sender, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_SENDEVENTSIFMATHISNOTCREATED_OFFSET))(this, sender, e);
		}

		::System::Void InitMath(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITMATH_OFFSET))(this, sender, e);
		}

		::System::Void InitAabbVisibleBefore(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEBEFORE_OFFSET))(this, config);
		}

		::System::Void InitAabbVisibleAfter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITAABBVISIBLEAFTER_OFFSET))(this);
		}

		::System::Void MathOnChangeRequested(::System::Object* sender, ::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHONCHANGEREQUESTED_OFFSET))(this, sender, eventArgs);
		}

		::System::Void InitRendererVisible(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITRENDERERVISIBLE_OFFSET))(this, config);
		}

		::System::Void InitVisibilityCheck(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config, ::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_INITVISIBILITYCHECK_OFFSET))(this, config, renderer);
		}

		::System::Void BecameVisible(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_BECAMEVISIBLE_OFFSET))(this, sender, e);
		}

		::System::Void MathWasChanged(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHWASCHANGED_OFFSET))(this, sender, e);
		}

		::System::Boolean _InitVisibilityCheck_b__100_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH__INITVISIBILITYCHECK_B__100_0_OFFSET))(this);
		}
	};
}
