#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_841;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_55DE9771CF4BE6E2_METHOD_1_71872A2900888972_OFFSET UNITYSDK_OFFSET(0x10607020)
#define CLASS_1_55DE9771CF4BE6E2_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x10607350)
#define CLASS_1_55DE9771CF4BE6E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10607390)
#define CLASS_1_55DE9771CF4BE6E2__CTOR_OFFSET UNITYSDK_OFFSET(0x10607380)

inline static constexpr unsigned int Class_1_55DE9771CF4BE6E2_TypeDefinitionIndex = 58650;

class Class_1_55DE9771CF4BE6E2 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_841** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_841**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55DE9771CF4BE6E2_TypeDefinitionIndex)->GetStaticField(0x12B90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_841*>* Method_1_71872A2900888972()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_841*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2_METHOD_1_71872A2900888972_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_841* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_841*(*)())((::PBYTE)hIl2Cpp + CLASS_1_55DE9771CF4BE6E2_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};
