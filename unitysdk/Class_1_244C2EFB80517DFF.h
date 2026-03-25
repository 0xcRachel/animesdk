#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDiceSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_244C2EFB80517DFF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17998F00)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17998D20)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_3166B2B69E9AB441_OFFSET UNITYSDK_OFFSET(0x17998B10)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_6B5991FBEC3A4BAC_OFFSET UNITYSDK_OFFSET(0x17998F50)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179986E0)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_97DB1593D687038B_OFFSET UNITYSDK_OFFSET(0x17998990)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17998DC0)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17998930)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17998CE0)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17998E60)
#define CLASS_1_244C2EFB80517DFF_METHOD_1_FD6AD3687C302DF7_OFFSET UNITYSDK_OFFSET(0x17998660)
#define CLASS_1_244C2EFB80517DFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17999260)

inline static constexpr unsigned int Class_1_244C2EFB80517DFF_TypeDefinitionIndex = 13639;

class Class_1_244C2EFB80517DFF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_244C2EFB80517DFF_TypeDefinitionIndex)->GetStaticField(0x3FCE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_244C2EFB80517DFF_TypeDefinitionIndex)->GetStaticField(0x3FCE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_244C2EFB80517DFF_TypeDefinitionIndex)->GetStaticField(0x3FCF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_244C2EFB80517DFF_TypeDefinitionIndex)->GetStaticField(0x10D60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_244C2EFB80517DFF_TypeDefinitionIndex)->GetStaticField(0x10D61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>* Method_1_FD6AD3687C302DF7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_FD6AD3687C302DF7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*> Method_1_97DB1593D687038B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDiceSlotRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_97DB1593D687038B_OFFSET))();
	}

	static ::RPG::GameCore::RogueNousDiceSlotRow* Method_1_3166B2B69E9AB441(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueNousDiceSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_3166B2B69E9AB441_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6B5991FBEC3A4BAC(::RPG::GameCore::RogueNousDiceSlotRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueNousDiceSlotRow*))((::PBYTE)hIl2Cpp + CLASS_1_244C2EFB80517DFF_METHOD_1_6B5991FBEC3A4BAC_OFFSET))(a1);
	}
};
