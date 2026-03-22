#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_5_23C324CBD6B30230_OFFSET UNITYSDK_OFFSET(0x16E64090)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_5_2F67CEA72E5AE1D9_OFFSET UNITYSDK_OFFSET(0x16E85DE0)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicConditionConfigBase_TypeDefinitionIndex = 17527;

	class RogueMagicConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2F67CEA72E5AE1D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_5_2F67CEA72E5AE1D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_23C324CBD6B30230(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_5_23C324CBD6B30230_OFFSET))(a1, a2);
		}
	};
}
