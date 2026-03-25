#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BaseBindlessArray.h"

#define UNITYENGINE_CONSTANTBUFFERARRAY_DESTROY_OFFSET UNITYSDK_OFFSET(0x18A0D750)
#define UNITYENGINE_CONSTANTBUFFERARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A0D6C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConstantBufferArray_TypeDefinitionIndex = 4062;

	class ConstantBufferArray : public ::UnityEngine::BaseBindlessArray
	{
	public:
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSTANTBUFFERARRAY_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::ConstantBufferArray* bindlessArray)
		{
			return ((::System::Void(*)(::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSTANTBUFFERARRAY_DESTROY_OFFSET))(bindlessArray);
		}
	};
}
