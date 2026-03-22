#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_4_BBF30D6B3F22E7CF_OFFSET UNITYSDK_OFFSET(0x16C50FE0)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_4_CF3F306AB1293F89_OFFSET UNITYSDK_OFFSET(0x16C511A0)
#define RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C51150)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int GemPouchExistsCondition_TypeDefinitionIndex = 22153;

	class GemPouchExistsCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBF30D6B3F22E7CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::GemPouchExistsCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_4_BBF30D6B3F22E7CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF3F306AB1293F89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::GemPouchExistsCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::GemPouchExistsCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_GEMPOUCHEXISTSCONDITION_METHOD_4_CF3F306AB1293F89_OFFSET))(a1, a2);
		}
	};
}
