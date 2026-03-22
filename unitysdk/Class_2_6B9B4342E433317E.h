#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_CB8B5340883CE90A;
class Class_3_A6EC401E39AEE89F;
class Class_3_EF768D9135EF985D;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6B9B4342E433317E_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x10D546B0)
#define CLASS_2_6B9B4342E433317E_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x10D536C0)
#define CLASS_2_6B9B4342E433317E__CTOR_OFFSET UNITYSDK_OFFSET(0x10D53070)
#define CLASS_2_6B9B4342E433317E__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10D53770)
#define CLASS_2_6B9B4342E433317E__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10D54720)
#define CLASS_2_6B9B4342E433317E__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D530F0)
#define CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10D54880)
#define CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10D548E0)
#define CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D54820)
#define CLASS_2_6B9B4342E433317E___SUBSCRIBEMESSAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x10D547B0)

inline static constexpr unsigned int Class_2_6B9B4342E433317E_TypeDefinitionIndex = 59236;

class Class_2_6B9B4342E433317E : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::Client::LocalizedText* Field_2_8; // 0x40
	::UnityEngine::Transform* Field_2_4; // 0x48
	::RPG::Client::LocalizedText* Field_2_5; // 0x50
	::RPG::Client::AnimatorButton* Field_2_2; // 0x58
	::RPG::Client::AnimatorButton* Field_2_3; // 0x60
	::Class_1_CB8B5340883CE90A* Field_2_0; // 0x68
	::RPG::Client::LocalizedText* Field_2_6; // 0x70
	::RPG::Client::AnimatorButton* Field_2_1; // 0x78
	::RPG::Client::LocalizedText* Field_2_7; // 0x80

	::System::Void _ctor(::Class_3_A6EC401E39AEE89F* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A6EC401E39AEE89F*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::Class_3_A6EC401E39AEE89F* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_A6EC401E39AEE89F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __SubscribeMessage_b__4_0(::Class_3_EF768D9135EF985D* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EF768D9135EF985D*))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E___SUBSCRIBEMESSAGE_B__4_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B9B4342E433317E___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
