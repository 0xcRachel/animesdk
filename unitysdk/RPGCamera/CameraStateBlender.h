#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

class EasingFunction_FunctionValue;
namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET UNITYSDK_OFFSET(0x175BF8A0)
#define RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET UNITYSDK_OFFSET(0x175C01B0)
#define RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET UNITYSDK_OFFSET(0x175C01C0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET UNITYSDK_OFFSET(0x175BFB60)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET UNITYSDK_OFFSET(0x175BFBB0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET UNITYSDK_OFFSET(0x175BFB80)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x175BFBC0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x175BFC10)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET UNITYSDK_OFFSET(0x175BFBA0)
#define RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET UNITYSDK_OFFSET(0x175BFA90)
#define RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET UNITYSDK_OFFSET(0x175C0170)
#define RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x175BFB50)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET UNITYSDK_OFFSET(0x175BFB70)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET UNITYSDK_OFFSET(0x175BFB90)
#define RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET UNITYSDK_OFFSET(0x175BFCD0)
#define RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET UNITYSDK_OFFSET(0x175C0230)
#define RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x175BFA00)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlender_TypeDefinitionIndex = 40940;

	class CameraStateBlender : public ::System::Object
	{
	public:
		::RPGCamera::ICameraState* _preFromCam; // 0x10
		::RPGCamera::ICameraState* _preBlend; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* _blenderConfigDic; // 0x20
		::RPGCamera::ICameraState* _CamA_k__BackingField; // 0x28
		::RPGCamera::ICameraState* _CamB_k__BackingField; // 0x30
		::EasingFunction_FunctionValue* _lerpFunc; // 0x38
		::RPGCamera::ICameraState* _camBlend; // 0x40
		::RPGCamera::CameraStateBlenderConfig_BlendType _blendType; // 0x48
		::System::Single _duration; // 0x4C
		::RPGCamera::CameraStateData _retData; // 0x50
		::System::Single _blendTime; // 0xBC
		::System::Boolean _isFinished; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET))(this);
		}

		static ::RPGCamera::CameraStateBlender* Create()
		{
			return ((::RPGCamera::CameraStateBlender*(*)())((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET))();
		}

		::System::Void RegisterBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* blenderConfigDic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET))(this, blenderConfigDic);
		}

		::RPGCamera::ICameraState* get_CamA()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET))(this);
		}

		::System::Void set_CamA(::RPGCamera::ICameraState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET))(this, value);
		}

		::RPGCamera::ICameraState* get_CamB()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET))(this);
		}

		::System::Void set_CamB(::RPGCamera::ICameraState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET))(this, value);
		}

		::RPGCamera::ICameraState* get_PreBlend()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_CamBlend()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET))(this);
		}

		::RPGCamera::CameraStateData get_Data()
		{
			return ((::RPGCamera::CameraStateData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET))(this);
		}

		::System::Void StartBlend(::RPGCamera::ICameraState* camA, ::RPGCamera::ICameraState* camB)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET))(this, camA, camB);
		}

		::System::Boolean IsRevert(::RPGCamera::ICameraState* camB)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET))(this, camB);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET))(this);
		}
	};
}
