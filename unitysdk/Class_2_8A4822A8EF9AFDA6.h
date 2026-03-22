#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_CB8B5340883CE90A;
class Class_3_D7D23702D98A30C5;
class Class_3_EB9687505CB7F22E;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsCommentControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8A4822A8EF9AFDA6_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0xD239E10)
#define CLASS_2_8A4822A8EF9AFDA6_METHOD_2_95BE90E8E3C8C7CC_OFFSET UNITYSDK_OFFSET(0xD239ED0)
#define CLASS_2_8A4822A8EF9AFDA6__CTOR_OFFSET UNITYSDK_OFFSET(0xD239160)
#define CLASS_2_8A4822A8EF9AFDA6__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD2395E0)
#define CLASS_2_8A4822A8EF9AFDA6__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD239E80)
#define CLASS_2_8A4822A8EF9AFDA6__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD2391E0)
#define CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD23A030)
#define CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD23A090)
#define CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD239FD0)
#define CLASS_2_8A4822A8EF9AFDA6___ONINITIALIZECOMPONENT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD239F60)

inline static constexpr unsigned int Class_2_8A4822A8EF9AFDA6_TypeDefinitionIndex = 59247;

class Class_2_8A4822A8EF9AFDA6 : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsCommentControl*>* Field_2_3; // 0x48
	::Class_1_CB8B5340883CE90A* Field_2_1; // 0x50
	::UnityEngine::UI::Text* Field_2_4; // 0x58
	::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x60
	::RPG::Client::AnimatorButton* Field_2_2; // 0x68

	::System::Void _ctor(::Class_3_EB9687505CB7F22E* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EB9687505CB7F22E*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_95BE90E8E3C8C7CC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6_METHOD_2_95BE90E8E3C8C7CC_OFFSET))(this, a1);
	}

	::Class_3_EB9687505CB7F22E* Method_2_323F95926A2F616E()
	{
		return ((::Class_3_EB9687505CB7F22E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6_METHOD_2_323F95926A2F616E_OFFSET))(this);
	}

	::System::Void __OnInitializeComponent_b__1_0(::Class_3_D7D23702D98A30C5* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6___ONINITIALIZECOMPONENT_B__1_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4822A8EF9AFDA6___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
