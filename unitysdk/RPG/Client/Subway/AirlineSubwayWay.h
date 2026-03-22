#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"

namespace RPG::Client::Subway { class AirlineSubwayWay_MemberConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FDAC90)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_GET_STOPDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FDAC70)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SET_STOPDISTANCE_OFFSET UNITYSDK_OFFSET(0x9FDAC80)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDACF0)
#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FDAD50)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_TypeDefinitionIndex = 62326;

	class AirlineSubwayWay : public ::RPG::Client::Airline
	{
	public:
		::System::Single stoppingDuration; // 0x30
		::System::Int32 stopIndex; // 0x34
		::UnityEngine::AnimationCurve* enterCurve; // 0x38
		::System::Single enterDuration; // 0x40
		::UnityEngine::AnimationCurve* exitCurve; // 0x48
		::System::Single exitDuration; // 0x50
		::System::Single arrivedDuration; // 0x54
		::System::Single pedestrianMotionDuration; // 0x58
		::System::String* subwayStationName; // 0x60
		::System::String* subwayDoorSignName; // 0x68
		::System::String* arrivalAudioEvent; // 0x70
		::System::String* exitAudioEvent; // 0x78
		::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_MemberConfig*>* memberConfigs; // 0x80
		::System::String* FCVName_Waitting; // 0x88
		::System::Single _StopDistance_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY__CTOR_OFFSET))(this);
		}

		::System::Single get_StopDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_GET_STOPDISTANCE_OFFSET))(this);
		}

		::System::Void set_StopDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_SET_STOPDISTANCE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
