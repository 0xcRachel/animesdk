#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleRandomRevive; }

#define CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x16136AB0)
#define CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16136BC0)
#define CLASS_2_208E75987E2103DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16136AA0)

inline static constexpr unsigned int Class_2_208E75987E2103DE_TypeDefinitionIndex = 32271;

class Class_2_208E75987E2103DE : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleRandomRevive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRandomRevive* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRandomRevive*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
