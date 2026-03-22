#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_4_E50D37E930B760C2_OFFSET UNITYSDK_OFFSET(0x16E63BC0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_4_E9EA470DFA7BE1CB_OFFSET UNITYSDK_OFFSET(0x16E625E0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConditionConfigBase_TypeDefinitionIndex = 17657;

	class RogueConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9EA470DFA7BE1CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_4_E9EA470DFA7BE1CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E50D37E930B760C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_4_E50D37E930B760C2_OFFSET))(a1, a2);
		}
	};
}
