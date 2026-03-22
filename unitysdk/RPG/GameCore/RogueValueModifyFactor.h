#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_METHOD_2_00AC1798FEA4212F_OFFSET UNITYSDK_OFFSET(0x16ED2A60)
#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED2BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueModifyFactor_TypeDefinitionIndex = 10165;

	class RogueValueModifyFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Double DirectAdditiveFactor; // 0x10
		::System::Double ScaleAdditiveFactor; // 0x18
		::System::Double ScaleMultiplicativeFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00AC1798FEA4212F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueValueModifyFactor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueValueModifyFactor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_METHOD_2_00AC1798FEA4212F_OFFSET))(a1, a2);
		}
	};
}
