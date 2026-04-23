#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_A59B7F9F9FB23BBE;
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET UNITYSDK_OFFSET(0xF3BD680)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET UNITYSDK_OFFSET(0xF3BD6E0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0xF3BD740)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF3BCF30)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET UNITYSDK_OFFSET(0xF3BDAE0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET UNITYSDK_OFFSET(0xF3BDD10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xF3BDCB0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF3BDC10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xF3BDCD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0xF3BDCF0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET UNITYSDK_OFFSET(0xF3BDC30)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xF3BDC90)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xF3BDCC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF3BDC20)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xF3BDCE0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0xF3BDD00)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xF3BDCA0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF3BDAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailItemData_TypeDefinitionIndex = 66463;

	class BattleElationPointDetailItemData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Character; // 0x20
		::RPG::Client::BattleViewModeInitData* _ViewModeInitData; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::System::Boolean _IsBackendRoleBE; // 0x40
		::System::Int32 _PriorityValue_k__BackingField; // 0x44
		::RPG::Client::TextID _Title_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* Create(::System::String* iconPath, ::RPG::Client::TextID title, ::RPG::Client::TextID desc, ::Il2CppArray<::RPG::GameCore::FixPoint>* paramList, ::System::Int32 priorityValue)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET))(iconPath, title, desc, paramList, priorityValue);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithPreviewData(::Class_1_A59B7F9F9FB23BBE* previewData)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET))(previewData);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithAvatar(::Class_1_A59B7F9F9FB23BBE* previewData, ::RPG::GameCore::GameEntity* avatar)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET))(previewData, avatar);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithBackendRoleBE(::Class_1_A59B7F9F9FB23BBE* previewData, ::RPG::GameCore::GameEntity* battleEvent)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET))(previewData, battleEvent);
		}

		::RPG::Client::BattleViewModeInitData* GetViewModeInitData()
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_ShowIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET))(this, value);
		}

		::System::Int32 get_PriorityValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET))(this);
		}

		::System::Void set_PriorityValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_CanJumpViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET))(this);
		}
	};
}
