#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x8F4B310)
#define RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F4A950)
#define RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x8F4ADB0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x8F4A4F0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x8F4B2A0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x8F4A4E0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x8F4B360)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x8F4B370)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x8F4B220)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x8F4B380)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F4AAD0)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x8F4B1E0)
#define RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x8F4AFC0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x8F4A3F0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x8F4AA30)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x8F4AA80)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x8F4B230)
#define RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x8F4ABB0)
#define RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4B390)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientInputData_TypeDefinitionIndex = 48615;

	class ClientInputData : public ::System::Object
	{
	public:
		// static const ::System::Single _RecordPlayerInputDirLimit; // 0x0
		// static const ::System::Single CACHE_RUSH_MOVE_TIME; // 0x0
		::System::Boolean _UseRecordCameraForward; // 0x10
		::System::Boolean _RushFlag; // 0x11
		::System::Boolean PlayerMove; // 0x12
		::System::Boolean CameraRotationByController; // 0x13
		::UnityEngine::Vector3 _RecordPlayerInputDir; // 0x14
		::UnityEngine::Vector3 _RecordCameraForward; // 0x20
		::UnityEngine::Vector2 CameraRotationDelta; // 0x2C
		::System::Boolean _PressNormalAtkBtn; // 0x34
		::System::Boolean CameraZooming; // 0x35
		::System::Boolean CameraRotation; // 0x36
		::System::Boolean _PressSkillBtn; // 0x37
		::UnityEngine::Vector3 MoveDirection; // 0x38
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x44
		::System::Single _PlayerMoveControlDir; // 0x48
		::System::Boolean CameraZoomingByController; // 0x4C
		::System::Boolean WalkFlag; // 0x4D
		::System::Boolean CameraReset; // 0x4E
		::System::Boolean CameraTouchDown; // 0x4F
		::System::Single _LastRushMoveTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_PlayerMoveControlDir(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET))(this, value);
		}

		::System::Single get_PlayerMoveControlDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatio()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ResetFlagOnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void SetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void ResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void TryResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Boolean get_RushFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET))(this);
		}

		::System::Void set_RushFlag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET))(this, value);
		}

		::System::Boolean get_IsCacheRushMoveFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Void ClearCacheRushMoveFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Boolean get_PressNormalAtkBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET))(this);
		}

		::System::Void set_PressNormalAtkBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET))(this, value);
		}

		::System::Boolean get_PressSkillBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET))(this);
		}

		::System::Void set_PressSkillBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET))(this, value);
		}

		::System::Boolean get_UseRecordCameraForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET))(this);
		}
	};
}
