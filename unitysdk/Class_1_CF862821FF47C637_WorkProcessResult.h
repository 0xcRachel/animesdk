#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_CF862821FF47C637_WorkProcessResult_TypeDefinitionIndex = 32956;

enum class Class_1_CF862821FF47C637_WorkProcessResult : ::System::Int32
{
	Blocked = 0,
	InProgress = 1,
	QueuedOnWorkerThread = 2,
	Finished = 3,
};
