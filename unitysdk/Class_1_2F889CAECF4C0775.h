#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatShopGoodsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F889CAECF4C0775_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16759CA0)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_1229715F76F34C5F_OFFSET UNITYSDK_OFFSET(0x16759660)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16759AC0)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_5301F2FFFCE8F771_OFFSET UNITYSDK_OFFSET(0x167595A0)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_5B51A17DF8DE873E_OFFSET UNITYSDK_OFFSET(0x167593F0)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16759870)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16759B60)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16759390)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_DF3C13CBE16CCE15_OFFSET UNITYSDK_OFFSET(0x16759310)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16759830)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16759C00)
#define CLASS_1_2F889CAECF4C0775_METHOD_1_FC8EB6C680A977DB_OFFSET UNITYSDK_OFFSET(0x16759F10)
#define CLASS_1_2F889CAECF4C0775__CCTOR_OFFSET UNITYSDK_OFFSET(0x1675A270)

inline static constexpr unsigned int Class_1_2F889CAECF4C0775_TypeDefinitionIndex = 10460;

class Class_1_2F889CAECF4C0775 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F889CAECF4C0775_TypeDefinitionIndex)->GetStaticField(0x1A280);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F889CAECF4C0775_TypeDefinitionIndex)->GetStaticField(0x1A288);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F889CAECF4C0775_TypeDefinitionIndex)->GetStaticField(0x1A290);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F889CAECF4C0775_TypeDefinitionIndex)->GetStaticField(0x6170);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F889CAECF4C0775_TypeDefinitionIndex)->GetStaticField(0x6171);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>* Method_1_DF3C13CBE16CCE15()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_DF3C13CBE16CCE15_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*> Method_1_5B51A17DF8DE873E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_5B51A17DF8DE873E_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*> Method_1_5301F2FFFCE8F771()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_5301F2FFFCE8F771_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatShopGoodsRow* Method_1_1229715F76F34C5F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatShopGoodsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_1229715F76F34C5F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC8EB6C680A977DB(::RPG::GameCore::ActivityDiceCombatShopGoodsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatShopGoodsRow*))((::PBYTE)hIl2Cpp + CLASS_1_2F889CAECF4C0775_METHOD_1_FC8EB6C680A977DB_OFFSET))(a1);
	}
};
