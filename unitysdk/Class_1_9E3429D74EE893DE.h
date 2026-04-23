#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E3429D74EE893DE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x180AA4A0)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_17584E538472913D_OFFSET UNITYSDK_OFFSET(0x180AA100)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x180AA2C0)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x180A9CA0)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_7DDF2DA4A098CE86_OFFSET UNITYSDK_OFFSET(0x180A9C20)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_9EF53DD38E788F53_OFFSET UNITYSDK_OFFSET(0x180A9F50)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x180AA360)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x180A9EF0)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_D0615D3C3E27E453_OFFSET UNITYSDK_OFFSET(0x180AA4F0)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x180AA280)
#define CLASS_1_9E3429D74EE893DE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x180AA400)
#define CLASS_1_9E3429D74EE893DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180AA800)

inline static constexpr unsigned int Class_1_9E3429D74EE893DE_TypeDefinitionIndex = 13720;

class Class_1_9E3429D74EE893DE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3429D74EE893DE_TypeDefinitionIndex)->GetStaticField(0x3ECB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3429D74EE893DE_TypeDefinitionIndex)->GetStaticField(0x3ECB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3429D74EE893DE_TypeDefinitionIndex)->GetStaticField(0x3ECC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3429D74EE893DE_TypeDefinitionIndex)->GetStaticField(0xC730);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3429D74EE893DE_TypeDefinitionIndex)->GetStaticField(0xC731);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>* Method_1_7DDF2DA4A098CE86()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_7DDF2DA4A098CE86_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*> Method_1_9EF53DD38E788F53()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_9EF53DD38E788F53_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnConfigRow* Method_1_17584E538472913D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_17584E538472913D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0615D3C3E27E453(::RPG::GameCore::PlayerReturnConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9E3429D74EE893DE_METHOD_1_D0615D3C3E27E453_OFFSET))(a1);
	}
};
