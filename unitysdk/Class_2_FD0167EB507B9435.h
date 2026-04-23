#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_FD0167EB507B9435_UPDATE_OFFSET UNITYSDK_OFFSET(0x112EBE20)
#define CLASS_2_FD0167EB507B9435__CTOR_OFFSET UNITYSDK_OFFSET(0x112EBE10)
#define CLASS_2_FD0167EB507B9435___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x112EBE70)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_TypeDefinitionIndex = 59845;

class Class_2_FD0167EB507B9435 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
