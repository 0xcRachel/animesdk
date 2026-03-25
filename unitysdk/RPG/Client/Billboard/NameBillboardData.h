#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }

#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x91FF480)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x91FF3A0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x91FF3C0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET UNITYSDK_OFFSET(0x91FF3B0)
#define RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB9B0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int NameBillboardData_TypeDefinitionIndex = 61540;

	class NameBillboardData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _TextIDName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextIDName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_GET_TEXTIDNAME_OFFSET))(this);
		}

		::System::Void set_TextIDName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_SET_TEXTIDNAME_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_NAMEBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
