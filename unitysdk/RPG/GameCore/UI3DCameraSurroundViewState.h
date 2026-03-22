#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"

class Class_1_0C3D32DB2657826D;
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class InputDataController; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Action; }

#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xA5B6F20)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0xA5B6FC0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xA5B6DB0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B6C70)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B6290)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xA5B6CD0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xA5B7000)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5B71A0)
#define RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B7150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraSurroundViewState_TypeDefinitionIndex = 45307;

	class UI3DCameraSurroundViewState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::RPG::Client::InputDataController* _InputController; // 0x30
		::System::Action* _CallBack; // 0x38
		::Class_1_0C3D32DB2657826D* _Setting; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* cameraCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_INIT_OFFSET))(this, cameraCmpt);
		}

		::System::Single GetAxisValue(::System::Int32 axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GETAXISVALUE_OFFSET))(this, axis);
		}

		::System::Void _SetInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__SETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single zoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE__UPDATECAMERAZOOM_OFFSET))(this, zoom);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::GameCore::UI3DVirtualCameraComponent* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASURROUNDVIEWSTATE___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}
	};
}
