#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET UNITYSDK_OFFSET(0x19DB67B0)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_567EA6E13037C8CD_OFFSET UNITYSDK_OFFSET(0x19DB6920)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_88CE9E9EBC9EF094_OFFSET UNITYSDK_OFFSET(0x19DB66E0)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_F6BE036F91F1DF19_OFFSET UNITYSDK_OFFSET(0x19DB69A0)
#define RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTutorialFinish_TypeDefinitionIndex = 23030;

	class ByIsTutorialFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88CE9E9EBC9EF094(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_88CE9E9EBC9EF094_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54E934475116746E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_567EA6E13037C8CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_567EA6E13037C8CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6BE036F91F1DF19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_F6BE036F91F1DF19_OFFSET))(a1, a2);
		}
	};
}
