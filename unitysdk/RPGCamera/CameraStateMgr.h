#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/RPGCamera/CameraStateMgr_CameraStateCmd.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStack; }
namespace RPGCamera { class CameraStateBlender; }
namespace RPGCamera { class CameraStatePostProcesser; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }

#define RPGCAMERA_CAMERASTATEMGR_BINDCAMERA_OFFSET UNITYSDK_OFFSET(0x8272840)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTCOMD_OFFSET UNITYSDK_OFFSET(0x82742D0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x8273F90)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTNEXT_OFFSET UNITYSDK_OFFSET(0x8274090)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x8274340)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTTOP_OFFSET UNITYSDK_OFFSET(0x8273DF0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECT_OFFSET UNITYSDK_OFFSET(0x8274200)
#define RPGCAMERA_CAMERASTATEMGR_FINDNEXT_OFFSET UNITYSDK_OFFSET(0x8273490)
#define RPGCAMERA_CAMERASTATEMGR_FINDTOP_OFFSET UNITYSDK_OFFSET(0x8273310)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHPOSTPROCESSERINTERNAL_OFFSET UNITYSDK_OFFSET(0x82749E0)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEDATA_OFFSET UNITYSDK_OFFSET(0x8274A00)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x82748E0)
#define RPGCAMERA_CAMERASTATEMGR_FLUSH_OFFSET UNITYSDK_OFFSET(0x8274590)
#define RPGCAMERA_CAMERASTATEMGR_GETSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x8272B80)
#define RPGCAMERA_CAMERASTATEMGR_GET_BLENDER_OFFSET UNITYSDK_OFFSET(0x82727F0)
#define RPGCAMERA_CAMERASTATEMGR_GET_POSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x8272820)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE0_OFFSET UNITYSDK_OFFSET(0x8272800)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE1_OFFSET UNITYSDK_OFFSET(0x8272810)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATELIST_OFFSET UNITYSDK_OFFSET(0x82727E0)
#define RPGCAMERA_CAMERASTATEMGR_POSTFLUSHTOP_OFFSET UNITYSDK_OFFSET(0x8274BC0)
#define RPGCAMERA_CAMERASTATEMGR_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x8272850)
#define RPGCAMERA_CAMERASTATEMGR_SETPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x8272830)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x8273260)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0x8272C30)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x8272C40)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATE_OFFSET UNITYSDK_OFFSET(0x8272C00)
#define RPGCAMERA_CAMERASTATEMGR_TICKINTERNAL_OFFSET UNITYSDK_OFFSET(0x8274470)
#define RPGCAMERA_CAMERASTATEMGR_TICK_OFFSET UNITYSDK_OFFSET(0x82743B0)
#define RPGCAMERA_CAMERASTATEMGR_UNREGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x8272A10)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x8273D40)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0x8273610)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x8273620)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATE_OFFSET UNITYSDK_OFFSET(0x82735E0)
#define RPGCAMERA_CAMERASTATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x8274CA0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateMgr_TypeDefinitionIndex = 34182;

	class CameraStateMgr : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>* _stateList; // 0x10
		::RPGCamera::CameraStatePostProcesser* _postProcesser; // 0x18
		::RPGCamera::ICameraState* _state1; // 0x20
		::RPGCamera::CameraStateBlender* _blender; // 0x28
		::RPGCamera::ICameraState* _state0; // 0x30
		::System::Collections::Generic::Queue_1<::RPGCamera::CameraStateMgr_CameraStateCmd>* _cmdQueue; // 0x38
		::RPGCamera::CameraStack* _stack; // 0x40
		::UnityEngine::Camera* _camera; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::ICameraState*>* _statePool; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>* get_stateList()
		{
			return ((::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATELIST_OFFSET))(this);
		}

		::RPGCamera::CameraStateBlender* get_blender()
		{
			return ((::RPGCamera::CameraStateBlender*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_BLENDER_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_state0()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATE0_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_state1()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATE1_OFFSET))(this);
		}

		::RPGCamera::CameraStatePostProcesser* get_postProcesser()
		{
			return ((::RPGCamera::CameraStatePostProcesser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_POSTPROCESSER_OFFSET))(this);
		}

		::System::Void SetPostProcesser(::RPGCamera::CameraStatePostProcesser* postProcesser)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStatePostProcesser*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SETPOSTPROCESSER_OFFSET))(this, postProcesser);
		}

		::System::Void BindCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_BINDCAMERA_OFFSET))(this, camera);
		}

		::System::Void RegisterState(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_REGISTERSTATE_OFFSET))(this, state);
		}

		::System::Void UnregisterState(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNREGISTERSTATE_OFFSET))(this, state);
		}

		::RPGCamera::ICameraState* GetStateByType(::System::Int32 stateType)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GETSTATEBYTYPE_OFFSET))(this, stateType);
		}

		::System::Void SpawnState(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATE_OFFSET))(this, stateId);
		}

		::System::Void SpawnStateImmdiately(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEIMMDIATELY_OFFSET))(this, stateId);
		}

		::System::Void SpawnStateByType(::System::Int32 stateType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEBYTYPE_OFFSET))(this, stateType);
		}

		::System::Void SpawnStateInternal(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEINTERNAL_OFFSET))(this, stateId);
		}

		::System::Void UnSpawnState(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATE_OFFSET))(this, stateId);
		}

		::System::Void UnSpawnStateImmdiately(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEIMMDIATELY_OFFSET))(this, stateId);
		}

		::System::Void UnSpawnStateByType(::System::Int32 stateType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEBYTYPE_OFFSET))(this, stateType);
		}

		::System::Void UnSpawnStateInternal(::System::Int32 stateId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEINTERNAL_OFFSET))(this, stateId);
		}

		::System::Void CollectTop(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTTOP_OFFSET))(this, deltaTime);
		}

		::RPGCamera::ICameraState* FindTop()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FINDTOP_OFFSET))(this);
		}

		::System::Void CollectNext(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTNEXT_OFFSET))(this, deltaTime);
		}

		::RPGCamera::ICameraState* FindNext()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FINDNEXT_OFFSET))(this);
		}

		::System::Void Collect(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECT_OFFSET))(this, deltaTime);
		}

		::System::Void CollectComd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTCOMD_OFFSET))(this);
		}

		::System::Void CollectInternal(::RPGCamera::ICameraState* state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTINTERNAL_OFFSET))(this, state, deltaTime);
		}

		::System::Void CollectPostProcesser(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTPOSTPROCESSER_OFFSET))(this, deltaTime);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void TickInternal(::RPGCamera::ICameraState* state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_TICKINTERNAL_OFFSET))(this, state, deltaTime);
		}

		::System::Void Flush(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSH_OFFSET))(this, deltaTime);
		}

		::System::Void FlushStateInternal(::RPGCamera::ICameraState* state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEINTERNAL_OFFSET))(this, state, deltaTime);
		}

		::System::Void FlushPostProcesserInternal(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHPOSTPROCESSERINTERNAL_OFFSET))(this, deltaTime);
		}

		::System::Void FlushStateData(::RPGCamera::CameraStateData data)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEDATA_OFFSET))(this, data);
		}

		::System::Void PostFlushTop(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_POSTFLUSHTOP_OFFSET))(this, state);
		}
	};
}
