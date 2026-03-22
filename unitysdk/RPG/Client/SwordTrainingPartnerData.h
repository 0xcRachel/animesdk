#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ASSISTTIME_OFFSET UNITYSDK_OFFSET(0xA004F50)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA004F30)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xA005180)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x9FF4BD0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA004F10)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERIMAGE_OFFSET UNITYSDK_OFFSET(0xA004F80)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERNAME_OFFSET UNITYSDK_OFFSET(0xA0050D0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA004FF0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_STORYDISPLAYPARTNERNAME_OFFSET UNITYSDK_OFFSET(0xA005050)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xA004F60)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA004DD0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA004F40)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA004F20)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xA004F70)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_SWORDTRAININGPARTNERDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0xA004EC0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF5CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPartnerData_TypeDefinitionIndex = 49184;

	class SwordTrainingPartnerData : public ::System::Object
	{
	public:
		::System::UInt32 _UnlockID_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::SwordTrainingPartnerRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA__CTOR_OFFSET))(this, row);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_SwordTrainingPartnerData__CompareTo(::RPG::Client::SwordTrainingPartnerData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingPartnerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_SWORDTRAININGPARTNERDATA__COMPARETO_OFFSET))(this, other);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_AssistTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ASSISTTIME_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Void set_UnlockID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_UNLOCKID_OFFSET))(this, value);
		}

		::System::String* get_PartnerImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryDisplayPartnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_STORYDISPLAYPARTNERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PartnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERNAME_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARITEMICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingPartnerRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingPartnerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ROW_OFFSET))(this);
		}
	};
}
