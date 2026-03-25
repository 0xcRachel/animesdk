#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class ITeamBuildCalculator; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B9F860)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ALLTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0x9B9FAD0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B9F9C0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISSELECTEDRECOMMENDTAB_OFFSET UNITYSDK_OFFSET(0x9B9F9E0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_MYTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0x9B9FAB0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_SHOWEXPLAIN_OFFSET UNITYSDK_OFFSET(0x9B9FA00)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B9F800)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_REFRESH_OFFSET UNITYSDK_OFFSET(0x9B9F900)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ALLTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0x9B9FAE0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9B9F9D0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISSELECTEDRECOMMENDTAB_OFFSET UNITYSDK_OFFSET(0x9B9F9F0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_MYTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0x9B9FAC0)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9F810)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__REFRESH_B__4_0_OFFSET UNITYSDK_OFFSET(0x9B9FAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentTeamBuildBlock_TypeDefinitionIndex = 51346;

	class MessageContentTeamBuildBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* _AllTeamBuilds_k__BackingField; // 0x18
		::RPG::Client::ITeamBuildCalculator* _TeamBuildCalculator; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* _MyTeamBuilds_k__BackingField; // 0x28
		::System::Collections::Generic::IList_1<::System::UInt32>* _AvatarIDs; // 0x30
		::System::Boolean _IsDataReady_k__BackingField; // 0x38
		::System::Boolean _IsSelectedRecommendTab_k__BackingField; // 0x39

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__CTOR_OFFSET))(this, avatarIDs);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_REFRESH_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISDATAREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelectedRecommendTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISSELECTEDRECOMMENDTAB_OFFSET))(this);
		}

		::System::Void set_IsSelectedRecommendTab(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISSELECTEDRECOMMENDTAB_OFFSET))(this, value);
		}

		::System::Boolean get_ShowExplain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_SHOWEXPLAIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* get_MyTeamBuilds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_MYTEAMBUILDS_OFFSET))(this);
		}

		::System::Void set_MyTeamBuilds(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_MYTEAMBUILDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* get_AllTeamBuilds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ALLTEAMBUILDS_OFFSET))(this);
		}

		::System::Void set_AllTeamBuilds(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ALLTEAMBUILDS_OFFSET))(this, value);
		}

		::System::Void _Refresh_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__REFRESH_B__4_0_OFFSET))(this);
		}
	};
}
