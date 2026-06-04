#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::PixAir { class PixAirEquipInfoViewModel; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993E7A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1993ED80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993E2C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1993E090)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONNEWTAGITEM_OFFSET UNITYSDK_OFFSET(0x1993EB10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__REFRESHDISPLAY_OFFSET UNITYSDK_OFFSET(0x1993E350)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__UPDATETAGS_OFFSET UNITYSDK_OFFSET(0x1993E930)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1993EE10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1993EDB0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipInfoControl_TypeDefinitionIndex = 73567;

	class PixAirEquipInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _TextName; // 0x38
		::UnityEngine::UI::Text* _TextSkillDescription; // 0x40
		::UnityEngine::UI::Text* _TextCoolDown; // 0x48
		::RPG::Client::StaticListView* _TagListView; // 0x50
		::UnityEngine::UI::Button* _CloseBtn; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RefreshDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__REFRESHDISPLAY_OFFSET))(this);
		}

		::System::Void _UpdateTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__UPDATETAGS_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewTagItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL__ONNEWTAGITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PixAir::PixAirEquipInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
