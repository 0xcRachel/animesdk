#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveNodeTypeDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF12424AA707C7E1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x168C25F0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_239ED96D0D517C9E_OFFSET UNITYSDK_OFFSET(0x168C2050)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x168C2410)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_4FCD3FDB567E4695_OFFSET UNITYSDK_OFFSET(0x168C1D20)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x168C1DA0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_7371AAA879A8B753_OFFSET UNITYSDK_OFFSET(0x168C2640)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x168C24B0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x168C1FF0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x168C23D0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x168C2550)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_FB0A1C3415E9A301_OFFSET UNITYSDK_OFFSET(0x168C2200)
#define CLASS_1_CF12424AA707C7E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x168C29A0)

inline static constexpr unsigned int Class_1_CF12424AA707C7E1_TypeDefinitionIndex = 11142;

class Class_1_CF12424AA707C7E1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x2C3F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x2C3F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x2C400);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x8AB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x8AB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>* Method_1_4FCD3FDB567E4695()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_4FCD3FDB567E4695_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*> Method_1_239ED96D0D517C9E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_239ED96D0D517C9E_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveNodeTypeDataRow* Method_1_FB0A1C3415E9A301(::RPG::GameCore::IdleLiveNodeType a1)
	{
		return ((::RPG::GameCore::IdleLiveNodeTypeDataRow*(*)(::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_FB0A1C3415E9A301_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7371AAA879A8B753(::RPG::GameCore::IdleLiveNodeTypeDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveNodeTypeDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_7371AAA879A8B753_OFFSET))(a1);
	}
};
