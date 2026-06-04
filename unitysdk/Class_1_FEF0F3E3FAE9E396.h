#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialNpcRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x192E9C10)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192E9A40)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_93BE9A1566088063_OFFSET UNITYSDK_OFFSET(0x192E9680)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_95BE3E6E8470FC72_OFFSET UNITYSDK_OFFSET(0x192E97F0)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192E9AD0)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_C8284CF09A333CF6_OFFSET UNITYSDK_OFFSET(0x192E9C60)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192E9620)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_D12BDF776A5FBF6A_OFFSET UNITYSDK_OFFSET(0x192E9370)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192E93F0)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192E9A00)
#define CLASS_1_FEF0F3E3FAE9E396_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192E9B70)
#define CLASS_1_FEF0F3E3FAE9E396__CCTOR_OFFSET UNITYSDK_OFFSET(0x192EA030)

inline static constexpr unsigned int Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex = 13079;

class Class_1_FEF0F3E3FAE9E396 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex)->GetStaticField(0x44650);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex)->GetStaticField(0x44658);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex)->GetStaticField(0x44660);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex)->GetStaticField(0xD280);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF0F3E3FAE9E396_TypeDefinitionIndex)->GetStaticField(0xD281);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*>* Method_1_D12BDF776A5FBF6A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_D12BDF776A5FBF6A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*> Method_1_93BE9A1566088063()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialNpcRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_93BE9A1566088063_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialNpcRow* Method_1_95BE3E6E8470FC72(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::HeartDialNpcRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_95BE3E6E8470FC72_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8284CF09A333CF6(::RPG::GameCore::HeartDialNpcRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialNpcRow*))((::PBYTE)hIl2Cpp + CLASS_1_FEF0F3E3FAE9E396_METHOD_1_C8284CF09A333CF6_OFFSET))(a1);
	}
};
