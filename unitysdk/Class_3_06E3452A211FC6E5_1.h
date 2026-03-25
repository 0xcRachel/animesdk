#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_49CD4483759F3691.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70697F531F566942_1;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8A1E0A0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8A1E520)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x8A1DF10)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x8A1E2D0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8A1E380)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x8A1E240)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x8A1E130)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8A1E450)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8A1E8D0)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x8A1E860)
#define CLASS_3_06E3452A211FC6E5_1_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x8A1E590)
#define CLASS_3_06E3452A211FC6E5_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8A1DE90)
#define CLASS_3_06E3452A211FC6E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A1E760)
#define CLASS_3_06E3452A211FC6E5_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A1DAB0)
#define CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8A1E7F0)
#define CLASS_3_06E3452A211FC6E5_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8A1E790)

inline static constexpr unsigned int Class_3_06E3452A211FC6E5_1_TypeDefinitionIndex = 58768;

class Class_3_06E3452A211FC6E5_1 : public ::Class_2_49CD4483759F3691
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::String* Field_3_10; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	// static const ::System::String* Field_3_12; // 0x0
	// static const ::System::String* Field_3_13; // 0x0
	// static const ::System::String* Field_3_14; // 0x0
	::UnityEngine::UI::Text* Field_3_4; // 0x70
	::UnityEngine::UI::Image* Field_3_6; // 0x78
	::UnityEngine::Animator* Field_3_1; // 0x80
	::UnityEngine::UI::Image* Field_3_7; // 0x88
	::UnityEngine::UI::Text* Field_3_2; // 0x90
	::UnityEngine::UI::Text* Field_3_3; // 0x98
	::UnityEngine::UI::Text* Field_3_5; // 0xA0
	::RPG::GameCore::FixPoint Field_3_17; // 0xA8
	::RPG::GameCore::EnergyBarState Field_3_15; // 0xB0
	::System::Boolean Field_3_18; // 0xB4
	::RPG::GameCore::FixPoint Field_3_16; // 0xB8

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

	::System::Void Method_3_5110E061C0DF5692(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B03F6D31318CC2B8(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_B03F6D31318CC2B8_OFFSET))(this, a1);
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

	::System::Void Method_3_E2CDB6B22CCEBA97(::Class_1_70697F531F566942_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_1_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
