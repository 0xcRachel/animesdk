#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15336D10)
#define RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0x15338430)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_1_OFFSET UNITYSDK_OFFSET(0x15337FA0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_OFFSET UNITYSDK_OFFSET(0x15337B80)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_235779E3A1B24A75_OFFSET UNITYSDK_OFFSET(0x15337FF0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x15338330)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4B299A7B44D66F76_OFFSET UNITYSDK_OFFSET(0x153381A0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x15337830)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x15337330)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_1_OFFSET UNITYSDK_OFFSET(0x15336EC0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x153370D0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_50AE2676D9583449_OFFSET UNITYSDK_OFFSET(0x15338080)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x153382B0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_DF028CAA51A328F2_OFFSET UNITYSDK_OFFSET(0x153383B0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_FC4FFB09CD8F8D39_OFFSET UNITYSDK_OFFSET(0x15337BD0)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15337680)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x153372E0)
#define RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0x15338440)
#define RPG_CLIENT_SCREENCLICKEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15338460)
#define RPG_CLIENT_SCREENCLICKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15338450)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenClickEffect_TypeDefinitionIndex = 63618;

	class ScreenClickEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_10()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenClickEffect_TypeDefinitionIndex)->GetStaticField(0x38940);
		}
		::System::Boolean _ShouldHide_k__BackingField; // 0x18
		::UnityEngine::GameObject* _EffectMobile; // 0x20
		::UnityEngine::GameObject* _EffectPC; // 0x28
		::UnityEngine::Canvas* Field_5_3; // 0x30
		::UnityEngine::RectTransform* Field_5_4; // 0x38
		::UnityEngine::RectTransform* Field_5_5; // 0x40
		::UnityEngine::RectTransform* Field_5_6; // 0x48
		::UnityEngine::Animation* Field_5_7; // 0x50
		::UnityEngine::Animation* Field_5_8; // 0x58
		::System::Boolean Field_5_9; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_1_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4D2A473556700CDC_1_OFFSET))(this);
		}

		::System::Void Method_5_09ACA71C17EF0726(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_OFFSET))(this, a1);
		}

		::System::Void Method_5_09ACA71C17EF0726_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_235779E3A1B24A75(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_235779E3A1B24A75_OFFSET))(this, a1);
		}

		::System::Void Method_5_50AE2676D9583449(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_50AE2676D9583449_OFFSET))(this, a1);
		}

		::System::Void Method_5_FC4FFB09CD8F8D39(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_FC4FFB09CD8F8D39_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_4B299A7B44D66F76(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4B299A7B44D66F76_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET))(this);
		}

		::System::Void set_ShouldHide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* Method_5_B7BFE5D35A542E8B()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_B7BFE5D35A542E8B_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_5_494458CA7765DC42()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_494458CA7765DC42_OFFSET))(this);
		}

		::UnityEngine::Animation* Method_5_DF028CAA51A328F2()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_DF028CAA51A328F2_OFFSET))(this);
		}
	};
}
