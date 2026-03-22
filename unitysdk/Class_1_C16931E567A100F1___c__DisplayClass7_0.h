#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4D1D0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET UNITYSDK_OFFSET(0x15F55D00)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass7_0_TypeDefinitionIndex = 27772;

class Class_1_C16931E567A100F1___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x10
	::Class_1_C16931E567A100F1* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __AICheckNeedUseLimitedDice_b__0(::System::Int32 diceID, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS7_0___AICHECKNEEDUSELIMITEDDICE_B__0_OFFSET))(this, diceID, index);
	}
};
