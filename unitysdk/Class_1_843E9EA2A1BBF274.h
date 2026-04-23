#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_843E9EA2A1BBF274_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xF49B920)
#define CLASS_1_843E9EA2A1BBF274_GET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0xF49B940)
#define CLASS_1_843E9EA2A1BBF274_GET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0xF49B980)
#define CLASS_1_843E9EA2A1BBF274_GET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0xF49B960)
#define CLASS_1_843E9EA2A1BBF274_METHOD_1_80E50FA57EB733F1_OFFSET UNITYSDK_OFFSET(0xF49B9F0)
#define CLASS_1_843E9EA2A1BBF274_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xF49B9A0)
#define CLASS_1_843E9EA2A1BBF274_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xF49B930)
#define CLASS_1_843E9EA2A1BBF274_SET_MAINAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0xF49B950)
#define CLASS_1_843E9EA2A1BBF274_SET_RARITYCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0xF49B990)
#define CLASS_1_843E9EA2A1BBF274_SET_SUBAFFIXSCORE_OFFSET UNITYSDK_OFFSET(0xF49B970)
#define CLASS_1_843E9EA2A1BBF274__CTOR_OFFSET UNITYSDK_OFFSET(0xF49BDD0)

inline static constexpr unsigned int Class_1_843E9EA2A1BBF274_TypeDefinitionIndex = 68700;

class Class_1_843E9EA2A1BBF274 : public ::System::Object
{
public:
	::System::Single _SubAffixScore_k__BackingField; // 0x10
	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x14
	::System::Single _RarityCoefficient_k__BackingField; // 0x18
	::System::Single _MainAffixScore_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274__CTOR_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Single get_MainAffixScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_GET_MAINAFFIXSCORE_OFFSET))(this);
	}

	::System::Void set_MainAffixScore(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_SET_MAINAFFIXSCORE_OFFSET))(this, value);
	}

	::System::Single get_SubAffixScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_GET_SUBAFFIXSCORE_OFFSET))(this);
	}

	::System::Void set_SubAffixScore(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_SET_SUBAFFIXSCORE_OFFSET))(this, value);
	}

	::System::Single get_RarityCoefficient()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_GET_RARITYCOEFFICIENT_OFFSET))(this);
	}

	::System::Void set_RarityCoefficient(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_SET_RARITYCOEFFICIENT_OFFSET))(this, value);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::String* Method_1_80E50FA57EB733F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843E9EA2A1BBF274_METHOD_1_80E50FA57EB733F1_OFFSET))(this);
	}
};
