#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_09ED07420E5BC3AB__CTOR_OFFSET UNITYSDK_OFFSET(0x103CC7B0)

inline static constexpr unsigned int Class_1_09ED07420E5BC3AB_TypeDefinitionIndex = 46311;

class Class_1_09ED07420E5BC3AB : public ::System::Object
{
public:
	::RPG::GameCore::ShowUIPage* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09ED07420E5BC3AB__CTOR_OFFSET))(this);
	}
};
