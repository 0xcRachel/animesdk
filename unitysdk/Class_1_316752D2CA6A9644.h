#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_316752D2CA6A9644_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F6C030)
#define CLASS_1_316752D2CA6A9644_METHOD_1_37F7EA71F9309BAD_OFFSET UNITYSDK_OFFSET(0x18F6BC90)
#define CLASS_1_316752D2CA6A9644_METHOD_1_479FD5E03759EA28_OFFSET UNITYSDK_OFFSET(0x18F6B850)
#define CLASS_1_316752D2CA6A9644_METHOD_1_600C15F28B5E9E3D_OFFSET UNITYSDK_OFFSET(0x18F6C080)
#define CLASS_1_316752D2CA6A9644_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F6BE60)
#define CLASS_1_316752D2CA6A9644_METHOD_1_A108190577CD3218_OFFSET UNITYSDK_OFFSET(0x18F6BB60)
#define CLASS_1_316752D2CA6A9644_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F6BEF0)
#define CLASS_1_316752D2CA6A9644_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F6BB00)
#define CLASS_1_316752D2CA6A9644_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F6B8D0)
#define CLASS_1_316752D2CA6A9644_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F6BE20)
#define CLASS_1_316752D2CA6A9644_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F6BF90)
#define CLASS_1_316752D2CA6A9644__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F6C3A0)

inline static constexpr unsigned int Class_1_316752D2CA6A9644_TypeDefinitionIndex = 13245;

class Class_1_316752D2CA6A9644 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x65500);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x65508);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x65510);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x13550);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x13551);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>* Method_1_479FD5E03759EA28()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_479FD5E03759EA28_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*> Method_1_A108190577CD3218()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_A108190577CD3218_OFFSET))();
	}

	static ::RPG::GameCore::ItemMultiMaterialConfigRow* Method_1_37F7EA71F9309BAD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ItemMultiMaterialConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_37F7EA71F9309BAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_600C15F28B5E9E3D(::RPG::GameCore::ItemMultiMaterialConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_600C15F28B5E9E3D_OFFSET))(a1);
	}
};
