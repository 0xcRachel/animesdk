#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B9E56D0D50E02617_1;

#define CLASS_2_FD0167EB507B9435_12_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0xD8AF420)
#define CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET UNITYSDK_OFFSET(0xD8AF4C0)
#define CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET UNITYSDK_OFFSET(0xD8AF410)
#define CLASS_2_FD0167EB507B9435_12___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xD8AF510)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_12_TypeDefinitionIndex = 51671;

class Class_2_FD0167EB507B9435_12 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::Void Update(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12_UPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B9E56D0D50E02617_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_12___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
