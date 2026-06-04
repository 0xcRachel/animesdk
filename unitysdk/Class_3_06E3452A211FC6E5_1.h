#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A2301A8B07519135.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1658FDE0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x16590380)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x16590140)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x165901F0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x16590650)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x165900B0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x165906B0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x165902C0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_D2F5EC9A721C1561_OFFSET UNITYSDK_OFFSET(0x1658FE70)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_E09237CA355C0246_OFFSET UNITYSDK_OFFSET(0x1658FA50)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x165903F0)
#define CLASS_3_06E3452A211FC6E5_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1658FA00)
#define CLASS_3_06E3452A211FC6E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165905B0)
#define CLASS_3_06E3452A211FC6E5_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x1658F8B0)
#define CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16590640)
#define CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x165905E0)

inline static constexpr unsigned int Class_3_06E3452A211FC6E5_1_TypeDefinitionIndex = 67064;

class Class_3_06E3452A211FC6E5_1 : public ::Class_2_A2301A8B07519135
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	::UnityEngine::UI::Image* Field_3_8; // 0x68
	::UnityEngine::UI::Text* Field_3_9; // 0x70
	::UnityEngine::Animator* Field_3_10; // 0x78
	::UnityEngine::UI::Text* Field_3_11; // 0x80
	::UnityEngine::UI::Text* Field_3_12; // 0x88
	::UnityEngine::UI::Image* Field_3_13; // 0x90
	::UnityEngine::UI::Text* Field_3_14; // 0x98
	::RPG::GameCore::FixPoint Field_3_15; // 0xA0
	::RPG::GameCore::FixPoint Field_3_16; // 0xA8
	::System::Boolean Field_3_17; // 0xB0
	::RPG::GameCore::EnergyBarState Field_3_18; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_E09237CA355C0246(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_E09237CA355C0246_OFFSET))(this, a1);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_D2F5EC9A721C1561(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_D2F5EC9A721C1561_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_8CD1A6D1096A6CB7(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_3_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
