#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_544DA5C0859B476B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0AC4B04FB09A0860_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8A33700)
#define CLASS_1_0AC4B04FB09A0860__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A337E0)

inline static constexpr unsigned int Class_1_0AC4B04FB09A0860_TypeDefinitionIndex = 46637;

class Class_1_0AC4B04FB09A0860 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_544DA5C0859B476B*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_544DA5C0859B476B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0xA130);
	}
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0xA138);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0x31C0);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0x31C4);
	}
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0x31C8);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC4B04FB09A0860_TypeDefinitionIndex)->GetStaticField(0x31CC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC4B04FB09A0860__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC4B04FB09A0860_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}
};
