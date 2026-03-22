#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_8BAADBAEE5AF110E;
class Class_1_EBB10EC01CCC4716_11;
class Class_3_1E72A78E8E12A198;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfficeSurveyService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsStateTagViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET UNITYSDK_OFFSET(0x95BB630)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x95BBD90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95B0120)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET UNITYSDK_OFFSET(0x95BB120)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET UNITYSDK_OFFSET(0x95BAC90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x95BB2F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET UNITYSDK_OFFSET(0x95BAB60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x95BBB30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET UNITYSDK_OFFSET(0x95BAFD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET UNITYSDK_OFFSET(0x95BBA60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET UNITYSDK_OFFSET(0x95BB290)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET UNITYSDK_OFFSET(0x95BC4B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET UNITYSDK_OFFSET(0x95BB490)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET UNITYSDK_OFFSET(0x95BB8D0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET UNITYSDK_OFFSET(0x95BB760)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x95BAE70)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET UNITYSDK_OFFSET(0x95B8AA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET UNITYSDK_OFFSET(0x95B8B30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET UNITYSDK_OFFSET(0x95B9B30)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET UNITYSDK_OFFSET(0x95B9530)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET UNITYSDK_OFFSET(0x95B9940)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x95BC3E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x95AFA60)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET UNITYSDK_OFFSET(0x95BC2F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET UNITYSDK_OFFSET(0x95BC550)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsPostService_TypeDefinitionIndex = 59289;

	class LimaoNewsPostService : public ::System::Object
	{
	public:
		::Class_1_0BE9E9C1D5A3C687* _ConditionService; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* _AllPostDatas; // 0x18
		::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* _SurveyService; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CanSubmitPostIDs; // 0x28

		::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* conditionService, ::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService* surveyService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*, ::RPG::Client::MVVM::Service::LimaoNewsOfficeSurveyService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__CTOR_OFFSET))(this, conditionService, surveyService);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshSubmittedPosts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* submittedPostList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOSTS_OFFSET))(this, submittedPostList);
		}

		::System::Void OnChangePost(::Class_1_EBB10EC01CCC4716_11* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ONCHANGEPOST_OFFSET))(this, proto);
		}

		::System::Void RefreshSubmittedPost(::Class_1_EBB10EC01CCC4716_11* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHSUBMITTEDPOST_OFFSET))(this, proto);
		}

		::System::Void RefreshPostUpvote(::System::UInt32 postID, ::System::Boolean isUpvote)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHPOSTUPVOTE_OFFSET))(this, postID, isUpvote);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* GetAllShowPosts(::System::UInt32 forceShowPostID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLSHOWPOSTS_OFFSET))(this, forceShowPostID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* GetTopCanSubmitPostData()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETTOPCANSUBMITPOSTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>* GetAllCanSubmitPosts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETALLCANSUBMITPOSTS_OFFSET))(this);
		}

		::System::Void RefreshCanSubmitPostIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_REFRESHCANSUBMITPOSTIDS_OFFSET))(this);
		}

		::System::Boolean HasCanSubmitPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_HASCANSUBMITPOST_OFFSET))(this);
		}

		::System::Boolean IsPostCanSubmit(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANSUBMIT_OFFSET))(this, postData);
		}

		::System::Int32 GetNewPostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETNEWPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean IsNewPost(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISNEWPOST_OFFSET))(this, postData);
		}

		::System::Void ClearNew(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CLEARNEW_OFFSET))(this, postData);
		}

		::System::Boolean IsPostCanReplay(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANREPLAY_OFFSET))(this, postData);
		}

		::System::Boolean IsPostCanGotoSurvey(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISPOSTCANGOTOSURVEY_OFFSET))(this, postData);
		}

		::System::Void GotoPostTrackSurveyMission(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GOTOPOSTTRACKSURVEYMISSION_OFFSET))(this, postData);
		}

		::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel* GetPostStateTagViewModel(::RPG::Client::MVVM::Model::LimaoNewsPostData* postData)
		{
			return ((::RPG::Client::MVVM::ViewModel::LimaoNewsStateTagViewModel*(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETPOSTSTATETAGVIEWMODEL_OFFSET))(this, postData);
		}

		::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* CreateCommentViewModels(::Il2CppArray<::System::UInt32>* commentIDs)
		{
			return ((::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_CREATECOMMENTVIEWMODELS_OFFSET))(this, commentIDs);
		}

		::System::Void SetCommentToNextState(::Class_3_1E72A78E8E12A198* commentViewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1E72A78E8E12A198*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_SETCOMMENTTONEXTSTATE_OFFSET))(this, commentViewModel);
		}

		::System::Boolean IsCanShowQuickPostSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_ISCANSHOWQUICKPOSTSUBMIT_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* GetOrCreatePostData(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE_GETORCREATEPOSTDATA_OFFSET))(this, postID);
		}

		::RPG::Client::MVVM::Model::LimaoNewsPostData* _GetPostData(::System::UInt32 postID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsPostData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETPOSTDATA_OFFSET))(this, postID);
		}

		::Class_1_8BAADBAEE5AF110E* _GetCommentStateRow(::System::UInt32 commentID)
		{
			return ((::Class_1_8BAADBAEE5AF110E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE__GETCOMMENTSTATEROW_OFFSET))(this, commentID);
		}
	};
}
