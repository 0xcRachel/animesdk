#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseBubbleMonoView.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceGameplayBubbleType.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9514030)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_1_OFFSET UNITYSDK_OFFSET(0x95152B0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_OFFSET UNITYSDK_OFFSET(0x9515250)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x95152A0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSupportBubbleMonoView_TypeDefinitionIndex = 61414;

	class CakeRaceSupportBubbleMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseBubbleMonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_6_EF185F49BB791B59()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_GETANCHORTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType Method_6_EF185F49BB791B59_1()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceGameplayBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTBUBBLEMONOVIEW_METHOD_6_EF185F49BB791B59_1_OFFSET))(this);
		}
	};
}
