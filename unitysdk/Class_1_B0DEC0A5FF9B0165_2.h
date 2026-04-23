#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_92C4F468C62D6105;

#define CLASS_1_B0DEC0A5FF9B0165_2_METHOD_1_076FEE641C2B6499_OFFSET UNITYSDK_OFFSET(0xEC974D0)
#define CLASS_1_B0DEC0A5FF9B0165_2_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xEC97460)
#define CLASS_1_B0DEC0A5FF9B0165_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC97590)
#define CLASS_1_B0DEC0A5FF9B0165_2__CTOR_OFFSET UNITYSDK_OFFSET(0xEC974C0)

inline static constexpr unsigned int Class_1_B0DEC0A5FF9B0165_2_TypeDefinitionIndex = 69332;

class Class_1_B0DEC0A5FF9B0165_2 : public ::System::Object
{
public:
	static ::Class_1_B0DEC0A5FF9B0165_2** StaticGet_Field_1_0()
	{
		return (::Class_1_B0DEC0A5FF9B0165_2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0DEC0A5FF9B0165_2_TypeDefinitionIndex)->GetStaticField(0x56730);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_2__CCTOR_OFFSET))();
	}

	static ::Class_1_B0DEC0A5FF9B0165_2* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_B0DEC0A5FF9B0165_2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_2_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_076FEE641C2B6499(::Class_2_92C4F468C62D6105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92C4F468C62D6105*))((::PBYTE)hIl2Cpp + CLASS_1_B0DEC0A5FF9B0165_2_METHOD_1_076FEE641C2B6499_OFFSET))(this, a1);
	}
};
