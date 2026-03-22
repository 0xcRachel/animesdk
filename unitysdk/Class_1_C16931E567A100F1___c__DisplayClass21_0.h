#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1;
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F53580)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x15F559D0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__1_OFFSET UNITYSDK_OFFSET(0x15F55A20)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__2_OFFSET UNITYSDK_OFFSET(0x15F55A40)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__3_OFFSET UNITYSDK_OFFSET(0x15F55A60)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__4_OFFSET UNITYSDK_OFFSET(0x15F55A90)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass21_0_TypeDefinitionIndex = 27767;

class Class_1_C16931E567A100F1___c__DisplayClass21_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* diceResults; // 0x10
	::System::Collections::BitArray* maxRerollBits; // 0x18
	::Class_1_C16931E567A100F1* __4__this; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* diceIndexs; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __calcAIRerollInfo_b__0(::System::Int32 diceID, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__0_OFFSET))(this, diceID, index);
	}

	::System::Boolean __calcAIRerollInfo_b__1(::System::Int32 i)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__1_OFFSET))(this, i);
	}

	::System::Boolean __calcAIRerollInfo_b__2(::System::Int32 i)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__2_OFFSET))(this, i);
	}

	::System::Int32 __calcAIRerollInfo_b__3(::System::Int32 i)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__3_OFFSET))(this, i);
	}

	::System::Int32 __calcAIRerollInfo_b__4(::System::Int32 i)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS21_0___CALCAIREROLLINFO_B__4_OFFSET))(this, i);
	}
};
