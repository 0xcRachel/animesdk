#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03E9977238AE0677;
class Class_1_21DCD4640D389503_18;
class Class_1_BB4B99DE4C2501EC_2;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0x16365D10)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163506F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 62160;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_18* _LineupInfo; // 0x10
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x18
		::Class_1_BB4B99DE4C2501EC_2* _SceneInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_03E9977238AE0677* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03E9977238AE0677*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, rsp);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
