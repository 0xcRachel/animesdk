#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_696;
class Class_1_5FEFAED860528596_99;
class Class_1_B139B98AF2D803D6_31;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEXTJOINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA076550)
#define RPG_CLIENT_TEXTJOINMODULE_GETAVATARID_OFFSET UNITYSDK_OFFSET(0xA077B90)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0xA0779B0)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINVALUE_OFFSET UNITYSDK_OFFSET(0xA0774B0)
#define RPG_CLIENT_TEXTJOINMODULE_HASSERVERVALUE_OFFSET UNITYSDK_OFFSET(0xA077840)
#define RPG_CLIENT_TEXTJOINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA076360)
#define RPG_CLIENT_TEXTJOINMODULE_ISTEXTJOINITEMIDEQUAL_OFFSET UNITYSDK_OFFSET(0xA077610)
#define RPG_CLIENT_TEXTJOINMODULE_SENDTEXTJOINQUERYCSREQ_OFFSET UNITYSDK_OFFSET(0xA076690)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARIDBATCH_OFFSET UNITYSDK_OFFSET(0xA077020)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_OFFSET UNITYSDK_OFFSET(0xA076D90)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_OFFSET UNITYSDK_OFFSET(0xA0771E0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTIONBATCH_OFFSET UNITYSDK_OFFSET(0xA076BD0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_OFFSET UNITYSDK_OFFSET(0xA076860)
#define RPG_CLIENT_TEXTJOINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0765A0)
#define RPG_CLIENT_TEXTJOINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0765E0)
#define RPG_CLIENT_TEXTJOINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA078610)
#define RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET UNITYSDK_OFFSET(0xA076E70)
#define RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET UNITYSDK_OFFSET(0xA0772C0)
#define RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET UNITYSDK_OFFSET(0xA076940)
#define RPG_CLIENT_TEXTJOINMODULE__INITTEXTJOINDATA_OFFSET UNITYSDK_OFFSET(0xA0763F0)
#define RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET UNITYSDK_OFFSET(0xA078210)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0xA077DB0)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xA078320)
#define RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET UNITYSDK_OFFSET(0xA076B00)
#define RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET UNITYSDK_OFFSET(0xA078070)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA078730)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA0786A0)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA078740)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0787A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextJoinModule_TypeDefinitionIndex = 54066;

	class TextJoinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Action_1<::System::UInt32>* OnTextJoinChange; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_696*>* _TextJoinDataDict; // 0x18
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

		::Class_1_B139B98AF2D803D6_31* _GetSelectionProto(::System::UInt32 textJoinID, ::System::Int32 selectedIndex)
		{
			return ((::Class_1_B139B98AF2D803D6_31*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET))(this, textJoinID, selectedIndex);
		}

		::Class_1_B139B98AF2D803D6_31* _GetAvatarIDProto(::System::UInt32 textJoinID, ::System::UInt32 avatarID)
		{
			return ((::Class_1_B139B98AF2D803D6_31*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET))(this, textJoinID, avatarID);
		}

		::Class_1_B139B98AF2D803D6_31* _GetCustomTextProto(::System::UInt32 textJoinID, ::System::String* customText)
		{
			return ((::Class_1_B139B98AF2D803D6_31*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET))(this, textJoinID, customText);
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

		::System::Void _SetTextJoinValues(::System::Collections::Generic::List_1<::Class_1_B139B98AF2D803D6_31*>* textJoins)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B139B98AF2D803D6_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET))(this, textJoins);
		}

		::System::Void _OnTextJoinBatchSaveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _NotifySaveResult(::Class_1_5FEFAED860528596_99* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_99*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET))(this, rsp);
		}

		::System::Void _OnTextJoinQueryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateDataByServer(::Class_1_B139B98AF2D803D6_31* textJoin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET))(this, textJoin);
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
