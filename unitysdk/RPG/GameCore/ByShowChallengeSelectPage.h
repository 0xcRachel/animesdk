#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET UNITYSDK_OFFSET(0x19E691E0)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_90D6BE26CFB010A3_OFFSET UNITYSDK_OFFSET(0x19E69110)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_9108B92F7A0A6B82_OFFSET UNITYSDK_OFFSET(0x19E693A0)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_DB0AAE35BAE3F66A_OFFSET UNITYSDK_OFFSET(0x19E69320)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E69190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByShowChallengeSelectPage_TypeDefinitionIndex = 19334;

	class ByShowChallengeSelectPage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90D6BE26CFB010A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_90D6BE26CFB010A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30F48E026D1F8A29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_30F48E026D1F8A29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB0AAE35BAE3F66A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_DB0AAE35BAE3F66A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9108B92F7A0A6B82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_METHOD_4_9108B92F7A0A6B82_OFFSET))(a1, a2);
		}
	};
}
