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

#define CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x11381E50)
#define CLASS_1_70697F531F566942_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11381F10)

inline static constexpr unsigned int Class_1_70697F531F566942_1_TypeDefinitionIndex = 46450;

class Class_1_70697F531F566942_1 : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>* Field_1_19; // 0x18
	::Il2CppArray<::System::String*>* Field_1_16; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::String* Field_1_7; // 0x30
	::RPG::GameCore::MonsterEnergyBarCustomColor* Field_1_18; // 0x38
	::RPG::GameCore::GameEntity* Field_1_0; // 0x40
	::System::String* Field_1_10; // 0x48
	::System::String* Field_1_9; // 0x50
	::RPG::GameCore::FixPoint Field_1_11; // 0x58
	::System::Int32 Field_1_4; // 0x60
	::RPG::GameCore::EnergyBarState Field_1_3; // 0x64
	::RPG::GameCore::FixPoint Field_1_13; // 0x68
	::RPG::GameCore::FixPoint Field_1_12; // 0x70
	::System::Boolean Field_1_1; // 0x78
	::System::Boolean Field_1_2; // 0x79
	::System::Int32 Field_1_14; // 0x7C
	::System::Int32 Field_1_5; // 0x80
	::RPG::GameCore::MonsterEnergyBarNumColor Field_1_17; // 0x84
	::RPG::GameCore::MonsterEnergyBarType Field_1_15; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
