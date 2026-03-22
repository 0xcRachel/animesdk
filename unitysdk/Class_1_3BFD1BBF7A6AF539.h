#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08A4000B9BACFCF6;
class Class_1_A2B5EC56C7F63653;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatRollDiceEffectParameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_4FA0690D0CDDC864_OFFSET UNITYSDK_OFFSET(0xEEA9260)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_A3F4D9BE3DFC18D4_OFFSET UNITYSDK_OFFSET(0xEEA9480)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xEEA9440)
#define CLASS_1_3BFD1BBF7A6AF539_METHOD_1_FB5ABBB62DEA36B9_OFFSET UNITYSDK_OFFSET(0xEEA92F0)
#define CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET UNITYSDK_OFFSET(0xEEA9250)

inline static constexpr unsigned int Class_1_3BFD1BBF7A6AF539_TypeDefinitionIndex = 60153;

class Class_1_3BFD1BBF7A6AF539 : public ::System::Object
{
public:
	::Class_1_08A4000B9BACFCF6* Field_1_2; // 0x10
	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::Class_1_A2B5EC56C7F63653* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_A2B5EC56C7F63653* a1, ::Class_1_08A4000B9BACFCF6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2B5EC56C7F63653*, ::Class_1_08A4000B9BACFCF6*))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_4FA0690D0CDDC864()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_4FA0690D0CDDC864_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_FB5ABBB62DEA36B9()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_FB5ABBB62DEA36B9_OFFSET))(this);
	}

	::Class_1_08A4000B9BACFCF6* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_08A4000B9BACFCF6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* Method_1_A3F4D9BE3DFC18D4()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BFD1BBF7A6AF539_METHOD_1_A3F4D9BE3DFC18D4_OFFSET))(this);
	}
};
