#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STAGEHARMONYTARGETLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x14F955D0)

inline static constexpr unsigned int StageHarmonyTargetLight_TypeDefinitionIndex = 44287;

class StageHarmonyTargetLight : public ::System::Object
{
public:
	::System::Int32 targetLightIndex; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTARGETLIGHT__CTOR_OFFSET))(this);
	}
};
