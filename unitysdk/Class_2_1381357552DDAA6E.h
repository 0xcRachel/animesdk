#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_2_0557563615B51628;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::View { class ChimeraDuelBattleChimeraControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1381357552DDAA6E_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x11165920)
#define CLASS_2_1381357552DDAA6E_METHOD_2_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x11165D40)
#define CLASS_2_1381357552DDAA6E__CTOR_OFFSET UNITYSDK_OFFSET(0x11165510)
#define CLASS_2_1381357552DDAA6E__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11165C10)
#define CLASS_2_1381357552DDAA6E__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11165600)
#define CLASS_2_1381357552DDAA6E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x111660B0)
#define CLASS_2_1381357552DDAA6E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11166050)
#define CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x11165E70)
#define CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_1_OFFSET UNITYSDK_OFFSET(0x11165F10)
#define CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0x11165FB0)

inline static constexpr unsigned int Class_2_1381357552DDAA6E_TypeDefinitionIndex = 40877;

class Class_2_1381357552DDAA6E : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::Client::AnimatorButton* Field_2_1; // 0x40
	::RPG::Client::AnimatorButton* Field_2_3; // 0x48
	::RPG::Client::PrefabLoadMeta* Field_2_4; // 0x50
	::RPG::Client::AnimatorButton* Field_2_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::View::ChimeraDuelBattleChimeraControl*>* Field_2_0; // 0x60
	::System::Int32 Field_2_5; // 0x68

	::System::Void _ctor(::Class_2_0557563615B51628* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0557563615B51628*))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E__CTOR_OFFSET))(this, a1);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void Method_2_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E_METHOD_2_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::System::Void __OnBindViewModel_b__3_0(::System::Object* idcwtf)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_0_OFFSET))(this, idcwtf);
	}

	::System::Void __OnBindViewModel_b__3_1(::System::Object* idcwtf)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_1_OFFSET))(this, idcwtf);
	}

	::System::Void __OnBindViewModel_b__3_2(::System::Object* idcwtf)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E___ONBINDVIEWMODEL_B__3_2_OFFSET))(this, idcwtf);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1381357552DDAA6E___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}
};
