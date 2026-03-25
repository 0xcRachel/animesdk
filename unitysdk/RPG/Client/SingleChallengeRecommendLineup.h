#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C11C261870F1926_4;
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA4A5020)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA4A4BE0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0xA4A4DC0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0xA4A4EF0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_BUFF1ID_OFFSET UNITYSDK_OFFSET(0xA4A5490)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_BUFF2ID_OFFSET UNITYSDK_OFFSET(0xA4A54E0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xA4A55E0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xA4A53A0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xA4A5340)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA4A52E0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_LINEUPCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A5580)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xA4A5220)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xA4A5640)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0xA4A50F0)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_STARSNUM_OFFSET UNITYSDK_OFFSET(0xA4A5530)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_UID_OFFSET UNITYSDK_OFFSET(0xA4A5280)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xA4A5650)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_SYNC_OFFSET UNITYSDK_OFFSET(0xA4A4B60)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP__CREATEEMPTYLINEUP_OFFSET UNITYSDK_OFFSET(0xA4A4D10)
#define RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A4AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleChallengeRecommendLineup_TypeDefinitionIndex = 51223;

	class SingleChallengeRecommendLineup : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_TEAM_MEMBER_COUNT = 0x4; // 0x0
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x10
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo; // 0x18
		::Class_1_7C11C261870F1926_4* _RowInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_7C11C261870F1926_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_SYNC_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARIDS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARLEVELS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETLINEUPAVATARSKINIDS_OFFSET))(this, lineupIndex);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HEADICONID_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::UInt32 get_Buff1ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_BUFF1ID_OFFSET))(this);
		}

		::System::UInt32 get_Buff2ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_BUFF2ID_OFFSET))(this);
		}

		::System::UInt32 get_StarsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_STARSNUM_OFFSET))(this);
		}

		::System::Int32 get_LineupCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_LINEUPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_HASREMARKNAME_OFFSET))(this);
		}

		::System::String* get_RemarkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_REMARKNAME_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_NICKNAME_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP_SET_PLATFORMINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CreateEmptyLineup()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLECHALLENGERECOMMENDLINEUP__CREATEEMPTYLINEUP_OFFSET))(this);
		}
	};
}
