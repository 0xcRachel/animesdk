#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentNavigationParams.h"
#include "unitysdk/Struct_2_44260D773CA584CC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D2DA7CD2E59DEF1;
class Class_1_C84A84118567060F;
class Class_2_E08C4A9CFB467C17;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_14D73D28B78A089B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1032BE10)
#define CLASS_1_14D73D28B78A089B_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1032E4E0)
#define CLASS_1_14D73D28B78A089B_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1032E4D0)
#define CLASS_1_14D73D28B78A089B_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x1032E490)
#define CLASS_1_14D73D28B78A089B_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1032C970)
#define CLASS_1_14D73D28B78A089B_METHOD_1_288F74D11BE167E0_OFFSET UNITYSDK_OFFSET(0x1032CBB0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_357A4E16C13972FD_OFFSET UNITYSDK_OFFSET(0x1032BED0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_36D8543FC20E22FB_OFFSET UNITYSDK_OFFSET(0x1032C9F0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1032DE50)
#define CLASS_1_14D73D28B78A089B_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1032CEE0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_79FB724065DC1EF9_OFFSET UNITYSDK_OFFSET(0x1032CDA0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1032CD40)
#define CLASS_1_14D73D28B78A089B_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x1032E540)
#define CLASS_1_14D73D28B78A089B_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1032E4F0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1032C210)
#define CLASS_1_14D73D28B78A089B_METHOD_1_BCBD2D753B784BD5_OFFSET UNITYSDK_OFFSET(0x1032C2C0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1032C690)
#define CLASS_1_14D73D28B78A089B_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1032E4C0)
#define CLASS_1_14D73D28B78A089B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1032E4B0)
#define CLASS_1_14D73D28B78A089B_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0x1032E4A0)
#define CLASS_1_14D73D28B78A089B__CTOR_OFFSET UNITYSDK_OFFSET(0x1032BD30)

inline static constexpr unsigned int Class_1_14D73D28B78A089B_TypeDefinitionIndex = 38678;

class Class_1_14D73D28B78A089B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_12; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_1_8; // 0x18
	::Il2CppArray<::Class_1_C84A84118567060F*>* Field_1_3; // 0x20
	::Class_2_E08C4A9CFB467C17* Field_1_4; // 0x28
	::RPGTools::Octree::Agent::AgentNavigationParams Field_1_9; // 0x30
	::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x34
	::System::Boolean Field_1_7; // 0x38
	::System::Boolean Field_1_10; // 0x39
	::System::Boolean _IsPostSmooth_k__BackingField; // 0x3A
	::UnityEngine::Vector3 Field_1_6; // 0x3C
	::UnityEngine::Vector3 Field_1_5; // 0x48
	::System::Single _AgentRadius_k__BackingField; // 0x54
	::System::Int32 Field_1_11; // 0x58

	::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::Class_1_C84A84118567060F*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::Class_1_C84A84118567060F*>*))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_357A4E16C13972FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentNavigationParams a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentNavigationParams))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_357A4E16C13972FD_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_44260D773CA584CC Method_1_BCBD2D753B784BD5(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_44260D773CA584CC(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_BCBD2D753B784BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_36D8543FC20E22FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_36D8543FC20E22FB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_288F74D11BE167E0(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_288F74D11BE167E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_79FB724065DC1EF9(::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>*))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_79FB724065DC1EF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPostSmooth()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_GET_ISPOSTSMOOTH_OFFSET))(this);
	}

	::System::Void set_IsPostSmooth(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_SET_ISPOSTSMOOTH_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single get_AgentRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_GET_AGENTRADIUS_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_AgentLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_GET_AGENTLAYERMASK_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14D73D28B78A089B_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}
};
