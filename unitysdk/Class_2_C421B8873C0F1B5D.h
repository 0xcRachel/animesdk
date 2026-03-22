#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleRegisterGhostFire; }

#define CLASS_2_C421B8873C0F1B5D_METHOD_2_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x16143EE0)
#define CLASS_2_C421B8873C0F1B5D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16143FE0)
#define CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x16143ED0)

inline static constexpr unsigned int Class_2_C421B8873C0F1B5D_TypeDefinitionIndex = 32269;

class Class_2_C421B8873C0F1B5D : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleRegisterGhostFire* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRegisterGhostFire* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRegisterGhostFire*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D_METHOD_2_B8817F4F77EFC234_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
