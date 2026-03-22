#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FDAD90)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_560ABD6EDDE4D0DB_OFFSET UNITYSDK_OFFSET(0x9FDB920)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET UNITYSDK_OFFSET(0x9FDBA60)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9FDAF40)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x9FDB1A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET UNITYSDK_OFFSET(0x9FDB590)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET UNITYSDK_OFFSET(0x9FDB660)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9FDB740)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET UNITYSDK_OFFSET(0x9FDB380)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET UNITYSDK_OFFSET(0x9FDB7A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET UNITYSDK_OFFSET(0x9FDB860)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDBC00)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDBBA0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__14_0_OFFSET UNITYSDK_OFFSET(0x9FDBC50)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__14_1_OFFSET UNITYSDK_OFFSET(0x9FDBC60)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubway_TypeDefinitionIndex = 62332;

	class AirshipSubway : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0x63A0);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AirshipSubway_TypeDefinitionIndex)->GetStaticField(0x63A4);
		}
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* initEffectConfigs; // 0x38
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* startupEffectConfigs; // 0x40
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* arrivedEffectConfigs; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_5_8; // 0x50
		::UnityEngine::GameObject* Field_5_9; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetDoorState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET))(this, a1);
		}

		::System::Void SetMoveState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET))(this, a1);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TriggerArrivedEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET))(this);
		}

		::System::Void TriggerStartupEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET))(this);
		}

		::System::Void Method_5_560ABD6EDDE4D0DB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_560ABD6EDDE4D0DB_OFFSET))(this, a1);
		}

		::System::Void Method_5_F5C0805039071E2D(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_METHOD_5_F5C0805039071E2D_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__14_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__14_0_OFFSET))(this, go, data);
		}

		::System::Void _Setup_b__14_1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__14_1_OFFSET))(this, last, now, data);
		}
	};
}
