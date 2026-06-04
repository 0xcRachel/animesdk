#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C98B8021F8654DFB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19181D70)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_4964A0BED1421265_OFFSET UNITYSDK_OFFSET(0x191818A0)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_4EDD7745F73149FA_OFFSET UNITYSDK_OFFSET(0x191819D0)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19181BA0)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19181C30)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_CAC9BAC43515D20F_OFFSET UNITYSDK_OFFSET(0x19181590)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19181840)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19181610)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19181B60)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_F195227437664B50_OFFSET UNITYSDK_OFFSET(0x19181DC0)
#define CLASS_1_C98B8021F8654DFB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19181CD0)
#define CLASS_1_C98B8021F8654DFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x191820E0)

inline static constexpr unsigned int Class_1_C98B8021F8654DFB_TypeDefinitionIndex = 12292;

class Class_1_C98B8021F8654DFB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98B8021F8654DFB_TypeDefinitionIndex)->GetStaticField(0x64260);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98B8021F8654DFB_TypeDefinitionIndex)->GetStaticField(0x64268);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98B8021F8654DFB_TypeDefinitionIndex)->GetStaticField(0x64270);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98B8021F8654DFB_TypeDefinitionIndex)->GetStaticField(0x13050);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C98B8021F8654DFB_TypeDefinitionIndex)->GetStaticField(0x13051);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>* Method_1_CAC9BAC43515D20F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_CAC9BAC43515D20F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*> Method_1_4964A0BED1421265()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_4964A0BED1421265_OFFSET))();
	}

	static ::RPG::GameCore::BoxingClubActivityQuestConfigRow* Method_1_4EDD7745F73149FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BoxingClubActivityQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_4EDD7745F73149FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_F195227437664B50(::RPG::GameCore::BoxingClubActivityQuestConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BoxingClubActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C98B8021F8654DFB_METHOD_1_F195227437664B50_OFFSET))(a1);
	}
};
