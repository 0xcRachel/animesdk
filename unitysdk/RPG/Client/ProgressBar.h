#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PROGRESSBAR_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x9B35060)
#define RPG_CLIENT_PROGRESSBAR_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x9B350B0)
#define RPG_CLIENT_PROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x9B35110)
#define RPG_CLIENT_PROGRESSBAR__SETBAR_OFFSET UNITYSDK_OFFSET(0x9B34D60)
#define RPG_CLIENT_PROGRESSBAR__SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x9B34C00)
#define RPG_CLIENT_PROGRESSBAR__SETMARKROTATION_OFFSET UNITYSDK_OFFSET(0x9B34F80)
#define RPG_CLIENT_PROGRESSBAR__SETMARK_OFFSET UNITYSDK_OFFSET(0x9B34E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ProgressBar_TypeDefinitionIndex = 57901;

	class ProgressBar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::SmoothMask* _ProgressBar; // 0x18
		::UnityEngine::RectTransform* _CurrentMark; // 0x20
		::System::Boolean _HideMarkWhenZero; // 0x28
		::System::Boolean _HideMarkWhenMax; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR__CTOR_OFFSET))(this);
		}

		::System::Void _SetFillAmount(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR__SETFILLAMOUNT_OFFSET))(this, amount);
		}

		::System::Void _SetBar(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR__SETBAR_OFFSET))(this, amount);
		}

		::System::Void _SetMark(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR__SETMARK_OFFSET))(this, amount);
		}

		::System::Void _SetMarkRotation(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR__SETMARKROTATION_OFFSET))(this, amount);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESSBAR_SET_FILLAMOUNT_OFFSET))(this, value);
		}
	};
}
