#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_3_1A92845FAFA5EC77;

#define CLASS_1_8E042314AFF884FB_12_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBC23FE0)
#define CLASS_1_8E042314AFF884FB_12_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBC23EE0)
#define CLASS_1_8E042314AFF884FB_12_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBC23E90)
#define CLASS_1_8E042314AFF884FB_12__CTOR_OFFSET UNITYSDK_OFFSET(0xBC23E80)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_12_TypeDefinitionIndex = 70636;

class Class_1_8E042314AFF884FB_12 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_12_TEARDOWN_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_12_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_12_EXECUTE_OFFSET))(this);
	}
};
