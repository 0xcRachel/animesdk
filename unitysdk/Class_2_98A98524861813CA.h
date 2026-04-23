#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D7A1ADCA41D6F234.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_98A98524861813CA_COLLECT_OFFSET UNITYSDK_OFFSET(0x118A22B0)
#define CLASS_2_98A98524861813CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118A2230)
#define CLASS_2_98A98524861813CA_FLUSH_OFFSET UNITYSDK_OFFSET(0x118A2380)
#define CLASS_2_98A98524861813CA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x118A24C0)
#define CLASS_2_98A98524861813CA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x118A21D0)
#define CLASS_2_98A98524861813CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118A2270)
#define CLASS_2_98A98524861813CA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x118A2480)
#define CLASS_2_98A98524861813CA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x118A2440)
#define CLASS_2_98A98524861813CA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x118A24D0)
#define CLASS_2_98A98524861813CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x118A24E0)
#define CLASS_2_98A98524861813CA__CTOR_OFFSET UNITYSDK_OFFSET(0x118A2150)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x118A2530)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118A24F0)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x118A2540)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x118A2590)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x118A2550)

inline static constexpr unsigned int Class_2_98A98524861813CA_TypeDefinitionIndex = 65530;

class Class_2_98A98524861813CA : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_D7A1ADCA41D6F234>
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_98A98524861813CA_TypeDefinitionIndex)->GetStaticField(0x10570);
	}
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
