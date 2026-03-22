#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_METHOD_4_5BAD996CF3374E82_OFFSET UNITYSDK_OFFSET(0x1690B880)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_METHOD_4_8D6730CD1A785C4C_OFFSET UNITYSDK_OFFSET(0x1690B950)
#define RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1690B900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFearCharacterCount_TypeDefinitionIndex = 18012;

	class ByCompareFearCharacterCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5BAD996CF3374E82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFearCharacterCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFearCharacterCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_METHOD_4_5BAD996CF3374E82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D6730CD1A785C4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFEARCHARACTERCOUNT_METHOD_4_8D6730CD1A785C4C_OFFSET))(a1, a2);
		}
	};
}
