#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define CLASS_1_3EDF20E7DE3B369F_METHOD_1_4F6A7CAC7E7BDED4_OFFSET UNITYSDK_OFFSET(0xFE9AF80)
#define CLASS_1_3EDF20E7DE3B369F_METHOD_1_73D347DF768609BF_OFFSET UNITYSDK_OFFSET(0xFE9AC90)
#define CLASS_1_3EDF20E7DE3B369F_METHOD_1_B32747288E19FA6D_OFFSET UNITYSDK_OFFSET(0xFE9AD00)
#define CLASS_1_3EDF20E7DE3B369F_METHOD_1_BF410CC7BBA688F1_OFFSET UNITYSDK_OFFSET(0xFE9AD90)
#define CLASS_1_3EDF20E7DE3B369F__CTOR_OFFSET UNITYSDK_OFFSET(0xFE9AD80)

inline static constexpr unsigned int Class_1_3EDF20E7DE3B369F_TypeDefinitionIndex = 53275;

class Class_1_3EDF20E7DE3B369F : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EDF20E7DE3B369F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_73D347DF768609BF()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EDF20E7DE3B369F_METHOD_1_73D347DF768609BF_OFFSET))(this);
	}

	static ::Class_1_3EDF20E7DE3B369F* Method_1_B32747288E19FA6D(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_1_3EDF20E7DE3B369F*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_3EDF20E7DE3B369F_METHOD_1_B32747288E19FA6D_OFFSET))(a1);
	}

	::System::UInt32 Method_1_BF410CC7BBA688F1(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_3EDF20E7DE3B369F_METHOD_1_BF410CC7BBA688F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F6A7CAC7E7BDED4(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_3EDF20E7DE3B369F_METHOD_1_4F6A7CAC7E7BDED4_OFFSET))(this, a1);
	}
};
