#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowControlBehaviour_EControlType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline { class CRPCameraSmallWindowControlCenterAndSize; }
namespace RPGTools::Timeline { class CRPCameraSmallWindowSyncUIRect; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_11BD498A72D37741_OFFSET UNITYSDK_OFFSET(0xA5F6140)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_28B4A0B788255FF4_OFFSET UNITYSDK_OFFSET(0xA5F5F50)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA5F5830)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xA5F63D0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA5F64E0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F65B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowControlBehaviour_TypeDefinitionIndex = 37788;

	class CRPCameraSmallWindowControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraSmallWindowControlBehaviour_EControlType ControlType; // 0x10
		::RPGTools::Timeline::CRPCameraSmallWindowControlCenterAndSize* CenterAndSize; // 0x18
		::RPGTools::Timeline::CRPCameraSmallWindowSyncUIRect* SyncUIRect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_2_28B4A0B788255FF4()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_28B4A0B788255FF4_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_2_11BD498A72D37741()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_11BD498A72D37741_OFFSET))(this);
		}

		::System::Boolean Method_2_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_568AE7A1499723FD_OFFSET))(this);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWCONTROLBEHAVIOUR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}
	};
}
