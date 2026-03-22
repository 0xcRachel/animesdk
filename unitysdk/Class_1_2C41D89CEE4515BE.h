#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_245;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2C41D89CEE4515BE_METHOD_1_41055516364D36FC_OFFSET UNITYSDK_OFFSET(0x17B754A0)
#define CLASS_1_2C41D89CEE4515BE_METHOD_1_DF193DDA46FA2549_OFFSET UNITYSDK_OFFSET(0x17B751E0)
#define CLASS_1_2C41D89CEE4515BE_METHOD_1_E589529A9F7939C8_OFFSET UNITYSDK_OFFSET(0x17B756E0)
#define CLASS_1_2C41D89CEE4515BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B75420)

inline static constexpr unsigned int Class_1_2C41D89CEE4515BE_TypeDefinitionIndex = 33010;

class Class_1_2C41D89CEE4515BE : public ::System::Object
{
public:
	static ::Class_1_2C41D89CEE4515BE** StaticGet_Field_1_0()
	{
		return (::Class_1_2C41D89CEE4515BE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C41D89CEE4515BE_TypeDefinitionIndex)->GetStaticField(0x2B3A0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C41D89CEE4515BE__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_245* Method_1_DF193DDA46FA2549()
	{
		return ((::Class_0_16E4307DCC419505_245*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C41D89CEE4515BE_METHOD_1_DF193DDA46FA2549_OFFSET))();
	}

	::System::Object* Method_1_41055516364D36FC(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_2C41D89CEE4515BE_METHOD_1_41055516364D36FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E589529A9F7939C8(::System::Type* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2C41D89CEE4515BE_METHOD_1_E589529A9F7939C8_OFFSET))(this, a1, a2);
	}
};
