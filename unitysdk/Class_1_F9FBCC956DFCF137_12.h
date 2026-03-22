#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;

#define CLASS_1_F9FBCC956DFCF137_12_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10F8B510)
#define CLASS_1_F9FBCC956DFCF137_12__CTOR_OFFSET UNITYSDK_OFFSET(0x10F8B500)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_12_TypeDefinitionIndex = 60082;

class Class_1_F9FBCC956DFCF137_12 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_12__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_12_EXECUTE_OFFSET))(this);
	}
};
