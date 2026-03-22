#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_25;
namespace RPG::Client { class PlayerChallengePeakRecordGroupData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B18C90)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GETCURRECORDGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9B194E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9B19660)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GET_GROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x9B19640)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_SET_GROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x9B19650)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9B18D30)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B18D20)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordData_TypeDefinitionIndex = 51046;

	class PlayerChallengePeakRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordGroupData*>* _GroupDataList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerChallengePeakRecordData* Create(::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_25*>* protoList)
		{
			return ((::RPG::Client::PlayerChallengePeakRecordData*(*)(::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_CREATE_OFFSET))(protoList);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_25*>* protoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_SYNC_OFFSET))(this, protoList);
		}

		::RPG::Client::PlayerChallengePeakRecordGroupData* GetCurRecordGroupData()
		{
			return ((::RPG::Client::PlayerChallengePeakRecordGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GETCURRECORDGROUPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordGroupData*>* get_GroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GET_GROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_GroupDataList(::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordGroupData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_SET_GROUPDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}
	};
}
