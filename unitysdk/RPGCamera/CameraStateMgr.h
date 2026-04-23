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

#define RPGCAMERA_CAMERASTATEMGR_BINDCAMERA_OFFSET UNITYSDK_OFFSET(0x175C08D0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTCOMD_OFFSET UNITYSDK_OFFSET(0x175C18F0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C16D0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTNEXT_OFFSET UNITYSDK_OFFSET(0x175C17D0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x175C1960)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTTOP_OFFSET UNITYSDK_OFFSET(0x175C16A0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECT_OFFSET UNITYSDK_OFFSET(0x175C1800)
#define RPGCAMERA_CAMERASTATEMGR_FINDNEXT_OFFSET UNITYSDK_OFFSET(0x175C1290)
#define RPGCAMERA_CAMERASTATEMGR_FINDTOP_OFFSET UNITYSDK_OFFSET(0x175C1110)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHPOSTPROCESSERINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C2000)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEDATA_OFFSET UNITYSDK_OFFSET(0x175C2020)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C1F00)
#define RPGCAMERA_CAMERASTATEMGR_FLUSH_OFFSET UNITYSDK_OFFSET(0x175C1BB0)
#define RPGCAMERA_CAMERASTATEMGR_GETSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x175C0C20)
#define RPGCAMERA_CAMERASTATEMGR_GET_BLENDER_OFFSET UNITYSDK_OFFSET(0x175C0880)
#define RPGCAMERA_CAMERASTATEMGR_GET_POSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x175C08B0)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE0_OFFSET UNITYSDK_OFFSET(0x175C0890)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE1_OFFSET UNITYSDK_OFFSET(0x175C08A0)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATELIST_OFFSET UNITYSDK_OFFSET(0x175C0870)
#define RPGCAMERA_CAMERASTATEMGR_POSTFLUSHTOP_OFFSET UNITYSDK_OFFSET(0x175C21E0)
#define RPGCAMERA_CAMERASTATEMGR_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x175C08E0)
#define RPGCAMERA_CAMERASTATEMGR_SETPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0x175C08C0)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x175C1050)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0x175C0CD0)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C0CE0)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATE_OFFSET UNITYSDK_OFFSET(0x175C0CA0)
#define RPGCAMERA_CAMERASTATEMGR_TICKINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C1A90)
#define RPGCAMERA_CAMERASTATEMGR_TICK_OFFSET UNITYSDK_OFFSET(0x175C19D0)
#define RPGCAMERA_CAMERASTATEMGR_UNREGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x175C0AB0)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x175C15E0)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0x175C1410)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x175C1420)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATE_OFFSET UNITYSDK_OFFSET(0x175C13E0)
#define RPGCAMERA_CAMERASTATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x175C22C0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateMgr_TypeDefinitionIndex = 40947;

	class CameraStateMgr : public ::System::Object
	{
	public:
		::RPGCamera::ICameraState* _state1; // 0x10
		::System::Collections::Generic::Queue_1<::RPGCamera::CameraStateMgr_CameraStateCmd>* _cmdQueue; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::ICameraState*>* _statePool; // 0x20
		::RPGCamera::CameraStack* _stack; // 0x28
		::RPGCamera::ICameraState* _state0; // 0x30
		::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>* _stateList; // 0x38
		::UnityEngine::Camera* _camera; // 0x40
		::RPGCamera::CameraStatePostProcesser* _postProcesser; // 0x48
		::RPGCamera::CameraStateBlender* _blender; // 0x50

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
