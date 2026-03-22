#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleDisableGhostFire; }

#define CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x162D5A10)
#define CLASS_2_8E8A790FD7D62C44_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162D5AA0)
#define CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET UNITYSDK_OFFSET(0x162D5A00)

inline static constexpr unsigned int Class_2_8E8A790FD7D62C44_TypeDefinitionIndex = 32270;

class Class_2_8E8A790FD7D62C44 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleDisableGhostFire* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleDisableGhostFire* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDisableGhostFire*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
