#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveWorldTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AADB41A22D39D431_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18726210)
#define CLASS_1_AADB41A22D39D431_METHOD_1_2BA061D38C1A676A_OFFSET UNITYSDK_OFFSET(0x18726260)
#define CLASS_1_AADB41A22D39D431_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18726030)
#define CLASS_1_AADB41A22D39D431_METHOD_1_681C3E9EF890CF4E_OFFSET UNITYSDK_OFFSET(0x18725E70)
#define CLASS_1_AADB41A22D39D431_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18725A10)
#define CLASS_1_AADB41A22D39D431_METHOD_1_7C2E675E144A0925_OFFSET UNITYSDK_OFFSET(0x18725990)
#define CLASS_1_AADB41A22D39D431_METHOD_1_9ECDE361DFFE17CE_OFFSET UNITYSDK_OFFSET(0x18725CC0)
#define CLASS_1_AADB41A22D39D431_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x187260D0)
#define CLASS_1_AADB41A22D39D431_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18725C60)
#define CLASS_1_AADB41A22D39D431_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18725FF0)
#define CLASS_1_AADB41A22D39D431_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18726170)
#define CLASS_1_AADB41A22D39D431__CCTOR_OFFSET UNITYSDK_OFFSET(0x18726570)

inline static constexpr unsigned int Class_1_AADB41A22D39D431_TypeDefinitionIndex = 11216;

class Class_1_AADB41A22D39D431 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AADB41A22D39D431_TypeDefinitionIndex)->GetStaticField(0x3AA90);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AADB41A22D39D431_TypeDefinitionIndex)->GetStaticField(0x3AA98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AADB41A22D39D431_TypeDefinitionIndex)->GetStaticField(0x3AAA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AADB41A22D39D431_TypeDefinitionIndex)->GetStaticField(0xB6C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AADB41A22D39D431_TypeDefinitionIndex)->GetStaticField(0xB6C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>* Method_1_7C2E675E144A0925()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_7C2E675E144A0925_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*> Method_1_9ECDE361DFFE17CE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_9ECDE361DFFE17CE_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveWorldTagRow* Method_1_681C3E9EF890CF4E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveWorldTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_681C3E9EF890CF4E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_2BA061D38C1A676A(::RPG::GameCore::IdleLiveWorldTagRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveWorldTagRow*))((::PBYTE)hIl2Cpp + CLASS_1_AADB41A22D39D431_METHOD_1_2BA061D38C1A676A_OFFSET))(a1);
	}
};
