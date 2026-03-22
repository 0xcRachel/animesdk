#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1FF45D983EE7937E_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x164D5C10)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_142B1857A759B274_OFFSET UNITYSDK_OFFSET(0x164D5820)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x164D5A30)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_50FA58BD8D707A2B_OFFSET UNITYSDK_OFFSET(0x164D5670)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x164D53C0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_8594BBCDD5AA84F3_OFFSET UNITYSDK_OFFSET(0x164D5C60)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_A1815F3BE718F20E_OFFSET UNITYSDK_OFFSET(0x164D5340)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x164D5AD0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x164D5610)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x164D59F0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x164D5B70)
#define CLASS_1_1FF45D983EE7937E__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D5FC0)

inline static constexpr unsigned int Class_1_1FF45D983EE7937E_TypeDefinitionIndex = 13617;

class Class_1_1FF45D983EE7937E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x35370);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x35378);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x35380);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0xCDE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0xCDE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>* Method_1_A1815F3BE718F20E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_A1815F3BE718F20E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*> Method_1_50FA58BD8D707A2B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_50FA58BD8D707A2B_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournRoomRow* Method_1_142B1857A759B274(::System::UInt32 a1, ::RPG::GameCore::RogueTournMode a2)
	{
		return ((::RPG::GameCore::RogueTournRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_142B1857A759B274_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8594BBCDD5AA84F3(::RPG::GameCore::RogueTournRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_8594BBCDD5AA84F3_OFFSET))(a1);
	}
};
