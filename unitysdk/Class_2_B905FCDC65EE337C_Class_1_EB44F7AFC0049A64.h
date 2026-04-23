#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xAD49990)
#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xAD49F10)
#define CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64__CTOR_OFFSET UNITYSDK_OFFSET(0xAD49DB0)

inline static constexpr unsigned int Class_2_B905FCDC65EE337C_Class_1_EB44F7AFC0049A64_TypeDefinitionIndex = 52956;

class Class_2_B905FCDC65EE337C_Class_1_EB44F7AFC0049A64 : public ::System::Object
{
public:
	::Class_2_F1C3EBA366E084A2* Field_1_3; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x18
	::Class_2_523C55AEA55804D8* Field_1_4; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x30
	::System::Single Field_1_10; // 0x38
	::System::Int32 Field_1_15; // 0x3C
	::System::Boolean Field_1_12; // 0x40
	::System::Boolean Field_1_13; // 0x41
	::System::Single Field_1_14; // 0x44
	::UnityEngine::Vector3 Field_1_8; // 0x48
	::UnityEngine::Vector3 Field_1_6; // 0x54
	::UnityEngine::Vector3 Field_1_5; // 0x60
	::UnityEngine::Vector3 Field_1_7; // 0x6C
	::UnityEngine::Vector3 Field_1_9; // 0x78
	::System::Single Field_1_11; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B905FCDC65EE337C_CLASS_1_EB44F7AFC0049A64_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
