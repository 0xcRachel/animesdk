#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERASIDE_OFFSET UNITYSDK_OFFSET(0x15FC4890)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x15FC4380)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEFREEAREACAMERA_OFFSET UNITYSDK_OFFSET(0x15FC4D90)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEINITCAMERA_OFFSET UNITYSDK_OFFSET(0x15FC3E80)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15FC3A50)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_GET__CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0x15FC3B90)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15FC3C80)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC52A0)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__DEACTIVATECAMERAS_OFFSET UNITYSDK_OFFSET(0x15FC3DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeCameraManager_TypeDefinitionIndex = 58008;

	class CakeCatchArrangeCameraManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* EntranceCamera; // 0x18
		::Cinemachine::CinemachineVirtualCamera* EntranceCameraSide; // 0x20
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* FreeAreaCameras; // 0x28
		::Cinemachine::CinemachineBlendDefinition_Style InitBlendType; // 0x30
		::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x38
		::System::Single BlendTime; // 0x40
		::Cinemachine::CinemachineBlendDefinition _OriginalBlend; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ActiveInitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEINITCAMERA_OFFSET))(this);
		}

		::System::Void ActiveEntranceCamera(::System::Boolean isCut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERA_OFFSET))(this, isCut);
		}

		::System::Void ActiveEntranceCameraSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERASIDE_OFFSET))(this);
		}

		::System::Void ActiveFreeAreaCamera(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEFREEAREACAMERA_OFFSET))(this, index);
		}

		::System::Void _DeactivateCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__DEACTIVATECAMERAS_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get__CinemachineBrain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_GET__CINEMACHINEBRAIN_OFFSET))(this);
		}
	};
}
