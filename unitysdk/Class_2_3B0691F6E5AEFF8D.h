#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_2_67556107F6051F25;
namespace RPG::View { class ActivityAvatarInfoControl; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_3B0691F6E5AEFF8D__CTOR_OFFSET UNITYSDK_OFFSET(0x85D0EB0)
#define CLASS_2_3B0691F6E5AEFF8D__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x85D0F20)
#define CLASS_2_3B0691F6E5AEFF8D__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x85D13F0)
#define CLASS_2_3B0691F6E5AEFF8D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x85D1530)
#define CLASS_2_3B0691F6E5AEFF8D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x85D1590)

inline static constexpr unsigned int Class_2_3B0691F6E5AEFF8D_TypeDefinitionIndex = 40880;

class Class_2_3B0691F6E5AEFF8D : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::View::ActivityAvatarInfoControl* Field_2_0; // 0x40
	::UnityEngine::UI::Button* Field_2_1; // 0x48

	::System::Void _ctor(::Class_2_67556107F6051F25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67556107F6051F25*))((::PBYTE)hIl2Cpp + CLASS_2_3B0691F6E5AEFF8D__CTOR_OFFSET))(this, a1);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0691F6E5AEFF8D__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0691F6E5AEFF8D__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0691F6E5AEFF8D___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0691F6E5AEFF8D___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}
};
