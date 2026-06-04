#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_39;
namespace RPG::Client::PixAir { class PixAirEventOptionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19948730)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x19948CA0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_EVENTDESC_OFFSET UNITYSDK_OFFSET(0x19948CE0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_EVENTTITLE_OFFSET UNITYSDK_OFFSET(0x19948CC0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19948D00)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x19948CB0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_EVENTDESC_OFFSET UNITYSDK_OFFSET(0x19948CF0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_EVENTTITLE_OFFSET UNITYSDK_OFFSET(0x19948CD0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x19948D10)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19948BB0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEventContentData_TypeDefinitionIndex = 73666;

	class PixAirEventContentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEventOptionData*>* _Options_k__BackingField; // 0x10
		::RPG::Client::TextID _EventDesc_k__BackingField; // 0x18
		::RPG::Client::TextID _EventTitle_k__BackingField; // 0x28
		::System::UInt32 _ContentID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEventContentData* Create(::Class_1_7FF19F6206AF6DD7_39* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEventContentData*(*)(::Class_1_7FF19F6206AF6DD7_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_CONTENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EventTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_EVENTTITLE_OFFSET))(this);
		}

		::System::Void set_EventTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_EVENTTITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EventDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_EVENTDESC_OFFSET))(this);
		}

		::System::Void set_EventDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_EVENTDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEventOptionData*>* get_Options()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEventOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEventOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEventOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTCONTENTDATA_SET_OPTIONS_OFFSET))(this, a1);
		}
	};
}
