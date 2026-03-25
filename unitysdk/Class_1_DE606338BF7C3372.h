#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE606338BF7C3372_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BB3520)
#define CLASS_1_DE606338BF7C3372_METHOD_1_30BDDFA213BC3103_OFFSET UNITYSDK_OFFSET(0x16BB2F80)
#define CLASS_1_DE606338BF7C3372_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BB3340)
#define CLASS_1_DE606338BF7C3372_METHOD_1_3ABFFCF7E0F215F8_OFFSET UNITYSDK_OFFSET(0x16BB3130)
#define CLASS_1_DE606338BF7C3372_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BB2CD0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_7021114C80E2D616_OFFSET UNITYSDK_OFFSET(0x16BB3570)
#define CLASS_1_DE606338BF7C3372_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BB33E0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_B7393A00E73D218A_OFFSET UNITYSDK_OFFSET(0x16BB2C50)
#define CLASS_1_DE606338BF7C3372_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BB2F20)
#define CLASS_1_DE606338BF7C3372_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BB3300)
#define CLASS_1_DE606338BF7C3372_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BB3480)
#define CLASS_1_DE606338BF7C3372__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BB38D0)

inline static constexpr unsigned int Class_1_DE606338BF7C3372_TypeDefinitionIndex = 11122;

class Class_1_DE606338BF7C3372 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x3B350);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x3B358);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x3B360);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0xF140);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0xF141);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>* Method_1_B7393A00E73D218A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_B7393A00E73D218A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*> Method_1_30BDDFA213BC3103()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_30BDDFA213BC3103_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesAvatarLevelRow* Method_1_3ABFFCF7E0F215F8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesAvatarLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_3ABFFCF7E0F215F8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7021114C80E2D616(::RPG::GameCore::PlanetFesAvatarLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_7021114C80E2D616_OFFSET))(a1);
	}
};
