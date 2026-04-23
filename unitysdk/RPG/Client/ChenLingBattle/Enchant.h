#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_C086E47345F86771_2;
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CREATE_OFFSET UNITYSDK_OFFSET(0x17CADDE0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GETDESC_OFFSET UNITYSDK_OFFSET(0x17CADEE0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x17CADF90)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_DESC_OFFSET UNITYSDK_OFFSET(0x17CADFE0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17CAE030)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CAE050)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17CADFB0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x17CAE010)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17CAE040)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x17CAE060)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT__CTOR_OFFSET UNITYSDK_OFFSET(0x17CADE90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Enchant_TypeDefinitionIndex = 70123;

	class Enchant : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingEnchantRow* _Config; // 0x10
		::System::UInt32 _MaxLevel_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_C086E47345F86771_2* enchantProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT__CTOR_OFFSET))(this, enchantProto);
		}

		static ::RPG::Client::ChenLingBattle::Enchant* Create(::Class_1_C086E47345F86771_2* enchantProto)
		{
			return ((::RPG::Client::ChenLingBattle::Enchant*(*)(::Class_1_C086E47345F86771_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CREATE_OFFSET))(enchantProto);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_CONFIGID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_MAXLEVEL_OFFSET))(this, value);
		}
	};
}
