#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRPSUPERFAROBJPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x994A450)
#define CRPSUPERFAROBJPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x994A570)

inline static constexpr unsigned int CRPSuperFarObjPlugin_TypeDefinitionIndex = 37264;

class CRPSuperFarObjPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPSUPERFAROBJPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPSUPERFAROBJPLUGIN_ONENABLE_OFFSET))(this);
	}
};
