#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_4_0A9C3ACEBDD936CC_OFFSET UNITYSDK_OFFSET(0x16C4F860)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_4_0CB74DA0D988D912_OFFSET UNITYSDK_OFFSET(0x16C4F6C0)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4F810)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyChessBoardTemplateRuleAction_TypeDefinitionIndex = 22166;

	class ApplyChessBoardTemplateRuleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* Mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0CB74DA0D988D912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_4_0CB74DA0D988D912_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0A9C3ACEBDD936CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_4_0A9C3ACEBDD936CC_OFFSET))(a1, a2);
		}
	};
}
