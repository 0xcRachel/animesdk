#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_3_C86DFAA9896E7844;
namespace RPG::Client { class OfferingRewardData; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_26223E9EB82539E8_OFFSET UNITYSDK_OFFSET(0x95D37A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_51D4C4EE6EA0D8EF_OFFSET UNITYSDK_OFFSET(0x95D3FD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_554044C88588C5A0_OFFSET UNITYSDK_OFFSET(0x95D3DF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_5DBD3C01D9B41ED8_OFFSET UNITYSDK_OFFSET(0x95D37F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x95D41C0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_CDA8A3F6E2C03F05_OFFSET UNITYSDK_OFFSET(0x95D4140)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_PLAYLEVELCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0x95D3510)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x95D4580)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95D3A80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95D3050)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__PLAYFIRECHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0x95D3A10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95D45F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x95D4590)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsSubmitLevelControl_TypeDefinitionIndex = 59267;

	class LimaoNewsSubmitLevelControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animation* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38
		::UnityEngine::UI::Text* Field_6_2; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_6_3; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_6_4; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_6_5; // 0x58
		::System::Single Field_6_6; // 0x60
		::UnityEngine::UI::Text* Field_6_7; // 0x68
		::UnityEngine::UI::Text* Field_6_8; // 0x70
		::UnityEngine::Transform* Field_6_9; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void PlayLevelChangeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_PLAYLEVELCHANGEANIMATION_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PlayFireChangeAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__PLAYFIRECHANGEANIMATION_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_6_5DBD3C01D9B41ED8(::RPG::Client::OfferingRewardData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_5DBD3C01D9B41ED8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_554044C88588C5A0(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_554044C88588C5A0_OFFSET))(this, a1);
		}

		::System::Void Method_6_CDA8A3F6E2C03F05(::RPG::Client::OfferingRewardData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_CDA8A3F6E2C03F05_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_51D4C4EE6EA0D8EF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_51D4C4EE6EA0D8EF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_7EAA8879197594BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_7EAA8879197594BA_OFFSET))(this);
		}

		::Class_3_C86DFAA9896E7844* Method_6_26223E9EB82539E8()
		{
			return ((::Class_3_C86DFAA9896E7844*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL_METHOD_6_26223E9EB82539E8_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
