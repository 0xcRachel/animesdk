#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94A2A40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0x94A2A30)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_ID_OFFSET UNITYSDK_OFFSET(0x94A2A20)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_1_OFFSET UNITYSDK_OFFSET(0x94A2CD0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_OFFSET UNITYSDK_OFFSET(0x94A2B70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_1_OFFSET UNITYSDK_OFFSET(0x94A2C00)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_OFFSET UNITYSDK_OFFSET(0x94A2AA0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET UNITYSDK_OFFSET(0x94A2A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_TypeDefinitionIndex = 52730;

	class CharacterOutfitComponent_OutfitPart : public ::System::Object
	{
	public:
		::System::String* _ConfigPath_k__BackingField; // 0x10
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* Instance; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id, ::System::String* configPath, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET))(this, id, configPath, instance);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_ID_OFFSET))(this);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupConfig(::RPG::Client::CharacterArtModelConfig* modelConfig, ::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_OFFSET))(this, modelConfig, renderer);
		}

		::System::Void ResetConfig(::RPG::Client::CharacterArtModelConfig* modelConfig, ::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_OFFSET))(this, modelConfig, renderer);
		}

		::System::Void SetupConfig_1(::RPG::Client::CharacterArtModelConfig* modelConfig, ::RPG::Client::TAUtils::RendererSlots* rendererSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_1_OFFSET))(this, modelConfig, rendererSlot);
		}

		::System::Void ResetConfig_1(::RPG::Client::CharacterArtModelConfig* modelConfig, ::RPG::Client::TAUtils::RendererSlots* rendererSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_1_OFFSET))(this, modelConfig, rendererSlot);
		}
	};
}
