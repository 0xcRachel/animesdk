#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournDifficultyWithDifficultyComp; }
namespace RPG::Client { class IRogueTournDifficultyWithDivision; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIFFCOMP_OFFSET UNITYSDK_OFFSET(0xA3956C0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIVISION_OFFSET UNITYSDK_OFFSET(0xA395730)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_DIFFICULTYCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xA38D570)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIFFCOMP_OFFSET UNITYSDK_OFFSET(0xA38D510)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIVISION_OFFSET UNITYSDK_OFFSET(0xA374D20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyExt_TypeDefinitionIndex = 55102;

	class RogueTournDifficultyExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsDiffComp(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIFFCOMP_OFFSET))(difficulty);
		}

		static ::RPG::Client::IRogueTournDifficultyWithDifficultyComp* AsDiffComp(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDifficultyComp*(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIFFCOMP_OFFSET))(difficulty);
		}

		static ::System::Boolean IsDivision(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ISDIVISION_OFFSET))(difficulty);
		}

		static ::RPG::Client::IRogueTournDifficultyWithDivision* AsDivision(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::RPG::Client::IRogueTournDifficultyWithDivision*(*)(::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_ASDIVISION_OFFSET))(difficulty);
		}

		static ::System::UInt32 DifficultyCompLevel(::RPG::Client::IRogueTournDifficultyWithDifficultyComp* difficulty)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournDifficultyWithDifficultyComp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYEXT_DIFFICULTYCOMPLEVEL_OFFSET))(difficulty);
		}
	};
}
