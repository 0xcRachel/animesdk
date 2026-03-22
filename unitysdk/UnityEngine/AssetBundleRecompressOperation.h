#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

#define UNITYENGINE_ASSETBUNDLERECOMPRESSOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x181C8060)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleRecompressOperation_TypeDefinitionIndex = 5304;

	class AssetBundleRecompressOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLERECOMPRESSOPERATION__CTOR_OFFSET))(this);
		}
	};
}
