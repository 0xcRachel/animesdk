#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BehaviorBase; }
namespace RPG::Client { class CRPVCBackground; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_SPLITSCREENVCCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x16C35580)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x16C35850)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C359A0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16C35620)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16C357F0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16C356A0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x16C358F0)
#define RPG_CLIENT_SPLITSCREENVCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C35740)
#define RPG_CLIENT_SPLITSCREENVCCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C35A10)

namespace RPG::Client
{
	inline static constexpr unsigned int SplitScreenVCControl_TypeDefinitionIndex = 64252;

	class SplitScreenVCControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::CRPVirtualCamera* VCLeft; // 0x18
		::UnityEngine::Rendering::CRPVirtualCamera* VCRight; // 0x20
		::System::Single SplitRange; // 0x28
		::System::Single SplitSlope; // 0x2C
		::RPG::Client::CRPVCBackground* LeftBackground; // 0x30
		::RPG::Client::CRPVCBackground* RightBackground; // 0x38
		::UnityEngine::RectTransform* UILine; // 0x40
		::System::Single UILineWidth; // 0x48
		::System::Boolean DebugSlope; // 0x4C
		::RPG::Client::BehaviorBase* Field_5_9; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void CreateBehavior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_CREATEBEHAVIOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENVCCONTROL_DISPOSE_OFFSET))(this);
		}
	};
}
