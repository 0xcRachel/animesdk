#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_34.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_15E317187C4E8254;
class Class_3_626F93E2306641CC;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_02E649AF52BA23F7_OFFSET UNITYSDK_OFFSET(0x83DF3B0)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x83DE8C0)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_403559AA17D574D9_OFFSET UNITYSDK_OFFSET(0x83DF150)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_7C59F34BB3A19660_OFFSET UNITYSDK_OFFSET(0x83DE9E0)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_87AC8069776F1A7F_OFFSET UNITYSDK_OFFSET(0x83DF6B0)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_AA7963151508730C_OFFSET UNITYSDK_OFFSET(0x83DE930)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x83DF0D0)
#define CLASS_3_ABA2DCCEE0FA651D_METHOD_3_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x83DF7A0)
#define CLASS_3_ABA2DCCEE0FA651D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x83DFA30)
#define CLASS_3_ABA2DCCEE0FA651D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x83DECD0)
#define CLASS_3_ABA2DCCEE0FA651D__CTOR_OFFSET UNITYSDK_OFFSET(0x83DFAB0)
#define CLASS_3_ABA2DCCEE0FA651D__ONEXECUTE_B__12_0_OFFSET UNITYSDK_OFFSET(0x83DFAC0)
#define CLASS_3_ABA2DCCEE0FA651D___GETSTATICCELLLOOKATPOSITION_B__16_0_OFFSET UNITYSDK_OFFSET(0x83DFB40)
#define CLASS_3_ABA2DCCEE0FA651D___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x83DFD40)
#define CLASS_3_ABA2DCCEE0FA651D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x83DFCE0)

inline static constexpr unsigned int Class_3_ABA2DCCEE0FA651D_TypeDefinitionIndex = 61446;

class Class_3_ABA2DCCEE0FA651D : public ::Class_2_A48F3719AA1CF200_34
{
public:
	// static const ::System::Int32 Field_3_0 = 0x12; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	// static const ::System::Int32 Field_3_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_3_3 = 0x5; // 0x0
	::Class_3_626F93E2306641CC* Field_3_4; // 0x20
	::Entitas::IMatcher_1<::Class_2_15E317187C4E8254*>* Field_3_7; // 0x28
	::System::String* Field_3_6; // 0x30
	::System::UInt32 Field_3_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_3_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_2372762F4122DEB8_OFFSET))(this);
	}

	static ::Class_3_ABA2DCCEE0FA651D* Method_3_AA7963151508730C(::Class_3_626F93E2306641CC* a1, ::System::UInt32 a2)
	{
		return ((::Class_3_ABA2DCCEE0FA651D*(*)(::Class_3_626F93E2306641CC*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_AA7963151508730C_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::String*, ::Entitas::IMatcher_1<::Class_2_15E317187C4E8254*>*> Method_3_7C59F34BB3A19660(::System::UInt32 a1)
	{
		return ((::System::ValueTuple_2<::System::String*, ::Entitas::IMatcher_1<::Class_2_15E317187C4E8254*>*>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_7C59F34BB3A19660_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_ONEXECUTE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_403559AA17D574D9(::Class_3_626F93E2306641CC* a1, ::System::Func_3<::System::UInt32, ::System::UInt32, ::System::Int32>* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_626F93E2306641CC*, ::System::Func_3<::System::UInt32, ::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_403559AA17D574D9_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_3_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_BF972395CC722BF9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_02E649AF52BA23F7()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_02E649AF52BA23F7_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_87AC8069776F1A7F()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_87AC8069776F1A7F_OFFSET))(this);
	}

	::System::Void Method_3_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_METHOD_3_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__12_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D__ONEXECUTE_B__12_0_OFFSET))(this);
	}

	::System::Int32 __GetStaticCellLookAtPosition_b__16_0(::System::UInt32 startZ, ::System::UInt32 endZ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D___GETSTATICCELLLOOKATPOSITION_B__16_0_OFFSET))(this, startZ, endZ);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA2DCCEE0FA651D___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
