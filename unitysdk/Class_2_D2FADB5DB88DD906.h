#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_AB59325E10A9B5C4.h"

namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace UnityEngine { class Object; }

#define CLASS_2_D2FADB5DB88DD906_COLLECT_OFFSET UNITYSDK_OFFSET(0x10E84420)
#define CLASS_2_D2FADB5DB88DD906_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E84390)
#define CLASS_2_D2FADB5DB88DD906_FLUSH_OFFSET UNITYSDK_OFFSET(0x10E84460)
#define CLASS_2_D2FADB5DB88DD906_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10E84520)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_2482F898F6C36FF8_OFFSET UNITYSDK_OFFSET(0x10E842F0)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10E84040)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_8A7706FE513EFB6E_OFFSET UNITYSDK_OFFSET(0x10E840A0)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_B3C3FE20F7F01305_OFFSET UNITYSDK_OFFSET(0x10E841F0)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10E83FE0)
#define CLASS_2_D2FADB5DB88DD906_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10E843E0)
#define CLASS_2_D2FADB5DB88DD906_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10E844E0)
#define CLASS_2_D2FADB5DB88DD906_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10E844A0)
#define CLASS_2_D2FADB5DB88DD906_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10E84530)
#define CLASS_2_D2FADB5DB88DD906__CTOR_OFFSET UNITYSDK_OFFSET(0x10E83F20)
#define CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x10E84590)
#define CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E84540)
#define CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x10E845D0)
#define CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10E84650)
#define CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10E84610)

inline static constexpr unsigned int Class_2_D2FADB5DB88DD906_TypeDefinitionIndex = 56631;

class Class_2_D2FADB5DB88DD906 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_AB59325E10A9B5C4>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8A7706FE513EFB6E(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_8A7706FE513EFB6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3C3FE20F7F01305(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_B3C3FE20F7F01305_OFFSET))(this, a1);
	}

	::System::Void Method_2_2482F898F6C36FF8(::UnityEngine::Object* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_2482F898F6C36FF8_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FADB5DB88DD906___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
