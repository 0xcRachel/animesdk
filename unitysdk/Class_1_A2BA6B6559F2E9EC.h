#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamAnchorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x192FA060)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_2435A7EAC6949CB5_OFFSET UNITYSDK_OFFSET(0x192F9CC0)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_328CE84A46C83F10_OFFSET UNITYSDK_OFFSET(0x192F9840)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192F9E90)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192F9F20)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_B8E345F7E5B70509_OFFSET UNITYSDK_OFFSET(0x192F9B50)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192F9AF0)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192F98C0)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_E0CA92EDE7C47A3C_OFFSET UNITYSDK_OFFSET(0x192FA0B0)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192F9E50)
#define CLASS_1_A2BA6B6559F2E9EC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192F9FC0)
#define CLASS_1_A2BA6B6559F2E9EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x192FA420)

inline static constexpr unsigned int Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex = 13635;

class Class_1_A2BA6B6559F2E9EC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex)->GetStaticField(0x3F300);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex)->GetStaticField(0x3F308);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex)->GetStaticField(0x3F310);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex)->GetStaticField(0xC5F0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2BA6B6559F2E9EC_TypeDefinitionIndex)->GetStaticField(0xC5F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>* Method_1_328CE84A46C83F10()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_328CE84A46C83F10_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*> Method_1_B8E345F7E5B70509()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_B8E345F7E5B70509_OFFSET))();
	}

	static ::RPG::GameCore::PamAnchorRow* Method_1_2435A7EAC6949CB5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PamAnchorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_2435A7EAC6949CB5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0CA92EDE7C47A3C(::RPG::GameCore::PamAnchorRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamAnchorRow*))((::PBYTE)hIl2Cpp + CLASS_1_A2BA6B6559F2E9EC_METHOD_1_E0CA92EDE7C47A3C_OFFSET))(a1);
	}
};
