#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D3061860904844A0_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10994390)
#define CLASS_2_D3061860904844A0_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109943C0)
#define CLASS_2_D3061860904844A0_1___C___SORTSUBPANELS_B__9_0_OFFSET UNITYSDK_OFFSET(0x109943D0)

inline static constexpr unsigned int Class_2_D3061860904844A0_1___c_TypeDefinitionIndex = 57629;

class Class_2_D3061860904844A0_1___c : public ::System::Object
{
public:
	static ::Class_2_D3061860904844A0_1___c** StaticGet___9()
	{
		return (::Class_2_D3061860904844A0_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0_1___c_TypeDefinitionIndex)->GetStaticField(0x40660);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_799*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_799*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0_1___c_TypeDefinitionIndex)->GetStaticField(0x40668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortSubPanels_b__9_0(::Class_0_16E4307DCC419505_799* pa, ::Class_0_16E4307DCC419505_799* pb)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_799*, ::Class_0_16E4307DCC419505_799*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_1___C___SORTSUBPANELS_B__9_0_OFFSET))(this, pa, pb);
	}
};
