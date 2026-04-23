#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeonMapConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E5A2FA39982C3B98_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x189313F0)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_22E3F8317DE06E1D_OFFSET UNITYSDK_OFFSET(0x18930E50)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18931210)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18930BA0)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_7EA4E938D6449A70_OFFSET UNITYSDK_OFFSET(0x18931440)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_8AC91AA2264AA0F4_OFFSET UNITYSDK_OFFSET(0x18930B20)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x189312B0)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18930DF0)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_E0FD7AB00C881B0A_OFFSET UNITYSDK_OFFSET(0x18931000)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x189311D0)
#define CLASS_1_E5A2FA39982C3B98_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18931350)
#define CLASS_1_E5A2FA39982C3B98__CCTOR_OFFSET UNITYSDK_OFFSET(0x189317A0)

inline static constexpr unsigned int Class_1_E5A2FA39982C3B98_TypeDefinitionIndex = 11825;

class Class_1_E5A2FA39982C3B98 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A2FA39982C3B98_TypeDefinitionIndex)->GetStaticField(0x37830);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A2FA39982C3B98_TypeDefinitionIndex)->GetStaticField(0x37838);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A2FA39982C3B98_TypeDefinitionIndex)->GetStaticField(0x37840);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A2FA39982C3B98_TypeDefinitionIndex)->GetStaticField(0xA8E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A2FA39982C3B98_TypeDefinitionIndex)->GetStaticField(0xA8E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>* Method_1_8AC91AA2264AA0F4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_8AC91AA2264AA0F4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*> Method_1_22E3F8317DE06E1D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonMapConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_22E3F8317DE06E1D_OFFSET))();
	}

	static ::RPG::GameCore::TreasureDungeonMapConfigRow* Method_1_E0FD7AB00C881B0A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TreasureDungeonMapConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_E0FD7AB00C881B0A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7EA4E938D6449A70(::RPG::GameCore::TreasureDungeonMapConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonMapConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E5A2FA39982C3B98_METHOD_1_7EA4E938D6449A70_OFFSET))(a1);
	}
};
