#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_476809801EDF3D21_OFFSET UNITYSDK_OFFSET(0x16ACD4C0)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_7805D4966358A752_OFFSET UNITYSDK_OFFSET(0x16ACD450)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACD4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPortalConfig_TypeDefinitionIndex = 16658;

	class FiveDimPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* LockValues; // 0x20
		::Il2CppArray<::System::Int16>* UnlockValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x38
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x40
		::System::Boolean NoCameraBlend; // 0x48
		::System::Boolean TriggerFiveDimLoadingView; // 0x49
		::System::Boolean AvatarFacingLeft; // 0x4A
		::System::Boolean SendEventOnInit; // 0x4B
		::RPG::GameCore::LittleGameEvent* LockEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* UnlockEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* PortalInteractEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* TeleportFinishEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7805D4966358A752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_7805D4966358A752_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_476809801EDF3D21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_METHOD_3_476809801EDF3D21_OFFSET))(a1, a2);
		}
	};
}
