#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_2;

#define CLASS_3_FDFBEDE2947B2700_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x149B9470)
#define CLASS_3_FDFBEDE2947B2700__CTOR_OFFSET UNITYSDK_OFFSET(0x149B9590)
#define CLASS_3_FDFBEDE2947B2700___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x149B9640)

inline static constexpr unsigned int Class_3_FDFBEDE2947B2700_TypeDefinitionIndex = 65201;

class Class_3_FDFBEDE2947B2700 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDFBEDE2947B2700__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDFBEDE2947B2700_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDFBEDE2947B2700___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
