#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_5A47224D9FA9E33E.h"
#include "unitysdk/Struct_2_61449724F4025E5E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ServantConfig; }
namespace System { class String; }

#define RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET UNITYSDK_OFFSET(0x8AC98C0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9740)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x8AC9800)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC96E0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8AC9680)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x8AC96A0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x8AC97C0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8AC96C0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x8AC97A0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x8AC9840)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9780)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9760)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x8AC9820)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x8AC97E0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9700)
#define RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9720)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9750)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x8AC9810)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC96F0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x8AC96B0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x8AC97D0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8AC96D0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x8AC97B0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x8AC9870)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9790)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9770)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x8AC9830)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x8AC97F0)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9710)
#define RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x8AC9730)
#define RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC98A0)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarServant_TypeDefinitionIndex = 40955;

	class AvatarServant : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x10
		::System::String* _ManikinJsonPath_k__BackingField; // 0x18
		::System::String* _ActionServantHeadIconPath_k__BackingField; // 0x20
		::System::String* _WaitingServantHeadIconPath_k__BackingField; // 0x28
		::System::String* _UIModelPath_k__BackingField; // 0x30
		::System::String* _ServantMiniIconPath_k__BackingField; // 0x38
		::System::String* _Prefab_k__BackingField; // 0x40
		::System::String* _ConfigPath_k__BackingField; // 0x48
		::System::String* _UnCreateHeadIconPath_k__BackingField; // 0x50
		::System::String* _ServantSideIconPath_k__BackingField; // 0x58
		::System::String* _HeadIconPath_k__BackingField; // 0x60
		::RPG::GameCore::ServantConfig* _JsonConfig_k__BackingField; // 0x68
		::Struct_2_5A47224D9FA9E33E _PropertyValues_k__BackingField; // 0x70
		::Struct_2_61449724F4025E5E _Identifier_k__BackingField; // 0xA8
		::RPG::Client::TextID _Name_k__BackingField; // 0xB8

		::System::Void _ctor(::Struct_2_61449724F4025E5E& identifier)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_61449724F4025E5E&))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT__CTOR_OFFSET))(this, identifier);
		}

		::Struct_2_61449724F4025E5E get_Identifier()
		{
			return ((::Struct_2_61449724F4025E5E(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::ServantConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ServantConfig*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_JSONCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::Void set_HeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_HEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_UnCreateHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UNCREATEHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_UnCreateHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UNCREATEHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_WaitingServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_WAITINGSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_WaitingServantHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_WAITINGSERVANTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ActionServantHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_ACTIONSERVANTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_ActionServantHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_ACTIONSERVANTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ServantSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTSIDEICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantSideIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTSIDEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ServantMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SERVANTMINIICONPATH_OFFSET))(this);
		}

		::System::Void set_ServantMiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SERVANTMINIICONPATH_OFFSET))(this, value);
		}

		::System::String* get_Prefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PREFAB_OFFSET))(this, value);
		}

		::System::String* get_ManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_MANIKINJSONPATH_OFFSET))(this);
		}

		::System::Void set_ManikinJsonPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_MANIKINJSONPATH_OFFSET))(this, value);
		}

		::System::String* get_UIModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_UIMODELPATH_OFFSET))(this);
		}

		::System::Void set_UIModelPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_UIMODELPATH_OFFSET))(this, value);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ConfigPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_CONFIGPATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_SKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_SKILLIDLIST_OFFSET))(this, value);
		}

		::Struct_2_5A47224D9FA9E33E get_PropertyValues()
		{
			return ((::Struct_2_5A47224D9FA9E33E(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_GET_PROPERTYVALUES_OFFSET))(this);
		}

		::System::Void set_PropertyValues(::Struct_2_5A47224D9FA9E33E value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5A47224D9FA9E33E))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_SET_PROPERTYVALUES_OFFSET))(this, value);
		}

		::System::Boolean ContainsSkill(::System::UInt32 skillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSERVANT_CONTAINSSKILL_OFFSET))(this, skillID);
		}
	};
}
