#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client { class FMSystem; }
namespace RPG::Client { class LevelStageVisableController; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0EB00F37E3AA0D96_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB897D0)
#define CLASS_1_0EB00F37E3AA0D96_METHOD_1_BB0632FE727463CD_OFFSET UNITYSDK_OFFSET(0xFB89830)
#define CLASS_1_0EB00F37E3AA0D96_METHOD_1_C5C746E79A067435_OFFSET UNITYSDK_OFFSET(0xFB898A0)
#define CLASS_1_0EB00F37E3AA0D96_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFB89980)
#define CLASS_1_0EB00F37E3AA0D96_METHOD_1_FA59CDD5B462F41F_OFFSET UNITYSDK_OFFSET(0xFB89990)
#define CLASS_1_0EB00F37E3AA0D96__CTOR_OFFSET UNITYSDK_OFFSET(0xFB89730)

inline static constexpr unsigned int Class_1_0EB00F37E3AA0D96_TypeDefinitionIndex = 67990;

class Class_1_0EB00F37E3AA0D96 : public ::System::Object
{
public:
	::RPG::GameCore::StageGrassOverrideConfig* Field_1_4; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::String* Field_1_9; // 0x20
	::RPG::Client::MonoEffect* Field_1_17; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::String* Field_1_2; // 0x38
	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_15; // 0x48
	::System::String* Field_1_0; // 0x50
	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* Field_1_8; // 0x58
	::RPG::Client::FMSystem* Field_1_18; // 0x60
	::Il2CppArray<::System::String*>* Field_1_6; // 0x68
	::RPG::GameCore::UnifiedBattleAreaConfig* Field_1_5; // 0x70
	::System::UInt32 Field_1_16; // 0x78
	::UnityEngine::Quaternion Field_1_12; // 0x7C
	::RPG::GameCore::EnviromentControlPriority Field_1_3; // 0x8C
	::System::Boolean Field_1_13; // 0x90
	::System::Boolean Field_1_14; // 0x91
	::UnityEngine::Vector3 Field_1_11; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BB0632FE727463CD(::RPG::GameCore::LevelBattleAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96_METHOD_1_BB0632FE727463CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5C746E79A067435(::RPG::GameCore::UnifiedBattleAreaConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnifiedBattleAreaConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96_METHOD_1_C5C746E79A067435_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LevelStageVisableController* Method_1_FA59CDD5B462F41F()
	{
		return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EB00F37E3AA0D96_METHOD_1_FA59CDD5B462F41F_OFFSET))(this);
	}
};
