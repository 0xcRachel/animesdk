#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelLittleGameLoadType.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace RPG::GameCore { class LittleGameNavInfo; }
namespace RPG::GameCore { class LittleGameRequireMissionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELLITTLEGAMEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x16BAAEF0)
#define RPG_GAMECORE_LEVELLITTLEGAMEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BAAEB0)
#define RPG_GAMECORE_LEVELLITTLEGAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BAAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLittleGameInfo_TypeDefinitionIndex = 15645;

	class LevelLittleGameInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Single RotX; // 0x38
		::System::Single RotZ; // 0x3C
		::RPG::GameCore::LittleGameType GameType; // 0x40
		::System::String* LevelConfigPath; // 0x48
		::RPG::GameCore::LevelLittleGameLoadType LoadType; // 0x50
		::System::Boolean EnableDelayLoad; // 0x54
		::System::String* LoadGroupPropertyName; // 0x58
		::Il2CppArray<::System::Int16>* LoadGroupPropertyValues; // 0x60
		::RPG::GameCore::LittleGameLevelVarBindingMap* LevelVarBinding; // 0x68
		::System::String* PuzzleAreaName; // 0x70
		::System::Boolean AdditiveLoadArea; // 0x78
		::System::Boolean HideAllEntityOnEnter; // 0x79
		::Il2CppArray<::System::UInt32>* GroupsToKeepOnEnter; // 0x80
		::RPG::GameCore::LittleGameNavInfo* NavInfo; // 0x88
		::System::Boolean IsEnablePVS; // 0x90
		::RPG::GameCore::LittleGameRequireMissionInfo* RequireMissionInfo; // 0x98
		::Il2CppArray<::System::UInt32>* MinimapFogIDList; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLITTLEGAMEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelLittleGameInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLittleGameInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLITTLEGAMEINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelLittleGameInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLITTLEGAMEINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
