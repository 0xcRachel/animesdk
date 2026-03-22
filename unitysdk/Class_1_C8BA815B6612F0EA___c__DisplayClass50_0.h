#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8BA815B6612F0EA;
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_C8BA815B6612F0EA___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111F5D90)
#define CLASS_1_C8BA815B6612F0EA___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x111F5F60)

inline static constexpr unsigned int Class_1_C8BA815B6612F0EA___c__DisplayClass50_0_TypeDefinitionIndex = 59933;

class Class_1_C8BA815B6612F0EA___c__DisplayClass50_0 : public ::System::Object
{
public:
	::Class_1_C8BA815B6612F0EA* __4__this; // 0x10
	::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8BA815B6612F0EA___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8BA815B6612F0EA___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
	}
};
