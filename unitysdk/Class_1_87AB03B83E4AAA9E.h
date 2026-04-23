#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreAvatarTextmapConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x9958D10)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_0D4BE27138237887_OFFSET UNITYSDK_OFFSET(0x9958810)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9910040)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_62635E5D4431FA74_OFFSET UNITYSDK_OFFSET(0x99589C0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x98CA150)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_8471A8D896DE15CE_OFFSET UNITYSDK_OFFSET(0x9958730)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_9A3E77F4C51FD5DA_OFFSET UNITYSDK_OFFSET(0x9958D60)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x9958BD0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x99587B0)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9958B90)
#define CLASS_1_87AB03B83E4AAA9E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x9958C70)
#define CLASS_1_87AB03B83E4AAA9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x99590C0)

inline static constexpr unsigned int Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex = 13763;

class Class_1_87AB03B83E4AAA9E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x54A20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x54A28);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0x54A30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0xEC00);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87AB03B83E4AAA9E_TypeDefinitionIndex)->GetStaticField(0xEC01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>* Method_1_8471A8D896DE15CE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_8471A8D896DE15CE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*> Method_1_0D4BE27138237887()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarTextmapConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_0D4BE27138237887_OFFSET))();
	}

	static ::RPG::GameCore::PreAvatarTextmapConfigRow* Method_1_62635E5D4431FA74(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PreAvatarTextmapConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_62635E5D4431FA74_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9A3E77F4C51FD5DA(::RPG::GameCore::PreAvatarTextmapConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PreAvatarTextmapConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_87AB03B83E4AAA9E_METHOD_1_9A3E77F4C51FD5DA_OFFSET))(a1);
	}
};
