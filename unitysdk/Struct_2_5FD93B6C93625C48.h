#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { class Object; }

#define STRUCT_2_5FD93B6C93625C48_METHOD_2_69F37438B68BD28F_OFFSET UNITYSDK_OFFSET(0x782B0)
#define STRUCT_2_5FD93B6C93625C48_METHOD_2_B0F5B38835C27299_OFFSET UNITYSDK_OFFSET(0x782A0)

inline static constexpr unsigned int Struct_2_5FD93B6C93625C48_TypeDefinitionIndex = 53449;

struct alignas(8) Struct_2_5FD93B6C93625C48
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::Client::RogueFormulaData* Field_2_1; // 0x18

	::System::Object* Method_2_B0F5B38835C27299()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5FD93B6C93625C48_METHOD_2_B0F5B38835C27299_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* Method_2_69F37438B68BD28F()
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5FD93B6C93625C48_METHOD_2_69F37438B68BD28F_OFFSET))(this);
	}
};
