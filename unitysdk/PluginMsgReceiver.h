#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JsonObject;

#define PLUGINMSGRECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A74BFB0)
#define PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET UNITYSDK_OFFSET(0x1A74C070)
#define PLUGINMSGRECEIVER_START_OFFSET UNITYSDK_OFFSET(0x1A74BEF0)
#define PLUGINMSGRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74C1D0)

inline static constexpr unsigned int PluginMsgReceiver_TypeDefinitionIndex = 37644;

class PluginMsgReceiver : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 _receiverId; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_ONDESTROY_OFFSET))(this);
	}

	::JsonObject* SendPluginMsg(::JsonObject* jsonMsg)
	{
		return ((::JsonObject*(*)(::PVOID, ::JsonObject*))((::PBYTE)hIl2Cpp + PLUGINMSGRECEIVER_SENDPLUGINMSG_OFFSET))(this, jsonMsg);
	}
};
