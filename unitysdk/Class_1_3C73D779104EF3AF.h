#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UniquePropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3C73D779104EF3AF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BA7300)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BA7120)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_509303615ABD6BE5_OFFSET UNITYSDK_OFFSET(0x16BA7350)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BA6A90)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_8C6A1DB021E96C8C_OFFSET UNITYSDK_OFFSET(0x16BA6EF0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_A596E4BB7346E8E0_OFFSET UNITYSDK_OFFSET(0x16BA6D40)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BA71C0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_C659EA18492B4EA7_OFFSET UNITYSDK_OFFSET(0x16BA6A10)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BA6CE0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BA70E0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BA7260)
#define CLASS_1_3C73D779104EF3AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA76B0)

inline static constexpr unsigned int Class_1_3C73D779104EF3AF_TypeDefinitionIndex = 11957;

class Class_1_3C73D779104EF3AF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x3AD00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x3AD08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x3AD10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0xEEF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0xEEF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>* Method_1_C659EA18492B4EA7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_C659EA18492B4EA7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*> Method_1_A596E4BB7346E8E0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_A596E4BB7346E8E0_OFFSET))();
	}

	static ::RPG::GameCore::UniquePropRow* Method_1_8C6A1DB021E96C8C(::System::String* a1)
	{
		return ((::RPG::GameCore::UniquePropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_8C6A1DB021E96C8C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_509303615ABD6BE5(::RPG::GameCore::UniquePropRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::UniquePropRow*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_509303615ABD6BE5_OFFSET))(a1);
	}
};
