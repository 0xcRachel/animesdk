#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_639EE7056A008FE5_METHOD_2_47B047590A4850CC_OFFSET UNITYSDK_OFFSET(0x1464350)

inline static constexpr unsigned int Struct_2_639EE7056A008FE5_TypeDefinitionIndex = 53443;

struct alignas(8) Struct_2_639EE7056A008FE5
{
	::RPG::GameCore::FixPoint Field_2_0; // 0x10

	::System::Object* Method_2_47B047590A4850CC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_639EE7056A008FE5_METHOD_2_47B047590A4850CC_OFFSET))(this);
	}
};
