#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeStatisticRecommendLineupData; }

#define CLASS_2_EBC356F73014C34A_EQUALS_OFFSET UNITYSDK_OFFSET(0x11069930)
#define CLASS_2_EBC356F73014C34A_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x110699D0)
#define CLASS_2_EBC356F73014C34A_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x11069630)
#define CLASS_2_EBC356F73014C34A_METHOD_2_13A9D947580F21B0_OFFSET UNITYSDK_OFFSET(0x110696B0)
#define CLASS_2_EBC356F73014C34A__CTOR_OFFSET UNITYSDK_OFFSET(0x11069640)

inline static constexpr unsigned int Class_2_EBC356F73014C34A_TypeDefinitionIndex = 50210;

class Class_2_EBC356F73014C34A : public ::RPG::Client::MessageContentBlock
{
public:
	::RPG::Client::ChallengeStatisticRecommendLineupData* _RecommendLineupData_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_2_EBC356F73014C34A__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::MessageContentBlock_BlockType get_Type()
	{
		return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC356F73014C34A_GET_TYPE_OFFSET))(this);
	}

	::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + CLASS_2_EBC356F73014C34A_EQUALS_OFFSET))(this, a1);
	}

	::RPG::Client::ChallengeData* Method_2_13A9D947580F21B0(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_2_EBC356F73014C34A_METHOD_2_13A9D947580F21B0_OFFSET))(this, a1);
	}

	::RPG::Client::ChallengeStatisticRecommendLineupData* get_RecommendLineupData()
	{
		return ((::RPG::Client::ChallengeStatisticRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBC356F73014C34A_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
	}
};
