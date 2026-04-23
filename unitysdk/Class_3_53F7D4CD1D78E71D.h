#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0x105BA330)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0x105B95C0)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_8194683371E228D0_OFFSET UNITYSDK_OFFSET(0x105B9700)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_8EB5F47953521201_OFFSET UNITYSDK_OFFSET(0x105B9D30)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x105B9690)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_B33697D4E2F04CB6_OFFSET UNITYSDK_OFFSET(0x105B9F20)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_B3A9EC24C2E8826B_OFFSET UNITYSDK_OFFSET(0x105B92D0)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_C6AAD734CB740369_OFFSET UNITYSDK_OFFSET(0x105BA180)
#define CLASS_3_53F7D4CD1D78E71D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105BA2E0)
#define CLASS_3_53F7D4CD1D78E71D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105B8E80)
#define CLASS_3_53F7D4CD1D78E71D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105B97F0)
#define CLASS_3_53F7D4CD1D78E71D_TICK_OFFSET UNITYSDK_OFFSET(0x105B99F0)
#define CLASS_3_53F7D4CD1D78E71D__CTOR_OFFSET UNITYSDK_OFFSET(0x105B8B80)
#define CLASS_3_53F7D4CD1D78E71D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x105BA3A0)

inline static constexpr unsigned int Class_3_53F7D4CD1D78E71D_TypeDefinitionIndex = 48199;

class Class_3_53F7D4CD1D78E71D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToTarget*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_3_12; // 0x28
	::Class_2_A0580152EB393340* Field_3_4; // 0x30
	::Class_2_6A3F10CE86B200DD* Field_3_2; // 0x38
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_3_5; // 0x40
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x48
	::RPG::GameCore::GameEntity* Field_3_3; // 0x50
	::RPG::GameCore::AdventureCharacterController* Field_3_1; // 0x58
	::System::Single Field_3_8; // 0x60
	::System::Single Field_3_7; // 0x64
	::System::Single Field_3_9; // 0x68
	::System::Boolean Field_3_10; // 0x6C
	::System::Boolean Field_3_11; // 0x6D
	::System::Single Field_3_6; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_B3A9EC24C2E8826B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_B3A9EC24C2E8826B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8194683371E228D0(::RPG::GameCore::TransformComponent* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_8194683371E228D0_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C6AAD734CB740369(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_C6AAD734CB740369_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B33697D4E2F04CB6(::RPG::GameCore::TransformComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_B33697D4E2F04CB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8EB5F47953521201(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_8EB5F47953521201_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_7AFDBF811FBF265E()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_7AFDBF811FBF265E_OFFSET))(this);
	}

	::System::Void Method_3_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D_METHOD_3_29622B5284E27113_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53F7D4CD1D78E71D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
