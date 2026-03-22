#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class Object; }

#define STRUCT_2_E8729985539D7C77_METHOD_2_182EFB3B168DEC04_OFFSET UNITYSDK_OFFSET(0x13EDC70)
#define STRUCT_2_E8729985539D7C77_METHOD_2_8774D82D880EE0DC_OFFSET UNITYSDK_OFFSET(0x13EDC80)

inline static constexpr unsigned int Struct_2_E8729985539D7C77_TypeDefinitionIndex = 53457;

struct alignas(8) Struct_2_E8729985539D7C77
{
	::System::UInt32 Field_2_0; // 0x10
	::RPG::Client::RogueTournTitanBless* Field_2_1; // 0x18

	::System::Object* Method_2_182EFB3B168DEC04()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8729985539D7C77_METHOD_2_182EFB3B168DEC04_OFFSET))(this);
	}

	::RPG::Client::RogueTournTitanBless* Method_2_8774D82D880EE0DC()
	{
		return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8729985539D7C77_METHOD_2_8774D82D880EE0DC_OFFSET))(this);
	}
};
