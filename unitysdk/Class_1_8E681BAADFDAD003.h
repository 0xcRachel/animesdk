#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8E681BAADFDAD003_GETNODEICON_OFFSET UNITYSDK_OFFSET(0x16B6DDD0)
#define CLASS_1_8E681BAADFDAD003__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6DE10)

inline static constexpr unsigned int Class_1_8E681BAADFDAD003_TypeDefinitionIndex = 70028;

class Class_1_8E681BAADFDAD003 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::IdleLiveNodeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + CLASS_1_8E681BAADFDAD003__CTOR_OFFSET))(this, a1);
	}

	::System::String* GetNodeIcon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E681BAADFDAD003_GETNODEICON_OFFSET))(this);
	}
};
