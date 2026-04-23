#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61DD098C4AD3E56F.h"

#define CLASS_3_BC8623F0EB7FDBCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4946F0)
#define CLASS_3_BC8623F0EB7FDBCC__CTOR_OFFSET UNITYSDK_OFFSET(0xE494850)
#define CLASS_3_BC8623F0EB7FDBCC__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xE494500)
#define CLASS_3_BC8623F0EB7FDBCC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4948C0)
#define CLASS_3_BC8623F0EB7FDBCC___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xE494860)

inline static constexpr unsigned int Class_3_BC8623F0EB7FDBCC_TypeDefinitionIndex = 52763;

class Class_3_BC8623F0EB7FDBCC : public ::Class_2_61DD098C4AD3E56F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC8623F0EB7FDBCC__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC8623F0EB7FDBCC__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC8623F0EB7FDBCC_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC8623F0EB7FDBCC___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC8623F0EB7FDBCC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
