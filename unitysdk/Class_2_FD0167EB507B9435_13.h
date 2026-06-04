#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET UNITYSDK_OFFSET(0x1628D9C0)
#define CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1628D9B0)
#define CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1628DA10)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_13_TypeDefinitionIndex = 60804;

class Class_2_FD0167EB507B9435_13 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_13___IFIXBASEPROXY_UPDATE_OFFSET))(this, a1);
	}
};
