#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class Class_0_16E4307DCC419505_20;
class Class_1_78C87B903531B893;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_CHARACTERANIMZONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8A0870)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xA8A0F70)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA8A0F80)
#define RPG_GAMECORE_CHARACTERANIMZONE_GET_ISARTLOADED_OFFSET UNITYSDK_OFFSET(0xA8A1330)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xA8A0C70)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA8A0AE0)
#define RPG_GAMECORE_CHARACTERANIMZONE_INITMODEL_OFFSET UNITYSDK_OFFSET(0xA8A0910)
#define RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_1_OFFSET UNITYSDK_OFFSET(0xA8A0E40)
#define RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_OFFSET UNITYSDK_OFFSET(0xA8A0DD0)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xA8A0F90)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA8A08C0)
#define RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA8A0A10)
#define RPG_GAMECORE_CHARACTERANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8A06D0)
#define RPG_GAMECORE_CHARACTERANIMZONE__ONANIMATORJOBCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8A0FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimZone_TypeDefinitionIndex = 46039;

	class CharacterAnimZone : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MockAnimator* _AnimatorRef; // 0x18
		::Class_1_78C87B903531B893* _AnimatorStateZoneInstance; // 0x20
		::Il2CppArray<::System::Boolean>* _InAnimZoneCache; // 0x28
		::System::Boolean _IsArtLoaded; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void InitComponent(::Class_0_16E4307DCC419505_20* configJson)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_20*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_OFFSET))(this, configJson);
		}

		::System::Void InitComponent_1(::System::String* commonConfigPath, ::System::String* overrideAnimZoneConfigPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITCOMPONENT_1_OFFSET))(this, commonConfigPath, overrideAnimZoneConfigPath);
		}

		::System::Boolean IsInAnimZone(::RPG::GameCore::AnimZoneType eZoneType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_OFFSET))(this, eZoneType);
		}

		::System::Boolean IsInAnimZone_1(::System::String* customName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ISINANIMZONE_1_OFFSET))(this, customName);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_ONANIMATORMOVE_OFFSET))(this, animator);
		}

		::System::Void _OnAnimatorJobCallback(::UnityEngine::AnimatorStateInfo currStateInfo, ::UnityEngine::AnimatorStateInfo nextStateInfo, ::UnityEngine::AnimatorTransitionInfo transitionInfo, ::System::Boolean isInTransition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE__ONANIMATORJOBCALLBACK_OFFSET))(this, currStateInfo, nextStateInfo, transitionInfo, isInTransition);
		}

		::System::Void InitModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_INITMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsArtLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONE_GET_ISARTLOADED_OFFSET))(this);
		}
	};
}
