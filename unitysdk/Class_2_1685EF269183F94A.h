#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1685EF269183F94A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1647D370)
#define CLASS_2_1685EF269183F94A_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1647D9A0)
#define CLASS_2_1685EF269183F94A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1647DF50)
#define CLASS_2_1685EF269183F94A_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0x1647D5F0)
#define CLASS_2_1685EF269183F94A_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1647E230)
#define CLASS_2_1685EF269183F94A_METHOD_2_27DF48D91BC2DE0B_OFFSET UNITYSDK_OFFSET(0x1647D740)
#define CLASS_2_1685EF269183F94A_METHOD_2_3E8C166F58B80B39_OFFSET UNITYSDK_OFFSET(0x1647E750)
#define CLASS_2_1685EF269183F94A_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x1647D170)
#define CLASS_2_1685EF269183F94A_METHOD_2_43141A6EFF873C5B_OFFSET UNITYSDK_OFFSET(0x1647D100)
#define CLASS_2_1685EF269183F94A_METHOD_2_76FB0C4ED730F58B_OFFSET UNITYSDK_OFFSET(0x1647E740)
#define CLASS_2_1685EF269183F94A_METHOD_2_78F973D910DE3190_OFFSET UNITYSDK_OFFSET(0x1647D2C0)
#define CLASS_2_1685EF269183F94A_METHOD_2_7EBD3E9F2AC9C1C3_OFFSET UNITYSDK_OFFSET(0x1647E020)
#define CLASS_2_1685EF269183F94A_METHOD_2_923A0CEAF8DA9C09_OFFSET UNITYSDK_OFFSET(0x1647E710)
#define CLASS_2_1685EF269183F94A_METHOD_2_A14A1EB3F7EFF137_OFFSET UNITYSDK_OFFSET(0x1647E700)
#define CLASS_2_1685EF269183F94A_METHOD_2_A5A370FE36CACDE8_OFFSET UNITYSDK_OFFSET(0x1647DFB0)
#define CLASS_2_1685EF269183F94A_METHOD_2_B1C9104A36114189_OFFSET UNITYSDK_OFFSET(0x1647E720)
#define CLASS_2_1685EF269183F94A_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x1647E460)
#define CLASS_2_1685EF269183F94A_METHOD_2_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x1647E0A0)
#define CLASS_2_1685EF269183F94A_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x1647DB30)
#define CLASS_2_1685EF269183F94A_METHOD_2_D25C89118EA58E36_OFFSET UNITYSDK_OFFSET(0x1647E1A0)
#define CLASS_2_1685EF269183F94A_METHOD_2_EFC7D37C35778F48_OFFSET UNITYSDK_OFFSET(0x1647E130)
#define CLASS_2_1685EF269183F94A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1647E220)
#define CLASS_2_1685EF269183F94A_TOHLOD_OFFSET UNITYSDK_OFFSET(0x1647D0C0)
#define CLASS_2_1685EF269183F94A__CTOR_OFFSET UNITYSDK_OFFSET(0x1647CF40)
#define CLASS_2_1685EF269183F94A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1647E650)
#define CLASS_2_1685EF269183F94A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1647E6A0)
#define CLASS_2_1685EF269183F94A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1647E730)
#define CLASS_2_1685EF269183F94A___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1647E760)
#define CLASS_2_1685EF269183F94A___IFIXBASEPROXY_TOHLOD_OFFSET UNITYSDK_OFFSET(0x1647E6F0)
#define CLASS_2_1685EF269183F94A___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1647E770)
#define CLASS_2_1685EF269183F94A___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1647E800)

inline static constexpr unsigned int Class_2_1685EF269183F94A_TypeDefinitionIndex = 68844;

class Class_2_1685EF269183F94A : public ::Class_1_5B228A4605C15E47
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_1; // 0x170
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* Field_2_2; // 0x178
	::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_3; // 0x180
	::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_4; // 0x188
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_2_5; // 0x190
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_2_6; // 0x198
	::UnityEngine::Vector2 Field_2_7; // 0x1A0
	::System::Boolean Field_2_8; // 0x1A8
	::System::Boolean Field_2_9; // 0x1A9

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_TOHLOD_OFFSET))(this);
	}

	::System::Void Method_2_43141A6EFF873C5B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_43141A6EFF873C5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_78F973D910DE3190(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_78F973D910DE3190_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_DISPOSE_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_27DF48D91BC2DE0B(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_27DF48D91BC2DE0B_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_A5A370FE36CACDE8(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_A5A370FE36CACDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7EBD3E9F2AC9C1C3(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_7EBD3E9F2AC9C1C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C0688C2E36BAE128(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_2_EFC7D37C35778F48(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_EFC7D37C35778F48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D25C89118EA58E36(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_D25C89118EA58E36_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A___IFIXBASEPROXY_TOHLOD_OFFSET))(this);
	}

	::System::Void Method_2_A14A1EB3F7EFF137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_A14A1EB3F7EFF137_OFFSET))(this, a1);
	}

	::System::Void Method_2_923A0CEAF8DA9C09(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_923A0CEAF8DA9C09_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1C9104A36114189(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_B1C9104A36114189_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_76FB0C4ED730F58B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_76FB0C4ED730F58B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3E8C166F58B80B39(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A_METHOD_2_3E8C166F58B80B39_OFFSET))(this, a1, a2);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void __iFixBaseProxy__RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1685EF269183F94A___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}
};
