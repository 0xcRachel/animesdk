#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineSmoothPath; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCameraMonoView; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW_ONGUI_OFFSET UNITYSDK_OFFSET(0x9512D50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9513440)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__PRINTDEBUGLOGS_OFFSET UNITYSDK_OFFSET(0x9512E50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__PRINTDEBUGLOG_OFFSET UNITYSDK_OFFSET(0x9513270)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__TOPLEFT_OFFSET UNITYSDK_OFFSET(0x9512D90)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceFieldMonoView_TypeDefinitionIndex = 61424;

	class CakeRaceFieldMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::Cinemachine::CinemachineSmoothPath* Path; // 0x40
		::Cinemachine::CinemachineDollyCart* DollyCart; // 0x48
		::UnityEngine::Transform* CameraRoot; // 0x50
		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView* GameStartCamera; // 0x58
		::Cinemachine::CinemachineVirtualCamera* FollowCamera; // 0x60
		::Cinemachine::CinemachineVirtualCamera* FreeLookCamera; // 0x68
		::Cinemachine::CinemachineVirtualCamera* SectionShowCamera; // 0x70
		::UnityEngine::AnimationCurve* SectionShowSpeedCurve; // 0x78
		::UnityEngine::Transform* CellRoot; // 0x80
		::System::UInt32 _Row; // 0x88
		::UnityEngine::GUIStyle* _Style; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW_ONGUI_OFFSET))(this);
		}

		::UnityEngine::Rect _TopLeft()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__TOPLEFT_OFFSET))(this);
		}

		::System::Void _PrintDebugLogs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__PRINTDEBUGLOGS_OFFSET))(this);
		}

		::System::Void _PrintDebugLog(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__PRINTDEBUGLOG_OFFSET))(this, key, value);
		}
	};
}
