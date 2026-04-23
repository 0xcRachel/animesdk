#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E8856E702873277_RtBattleActionType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_106;
class Class_1_70CCABA9DB985F52;
class Class_3_709BBC1863417E95;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }

#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_0BA9FD4ED3014138_OFFSET UNITYSDK_OFFSET(0xE67BD50)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5983AC4337AE8A2B_1_OFFSET UNITYSDK_OFFSET(0xE67C960)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5983AC4337AE8A2B_OFFSET UNITYSDK_OFFSET(0xE67C8C0)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5A5C2C2245BED1D2_OFFSET UNITYSDK_OFFSET(0xE67AFB0)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_9557973674FE3DBD_OFFSET UNITYSDK_OFFSET(0xE67B200)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_D889E09D91F50059_OFFSET UNITYSDK_OFFSET(0xE67CA00)
#define CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41__CTOR_OFFSET UNITYSDK_OFFSET(0xE677C00)

inline static constexpr unsigned int Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41_TypeDefinitionIndex = 50038;

class Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41 : public ::System::Object
{
public:
	::System::String* Field_1_33; // 0x10
	::Class_1_43BD383C98B4C0C5_106* Field_1_26; // 0x18
	::System::String* Field_1_36; // 0x20
	::RPG::GameCore::RtAttackData* Field_1_9; // 0x28
	::System::String* Field_1_20; // 0x30
	::System::String* Field_1_34; // 0x38
	::System::String* Field_1_1; // 0x40
	::System::String* Field_1_17; // 0x48
	::System::String* Field_1_35; // 0x50
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_12; // 0x58
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_11; // 0x60
	::System::String* Field_1_5; // 0x68
	::System::String* Field_1_32; // 0x70
	::System::String* Field_1_2; // 0x78
	::System::String* Field_1_37; // 0x80
	::Class_1_70CCABA9DB985F52* Field_1_10; // 0x88
	::RPG::GameCore::FixPoint Field_1_8; // 0x90
	::System::UInt32 Field_1_6; // 0x98
	::Class_1_3E8856E702873277_RtBattleActionType Field_1_0; // 0x9C
	::RPG::GameCore::FixPoint Field_1_13; // 0xA0
	::RPG::GameCore::FixPoint Field_1_29; // 0xA8
	::RPG::GameCore::FixPoint Field_1_23; // 0xB0
	::System::UInt32 Field_1_16; // 0xB8
	::RPG::GameCore::SkillType Field_1_18; // 0xBC
	::RPG::GameCore::FixPoint Field_1_25; // 0xC0
	::System::Boolean Field_1_24; // 0xC8
	::System::UInt32 Field_1_3; // 0xCC
	::RPG::GameCore::FixPoint Field_1_27; // 0xD0
	::RPG::GameCore::FixPoint Field_1_30; // 0xD8
	::RPG::GameCore::FixPoint Field_1_21; // 0xE0
	::RPG::GameCore::FixPoint Field_1_15; // 0xE8
	::RPG::GameCore::TeamType Field_1_7; // 0xF0
	::RPG::GameCore::FixPoint Field_1_14; // 0xF8
	::RPG::GameCore::FixPoint Field_1_22; // 0x100
	::RPG::GameCore::FixPoint Field_1_28; // 0x108
	::RPG::GameCore::FixPoint Field_1_31; // 0x110
	::RPG::GameCore::TeamType Field_1_4; // 0x118
	::RPG::GameCore::AttackType Field_1_19; // 0x11C

	::System::Void _ctor(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41__CTOR_OFFSET))(this, a1);
	}

	::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* Method_1_0BA9FD4ED3014138(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_0BA9FD4ED3014138_OFFSET))(this, a1);
	}

	::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* Method_1_5A5C2C2245BED1D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5A5C2C2245BED1D2_OFFSET))(this, a1);
	}

	::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* Method_1_9557973674FE3DBD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_9557973674FE3DBD_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5983AC4337AE8A2B(::Class_3_709BBC1863417E95* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_709BBC1863417E95*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5983AC4337AE8A2B_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_5983AC4337AE8A2B_1(::Class_3_709BBC1863417E95* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_3_709BBC1863417E95*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_5983AC4337AE8A2B_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_D889E09D91F50059(::Il2CppArray<::RPG::GameCore::RtAbilityProperty>* a1, ::Class_3_709BBC1863417E95* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>*, ::Class_3_709BBC1863417E95*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_CLASS_1_45022F90DC3E1A41_METHOD_1_D889E09D91F50059_OFFSET))(this, a1, a2);
	}
};
