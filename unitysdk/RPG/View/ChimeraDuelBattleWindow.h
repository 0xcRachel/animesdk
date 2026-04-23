#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_2_0557563615B51628;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::View { class ChimeraDuelBattleChimeraControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_VIEW_CHIMERADUELBATTLEWINDOW_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x16F2EAB0)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW_METHOD_2_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x16F2EED0)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E660)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F2EDA0)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16F2E780)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F2F240)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16F2F1E0)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x16F2F000)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_1_OFFSET UNITYSDK_OFFSET(0x16F2F0A0)
#define RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0x16F2F140)

namespace RPG::View
{
	inline static constexpr unsigned int ChimeraDuelBattleWindow_TypeDefinitionIndex = 47905;

	class ChimeraDuelBattleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::View::ChimeraDuelBattleChimeraControl*>* Field_2_0; // 0x40
		::RPG::Client::AnimatorButton* Field_2_2; // 0x48
		::RPG::Client::AnimatorButton* Field_2_3; // 0x50
		::RPG::Client::AnimatorButton* Field_2_1; // 0x58
		::RPG::Client::PrefabLoadMeta* Field_2_4; // 0x60
		::System::Int32 Field_2_5; // 0x68

		::System::Void _ctor(::Class_2_0557563615B51628* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0557563615B51628*))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void Method_2_A3B36CD562D22DD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_2_DC13DCFA502E580F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW_METHOD_2_DC13DCFA502E580F_OFFSET))(this, a1);
		}

		::System::Void __OnBindViewModel_b__3_0(::System::Object* idcwtf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_0_OFFSET))(this, idcwtf);
		}

		::System::Void __OnBindViewModel_b__3_1(::System::Object* idcwtf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_1_OFFSET))(this, idcwtf);
		}

		::System::Void __OnBindViewModel_b__3_2(::System::Object* idcwtf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW___ONBINDVIEWMODEL_B__3_2_OFFSET))(this, idcwtf);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLEWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
