#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoJoyStickProvider.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x98316C0)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__INDIRECTIONANGLERANGE_OFFSET UNITYSDK_OFFSET(0x9831260)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__SETHINTTRANSANGLE_OFFSET UNITYSDK_OFFSET(0x98313A0)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYDISABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x9831490)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYENABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0x98312D0)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0x9831110)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER___IFIXBASEPROXY__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0x9831780)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHorizontalJoyStickProvider_TypeDefinitionIndex = 48626;

	class MonoHorizontalJoyStickProvider : public ::RPG::Client::MonoJoyStickProvider
	{
	public:
		// static const ::System::Single _RightUIAngle; // 0x0
		// static const ::System::Single _LeftUIAngle; // 0x0
		::UnityEngine::Vector2 _RightAngleRange; // 0xC0
		::UnityEngine::Vector2 _LeftAngleRange; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHintView(::System::Single uiAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, uiAngle);
		}

		::System::Boolean _InDirectionAngleRange(::UnityEngine::Vector2& directionRange, ::System::Single angle)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__INDIRECTIONANGLERANGE_OFFSET))(this, directionRange, angle);
		}

		::System::Void _SetHintTransAngle(::System::Single uiAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__SETHINTTRANSANGLE_OFFSET))(this, uiAngle);
		}

		::System::Void _TryEnablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYENABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void _TryDisablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYDISABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UpdatePressDragHintView(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER___IFIXBASEPROXY__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, P0);
		}
	};
}
