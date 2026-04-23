#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasPage; }
namespace System { class String; }

#define SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x160FFAD0)
#define SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x160FFAE0)
#define SPINE_UNITY_NOOPTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x160FFAF0)

namespace Spine::Unity
{
	inline static constexpr unsigned int NoOpTextureLoader_TypeDefinitionIndex = 40564;

	class NoOpTextureLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER__CTOR_OFFSET))(this);
		}

		::System::Void Load(::Spine::AtlasPage* page, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AtlasPage*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET))(this, page, path);
		}

		::System::Void Unload(::System::Object* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET))(this, texture);
		}
	};
}
