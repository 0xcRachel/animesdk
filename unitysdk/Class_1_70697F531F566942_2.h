#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_18;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x14AD2120)
#define CLASS_1_70697F531F566942_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD21F0)

inline static constexpr unsigned int Class_1_70697F531F566942_2_TypeDefinitionIndex = 53848;

class Class_1_70697F531F566942_2 : public ::System::Object
{
public:
	::RPG::GameCore::MonsterEnergyBarCustomColor* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::Il2CppArray<::System::String*>* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::RPG::GameCore::FixPoint Field_1_9; // 0x58
	::RPG::GameCore::FixPoint Field_1_10; // 0x60
	::RPG::GameCore::EnergyBarState Field_1_11; // 0x68
	::System::Int32 Field_1_12; // 0x6C
	::RPG::GameCore::MonsterEnergyBarNumColor Field_1_13; // 0x70
	::System::Boolean Field_1_14; // 0x74
	::System::Boolean Field_1_15; // 0x75
	::RPG::GameCore::FixPoint Field_1_16; // 0x78
	::RPG::GameCore::MonsterEnergyBarType Field_1_17; // 0x80
	::System::Int32 Field_1_18; // 0x84
	::System::Int32 Field_1_19; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
