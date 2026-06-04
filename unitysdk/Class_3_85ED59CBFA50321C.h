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

#define CLASS_3_85ED59CBFA50321C_METHOD_3_0A6B9F8F03BE0A79_OFFSET UNITYSDK_OFFSET(0x19376A00)
#define CLASS_3_85ED59CBFA50321C_METHOD_3_41307200E9DE3ABB_OFFSET UNITYSDK_OFFSET(0x19376BB0)
#define CLASS_3_85ED59CBFA50321C__CTOR_OFFSET UNITYSDK_OFFSET(0x19376AF0)

inline static constexpr unsigned int Class_3_85ED59CBFA50321C_TypeDefinitionIndex = 22864;

class Class_3_85ED59CBFA50321C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x48
	::System::String* Field_3_7; // 0x50
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_8; // 0x58
	::System::String* Field_3_9; // 0x60
	::RPG::GameCore::DynamicFloat* Field_3_10; // 0x68
	::RPG::GameCore::DynamicString* Field_3_11; // 0x70
	::RPG::GameCore::DynamicFloat* Field_3_12; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_13; // 0x80
	::System::String* Field_3_14; // 0x88
	::RPG::GameCore::DynamicFloat* Field_3_15; // 0x90
	::System::Single Field_3_16; // 0x98
	::System::Single Field_3_17; // 0x9C
	::RPG::GameCore::ModifierCasterType Field_3_18; // 0xA0
	::System::Boolean Field_3_19; // 0xA4
	::System::Boolean Field_3_20; // 0xA5
	::System::Boolean Field_3_21; // 0xA6
	::System::Boolean Field_3_22; // 0xA7
	::RPG::GameCore::ModifierStackingFlag Field_3_23; // 0xA8
	::System::Boolean Field_3_24; // 0xAC
	::System::Boolean Field_3_25; // 0xAD
	::RPG::MVector3 Field_3_26; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_0A6B9F8F03BE0A79(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85ED59CBFA50321C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85ED59CBFA50321C*&))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C_METHOD_3_0A6B9F8F03BE0A79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_41307200E9DE3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85ED59CBFA50321C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85ED59CBFA50321C*))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C_METHOD_3_41307200E9DE3ABB_OFFSET))(a1, a2);
	}
};
