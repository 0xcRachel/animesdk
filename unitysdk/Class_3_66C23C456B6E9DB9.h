#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_66C23C456B6E9DB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE386630)
#define CLASS_3_66C23C456B6E9DB9_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE386620)
#define CLASS_3_66C23C456B6E9DB9_METHOD_3_F2566C84FEF1DF87_OFFSET UNITYSDK_OFFSET(0xE3866D0)
#define CLASS_3_66C23C456B6E9DB9_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE386670)
#define CLASS_3_66C23C456B6E9DB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE386860)
#define CLASS_3_66C23C456B6E9DB9__CTOR_OFFSET UNITYSDK_OFFSET(0xE3865F0)
#define CLASS_3_66C23C456B6E9DB9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3868B0)

inline static constexpr unsigned int Class_3_66C23C456B6E9DB9_TypeDefinitionIndex = 48859;

class Class_3_66C23C456B6E9DB9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F2566C84FEF1DF87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9_METHOD_3_F2566C84FEF1DF87_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66C23C456B6E9DB9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
