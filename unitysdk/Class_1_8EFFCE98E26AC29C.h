#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC.h"
#include "unitysdk/System/Object.h"

class Class_1_3A031B4969E41A12;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8EFFCE98E26AC29C_METHOD_1_0E9E253EC7D87349_OFFSET UNITYSDK_OFFSET(0x86C8CB0)
#define CLASS_1_8EFFCE98E26AC29C_METHOD_1_565C3F3666F63ED5_OFFSET UNITYSDK_OFFSET(0x86C99D0)
#define CLASS_1_8EFFCE98E26AC29C_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x86C8F60)
#define CLASS_1_8EFFCE98E26AC29C_METHOD_1_BB2727DE2336FF19_OFFSET UNITYSDK_OFFSET(0x86C9D30)
#define CLASS_1_8EFFCE98E26AC29C_METHOD_1_D7408FC6B5B19660_OFFSET UNITYSDK_OFFSET(0x86C97A0)
#define CLASS_1_8EFFCE98E26AC29C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86CA090)
#define CLASS_1_8EFFCE98E26AC29C__CTOR_OFFSET UNITYSDK_OFFSET(0x86C8BF0)

inline static constexpr unsigned int Class_1_8EFFCE98E26AC29C_TypeDefinitionIndex = 55930;

class Class_1_8EFFCE98E26AC29C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EFFCE98E26AC29C_TypeDefinitionIndex)->GetStaticField(0xEC20);
	}
	::System::Collections::Generic::List_1<::Class_1_3A031B4969E41A12*>* Field_1_3; // 0x10
	::Il2CppArray<::Class_1_8EFFCE98E26AC29C*>* Field_1_4; // 0x18
	::Struct_2_3BFB14B0511B64BC Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x30
	::System::Int32 Field_1_2; // 0x34

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0E9E253EC7D87349(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C_METHOD_1_0E9E253EC7D87349_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7408FC6B5B19660(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C_METHOD_1_D7408FC6B5B19660_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_1_565C3F3666F63ED5(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C_METHOD_1_565C3F3666F63ED5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB2727DE2336FF19(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8EFFCE98E26AC29C_METHOD_1_BB2727DE2336FF19_OFFSET))(this, a1, a2);
	}
};
