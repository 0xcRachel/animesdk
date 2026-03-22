#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_832;
class Class_0_16E4307DCC419505_833;
class Class_1_96755BD61CBCF580;
class Class_1_96755BD61CBCF580_1;
class Class_2_60E1BEC55B96577C;
class Class_2_E55AE8831AAE79EB_1;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_D21783A341DD4A43_METHOD_1_241FCB0507EB9FA1_1_OFFSET UNITYSDK_OFFSET(0xFE15D40)
#define CLASS_1_D21783A341DD4A43_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xFE15D00)
#define CLASS_1_D21783A341DD4A43_METHOD_1_C7327694C66EB3DF_OFFSET UNITYSDK_OFFSET(0xFE15AC0)
#define CLASS_1_D21783A341DD4A43_METHOD_1_E464A7213ED5D2E8_1_OFFSET UNITYSDK_OFFSET(0xFE16160)
#define CLASS_1_D21783A341DD4A43_METHOD_1_E464A7213ED5D2E8_OFFSET UNITYSDK_OFFSET(0xFE15D80)
#define CLASS_1_D21783A341DD4A43__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE16540)
#define CLASS_1_D21783A341DD4A43__CTOR_OFFSET UNITYSDK_OFFSET(0xFE15A40)

inline static constexpr unsigned int Class_1_D21783A341DD4A43_TypeDefinitionIndex = 58316;

class Class_1_D21783A341DD4A43 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_833** StaticGet_Field_1_4()
	{
		return (::Class_0_16E4307DCC419505_833**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D21783A341DD4A43_TypeDefinitionIndex)->GetStaticField(0xFB60);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_833*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_833*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D21783A341DD4A43_TypeDefinitionIndex)->GetStaticField(0xFB68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_832*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_832*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D21783A341DD4A43_TypeDefinitionIndex)->GetStaticField(0xFB70);
	}
	static ::Class_0_16E4307DCC419505_832** StaticGet_Field_1_2()
	{
		return (::Class_0_16E4307DCC419505_832**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D21783A341DD4A43_TypeDefinitionIndex)->GetStaticField(0xFB78);
	}
	::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580_1*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580*>* Field_1_0; // 0x18

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580_1*>* Method_1_241FCB0507EB9FA1_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_96755BD61CBCF580_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43_METHOD_1_241FCB0507EB9FA1_1_OFFSET))(this);
	}

	::System::Void Method_1_C7327694C66EB3DF(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43_METHOD_1_C7327694C66EB3DF_OFFSET))(this, a1);
	}

	::Class_1_96755BD61CBCF580* Method_1_E464A7213ED5D2E8(::System::Reflection::MethodInfo* a1, ::Class_2_60E1BEC55B96577C* a2)
	{
		return ((::Class_1_96755BD61CBCF580*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Class_2_60E1BEC55B96577C*))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43_METHOD_1_E464A7213ED5D2E8_OFFSET))(this, a1, a2);
	}

	::Class_1_96755BD61CBCF580_1* Method_1_E464A7213ED5D2E8_1(::System::Reflection::MethodInfo* a1, ::Class_2_E55AE8831AAE79EB_1* a2)
	{
		return ((::Class_1_96755BD61CBCF580_1*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Class_2_E55AE8831AAE79EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_D21783A341DD4A43_METHOD_1_E464A7213ED5D2E8_1_OFFSET))(this, a1, a2);
	}
};
