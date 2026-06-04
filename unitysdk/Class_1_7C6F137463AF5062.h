#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_367B452FA4E5EC2C;
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }

#define CLASS_1_7C6F137463AF5062_METHOD_1_4255F536117992DC_OFFSET UNITYSDK_OFFSET(0x15013A60)
#define CLASS_1_7C6F137463AF5062_METHOD_1_7196BF40F287E496_OFFSET UNITYSDK_OFFSET(0x15013D10)
#define CLASS_1_7C6F137463AF5062_METHOD_1_94D73D2501A845E7_OFFSET UNITYSDK_OFFSET(0x15013EB0)
#define CLASS_1_7C6F137463AF5062_METHOD_1_DBC9BB92C34F68B0_OFFSET UNITYSDK_OFFSET(0x15013C90)

inline static constexpr unsigned int Class_1_7C6F137463AF5062_TypeDefinitionIndex = 74249;

class Class_1_7C6F137463AF5062 : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_4255F536117992DC(::Class_1_367B452FA4E5EC2C* a1)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_7C6F137463AF5062_METHOD_1_4255F536117992DC_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_DBC9BB92C34F68B0(::RPG::Client::ChallengeData* a1)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + CLASS_1_7C6F137463AF5062_METHOD_1_DBC9BB92C34F68B0_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_7196BF40F287E496(::RPG::Client::ChallengeData* a1, ::Class_1_367B452FA4E5EC2C* a2)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_7C6F137463AF5062_METHOD_1_7196BF40F287E496_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Method_1_94D73D2501A845E7(::RPG::Client::ChallengeBossData* a1, ::Class_1_367B452FA4E5EC2C* a2)
	{
		return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeBossData*, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + CLASS_1_7C6F137463AF5062_METHOD_1_94D73D2501A845E7_OFFSET))(a1, a2);
	}
};
