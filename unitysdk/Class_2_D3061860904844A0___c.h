#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_780;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D3061860904844A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DCA020)
#define CLASS_2_D3061860904844A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCA050)
#define CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET UNITYSDK_OFFSET(0x10DCA060)

inline static constexpr unsigned int Class_2_D3061860904844A0___c_TypeDefinitionIndex = 57171;

class Class_2_D3061860904844A0___c : public ::System::Object
{
public:
	static ::Class_2_D3061860904844A0___c** StaticGet___9()
	{
		return (::Class_2_D3061860904844A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x26770);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_780*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_780*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x26778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortSubPanels_b__8_0(::Class_0_16E4307DCC419505_780* pa, ::Class_0_16E4307DCC419505_780* pb)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_780*, ::Class_0_16E4307DCC419505_780*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET))(this, pa, pb);
	}
};
