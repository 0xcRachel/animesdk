#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueMiracleData; }
namespace System { class Object; }

#define STRUCT_2_C446110671CD5C23_METHOD_2_6D61E03273237E33_OFFSET UNITYSDK_OFFSET(0x753E0)
#define STRUCT_2_C446110671CD5C23_METHOD_2_766D45C2001B056A_OFFSET UNITYSDK_OFFSET(0x753D0)

inline static constexpr unsigned int Struct_2_C446110671CD5C23_TypeDefinitionIndex = 53447;

struct alignas(8) Struct_2_C446110671CD5C23
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::Client::RogueMiracleData* Field_2_1; // 0x18

	::System::Object* Method_2_766D45C2001B056A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C446110671CD5C23_METHOD_2_766D45C2001B056A_OFFSET))(this);
	}

	::RPG::Client::RogueMiracleData* Method_2_6D61E03273237E33()
	{
		return ((::RPG::Client::RogueMiracleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C446110671CD5C23_METHOD_2_6D61E03273237E33_OFFSET))(this);
	}
};
