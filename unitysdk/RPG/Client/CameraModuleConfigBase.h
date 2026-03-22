#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_CAMERAMODULECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E5E930)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraModuleConfigBase_TypeDefinitionIndex = 55398;

	class CameraModuleConfigBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGBASE__CTOR_OFFSET))(this);
		}
	};
}
