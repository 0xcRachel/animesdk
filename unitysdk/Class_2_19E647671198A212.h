#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_A9180AA7F443378D.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_19E647671198A212_COLLECT_OFFSET UNITYSDK_OFFSET(0x106A25A0)
#define CLASS_2_19E647671198A212_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106A2550)
#define CLASS_2_19E647671198A212_FLUSH_OFFSET UNITYSDK_OFFSET(0x106A26E0)
#define CLASS_2_19E647671198A212_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x106A28E0)
#define CLASS_2_19E647671198A212_METHOD_2_27562DB4C1EE53E3_OFFSET UNITYSDK_OFFSET(0x106A23A0)
#define CLASS_2_19E647671198A212_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x106A2340)
#define CLASS_2_19E647671198A212_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x106A2890)
#define CLASS_2_19E647671198A212_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x106A2850)
#define CLASS_2_19E647671198A212_ONENABLE_OFFSET UNITYSDK_OFFSET(0x106A2810)
#define CLASS_2_19E647671198A212_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x106A28F0)
#define CLASS_2_19E647671198A212__CCTOR_OFFSET UNITYSDK_OFFSET(0x106A2900)
#define CLASS_2_19E647671198A212__CTOR_OFFSET UNITYSDK_OFFSET(0x106A22C0)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x106A2970)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106A2920)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x106A2980)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x106A29D0)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x106A2990)

inline static constexpr unsigned int Class_2_19E647671198A212_TypeDefinitionIndex = 58228;

class Class_2_19E647671198A212 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_A9180AA7F443378D>
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0xA610);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0xA614);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0xA618);
	}
	::Class_1_56FF45D7B2C55655* Field_2_0; // 0x40
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
	::RPG::GameCore::ThreadTaskType Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212__CCTOR_OFFSET))();
	}

	::System::Void Method_2_27562DB4C1EE53E3(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_56FF45D7B2C55655*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_56FF45D7B2C55655*>*))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_27562DB4C1EE53E3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
