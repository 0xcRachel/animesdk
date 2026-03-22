#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15EC8D80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ED8100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED80E0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_BeforeChange_TypeDefinitionIndex = 27448;

	class BGCurveChangedArgs_BeforeChange : public ::System::EventArgs
	{
	public:
		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange** StaticGet_BeforeChangeInstance()
		{
			return (::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange**)Il2CppClass::FromTypeDefinitionIndex(BGCurveChangedArgs_BeforeChange_TypeDefinitionIndex)->GetStaticField(0x2B360);
		}
		::System::String* Operation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE__CCTOR_OFFSET))();
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange* GetInstance(::System::String* operation)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*(*)(::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_BEFORECHANGE_GETINSTANCE_OFFSET))(operation);
		}
	};
}
