#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DAC119B051861C6D;

#define CLASS_1_4220F13A764D7D44___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1606D7A0)
#define CLASS_1_4220F13A764D7D44___C__DISPLAYCLASS15_0__REMOVEMODIFIERBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1606DD80)

inline static constexpr unsigned int Class_1_4220F13A764D7D44___c__DisplayClass15_0_TypeDefinitionIndex = 27588;

class Class_1_4220F13A764D7D44___c__DisplayClass15_0 : public ::System::Object
{
public:
	::System::UInt32 modifierID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveModifierByID_b__0(::Class_1_DAC119B051861C6D* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DAC119B051861C6D*))((::PBYTE)hIl2Cpp + CLASS_1_4220F13A764D7D44___C__DISPLAYCLASS15_0__REMOVEMODIFIERBYID_B__0_OFFSET))(this, modifier);
	}
};
