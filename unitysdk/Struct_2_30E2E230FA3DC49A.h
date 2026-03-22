#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class Object; }

#define STRUCT_2_30E2E230FA3DC49A_METHOD_2_3BFE659FC7C012C4_OFFSET UNITYSDK_OFFSET(0xC7DA0)
#define STRUCT_2_30E2E230FA3DC49A_METHOD_2_60BBFC7541650E6A_OFFSET UNITYSDK_OFFSET(0xC7DB0)

inline static constexpr unsigned int Struct_2_30E2E230FA3DC49A_TypeDefinitionIndex = 53445;

struct alignas(8) Struct_2_30E2E230FA3DC49A
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::RPG::Client::RogueBuffData* Field_2_2; // 0x18

	::System::Object* Method_2_3BFE659FC7C012C4()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_30E2E230FA3DC49A_METHOD_2_3BFE659FC7C012C4_OFFSET))(this);
	}

	::RPG::Client::RogueBuffData* Method_2_60BBFC7541650E6A()
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_30E2E230FA3DC49A_METHOD_2_60BBFC7541650E6A_OFFSET))(this);
	}
};
