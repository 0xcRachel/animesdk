#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x90FA340)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0x90FA320)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x90FA300)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x90FA350)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0x90FA330)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x90FA310)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90FA2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfAttributeIncreaseData_TypeDefinitionIndex = 50631;

	class ElfAttributeIncreaseData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _TextID_k__BackingField; // 0x10
		::System::UInt32 _OldValue_k__BackingField; // 0x20
		::System::UInt32 _NewValue_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::TextID textID, ::System::UInt32 oldValue, ::System::UInt32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA__CTOR_OFFSET))(this, textID, oldValue, newValue);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_TEXTID_OFFSET))(this, value);
		}

		::System::UInt32 get_OldValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_OLDVALUE_OFFSET))(this);
		}

		::System::Void set_OldValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_OLDVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_NewValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_NEWVALUE_OFFSET))(this);
		}

		::System::Void set_NewValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_NEWVALUE_OFFSET))(this, value);
		}
	};
}
