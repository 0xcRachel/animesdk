#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Class_1_332D7328FA038F3C_PSODownloadResponse_Status_TypeDefinitionIndex = 38273;

struct alignas(8) Class_1_332D7328FA038F3C_PSODownloadResponse_Status
{
	::System::Int32 code; // 0x10
	::System::String* message; // 0x18
};
