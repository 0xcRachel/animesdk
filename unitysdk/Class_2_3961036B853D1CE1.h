#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_F77B362B6C32683B.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_3961036B853D1CE1_COLLECT_OFFSET UNITYSDK_OFFSET(0xFDE6FB0)
#define CLASS_2_3961036B853D1CE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDE6F30)
#define CLASS_2_3961036B853D1CE1_FLUSH_OFFSET UNITYSDK_OFFSET(0xFDE6FF0)
#define CLASS_2_3961036B853D1CE1_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xFDE70B0)
#define CLASS_2_3961036B853D1CE1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFDE6E80)
#define CLASS_2_3961036B853D1CE1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xFDE6EE0)
#define CLASS_2_3961036B853D1CE1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFDE6F70)
#define CLASS_2_3961036B853D1CE1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xFDE7070)
#define CLASS_2_3961036B853D1CE1_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFDE7030)
#define CLASS_2_3961036B853D1CE1_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xFDE70C0)
#define CLASS_2_3961036B853D1CE1__CTOR_OFFSET UNITYSDK_OFFSET(0xFDE6E10)
#define CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xFDE7110)
#define CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDE70D0)
#define CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xFDE7150)
#define CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xFDE71D0)
#define CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFDE7190)

inline static constexpr unsigned int Class_2_3961036B853D1CE1_TypeDefinitionIndex = 56643;

class Class_2_3961036B853D1CE1 : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_F77B362B6C32683B>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3961036B853D1CE1___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
