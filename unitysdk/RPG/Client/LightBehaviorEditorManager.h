#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LightControlData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_FINDLIGHT_OFFSET UNITYSDK_OFFSET(0x9501E90)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETALLLIGHTS_OFFSET UNITYSDK_OFFSET(0x9501E00)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETLIGHTFROMID_OFFSET UNITYSDK_OFFSET(0x9501D20)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETLIGHTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x9501F70)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x95010A0)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GET_REGISTEREDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x9501AB0)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x95015D0)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_REGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x9501B00)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_REMOVETYPESUFFIX_OFFSET UNITYSDK_OFFSET(0x9502060)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_RESETNEXTID_OFFSET UNITYSDK_OFFSET(0x9501520)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x95011C0)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_UNREGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x9501C40)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9502310)

namespace RPG::Client
{
	inline static constexpr unsigned int LightBehaviorEditorManager_TypeDefinitionIndex = 55878;

	class LightBehaviorEditorManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::LightBehaviorEditorManager** StaticGet_Field_5_0()
		{
			return (::RPG::Client::LightBehaviorEditorManager**)Il2CppClass::FromTypeDefinitionIndex(LightBehaviorEditorManager_TypeDefinitionIndex)->GetStaticField(0x16800);
		}
		::System::Int32 Field_5_1; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* _stageHarmonyLightModLinkSlotSubClassFullNames; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LightControlData*>* Field_5_3; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LightControlData*>* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LightBehaviorEditorManager* get_Instance()
		{
			return ((::RPG::Client::LightBehaviorEditorManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void ResetNextID(::Il2CppArray<::RPG::Client::LightControlData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LightControlData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_RESETNEXTID_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_RESET_OFFSET))(this);
		}

		::System::Void Method_5_DAEB67F34AF80609()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
		}

		::System::Int32 get_registeredLightCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GET_REGISTEREDLIGHTCOUNT_OFFSET))(this);
		}

		::System::Void RegisterLight(::RPG::Client::LightControlData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightControlData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_REGISTERLIGHT_OFFSET))(this, a1);
		}

		::System::Void UnregisterLight(::RPG::Client::LightControlData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightControlData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_UNREGISTERLIGHT_OFFSET))(this, a1);
		}

		::RPG::Client::LightControlData* GetLightFromID(::System::Int32 a1)
		{
			return ((::RPG::Client::LightControlData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETLIGHTFROMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LightControlData*>* GetAllLights()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LightControlData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETALLLIGHTS_OFFSET))(this);
		}

		::RPG::Client::LightControlData* FindLight(::System::String* a1)
		{
			return ((::RPG::Client::LightControlData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_FINDLIGHT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LightControlData*>* GetLightsByType(::UnityEngine::LightType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LightControlData*>*(*)(::PVOID, ::UnityEngine::LightType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_GETLIGHTSBYTYPE_OFFSET))(this, a1);
		}

		static ::System::String* RemoveTypeSuffix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER_REMOVETYPESUFFIX_OFFSET))(a1);
		}
	};
}
