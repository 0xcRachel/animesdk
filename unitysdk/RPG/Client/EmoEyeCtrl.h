#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoEyeCtrl_EyeLookAtCurveBlend.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class EmoEyeCtrlData; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeNoiseData; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EMOEYECTRL_AJUSTROTATION_OFFSET UNITYSDK_OFFSET(0x15AE00E0)
#define RPG_CLIENT_EMOEYECTRL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15ADC520)
#define RPG_CLIENT_EMOEYECTRL_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x15ADCAC0)
#define RPG_CLIENT_EMOEYECTRL_EYEEULER_OFFSET UNITYSDK_OFFSET(0x15ADF6A0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_1_OFFSET UNITYSDK_OFFSET(0x15ADC0B0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_OFFSET UNITYSDK_OFFSET(0x15ADBE90)
#define RPG_CLIENT_EMOEYECTRL_GET_ENABLEEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x15ADBD90)
#define RPG_CLIENT_EMOEYECTRL_HASDATA_OFFSET UNITYSDK_OFFSET(0x15ADBDA0)
#define RPG_CLIENT_EMOEYECTRL_INITIALIZELOOKAT_OFFSET UNITYSDK_OFFSET(0x15ADBF40)
#define RPG_CLIENT_EMOEYECTRL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15ADDCA0)
#define RPG_CLIENT_EMOEYECTRL_SCALEADD_OFFSET UNITYSDK_OFFSET(0x15ADF780)
#define RPG_CLIENT_EMOEYECTRL_SETBLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0x15AE0160)
#define RPG_CLIENT_EMOEYECTRL_SETBLINK_OFFSET UNITYSDK_OFFSET(0x15ADFB20)
#define RPG_CLIENT_EMOEYECTRL_SETDATA_OFFSET UNITYSDK_OFFSET(0x15ADBDF0)
#define RPG_CLIENT_EMOEYECTRL_SETEYECTRL_OFFSET UNITYSDK_OFFSET(0x15ADCB20)
#define RPG_CLIENT_EMOEYECTRL_SETEYELOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x15ADC220)
#define RPG_CLIENT_EMOEYECTRL_SETSHAKEDATA_OFFSET UNITYSDK_OFFSET(0x15ADBE40)
#define RPG_CLIENT_EMOEYECTRL_SETUPEYELOOKATCURVEBLEND_OFFSET UNITYSDK_OFFSET(0x15ADC290)
#define RPG_CLIENT_EMOEYECTRL_STOPEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x15ADC170)
#define RPG_CLIENT_EMOEYECTRL_UPDATEEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x15ADDD40)
#define RPG_CLIENT_EMOEYECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE01C0)
#define RPG_CLIENT_EMOEYECTRL__SHAKEOFFSET_OFFSET UNITYSDK_OFFSET(0x15ADEBA0)
#define RPG_CLIENT_EMOEYECTRL__SHAKERATIO_OFFSET UNITYSDK_OFFSET(0x15ADF840)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoEyeCtrl_TypeDefinitionIndex = 65556;

	class EmoEyeCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _mEnableEyeLookAt; // 0x18
		::System::Single _mEyeLookAtWeight; // 0x1C
		::UnityEngine::Transform* _mEyeLookAtTarget; // 0x20
		::UnityEngine::Vector3 _mEyeLookAtTargetPos; // 0x28
		::UnityEngine::Transform* EyeLookAtOrigin; // 0x38
		::System::Single EyeLookAtStopTime; // 0x40
		::UnityEngine::Vector2 EyeLookAtAxisXRange; // 0x44
		::UnityEngine::Vector2 EyeLookAtAxisYRange; // 0x4C
		::UnityEngine::Vector2 EyeLookAtSpeed; // 0x54
		::UnityEngine::Vector2 EyeLookAtForwardRange; // 0x5C
		::System::Boolean UseRotZ; // 0x64
		::UnityEngine::Transform* LeftEyeEnd; // 0x68
		::UnityEngine::Transform* RightEyeEnd; // 0x70
		::UnityEngine::Transform* LeftEye; // 0x78
		::UnityEngine::Transform* RightEye; // 0x80
		::UnityEngine::Transform* LeftEyeEnd01; // 0x88
		::UnityEngine::Transform* RightEyeEnd01; // 0x90
		::System::Single BlinkEyeXRot; // 0x98
		::RPGTools::Timeline::EmoEyeCtrlData* originData; // 0xA0
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _eyeOffsetData; // 0xA8
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _ShakedEyeOffsetData; // 0xB0
		::RPGTools::Timeline::EmoEyeCtrlShakeData* _ShakeData; // 0xB8
		::System::Single _ShakeTimer_Eye; // 0xC0
		::System::Single _ShakeTimer_EyeEnd; // 0xC4
		::System::Single _ShakeTimer_EyeEnd01; // 0xC8
		::UnityEngine::Vector3 _mEyeLookAtOffset; // 0xCC
		::UnityEngine::Vector3 _mLeftEyeLookAtRotOffset; // 0xD8
		::UnityEngine::Vector3 _mRightEyeLookAtRotOffset; // 0xE4
		::System::Boolean _mBlinking; // 0xF0
		::System::Single _mLeftDeltaRotation; // 0xF4
		::System::Single _mRightDeltaRotation; // 0xF8
		::UnityEngine::Quaternion _mLeftRotation; // 0xFC
		::UnityEngine::Quaternion _mRightRotation; // 0x10C
		::System::Boolean _mLeftNeedRotate; // 0x11C
		::System::Boolean _mRightNeedRotate; // 0x11D
		::System::Single _mBlinkingWeight; // 0x120
		::UnityEngine::Vector3 _eyeLocalUp; // 0x124
		::UnityEngine::Vector3 _eyeLocalForward; // 0x130
		::RPG::Client::EmoEyeCtrl_EyeLookAtCurveBlend _eyeCurveBlend; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableEyeLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_GET_ENABLEEYELOOKAT_OFFSET))(this);
		}

		::System::Boolean HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_HASDATA_OFFSET))(this);
		}

		::System::Void SetData(::RPGTools::Timeline::EmoEyeCtrlOffsetData* ctrlOffsetData)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETDATA_OFFSET))(this, ctrlOffsetData);
		}

		::System::Void SetShakeData(::RPGTools::Timeline::EmoEyeCtrlShakeData* shakeData)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETSHAKEDATA_OFFSET))(this, shakeData);
		}

		::System::Void EyeLookAt(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKAT_OFFSET))(this, target);
		}

		::System::Void EyeLookAt_1(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKAT_1_OFFSET))(this, targetPos);
		}

		::System::Void StopEyeLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STOPEYELOOKAT_OFFSET))(this);
		}

		::System::Void SetEyeLookAtWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETEYELOOKATWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetupEyeLookAtCurveBlend(::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETUPEYELOOKATCURVEBLEND_OFFSET))(this, duration, curve);
		}

		::System::Void InitializeLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_INITIALIZELOOKAT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_AWAKE_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_DOUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetEyeCtrl(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETEYECTRL_OFFSET))(this, deltaTime);
		}

		::System::Boolean _ShakeOffset(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__SHAKEOFFSET_OFFSET))(this, deltaTime);
		}

		::System::Single _ShakeRatio(::System::Single circle, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* noiseData, ::System::Single timer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__SHAKERATIO_OFFSET))(this, circle, noiseData, timer);
		}

		::UnityEngine::Quaternion EyeEuler(::UnityEngine::Vector3 rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYEEULER_OFFSET))(this, rotation);
		}

		::System::Void UpdateEyeLookAt(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_UPDATEEYELOOKAT_OFFSET))(this, deltaTime);
		}

		static ::UnityEngine::Vector3 ScaleAdd(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SCALEADD_OFFSET))(v1, v2);
		}

		::System::Void SetBlink(::System::Boolean blinking)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETBLINK_OFFSET))(this, blinking);
		}

		::System::Void SetBlinkWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETBLINKWEIGHT_OFFSET))(this, value);
		}

		::System::Single AjustRotation(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_AJUSTROTATION_OFFSET))(this, value);
		}
	};
}
