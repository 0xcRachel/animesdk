#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_705B4D774F4E7B74_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18E06460)
#define CLASS_1_705B4D774F4E7B74_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x18E06490)
#define CLASS_1_705B4D774F4E7B74_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18E06450)
#define CLASS_1_705B4D774F4E7B74_METHOD_1_A7E171606F37263E_OFFSET UNITYSDK_OFFSET(0x18E06430)

inline static constexpr unsigned int Class_1_705B4D774F4E7B74_TypeDefinitionIndex = 9741;

class Class_1_705B4D774F4E7B74 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_705B4D774F4E7B74_TypeDefinitionIndex)->GetStaticField(0x7670);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_705B4D774F4E7B74_TypeDefinitionIndex)->GetStaticField(0x7674);
	}

	static ::System::Int32 Method_1_A7E171606F37263E(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_705B4D774F4E7B74_METHOD_1_A7E171606F37263E_OFFSET))(a1);
	}

	static ::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_705B4D774F4E7B74_METHOD_1_832295EC279E5994_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_705B4D774F4E7B74_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_705B4D774F4E7B74_METHOD_1_832295EC279E5994_1_OFFSET))();
	}
};
