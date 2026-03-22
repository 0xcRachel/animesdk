#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_CB8B5340883CE90A;
class Class_3_A0B77C1067FF121F;
class Class_3_D7D23702D98A30C5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsInteractionControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_9C3F31C047DC34DD_METHOD_2_26223E9EB82539E8_OFFSET UNITYSDK_OFFSET(0x10A6CB70)
#define CLASS_2_9C3F31C047DC34DD_METHOD_2_95BE90E8E3C8C7CC_OFFSET UNITYSDK_OFFSET(0x10A6CBC0)
#define CLASS_2_9C3F31C047DC34DD__CTOR_OFFSET UNITYSDK_OFFSET(0x10A6C190)
#define CLASS_2_9C3F31C047DC34DD__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10A6C4C0)
#define CLASS_2_9C3F31C047DC34DD__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10A6C1F0)
#define CLASS_2_9C3F31C047DC34DD___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10A6CD20)
#define CLASS_2_9C3F31C047DC34DD___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10A6CCC0)
#define CLASS_2_9C3F31C047DC34DD___ONINITIALIZECOMPONENT_B__1_0_OFFSET UNITYSDK_OFFSET(0x10A6CC50)

inline static constexpr unsigned int Class_2_9C3F31C047DC34DD_TypeDefinitionIndex = 59276;

class Class_2_9C3F31C047DC34DD : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::Client::AnimatorButton* Field_2_2; // 0x40
	::RPG::Client::MVVM::View::LimaoNewsInteractionControl* Field_2_4; // 0x48
	::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x50
	::UnityEngine::UI::Text* Field_2_3; // 0x58
	::Class_1_CB8B5340883CE90A* Field_2_0; // 0x60
	::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_1; // 0x68

	::System::Void _ctor(::Class_3_A0B77C1067FF121F* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A0B77C1067FF121F*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void Method_2_95BE90E8E3C8C7CC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD_METHOD_2_95BE90E8E3C8C7CC_OFFSET))(this, a1);
	}

	::Class_3_A0B77C1067FF121F* Method_2_26223E9EB82539E8()
	{
		return ((::Class_3_A0B77C1067FF121F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD_METHOD_2_26223E9EB82539E8_OFFSET))(this);
	}

	::System::Void __OnInitializeComponent_b__1_0(::Class_3_D7D23702D98A30C5* e)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD___ONINITIALIZECOMPONENT_B__1_0_OFFSET))(this, e);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C3F31C047DC34DD___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}
};
