#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_PlayerType.h"
#include "unitysdk/RPG/Client/StageHarmonyPlayerPosSignalMonoPlugin_SignalType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StageHarmonyPlayerPosSignalBehavior; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0x9FAB7F0)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0x9FAB770)
#define RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAB980)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoPlugin_TypeDefinitionIndex = 56548;

	class StageHarmonyPlayerPosSignalMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyPlayerPosSignalBehavior*>
	{
	public:
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_PlayerType playerType; // 0x30
		::RPG::Client::StageHarmonyPlayerPosSignalMonoPlugin_SignalType signalType; // 0x34
		::System::Boolean UseLocalSpaceVolume; // 0x38
		::System::Single Range; // 0x3C
		::System::String* Channle; // 0x40
		::UnityEngine::Transform* EditorTestHandle; // 0x48
		::System::Boolean ChannleNameInvalid; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::RPG::GameCore::StageSceneItemSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYPLAYERPOSSIGNALMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}
	};
}
