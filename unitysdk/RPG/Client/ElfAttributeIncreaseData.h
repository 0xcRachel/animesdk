#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x95A7590)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0x95A7570)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x95A7550)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x95A75A0)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0x95A7580)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x95A7560)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95A7540)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfAttributeIncreaseData_TypeDefinitionIndex = 51766;

	class ElfAttributeIncreaseData : public ::System::Object
	{
	public:
		::System::UInt32 _OldValue_k__BackingField; // 0x10
		::System::UInt32 _NewValue_k__BackingField; // 0x14
		::RPG::Client::TextID _TextID_k__BackingField; // 0x18

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
