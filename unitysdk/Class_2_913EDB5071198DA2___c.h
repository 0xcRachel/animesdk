#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_670;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_913EDB5071198DA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17030EE0)
#define CLASS_2_913EDB5071198DA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17030F20)
#define CLASS_2_913EDB5071198DA2___C___ONPLAYERFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0x17030F30)

inline static constexpr unsigned int Class_2_913EDB5071198DA2___c_TypeDefinitionIndex = 69290;

class Class_2_913EDB5071198DA2___c : public ::System::Object
{
public:
	static ::Class_2_913EDB5071198DA2___c** StaticGet___9()
	{
		return (::Class_2_913EDB5071198DA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_913EDB5071198DA2___c_TypeDefinitionIndex)->GetStaticField(0x61C70);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_670*>** StaticGet___9__32_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_670*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_913EDB5071198DA2___c_TypeDefinitionIndex)->GetStaticField(0x61C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C__CTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_670* __OnPlayerFinish_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::Class_1_D17272E82AE804C2_670*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C___ONPLAYERFINISH_B__32_0_OFFSET))(this, a1);
	}
};
