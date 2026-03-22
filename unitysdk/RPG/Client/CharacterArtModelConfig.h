#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::TAUtils { class RendererSlots; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERARTMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA3B20)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelConfig_TypeDefinitionIndex = 55476;

	class CharacterArtModelConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* StaticModelEffects; // 0x18
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* StaticModelMaterials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELCONFIG__CTOR_OFFSET))(this);
		}
	};
}
