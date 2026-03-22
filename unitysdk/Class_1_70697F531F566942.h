#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73D621BDD90E61A7;
class Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_CLEAR_OFFSET UNITYSDK_OFFSET(0x10322D30)
#define CLASS_1_70697F531F566942_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x10322D80)
#define CLASS_1_70697F531F566942__CTOR_OFFSET UNITYSDK_OFFSET(0x10322E40)

inline static constexpr unsigned int Class_1_70697F531F566942_TypeDefinitionIndex = 42416;

class Class_1_70697F531F566942 : public ::System::Object
{
public:
	::Class_1_73D621BDD90E61A7* Field_1_14; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x20
	::RPG::GameCore::GameEntity* Field_1_2; // 0x28
	::RPG::GameCore::GameEntity* Field_1_3; // 0x30
	::Class_2_9D395C7782DBE5D8_Class_1_2EAC2DB4DA0A99A1* Field_1_13; // 0x38
	::RPG::GameCore::FixPoint Field_1_9; // 0x40
	::RPG::GameCore::ComplexSkillAISubType Field_1_0; // 0x48
	::System::Int32 Field_1_12; // 0x4C
	::System::Int32 Field_1_1; // 0x50
	::System::Boolean Field_1_8; // 0x54
	::System::Boolean Field_1_11; // 0x55
	::System::Boolean Field_1_5; // 0x56
	::System::Boolean Field_1_6; // 0x57
	::RPG::GameCore::FixPoint Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
