#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTutorialStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_222409AE0A57B295_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19522ED0)
#define CLASS_1_222409AE0A57B295_METHOD_1_3743FAF320F7555E_OFFSET UNITYSDK_OFFSET(0x195229C0)
#define CLASS_1_222409AE0A57B295_METHOD_1_55E043DA29BFE37C_OFFSET UNITYSDK_OFFSET(0x19522B30)
#define CLASS_1_222409AE0A57B295_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19522D00)
#define CLASS_1_222409AE0A57B295_METHOD_1_A25FF0EF582D7AF9_OFFSET UNITYSDK_OFFSET(0x195226B0)
#define CLASS_1_222409AE0A57B295_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19522D90)
#define CLASS_1_222409AE0A57B295_METHOD_1_BC3A74DB152DA62F_OFFSET UNITYSDK_OFFSET(0x19522F20)
#define CLASS_1_222409AE0A57B295_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19522960)
#define CLASS_1_222409AE0A57B295_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19522730)
#define CLASS_1_222409AE0A57B295_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19522CC0)
#define CLASS_1_222409AE0A57B295_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19522E30)
#define CLASS_1_222409AE0A57B295__CCTOR_OFFSET UNITYSDK_OFFSET(0x19523290)

inline static constexpr unsigned int Class_1_222409AE0A57B295_TypeDefinitionIndex = 13000;

class Class_1_222409AE0A57B295 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_222409AE0A57B295_TypeDefinitionIndex)->GetStaticField(0x45CD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_222409AE0A57B295_TypeDefinitionIndex)->GetStaticField(0x45CD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_222409AE0A57B295_TypeDefinitionIndex)->GetStaticField(0x45CE0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_222409AE0A57B295_TypeDefinitionIndex)->GetStaticField(0xDC10);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_222409AE0A57B295_TypeDefinitionIndex)->GetStaticField(0xDC11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>* Method_1_A25FF0EF582D7AF9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_A25FF0EF582D7AF9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*> Method_1_3743FAF320F7555E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_3743FAF320F7555E_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTutorialStageConfigRow* Method_1_55E043DA29BFE37C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightTutorialStageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_55E043DA29BFE37C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC3A74DB152DA62F(::RPG::GameCore::GridFightTutorialStageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialStageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_222409AE0A57B295_METHOD_1_BC3A74DB152DA62F_OFFSET))(a1);
	}
};
