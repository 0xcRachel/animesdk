#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

#define UNITYENGINE_ASSETBUNDLEINSTANTIATEPREFABREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x181C8000)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleInstantiatePrefabRequest_TypeDefinitionIndex = 5306;

	class AssetBundleInstantiatePrefabRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEINSTANTIATEPREFABREQUEST__CTOR_OFFSET))(this);
		}
	};
}
