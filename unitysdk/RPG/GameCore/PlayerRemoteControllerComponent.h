#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_3F4D673D3F90D12C;
class Class_2_6BFAFA494F2D1E4B;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4D4580)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET UNITYSDK_OFFSET(0xA4D5170)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET UNITYSDK_OFFSET(0xA4D5160)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA4D4B60)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET UNITYSDK_OFFSET(0xA4D47B0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET UNITYSDK_OFFSET(0xA4D4EE0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA4D45F0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D4530)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET UNITYSDK_OFFSET(0xA4D50D0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA4D49C0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET UNITYSDK_OFFSET(0xA4D4F30)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA4D5180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRemoteControllerComponent_TypeDefinitionIndex = 45407;

	class PlayerRemoteControllerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* _ControlEntity; // 0x18
		::RPG::GameCore::NPCComponent* _NPCCmpt; // 0x20
		::RPG::GameCore::TransformComponent* _TargetTransformCmpt; // 0x28
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x30
		::Class_2_6BFAFA494F2D1E4B* _AdvCharAICmpt; // 0x38
		::RPG::GameCore::AdventureCharacterController* _AdvCharCtrlCmpt; // 0x40
		::Class_2_C14C025AFA60DCA2* _TargetingCmpt; // 0x48
		::RPG::GameCore::LevelGraphComponent* _LevelGraphCmpt; // 0x50
		::Class_2_3F4D673D3F90D12C* _CharVisionCmpt; // 0x58
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x60
		::RPG::GameCore::ColliderTriggerComponent* _TriggerCmpt; // 0x68
		::RPG::GameCore::TransformComponent* _SelfTransformCmpt; // 0x70
		::System::Boolean CanUseSameMapTeleport; // 0x78
		::System::Boolean SyncPlayerPositionToServer; // 0x79
		::System::Boolean SupportRush; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ReleaseControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET))(this);
		}

		::System::Void _InheritControlEntityModifiers(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET))(this, controlEntity);
		}

		::System::Void InitComponent(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET))(this, controlEntity);
		}

		::System::Void SetPlayerStub(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET))(this, entity);
		}

		::System::Void _OnRemoteControlRelease(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET))(this, param);
		}

		::System::Collections::IEnumerator* _DelayCancelControl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PlayerStub()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ControlEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
