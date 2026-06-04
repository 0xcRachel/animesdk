#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL_GET__ICONPATH_OFFSET UNITYSDK_OFFSET(0x1897E090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x1897A950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1897E140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1897DF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1897DD80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1897E1D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1897E170)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueNumberControl_TypeDefinitionIndex = 73836;

	class LimaoNewsIssueNumberControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::SmoothMask* _Mask; // 0x38
		::UnityEngine::UI::Image* _ImageMake; // 0x40
		::UnityEngine::UI::Image* _Shadow1; // 0x48
		::UnityEngine::UI::Image* _Shadow2; // 0x50
		::System::Int32 _Number; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL_SETNUMBER_OFFSET))(this, a1);
		}

		::System::String* get__IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL_GET__ICONPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
