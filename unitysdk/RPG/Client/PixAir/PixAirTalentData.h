#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirTalentStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18D03500)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D034E0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PARAMMAP_OFFSET UNITYSDK_OFFSET(0x18D03580)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PRETALENTLIST_OFFSET UNITYSDK_OFFSET(0x18D03520)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x18D03560)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x18D034C0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x18D03540)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18D03800)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x18D03510)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18D034F0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PARAMMAP_OFFSET UNITYSDK_OFFSET(0x18D03590)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PRETALENTLIST_OFFSET UNITYSDK_OFFSET(0x18D03530)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x18D03570)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_TALENTID_OFFSET UNITYSDK_OFFSET(0x18D034D0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x18D03550)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SYNCCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x18D037B0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x18D035A0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D03770)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTalentData_TypeDefinitionIndex = 73702;

	class PixAirTalentData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* _PreTalentList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ParamMap_k__BackingField; // 0x20
		::System::UInt32 _TalentID_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirTalentStatus _Status_k__BackingField; // 0x2C
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::System::UInt32 _UnlockScore_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_TALENTID_OFFSET))(this);
		}

		::System::Void set_TalentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_TALENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_PreTalentList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PRETALENTLIST_OFFSET))(this);
		}

		::System::Void set_PreTalentList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PRETALENTLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::System::Void set_UnlockScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_UNLOCKSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirTalentStatus get_Status()
		{
			return ((::RPG::Client::PixAir::PixAirTalentStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PixAir::PixAirTalentStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirTalentStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ParamMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PARAMMAP_OFFSET))(this);
		}

		::System::Void set_ParamMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PARAMMAP_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirTalentData* TryCreate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirTalentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_TRYCREATE_OFFSET))(a1, a2);
		}

		::System::Void SyncCurrentScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SYNCCURRENTSCORE_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SETUNLOCKED_OFFSET))(this);
		}
	};
}
