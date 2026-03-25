#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_01863C23119F0231_OFFSET UNITYSDK_OFFSET(0x1797C710)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1797CFB0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1797CDD0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_5D201FF51017880F_OFFSET UNITYSDK_OFFSET(0x1797CBC0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1797C790)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_83947A05A9EC4AA5_OFFSET UNITYSDK_OFFSET(0x1797CA40)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1797CE70)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_C8DDB7E5AFA3ECF2_OFFSET UNITYSDK_OFFSET(0x1797D000)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1797C9E0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1797CD90)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1797CF10)
#define CLASS_1_90FE02F4B3E2F86D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1797D320)

inline static constexpr unsigned int Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex = 11749;

class Class_1_90FE02F4B3E2F86D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x3F7E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x3F7E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x3F7F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x10A90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x10A91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>* Method_1_01863C23119F0231()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_01863C23119F0231_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*> Method_1_83947A05A9EC4AA5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_83947A05A9EC4AA5_OFFSET))();
	}

	static ::RPG::GameCore::BattleFailureTipsConfigRow* Method_1_5D201FF51017880F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_5D201FF51017880F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8DDB7E5AFA3ECF2(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_C8DDB7E5AFA3ECF2_OFFSET))(a1);
	}
};
