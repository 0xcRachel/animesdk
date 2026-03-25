#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_5493D50ED17FEBC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA76D40)
#define CLASS_2_5493D50ED17FEBC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA76D80)
#define CLASS_2_5493D50ED17FEBC9___C___TRYGETPROPERTYDESC_B__7_0_OFFSET UNITYSDK_OFFSET(0xEA76D90)

inline static constexpr unsigned int Class_2_5493D50ED17FEBC9___c_TypeDefinitionIndex = 53021;

class Class_2_5493D50ED17FEBC9___c : public ::System::Object
{
public:
	static ::Class_2_5493D50ED17FEBC9___c** StaticGet___9()
	{
		return (::Class_2_5493D50ED17FEBC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5493D50ED17FEBC9___c_TypeDefinitionIndex)->GetStaticField(0x47E0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5493D50ED17FEBC9___c_TypeDefinitionIndex)->GetStaticField(0x47E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryGetPropertyDesc_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> x)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9___C___TRYGETPROPERTYDESC_B__7_0_OFFSET))(this, x);
	}
};
