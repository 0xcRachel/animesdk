#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChatBubbleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_092CB8CF9EF822F7_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18F31530)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_7D590B278319010C_OFFSET UNITYSDK_OFFSET(0x18F31190)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F31360)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_9232C30D7560BA67_OFFSET UNITYSDK_OFFSET(0x18F30D10)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_97F634940925F074_OFFSET UNITYSDK_OFFSET(0x18F31020)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F313F0)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_AEF93A3CC23498AF_OFFSET UNITYSDK_OFFSET(0x18F31580)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F30FC0)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F30D90)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F31320)
#define CLASS_1_092CB8CF9EF822F7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F31490)
#define CLASS_1_092CB8CF9EF822F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F318F0)

inline static constexpr unsigned int Class_1_092CB8CF9EF822F7_TypeDefinitionIndex = 12373;

class Class_1_092CB8CF9EF822F7 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092CB8CF9EF822F7_TypeDefinitionIndex)->GetStaticField(0x5C7E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092CB8CF9EF822F7_TypeDefinitionIndex)->GetStaticField(0x5C7E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092CB8CF9EF822F7_TypeDefinitionIndex)->GetStaticField(0x5C7F0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_092CB8CF9EF822F7_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_092CB8CF9EF822F7_TypeDefinitionIndex)->GetStaticField(0x10BC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>* Method_1_9232C30D7560BA67()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_9232C30D7560BA67_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*> Method_1_97F634940925F074()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_97F634940925F074_OFFSET))();
	}

	static ::RPG::GameCore::ChatBubbleRow* Method_1_7D590B278319010C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChatBubbleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_7D590B278319010C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AEF93A3CC23498AF(::RPG::GameCore::ChatBubbleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChatBubbleRow*))((::PBYTE)hIl2Cpp + CLASS_1_092CB8CF9EF822F7_METHOD_1_AEF93A3CC23498AF_OFFSET))(a1);
	}
};
