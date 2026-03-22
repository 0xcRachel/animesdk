#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_567;
class Class_0_16E4307DCC419505_568;
class Class_1_735612C94F558EAE_9;
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0x8E98F10)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0x8E98310)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x8E99890)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0x8E98670)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x8E993C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET UNITYSDK_OFFSET(0x8E99340)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET UNITYSDK_OFFSET(0x8E98DF0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x8E98A40)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET UNITYSDK_OFFSET(0x8E99540)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET UNITYSDK_OFFSET(0x8E98AC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET UNITYSDK_OFFSET(0x8E996C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x8E98550)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET UNITYSDK_OFFSET(0x8E98660)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET UNITYSDK_OFFSET(0x8E980F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x8E981D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0x8E982B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET UNITYSDK_OFFSET(0x8E99840)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET UNITYSDK_OFFSET(0x8E992F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET UNITYSDK_OFFSET(0x8E99070)
#define RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8E99150)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x8E98740)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0x8E98CD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET UNITYSDK_OFFSET(0x8E987A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeam_TypeDefinitionIndex = 50149;

	class ChallengePeakTeam : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_567* _AvatarSource; // 0x10
		::Il2CppArray<::RPG::Client::AvatarData*>* _ModifiedAvatars; // 0x18
		::Class_0_16E4307DCC419505_568* _TeamSource; // 0x20
		::System::UInt32 _CurSetBuffID; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_568* source, ::Class_0_16E4307DCC419505_567* avatarSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_568*, ::Class_0_16E4307DCC419505_567*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__CTOR_OFFSET))(this, source, avatarSource);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNeedForceSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_ISNEEDFORCESAVE_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_BUFFID_OFFSET))(this);
		}

		::System::Int32 get_CountOfSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GET_COUNTOFSLOT_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakTeam* Create(::Class_0_16E4307DCC419505_568* source, ::Class_0_16E4307DCC419505_567* avatarSource)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::Class_0_16E4307DCC419505_568*, ::Class_0_16E4307DCC419505_567*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CREATE_OFFSET))(source, avatarSource);
		}

		::RPG::Client::AvatarData* GetModifiedAvatarBySlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDAVATARBYSLOT_OFFSET))(this, slotIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetOriginalAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINALAVATARS_OFFSET))(this);
		}

		::System::Int32 GetCountOfModifiedAvatars()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETCOUNTOFMODIFIEDAVATARS_OFFSET))(this);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Void SetModifiedAvatarBySlot(::System::Int32 slotIndex, ::RPG::Client::AvatarData* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARBYSLOT_OFFSET))(this, slotIndex, avatar);
		}

		::System::Void SetModifiedAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETMODIFIEDAVATARIDS_OFFSET))(this, avatarIDs);
		}

		::System::Void SetBuffID(::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_SETBUFFID_OFFSET))(this, buffID);
		}

		::RPG::GameCore::MazeBuffRow* GetBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETBUFF_OFFSET))(this);
		}

		::System::Void FillModifiedAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_FILLMODIFIEDAVATARBASEIDSTO_OFFSET))(this, avatarIDs);
		}

		::Class_1_735612C94F558EAE_9* GetModifiedLineup()
		{
			return ((::Class_1_735612C94F558EAE_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETMODIFIEDLINEUP_OFFSET))(this);
		}

		::Class_1_735612C94F558EAE_9* GetOriginLineup()
		{
			return ((::Class_1_735612C94F558EAE_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_GETORIGINLINEUP_OFFSET))(this);
		}

		::System::Boolean CheckTeamHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CHECKTEAMHASCHANGED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_RESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM_CLEAR_OFFSET))(this);
		}

		::System::Void _FillOriginAvatarsTo(::Il2CppArray<::RPG::Client::AvatarData*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARSTO_OFFSET))(this, buffer);
		}

		::System::Void _FillOriginAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAM__FILLORIGINAVATARBASEIDSTO_OFFSET))(this, buffer);
		}
	};
}
