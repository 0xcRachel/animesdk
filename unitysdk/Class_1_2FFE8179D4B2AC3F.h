#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveQuestEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F32260)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_449A83FFC725BF98_OFFSET UNITYSDK_OFFSET(0x18F31D50)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F32090)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F32120)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9A11FC3BAE30C75_OFFSET UNITYSDK_OFFSET(0x18F322B0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9ACFC8EC6A95117_OFFSET UNITYSDK_OFFSET(0x18F31A40)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F31CF0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_D77B3C9C86E345CE_OFFSET UNITYSDK_OFFSET(0x18F31EC0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F31AC0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F32050)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F321C0)
#define CLASS_1_2FFE8179D4B2AC3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F32620)

inline static constexpr unsigned int Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex = 11257;

class Class_1_2FFE8179D4B2AC3F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x5C800);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x5C808);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x5C810);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x10BD0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x10BD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>* Method_1_C9ACFC8EC6A95117()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9ACFC8EC6A95117_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*> Method_1_449A83FFC725BF98()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_449A83FFC725BF98_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveQuestEquipRow* Method_1_D77B3C9C86E345CE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveQuestEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_D77B3C9C86E345CE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9A11FC3BAE30C75(::RPG::GameCore::IdleLiveQuestEquipRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestEquipRow*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9A11FC3BAE30C75_OFFSET))(a1);
	}
};
