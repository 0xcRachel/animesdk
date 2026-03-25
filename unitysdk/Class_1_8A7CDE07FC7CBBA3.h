#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x170EEDC0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0F2918D534DE7104_OFFSET UNITYSDK_OFFSET(0x170EE800)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170EEBE0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170EE550)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170EEC80)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_B1CA7B56957D1D31_OFFSET UNITYSDK_OFFSET(0x170EEE10)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CA9D9EF85F4EEC63_OFFSET UNITYSDK_OFFSET(0x170EE4D0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170EE7A0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_E8E898D9FFC18CF0_OFFSET UNITYSDK_OFFSET(0x170EE9B0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170EEBA0)
#define CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170EED20)
#define CLASS_1_8A7CDE07FC7CBBA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x170EF170)

inline static constexpr unsigned int Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex = 11949;

class Class_1_8A7CDE07FC7CBBA3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x1E3D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x1E3D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0x1E3E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0xA2B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A7CDE07FC7CBBA3_TypeDefinitionIndex)->GetStaticField(0xA2B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>* Method_1_CA9D9EF85F4EEC63()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CA9D9EF85F4EEC63_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*> Method_1_0F2918D534DE7104()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0F2918D534DE7104_OFFSET))();
	}

	static ::RPG::GameCore::CutSceneConfigRow* Method_1_E8E898D9FFC18CF0(::System::String* a1)
	{
		return ((::RPG::GameCore::CutSceneConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_E8E898D9FFC18CF0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1CA7B56957D1D31(::RPG::GameCore::CutSceneConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8A7CDE07FC7CBBA3_METHOD_1_B1CA7B56957D1D31_OFFSET))(a1);
	}
};
