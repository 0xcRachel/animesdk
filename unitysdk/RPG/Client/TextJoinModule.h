#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_861;
class Class_1_455008579EB95638_109;
class Class_1_F91AD0C5A85E4AFA_33;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEXTJOINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105626F0)
#define RPG_CLIENT_TEXTJOINMODULE_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x10563C30)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0x10563A50)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINVALUE_OFFSET UNITYSDK_OFFSET(0x10563550)
#define RPG_CLIENT_TEXTJOINMODULE_HASSERVERVALUE_OFFSET UNITYSDK_OFFSET(0x105638E0)
#define RPG_CLIENT_TEXTJOINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x10562500)
#define RPG_CLIENT_TEXTJOINMODULE_ISTEXTJOINITEMIDEQUAL_OFFSET UNITYSDK_OFFSET(0x105636B0)
#define RPG_CLIENT_TEXTJOINMODULE_SENDTEXTJOINQUERYCSREQ_OFFSET UNITYSDK_OFFSET(0x10562830)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARIDBATCH_OFFSET UNITYSDK_OFFSET(0x10563110)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_OFFSET UNITYSDK_OFFSET(0x10562EB0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_OFFSET UNITYSDK_OFFSET(0x105632B0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTIONBATCH_OFFSET UNITYSDK_OFFSET(0x10562D10)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_OFFSET UNITYSDK_OFFSET(0x10562A00)
#define RPG_CLIENT_TEXTJOINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x10562740)
#define RPG_CLIENT_TEXTJOINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x10562780)
#define RPG_CLIENT_TEXTJOINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x10564750)
#define RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET UNITYSDK_OFFSET(0x10562F60)
#define RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET UNITYSDK_OFFSET(0x10563360)
#define RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET UNITYSDK_OFFSET(0x10562AB0)
#define RPG_CLIENT_TEXTJOINMODULE__INITTEXTJOINDATA_OFFSET UNITYSDK_OFFSET(0x10562590)
#define RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET UNITYSDK_OFFSET(0x105642B0)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0x10563E50)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x105643F0)
#define RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET UNITYSDK_OFFSET(0x10562C40)
#define RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET UNITYSDK_OFFSET(0x10564110)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10564870)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x105647E0)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x10564880)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x105648E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextJoinModule_TypeDefinitionIndex = 62821;

	class TextJoinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_861*>* _TextJoinDataDict; // 0x10
		::System::Action_1<::System::UInt32>* OnTextJoinChange; // 0x18
		::System::UInt32 CurOperateID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendTextJoinQueryCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SENDTEXTJOINQUERYCSREQ_OFFSET))(this);
		}

		::System::Void SetTextJoinSelection(::System::UInt32 textJoinID, ::System::Int32 selectedIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_OFFSET))(this, textJoinID, selectedIndex);
		}

		::System::Void SetTextJoinSelectionBatch(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>* textJoinSelectionSaveDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTIONBATCH_OFFSET))(this, textJoinSelectionSaveDatas);
		}

		::System::Void SetTextJoinAvatarId(::System::UInt32 textJoinID, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_OFFSET))(this, textJoinID, avatarID);
		}

		::System::Void SetTextJoinAvatarIdBatch(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* textJoinAvatarIdSaveDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARIDBATCH_OFFSET))(this, textJoinAvatarIdSaveDatas);
		}

		::System::Void SetTextJoinCustomText(::System::UInt32 textJoinID, ::System::String* customText)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_OFFSET))(this, textJoinID, customText);
		}

		::Class_1_F91AD0C5A85E4AFA_33* _GetSelectionProto(::System::UInt32 textJoinID, ::System::Int32 selectedIndex)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_33*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET))(this, textJoinID, selectedIndex);
		}

		::Class_1_F91AD0C5A85E4AFA_33* _GetAvatarIDProto(::System::UInt32 textJoinID, ::System::UInt32 avatarID)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_33*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET))(this, textJoinID, avatarID);
		}

		::Class_1_F91AD0C5A85E4AFA_33* _GetCustomTextProto(::System::UInt32 textJoinID, ::System::String* customText)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_33*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET))(this, textJoinID, customText);
		}

		::System::String* GetTextJoinValue(::System::UInt32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINVALUE_OFFSET))(this, id);
		}

		::System::Boolean IsTextJoinItemIdEqual(::System::UInt32 textJoinID, ::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_ISTEXTJOINITEMIDEQUAL_OFFSET))(this, textJoinID, index);
		}

		::System::Boolean HasServerValue(::System::UInt32 textJoinID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_HASSERVERVALUE_OFFSET))(this, textJoinID);
		}

		::System::UInt32 GetTextJoinItemId(::System::UInt32 textJoinID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINITEMID_OFFSET))(this, textJoinID);
		}

		::System::UInt32 GetAvatarId(::System::UInt32 textJoinID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETAVATARID_OFFSET))(this, textJoinID);
		}

		::System::Void _SetTextJoinValues(::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_33*>* textJoins)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET))(this, textJoins);
		}

		::System::Void _OnTextJoinBatchSaveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _NotifySaveResult(::Class_1_455008579EB95638_109* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET))(this, rsp);
		}

		::System::Void _OnTextJoinQueryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateDataByServer(::Class_1_F91AD0C5A85E4AFA_33* textJoin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET))(this, textJoin);
		}

		::System::Void _InitTextJoinData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__INITTEXTJOINDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
