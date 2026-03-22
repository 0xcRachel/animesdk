#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_193FF13EC6909625.h"

class Class_1_227E37F7EFA871F8;
class Class_2_DFB79F7EE671BF59;
class Class_4_0FE2F2FA8B5CD496;

#define CLASS_2_69D1EAF0BB94868D_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16015330)
#define CLASS_2_69D1EAF0BB94868D_METHOD_2_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x16015210)
#define CLASS_2_69D1EAF0BB94868D__CTOR_OFFSET UNITYSDK_OFFSET(0x16015160)

inline static constexpr unsigned int Class_2_69D1EAF0BB94868D_TypeDefinitionIndex = 27827;

class Class_2_69D1EAF0BB94868D : public ::Class_1_193FF13EC6909625
{
public:
	::Class_4_0FE2F2FA8B5CD496* Field_2_0; // 0x28

	::System::Void _ctor(::Class_4_0FE2F2FA8B5CD496* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0FE2F2FA8B5CD496*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_2_69D1EAF0BB94868D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAE66D5654320160(::Class_1_227E37F7EFA871F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_227E37F7EFA871F8*))((::PBYTE)hIl2Cpp + CLASS_2_69D1EAF0BB94868D_METHOD_2_BAE66D5654320160_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69D1EAF0BB94868D_INITIALIZE_OFFSET))(this);
	}
};
