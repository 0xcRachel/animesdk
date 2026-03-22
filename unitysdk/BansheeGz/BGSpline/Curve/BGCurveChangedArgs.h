#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveChangedArgs_ChangeTypeEnum.h"
#include "unitysdk/System/EventArgs.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class Object; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_CLONE_OFFSET UNITYSDK_OFFSET(0x15EC8DE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15ED7FA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x15ED7F40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15ED8070)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x15EC8C70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x15ED7E70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x15EBF740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x15ED7E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x15ED7E20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x15ED7E30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MULTIPLECHANGES_OFFSET UNITYSDK_OFFSET(0x15ED7E40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ED80A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED7E50)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_TypeDefinitionIndex = 27446;

	class BGCurveChangedArgs : public ::System::EventArgs
	{
	public:
		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs** StaticGet_Instance()
		{
			return (::BansheeGz::BGSpline::Curve::BGCurveChangedArgs**)Il2CppClass::FromTypeDefinitionIndex(BGCurveChangedArgs_TypeDefinitionIndex)->GetStaticField(0x2B330);
		}
		::BansheeGz::BGSpline::Curve::BGCurvePointI* point; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x18
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* multipleChanges; // 0x20
		::System::String* message; // 0x28
		::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum changeType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS__CCTOR_OFFSET))();
		}

		::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum get_ChangeType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CHANGETYPE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_CURVE_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MESSAGE_OFFSET))(this);
		}

		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* get_MultipleChanges()
		{
			return ((::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GET_MULTIPLECHANGES_OFFSET))(this);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum type, ::System::String* message)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_OFFSET))(curve, type, message);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance_1(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* changes, ::System::String* changesInTransaction)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_1_OFFSET))(curve, changes, changesInTransaction);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* GetInstance_2(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::BansheeGz::BGSpline::Curve::BGCurvePointI* point, ::System::String* changesInTransaction)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*(*)(::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETINSTANCE_2_OFFSET))(curve, point, changesInTransaction);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVECHANGEDARGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
