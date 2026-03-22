#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_BINARYPREFABINSTANTIATEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x181C80E0)
#define UNITYENGINE_BINARYPREFABINSTANTIATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x181C80F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BinaryPrefabInstantiateRequest_TypeDefinitionIndex = 5307;

	class BinaryPrefabInstantiateRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABINSTANTIATEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABINSTANTIATEREQUEST_GET_ASSET_OFFSET))(this);
		}
	};
}
