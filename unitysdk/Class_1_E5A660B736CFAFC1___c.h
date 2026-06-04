#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E5A660B736CFAFC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1E7720)
#define CLASS_1_E5A660B736CFAFC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E7750)
#define CLASS_1_E5A660B736CFAFC1___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x1B1E7760)

inline static constexpr unsigned int Class_1_E5A660B736CFAFC1___c_TypeDefinitionIndex = 40495;

class Class_1_E5A660B736CFAFC1___c : public ::System::Object
{
public:
	static ::Class_1_E5A660B736CFAFC1___c** StaticGet___9()
	{
		return (::Class_1_E5A660B736CFAFC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A660B736CFAFC1___c_TypeDefinitionIndex)->GetStaticField(0x4DA40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* __cctor_b__49_0()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1___C___CCTOR_B__49_0_OFFSET))(this);
	}
};
