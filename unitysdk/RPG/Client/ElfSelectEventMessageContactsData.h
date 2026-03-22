#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantContactsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9153C90)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x9153D00)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9153E00)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9153D20)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9153DA0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x9153D10)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9153CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventMessageContactsData_TypeDefinitionIndex = 50581;

	class ElfSelectEventMessageContactsData : public ::System::Object
	{
	public:
		::System::UInt32 _ContactID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventMessageContactsData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ElfSelectEventMessageContactsData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantContactsConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantContactsConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET__ROW_OFFSET))(this);
		}
	};
}
