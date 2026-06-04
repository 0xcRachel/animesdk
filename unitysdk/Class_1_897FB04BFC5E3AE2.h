#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerRoomSlotOffsetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19461890)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_5C5888436CD19E2F_OFFSET UNITYSDK_OFFSET(0x194618E0)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_834FA77997F4242D_OFFSET UNITYSDK_OFFSET(0x19461530)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x194616C0)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19461750)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_B1BA35ACAF5378C7_OFFSET UNITYSDK_OFFSET(0x194613C0)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19461360)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19461130)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_EB9B948B82C7A45A_OFFSET UNITYSDK_OFFSET(0x194610B0)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19461680)
#define CLASS_1_897FB04BFC5E3AE2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x194617F0)
#define CLASS_1_897FB04BFC5E3AE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19461C00)

inline static constexpr unsigned int Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex = 13821;

class Class_1_897FB04BFC5E3AE2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex)->GetStaticField(0x48CD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex)->GetStaticField(0x48CD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex)->GetStaticField(0x48CE0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex)->GetStaticField(0xE810);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_897FB04BFC5E3AE2_TypeDefinitionIndex)->GetStaticField(0xE811);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>* Method_1_EB9B948B82C7A45A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_EB9B948B82C7A45A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*> Method_1_B1BA35ACAF5378C7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_B1BA35ACAF5378C7_OFFSET))();
	}

	static ::RPG::GameCore::PlayerRoomSlotOffsetRow* Method_1_834FA77997F4242D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerRoomSlotOffsetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_834FA77997F4242D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_5C5888436CD19E2F(::RPG::GameCore::PlayerRoomSlotOffsetRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSlotOffsetRow*))((::PBYTE)hIl2Cpp + CLASS_1_897FB04BFC5E3AE2_METHOD_1_5C5888436CD19E2F_OFFSET))(a1);
	}
};
