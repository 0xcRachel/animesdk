#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }

#define RPG_GAMECORE_LEVELAREAMANAGER___C__ACTIVEVIRTUALCAMERA_B__23_0_OFFSET UNITYSDK_OFFSET(0xA987B70)
#define RPG_GAMECORE_LEVELAREAMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA987B30)
#define RPG_GAMECORE_LEVELAREAMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA987B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager___c_TypeDefinitionIndex = 46626;

	class LevelAreaManager___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::LevelAreaManager___c** StaticGet___9()
		{
			return (::RPG::GameCore::LevelAreaManager___c**)Il2CppClass::FromTypeDefinitionIndex(LevelAreaManager___c_TypeDefinitionIndex)->GetStaticField(0x48BF0);
		}
		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__23_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)Il2CppClass::FromTypeDefinitionIndex(LevelAreaManager___c_TypeDefinitionIndex)->GetStaticField(0x48BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveVirtualCamera_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER___C__ACTIVEVIRTUALCAMERA_B__23_0_OFFSET))(this);
		}
	};
}
