#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MVVM/ViewModel/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET UNITYSDK_OFFSET(0x9ABDAD0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0x9ABDCD0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET UNITYSDK_OFFSET(0x9ABDBD0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET UNITYSDK_OFFSET(0x9ABDB50)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET UNITYSDK_OFFSET(0x9ABDC50)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9ABDA50)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x9ABDD70)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0x9ABDDB0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0x9ABDD90)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0x9ABDD50)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x9ABDD80)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0x9ABDDC0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0x9ABDDA0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0x9ABDD60)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABDAC0)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsWebsiteViewModelParam_TypeDefinitionIndex = 60969;

	class LimaoNewsWebsiteViewModelParam : public ::System::Object
	{
	public:
		::System::UInt32 _MoveToPostID_k__BackingField; // 0x10
		::System::UInt32 _TopPostID_k__BackingField; // 0x14
		::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum _ViewTab_k__BackingField; // 0x18
		::System::Boolean IsMoveToNewPost; // 0x1C
		::System::UInt32 _IssueID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* Create()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET))();
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateDefaultTab(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum defaultTabType)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET))(defaultTabType);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateSelectedIssue(::System::UInt32 issueID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET))(issueID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateMoveToPost(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET))(postID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateTopPost(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET))(postID);
		}

		static ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam* CreateMoveToNewPost()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET))();
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum get_ViewTab()
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET))(this);
		}

		::System::Void set_ViewTab(::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET))(this, value);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_TopPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET))(this);
		}

		::System::Void set_TopPostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET))(this, value);
		}

		::System::UInt32 get_MoveToPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET))(this);
		}

		::System::Void set_MoveToPostID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET))(this, value);
		}
	};
}
