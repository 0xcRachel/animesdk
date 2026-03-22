#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_2;
namespace RPG::Client { class HeliobusSNSCommentData; }
namespace RPG::GameCore { class HeliobusPostRow; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x94ADE10)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0x94AE980)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET UNITYSDK_OFFSET(0x94AE030)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x94B5D20)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x94B7770)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0x94B8270)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x94B82F0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x94B8190)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET UNITYSDK_OFFSET(0x94B8230)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x94B81D0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET UNITYSDK_OFFSET(0x94ADFD0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET UNITYSDK_OFFSET(0x94B6FE0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x94B8210)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET UNITYSDK_OFFSET(0x94B81F0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET UNITYSDK_OFFSET(0x94B81B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x94B82B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x94AE310)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET UNITYSDK_OFFSET(0x94B8120)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x94B8250)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x94B82D0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x94B8290)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET UNITYSDK_OFFSET(0x94B6800)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET UNITYSDK_OFFSET(0x94B67B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0x94B8280)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x94B8300)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x94B81A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET UNITYSDK_OFFSET(0x94B8240)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x94B81E0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x94B8220)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET UNITYSDK_OFFSET(0x94B8200)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET UNITYSDK_OFFSET(0x94B81C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x94B82C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x94B8260)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x94B82E0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x94B82A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET UNITYSDK_OFFSET(0x94B5DE0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET UNITYSDK_OFFSET(0x94B7870)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x94B7F90)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94B7B60)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x94B8000)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET UNITYSDK_OFFSET(0x94B7B70)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSPostData_TypeDefinitionIndex = 52203;

	class HeliobusSNSPostData : public ::System::Object
	{
	public:
		::RPG::GameCore::HeliobusPostRow* _Row; // 0x10
		::RPG::GameCore::HeliobusSpecialPostRow* _SpRow; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* _CommentDataDict_k__BackingField; // 0x20
		::System::UInt32 _Likes_k__BackingField; // 0x28
		::System::UInt32 _TemplateID_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::RPG::Client::TextID _Title_k__BackingField; // 0x38
		::System::UInt32 _UserID_k__BackingField; // 0x48
		::System::UInt32 _ReadCommentCount_k__BackingField; // 0x4C
		::System::Boolean _IsRead_k__BackingField; // 0x50
		::System::Boolean _IsLike_k__BackingField; // 0x51
		::System::UInt32 _ImgID_k__BackingField; // 0x54
		::RPG::GameCore::HeliobusPostType PostType; // 0x58
		::System::UInt32 _PostDay_k__BackingField; // 0x5C
		::RPG::Client::TextID _Content_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HeliobusSNSPostData* Create(::System::UInt32 baseID)
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET))(baseID);
		}

		::System::Void SyncPost(::Class_1_070964BB68D18B9F_2* postProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET))(this, postProto);
		}

		::System::Void SetRead(::System::Boolean isRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET))(this, isRead);
		}

		::System::Void SetLike(::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET))(this, isLike);
		}

		::System::Boolean CheckIsCanReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET))(this);
		}

		::System::Boolean CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::UInt32 GetCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean CheckIsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET))(this);
		}

		::System::Void UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET))(this);
		}

		::System::Void _UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET))(this);
		}

		::System::Boolean _CheckIsCommentAvailable(::System::UInt32 commentID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET))(this, commentID);
		}

		::System::UInt32 _GetSubCommentCount(::RPG::Client::HeliobusSNSCommentData* commentData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::HeliobusSNSCommentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET))(this, commentData);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_PostDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET))(this);
		}

		::System::Void set_PostDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET))(this, value);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET))(this, value);
		}

		::System::UInt32 get_Likes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET))(this);
		}

		::System::Void set_Likes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET))(this, value);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET))(this, value);
		}

		::System::UInt32 get_ImgID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET))(this);
		}

		::System::Void set_ImgID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET))(this, value);
		}

		::System::UInt32 get_TemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* get_CommentDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET))(this);
		}

		::System::Void set_CommentDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET))(this, value);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt32 get_ReadCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Void set_ReadCommentCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET))(this, value);
		}

		::RPG::GameCore::HeliobusPostRow* get_Row()
		{
			return ((::RPG::GameCore::HeliobusPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* get_SpRow()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET))(this);
		}

		::System::Boolean get_IsMyPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET))(this);
		}

		::System::Boolean get_IsMissionTypePost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET))(this);
		}
	};
}
