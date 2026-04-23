#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCasterType.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_AC77597D4FE9B922_1_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x16BF6DB0)
#define CLASS_3_AC77597D4FE9B922_1_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x16BF6BE0)
#define CLASS_3_AC77597D4FE9B922_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF6CE0)

inline static constexpr unsigned int Class_3_AC77597D4FE9B922_1_TypeDefinitionIndex = 23187;

class Class_3_AC77597D4FE9B922_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_10; // 0x18
	::System::String* Field_3_17; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_11; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_9; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_8; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x48
	::System::String* Field_3_2; // 0x50
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x58
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_24; // 0x60
	::System::String* Field_3_21; // 0x68
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x70
	::RPG::GameCore::DynamicString* Field_3_1; // 0x78
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_26; // 0x80
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x88
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_25; // 0x90
	::System::Boolean Field_3_13; // 0x98
	::System::Boolean Field_3_19; // 0x99
	::System::Single Field_3_16; // 0x9C
	::RPG::MVector3 Field_3_18; // 0xA0
	::System::Boolean Field_3_20; // 0xAC
	::System::Boolean Field_3_22; // 0xAD
	::System::Boolean Field_3_23; // 0xAE
	::System::Boolean Field_3_14; // 0xAF
	::RPG::GameCore::ModifierStackingFlag Field_3_3; // 0xB0
	::System::Single Field_3_15; // 0xB4
	::RPG::GameCore::ModifierCasterType Field_3_12; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC77597D4FE9B922_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC77597D4FE9B922_1*&))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC77597D4FE9B922_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC77597D4FE9B922_1*))((::PBYTE)hIl2Cpp + CLASS_3_AC77597D4FE9B922_1_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
