#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_B026207A8C6DA56A.h"

class Class_1_411C76A6422C8F62;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_29B773FE7D0D2D8D_COLLECT_OFFSET UNITYSDK_OFFSET(0x11944D00)
#define CLASS_2_29B773FE7D0D2D8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11944BF0)
#define CLASS_2_29B773FE7D0D2D8D_FLUSH_OFFSET UNITYSDK_OFFSET(0x11944DA0)
#define CLASS_2_29B773FE7D0D2D8D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x11944F80)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x119449F0)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11944F70)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x11944B50)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11944A60)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x11944EA0)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11944CC0)
#define CLASS_2_29B773FE7D0D2D8D_METHOD_2_CB5271C96ED06E25_OFFSET UNITYSDK_OFFSET(0x11944AC0)
#define CLASS_2_29B773FE7D0D2D8D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11944C80)
#define CLASS_2_29B773FE7D0D2D8D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11944C40)
#define CLASS_2_29B773FE7D0D2D8D_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x11944F90)
#define CLASS_2_29B773FE7D0D2D8D__CTOR_OFFSET UNITYSDK_OFFSET(0x11944920)
#define CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x11945070)
#define CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11944FA0)
#define CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x11945080)
#define CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11945030)
#define CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11944FF0)

inline static constexpr unsigned int Class_2_29B773FE7D0D2D8D_TypeDefinitionIndex = 65513;

class Class_2_29B773FE7D0D2D8D : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_B026207A8C6DA56A>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_2_3; // 0x30
	::Class_1_411C76A6422C8F62* Field_2_2; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CB5271C96ED06E25(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_CB5271C96ED06E25_OFFSET))(this, a1);
	}

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_FLUSH_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::Class_1_411C76A6422C8F62* Method_2_24748FC20F375725()
	{
		return ((::Class_1_411C76A6422C8F62*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B773FE7D0D2D8D___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}
};
