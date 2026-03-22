#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Resources { class ResourceManager; }

#define UNITYENGINE_BUFFERS_SR_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x181DC9A0)
#define UNITYENGINE_BUFFERS_SR_GET_ARGUMENTEXCEPTION_BUFFERNOTFROMPOOL_OFFSET UNITYSDK_OFFSET(0x181DC940)
#define UNITYENGINE_BUFFERS_SR_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x181DC820)
#define UNITYENGINE_BUFFERS_SR_GET_RESOURCETYPE_OFFSET UNITYSDK_OFFSET(0x181DC910)
#define UNITYENGINE_BUFFERS_SR__CCTOR_OFFSET UNITYSDK_OFFSET(0x181DCAC0)

namespace UnityEngine::Buffers
{
	inline static constexpr unsigned int SR_TypeDefinitionIndex = 4713;

	class SR : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet__ResourceType_k__BackingField()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x19EF0);
		}
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x19EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_SR__CCTOR_OFFSET))();
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_SR_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::Type* get_ResourceType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_SR_GET_RESOURCETYPE_OFFSET))();
		}

		static ::System::String* get_ArgumentException_BufferNotFromPool()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_SR_GET_ARGUMENTEXCEPTION_BUFFERNOTFROMPOOL_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* resourceKey, ::System::String* defaultString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BUFFERS_SR_GETRESOURCESTRING_OFFSET))(resourceKey, defaultString);
		}
	};
}
