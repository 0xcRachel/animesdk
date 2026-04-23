#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8091A685934855C6;

#define CLASS_1_8091A685934855C6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0B30)
#define CLASS_1_8091A685934855C6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0B70)
#define CLASS_1_8091A685934855C6___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1A1B0B80)

inline static constexpr unsigned int Class_1_8091A685934855C6___c_TypeDefinitionIndex = 26903;

class Class_1_8091A685934855C6___c : public ::System::Object
{
public:
	static ::Class_1_8091A685934855C6___c** StaticGet___9()
	{
		return (::Class_1_8091A685934855C6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8091A685934855C6___c_TypeDefinitionIndex)->GetStaticField(0x9C50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8091A685934855C6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8091A685934855C6___C__CTOR_OFFSET))(this);
	}

	::Class_1_8091A685934855C6* __cctor_b__42_0()
	{
		return ((::Class_1_8091A685934855C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8091A685934855C6___C___CCTOR_B__42_0_OFFSET))(this);
	}
};
