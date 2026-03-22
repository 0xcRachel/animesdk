#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B9E56D0D50E02617_1;

#define CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET UNITYSDK_OFFSET(0x8936770)
#define CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET UNITYSDK_OFFSET(0x8936760)
#define CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x89367C0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_13_TypeDefinitionIndex = 51672;

class Class_2_FD0167EB507B9435_13 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B9E56D0D50E02617_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
