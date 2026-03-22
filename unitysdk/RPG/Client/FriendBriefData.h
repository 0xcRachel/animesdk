#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/System/Object.h"

class Class_1_2DEA141E143CFD74;
class Class_1_750F1EDDB8FD550C;
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class FriendChallengeBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendGridFightBattleRecordDisplayInfo; }
namespace RPG::Client { class FriendRogueBattleRecordDisplayInfo; }
namespace System { class String; }

#define RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x92A49A0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x92A4B10)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x92A4E60)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x92A4D20)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET UNITYSDK_OFFSET(0x92A4AD0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x92A4C20)
#define RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x92A4A40)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET UNITYSDK_OFFSET(0x92A4FA0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x92A4ED0)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x92A4F90)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x92A4F40)
#define RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x92A4EF0)
#define RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET UNITYSDK_OFFSET(0x92A4A80)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET UNITYSDK_OFFSET(0x92A4FB0)
#define RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x92A4EE0)
#define RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x92A48E0)
#define RPG_CLIENT_FRIENDBRIEFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92A48D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendBriefData_TypeDefinitionIndex = 51029;

	class FriendBriefData : public ::System::Object
	{
	public:
		::RPG::Client::FriendRogueBattleRecordDisplayInfo* RogueBattleRecordDisplayInfo; // 0x10
		::Proto::PlayerSimpleInfo* _RowPlayerInfo; // 0x18
		::Class_1_750F1EDDB8FD550C* _RowBattleRecordDisplayInfo; // 0x20
		::System::String* RemarkName; // 0x28
		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* GridFightBattleRecordDisplayInfo; // 0x30
		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* ChallengeBattleRecordDisplayInfo; // 0x38
		::Enum_3_0F1B992870941C13 _PlayingState; // 0x40
		::System::Boolean _IsMarked_k__BackingField; // 0x44
		::System::Boolean IsNewFriend; // 0x45
		::System::Int64 _AddTime_k__BackingField; // 0x48

		::System::Void _ctor(::Class_1_2DEA141E143CFD74* simpleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DEA141E143CFD74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA__CTOR_OFFSET))(this, simpleInfo);
		}

		static ::RPG::Client::FriendBriefData* Create(::Class_1_2DEA141E143CFD74* simpleInfo, ::System::Boolean IsNew)
		{
			return ((::RPG::Client::FriendBriefData*(*)(::Class_1_2DEA141E143CFD74*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_CREATE_OFFSET))(simpleInfo, IsNew);
		}

		::System::Void Sync(::Class_1_2DEA141E143CFD74* simpleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DEA141E143CFD74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SYNC_OFFSET))(this, simpleInfo);
		}

		::Proto::PlayerSimpleInfo* GetRowPlayerInfo()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROWPLAYERINFO_OFFSET))(this);
		}

		::System::Void SetIsMarked(::System::Boolean isMarked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SETISMARKED_OFFSET))(this, isMarked);
		}

		::Enum_3_0F1B992870941C13 GetPlayingState()
		{
			return ((::Enum_3_0F1B992870941C13(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETPLAYINGSTATE_OFFSET))(this);
		}

		::RPG::Client::FriendChallengeBattleRecordDisplayInfo* GetChallengeBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendChallengeBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETCHALLENGEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendRogueBattleRecordDisplayInfo* GetRogueBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendRogueBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETROGUEBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::RPG::Client::FriendGridFightBattleRecordDisplayInfo* GetGridFightBattleRecordDisplayInfo()
		{
			return ((::RPG::Client::FriendGridFightBattleRecordDisplayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETGRIDFIGHTBATTLERECORDDISPLAYINFO_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Void set_IsMarked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ISMARKED_OFFSET))(this, value);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_PS_AccountID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_PS_ACCOUNTID_OFFSET))(this);
		}

		::System::Boolean get_IsShowBattleRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ISSHOWBATTLERECORD_OFFSET))(this);
		}

		::System::Int64 get_AddTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_GET_ADDTIME_OFFSET))(this);
		}

		::System::Void set_AddTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDBRIEFDATA_SET_ADDTIME_OFFSET))(this, value);
		}
	};
}
