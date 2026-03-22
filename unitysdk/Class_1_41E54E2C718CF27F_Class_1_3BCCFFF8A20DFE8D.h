#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ABA989E5AECB261;

#define CLASS_1_41E54E2C718CF27F_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15F1CAA0)
#define CLASS_1_41E54E2C718CF27F_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1B700)

inline static constexpr unsigned int Class_1_41E54E2C718CF27F_Class_1_3BCCFFF8A20DFE8D_TypeDefinitionIndex = 28060;

class Class_1_41E54E2C718CF27F_Class_1_3BCCFFF8A20DFE8D : public ::System::Object
{
public:
	::Class_2_3ABA989E5AECB261* Field_1_4; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E54E2C718CF27F_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_41E54E2C718CF27F_Class_1_3BCCFFF8A20DFE8D* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_41E54E2C718CF27F_Class_1_3BCCFFF8A20DFE8D*))((::PBYTE)hIl2Cpp + CLASS_1_41E54E2C718CF27F_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET))(this, a1);
	}
};
