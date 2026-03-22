#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET UNITYSDK_OFFSET(0x15EE5A20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x15EE5950)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET UNITYSDK_OFFSET(0x15EE5970)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x15EE5980)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE5550)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_RestrictGizmozSetting_TypeDefinitionIndex = 27469;

	class BGCurveSettings_RestrictGizmozSetting : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* fromToList; // 0x10
		::System::String* value; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* numbersList; // 0x20
		::System::Boolean valid; // 0x28

		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING__CTOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_GET_VALID_OFFSET))(this);
		}

		::System::Boolean IsShowing(::System::Int32 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_ISSHOWING_OFFSET))(this, point);
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting* Comply(::System::String* value)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings_RestrictGizmozSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVESETTINGS_RESTRICTGIZMOZSETTING_COMPLY_OFFSET))(this, value);
		}
	};
}
