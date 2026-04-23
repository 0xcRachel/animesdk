#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_10040B381448B886_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1856F9A0)
#define CLASS_1_10040B381448B886_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1856F7C0)
#define CLASS_1_10040B381448B886_METHOD_1_3E2B185B1EBBB59C_OFFSET UNITYSDK_OFFSET(0x1856F5B0)
#define CLASS_1_10040B381448B886_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1856F180)
#define CLASS_1_10040B381448B886_METHOD_1_7757696BB011F23B_OFFSET UNITYSDK_OFFSET(0x1856F9F0)
#define CLASS_1_10040B381448B886_METHOD_1_94782FFAC22B8DCE_OFFSET UNITYSDK_OFFSET(0x1856F100)
#define CLASS_1_10040B381448B886_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1856F860)
#define CLASS_1_10040B381448B886_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1856F3D0)
#define CLASS_1_10040B381448B886_METHOD_1_ED74B11E0AA3A078_OFFSET UNITYSDK_OFFSET(0x1856F430)
#define CLASS_1_10040B381448B886_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1856F780)
#define CLASS_1_10040B381448B886_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1856F900)
#define CLASS_1_10040B381448B886__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856FD00)

inline static constexpr unsigned int Class_1_10040B381448B886_TypeDefinitionIndex = 13055;

class Class_1_10040B381448B886 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10040B381448B886_TypeDefinitionIndex)->GetStaticField(0x339B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10040B381448B886_TypeDefinitionIndex)->GetStaticField(0x339B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10040B381448B886_TypeDefinitionIndex)->GetStaticField(0x339C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10040B381448B886_TypeDefinitionIndex)->GetStaticField(0x9BD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10040B381448B886_TypeDefinitionIndex)->GetStaticField(0x9BD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>* Method_1_94782FFAC22B8DCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_94782FFAC22B8DCE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*> Method_1_ED74B11E0AA3A078()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_ED74B11E0AA3A078_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleAvatarPromotionConfigRow* Method_1_3E2B185B1EBBB59C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ILBattleAvatarPromotionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_3E2B185B1EBBB59C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7757696BB011F23B(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_10040B381448B886_METHOD_1_7757696BB011F23B_OFFSET))(a1);
	}
};
