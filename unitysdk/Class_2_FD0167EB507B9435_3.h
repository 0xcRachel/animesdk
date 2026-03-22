#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B9E56D0D50E02617_1;

#define CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x100A0F20)
#define CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x100A0E80)
#define CLASS_2_FD0167EB507B9435_3__CTOR_OFFSET UNITYSDK_OFFSET(0x100A0E70)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_3_TypeDefinitionIndex = 51658;

class Class_2_FD0167EB507B9435_3 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_3_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}
};
