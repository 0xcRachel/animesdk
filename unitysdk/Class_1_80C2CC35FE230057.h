#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DFB79F7EE671BF59;
class Class_4_0FE2F2FA8B5CD496;
namespace RPG::GameCore { class DiceCombatPresetConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }

#define CLASS_1_80C2CC35FE230057_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EF8300)
#define CLASS_1_80C2CC35FE230057_METHOD_1_92F484A708D5922A_OFFSET UNITYSDK_OFFSET(0x15EF8970)
#define CLASS_1_80C2CC35FE230057_METHOD_1_96D8870595569B94_OFFSET UNITYSDK_OFFSET(0x15EF8AC0)
#define CLASS_1_80C2CC35FE230057_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15EF8770)
#define CLASS_1_80C2CC35FE230057_METHOD_1_B0AB85C4130308E5_OFFSET UNITYSDK_OFFSET(0x15EF87F0)
#define CLASS_1_80C2CC35FE230057__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF82F0)

inline static constexpr unsigned int Class_1_80C2CC35FE230057_TypeDefinitionIndex = 27828;

class Class_1_80C2CC35FE230057 : public ::System::Object
{
public:
	::RPG::GameCore::DiceCombatPresetConfig* Field_1_2; // 0x10
	::Class_4_0FE2F2FA8B5CD496* Field_1_0; // 0x18
	::Class_2_DFB79F7EE671BF59* Field_1_1; // 0x20

	::System::Void _ctor(::Class_4_0FE2F2FA8B5CD496* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0FE2F2FA8B5CD496*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatPresetTurnConfig* Method_1_B0AB85C4130308E5(::System::Int32 a1)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057_METHOD_1_B0AB85C4130308E5_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorConfig* Method_1_92F484A708D5922A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057_METHOD_1_92F484A708D5922A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* Method_1_96D8870595569B94(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80C2CC35FE230057_METHOD_1_96D8870595569B94_OFFSET))(this, a1, a2, a3);
	}
};
