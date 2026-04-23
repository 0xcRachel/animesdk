#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_84113BE327E59A7D_CLONE_OFFSET UNITYSDK_OFFSET(0xD2A6BF0)
#define CLASS_5_84113BE327E59A7D_METHOD_5_0B045B6182B6FDCC_OFFSET UNITYSDK_OFFSET(0xD2A6930)
#define CLASS_5_84113BE327E59A7D_METHOD_5_4D3B75704BF58A94_OFFSET UNITYSDK_OFFSET(0xD2A6CE0)
#define CLASS_5_84113BE327E59A7D_METHOD_5_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0xD2A6AE0)
#define CLASS_5_84113BE327E59A7D_METHOD_5_90836D5CCC296F77_OFFSET UNITYSDK_OFFSET(0xD2A6860)
#define CLASS_5_84113BE327E59A7D_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0xD2A6F50)
#define CLASS_5_84113BE327E59A7D_REVERSE_OFFSET UNITYSDK_OFFSET(0xD2A6C60)
#define CLASS_5_84113BE327E59A7D_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD2A6BA0)
#define CLASS_5_84113BE327E59A7D__CTOR_OFFSET UNITYSDK_OFFSET(0xD2A6830)
#define CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0xD2A6E10)
#define CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0xD2A6EB0)
#define CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD2A6E00)

inline static constexpr unsigned int Class_5_84113BE327E59A7D_TypeDefinitionIndex = 67693;

class Class_5_84113BE327E59A7D : public ::Class_4_0781C886C58F298A
{
public:
	::UnityEngine::Vector3 Field_5_0; // 0x48

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_84113BE327E59A7D* Method_5_90836D5CCC296F77(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_5_84113BE327E59A7D*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_METHOD_5_90836D5CCC296F77_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Class_5_84113BE327E59A7D* Method_5_0B045B6182B6FDCC(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_5_84113BE327E59A7D*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_METHOD_5_0B045B6182B6FDCC_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_5_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_METHOD_5_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_4D3B75704BF58A94(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_METHOD_5_4D3B75704BF58A94_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_84113BE327E59A7D_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
