#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_4_6E7F926F667D8750_OFFSET UNITYSDK_OFFSET(0x16EB77B0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_4_D886A3F89E65F9F9_OFFSET UNITYSDK_OFFSET(0x16EB5D70)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParameterConfigBase_TypeDefinitionIndex = 17673;

	class RogueParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D886A3F89E65F9F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_4_D886A3F89E65F9F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E7F926F667D8750(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_4_6E7F926F667D8750_OFFSET))(a1, a2);
		}
	};
}
