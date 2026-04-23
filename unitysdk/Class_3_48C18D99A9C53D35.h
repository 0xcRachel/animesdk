#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A;

#define CLASS_3_48C18D99A9C53D35_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xE665C30)
#define CLASS_3_48C18D99A9C53D35__CTOR_OFFSET UNITYSDK_OFFSET(0xE665D70)
#define CLASS_3_48C18D99A9C53D35___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0xE665DB0)

inline static constexpr unsigned int Class_3_48C18D99A9C53D35_TypeDefinitionIndex = 64272;

class Class_3_48C18D99A9C53D35 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
