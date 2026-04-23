#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_AIRLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x10AE79A0)
#define RPG_CLIENT_AIRLINE_GETCLOSETPOINT_OFFSET UNITYSDK_OFFSET(0x10AE7170)
#define RPG_CLIENT_AIRLINE_GETCLOSETPOSITION_OFFSET UNITYSDK_OFFSET(0x10AE7020)
#define RPG_CLIENT_AIRLINE_GETPOINTPOSANDTANGENT_OFFSET UNITYSDK_OFFSET(0x10AE7630)
#define RPG_CLIENT_AIRLINE_GETPOINTPOS_OFFSET UNITYSDK_OFFSET(0x10AE77C0)
#define RPG_CLIENT_AIRLINE_GETPOINTTANGENT_OFFSET UNITYSDK_OFFSET(0x10AE7580)
#define RPG_CLIENT_AIRLINE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x10AE7910)
#define RPG_CLIENT_AIRLINE_GET_ISLINECURVEINVALID_OFFSET UNITYSDK_OFFSET(0x10AE6F10)
#define RPG_CLIENT_AIRLINE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x10AE7000)
#define RPG_CLIENT_AIRLINE_ISINLINECURVEPOINTRANGE_OFFSET UNITYSDK_OFFSET(0x10AE6F90)
#define RPG_CLIENT_AIRLINE_METHOD_5_BB60EA66E1E38FDE_OFFSET UNITYSDK_OFFSET(0x10AE7300)
#define RPG_CLIENT_AIRLINE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x10AE7010)
#define RPG_CLIENT_AIRLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE7B20)

namespace RPG::Client
{
	inline static constexpr unsigned int Airline_TypeDefinitionIndex = 55137;

	class Airline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* lineCurve; // 0x18
		::System::Single _Length_k__BackingField; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLineCurveInValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GET_ISLINECURVEINVALID_OFFSET))(this);
		}

		::System::Boolean IsInLineCurvePointRange(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_ISINLINECURVEPOINTRANGE_OFFSET))(this, a1);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_SET_LENGTH_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetClosetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETCLOSETPOSITION_OFFSET))(this, a1);
		}

		::System::Single GetClosetPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETCLOSETPOINT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetPointTangent(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTTANGENT_OFFSET))(this, a1);
		}

		::System::Void GetPointPosAndTangent(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTPOSANDTANGENT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetPointPos(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTPOS_OFFSET))(this, a1);
		}

		::System::Single GetPoint(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void Method_5_BB60EA66E1E38FDE(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_METHOD_5_BB60EA66E1E38FDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_AWAKE_OFFSET))(this);
		}
	};
}
