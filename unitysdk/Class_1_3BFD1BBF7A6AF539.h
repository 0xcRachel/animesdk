#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08A4000B9BACFCF6;
class Class_1_F0054AC3F0D34041;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatRollDiceEffectParameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_1C62453C3F38D037_OFFSET UNITYSDK_OFFSET(0x115C9930)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_71F791675693F9C2_OFFSET UNITYSDK_OFFSET(0x115C9B20)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_7445215661C9D65B_OFFSET UNITYSDK_OFFSET(0x115C9870)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x115C9AE0)
#define CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET UNITYSDK_OFFSET(0x115C9860)

inline static constexpr unsigned int Class_1_3BFD1BBF7A6AF539_TypeDefinitionIndex = 61934;

class Class_1_3BFD1BBF7A6AF539 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::Class_1_08A4000B9BACFCF6* Field_1_2; // 0x18
	::Class_1_F0054AC3F0D34041* Field_1_0; // 0x20
	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_F0054AC3F0D34041* a1, ::Class_1_08A4000B9BACFCF6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0054AC3F0D34041*, ::Class_1_08A4000B9BACFCF6*))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_7445215661C9D65B()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_7445215661C9D65B_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_1C62453C3F38D037()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_1C62453C3F38D037_OFFSET))(this);
	}

	::Class_1_08A4000B9BACFCF6* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_08A4000B9BACFCF6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* Method_1_71F791675693F9C2()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_71F791675693F9C2_OFFSET))(this);
	}
};
