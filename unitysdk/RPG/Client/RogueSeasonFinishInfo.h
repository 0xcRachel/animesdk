#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_21DCD4640D389503_16;
class Class_1_859A7D4FBD5EA56D;
namespace RPG::Client { class RogueFinishInfo; }

#define RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET UNITYSDK_OFFSET(0x9E46300)
#define RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E30F10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSeasonFinishInfo_TypeDefinitionIndex = 53615;

	class RogueSeasonFinishInfo : public ::System::Object
	{
	public:
		::Class_1_14E02E1F6D70E487_1* _SceneInfo; // 0x10
		::RPG::Client::RogueFinishInfo* RogueFinishInfo; // 0x18
		::Class_1_21DCD4640D389503_16* _LineupInfo; // 0x20
		::System::Boolean AlreadyFinish; // 0x28

		::System::Void _ctor(::Class_1_859A7D4FBD5EA56D* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_859A7D4FBD5EA56D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO__CTOR_OFFSET))(this, rsp);
		}

		::System::Void QuitRogueMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESEASONFINISHINFO_QUITROGUEMAP_OFFSET))(this);
		}
	};
}
