#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetEventType.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_ASSETEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x80B8650)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetEventData_TypeDefinitionIndex = 36653;

	class HEU_AssetEventData : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* Asset; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OutputObjects; // 0x18
		::System::Boolean CookSuccess; // 0x20
		::HoudiniEngineUnity::HEU_AssetEventType EventType; // 0x24

		::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETEVENTDATA__CTOR_OFFSET))(this, asset, successful, outputObjects);
		}
	};
}
