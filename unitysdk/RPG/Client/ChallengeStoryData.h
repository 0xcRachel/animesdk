#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x17A54780)
#define RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x17A54730)
#define RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17A54680)
#define RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x17A54660)
#define RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x17A54670)
#define RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A34E60)
#define RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x17A54A10)
#define RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x17A54A00)
#define RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17A549D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryData_TypeDefinitionIndex = 59092;

	class ChallengeStoryData : public ::RPG::Client::ChallengeData
	{
	public:
		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* _StoryExtraInfoRow_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* get_StoryExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GET_STORYEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_StoryExtraInfoRow(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_SET_STORYEXTRAINFOROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID __iFixBaseProxy_GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* __iFixBaseProxy_GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* __iFixBaseProxy_GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYDATA___IFIXBASEPROXY_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}
	};
}
