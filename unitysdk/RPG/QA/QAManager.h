#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/QAManager_Message.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace RPG::Client { class UIController; }
namespace RPG::QA { class QAManager_LogInfoSender; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB0EB80)
#define RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET UNITYSDK_OFFSET(0xAB0F950)
#define RPG_QA_QAMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xAB0E190)
#define RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET UNITYSDK_OFFSET(0xAB0EC30)
#define RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET UNITYSDK_OFFSET(0xAB0F940)
#define RPG_QA_QAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xAB0DF80)
#define RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET UNITYSDK_OFFSET(0xAB0F980)
#define RPG_QA_QAMANAGER_LOG_OFFSET UNITYSDK_OFFSET(0xAB0F970)
#define RPG_QA_QAMANAGER_SENDCRASH_OFFSET UNITYSDK_OFFSET(0xAB0EFD0)
#define RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xAB0EB20)
#define RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0xAB0F0D0)
#define RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xAB0F070)
#define RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET UNITYSDK_OFFSET(0xAB0EF60)
#define RPG_QA_QAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xAB0F960)
#define RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET UNITYSDK_OFFSET(0xAB0F300)
#define RPG_QA_QAMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB0DAC0)
#define RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB0EA40)
#define RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET UNITYSDK_OFFSET(0xAB0F890)
#define RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0xAB0EB30)
#define RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET UNITYSDK_OFFSET(0xAB0E880)
#define RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB0EBE0)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET UNITYSDK_OFFSET(0xAB0E380)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xAB0E320)
#define RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xAB0E690)
#define RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET UNITYSDK_OFFSET(0xAB0F540)
#define RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET UNITYSDK_OFFSET(0xAB0E580)
#define RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET UNITYSDK_OFFSET(0xAB0E3D0)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET UNITYSDK_OFFSET(0xAB0F8D0)
#define RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET UNITYSDK_OFFSET(0xAB0F480)
#define RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xAB0E9E0)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_TypeDefinitionIndex = 41854;

	class QAManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>** StaticGet__PendingMessages()
		{
			return (::System::Collections::Generic::List_1<::RPG::QA::QAManager_Message>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465A0);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__EmptyMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465A8);
		}
		static ::RPG::QA::QAManager_Message* StaticGet__LastErrorMessage()
		{
			return (::RPG::QA::QAManager_Message*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465C8);
		}
		static ::RPG::QA::QAManager_LogInfoSender** StaticGet__LogInfoSender()
		{
			return (::RPG::QA::QAManager_LogInfoSender**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465E8);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet__SendLogSwitch()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__LogTypeString()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x465F8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__SentMessages()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46600);
		}
		static ::RPG::Client::UIController** StaticGet__ErrorDialogController()
		{
			return (::RPG::Client::UIController**)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x46608);
		}
		static ::System::Int64* StaticGet__ReportImportDruation()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::Boolean* StaticGet_ErrorSaveReplay()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		static ::System::Boolean* StaticGet_ErrorPause()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12219);
		}
		static ::System::Int32* StaticGet__MessgeReportIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x1221C);
		}
		static ::System::Int64* StaticGet__LastSendTimeTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(QAManager_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		// static const ::System::String* LuaExceptionSign; // 0x0
		// static const ::System::String* LuaStackSign; // 0x0
		// static const ::System::String* LuaTracebackSign; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_DESTROY_OFFSET))();
		}

		static ::System::Void _OnLogMessageReceivedThreaded(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDTHREADED_OFFSET))(message, stackTrace, type);
		}

		static ::System::Collections::IEnumerator* _OnLogMessageReceivedCo(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVEDCO_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _RebuildLuaException(::System::String*& message, ::System::String*& stackTrace)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDLUAEXCEPTION_OFFSET))(message, stackTrace);
		}

		static ::System::Void _RebuildExceptionStackTrace(::System::String*& message, ::System::String*& stackTrace)
		{
			return ((::System::Void(*)(::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__REBUILDEXCEPTIONSTACKTRACE_OFFSET))(message, stackTrace);
		}

		static ::System::Void _OnLogMessageReceived(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONLOGMESSAGERECEIVED_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _ShowErrorDialog(::System::String* message, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SHOWERRORDIALOG_OFFSET))(message, stackTrace, type);
		}

		static ::System::Void _CloseDialogCallBack(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__CLOSEDIALOGCALLBACK_OFFSET))(enable);
		}

		static ::System::Void _IsSendLastErrorMessageSuccess(::System::Boolean IsSuccess)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ISSENDLASTERRORMESSAGESUCCESS_OFFSET))(IsSuccess);
		}

		static ::System::Void AddPacketHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ADDPACKETHANDLERS_OFFSET))();
		}

		static ::System::Void _OnCmdGmTalkScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONCMDGMTALKSCNOTIFY_OFFSET))(cmd, rspObject);
		}

		static ::System::Void SetSendLogSwitch(::UnityEngine::LogType type, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SETSENDLOGSWITCH_OFFSET))(type, enable);
		}

		static ::System::Void SendCrash(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDCRASH_OFFSET))(title, detail);
		}

		static ::System::Void SendMessage_(::System::String* type, ::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__OFFSET))(type, title, detail);
		}

		static ::System::Void SendMessage__1(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDMESSAGE__1_OFFSET))(message, callback);
		}

		static ::System::Void SendLastErrorMessage(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_SENDLASTERRORMESSAGE_OFFSET))(callback);
		}

		static ::System::Boolean _NeedSendLog(::UnityEngine::LogType type, ::System::String* message, ::System::String* stackTrace)
		{
			return ((::System::Boolean(*)(::UnityEngine::LogType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__NEEDSENDLOG_OFFSET))(type, message, stackTrace);
		}

		static ::System::Void _OnSendMessageError(::RPG::QA::QAManager_Message message, ::System::String* error)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ONSENDMESSAGEERROR_OFFSET))(message, error);
		}

		static ::System::Boolean _AddMessage(::RPG::QA::QAManager_Message message)
		{
			return ((::System::Boolean(*)(::RPG::QA::QAManager_Message))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__ADDMESSAGE_OFFSET))(message);
		}

		static ::System::String* _GetRPGQAPlatform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__GETRPGQAPLATFORM_OFFSET))();
		}

		static ::System::Boolean ExecuteReleaseGM(::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_EXECUTERELEASEGM_OFFSET))(message);
		}

		static ::System::Void _SendMessageToApm(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPM_OFFSET))(message, callback);
		}

		static ::System::Collections::IEnumerator* _SendMessageToApmCo(::RPG::QA::QAManager_Message message, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::QA::QAManager_Message, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER__SENDMESSAGETOAPMCO_OFFSET))(message, callback);
		}

		static ::System::Void InitRPGShell(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_INITRPGSHELL_OFFSET))(callback);
		}

		static ::System::Void DestroyRPGShell()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_DESTROYRPGSHELL_OFFSET))();
		}

		static ::System::Void tick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_TICK_OFFSET))();
		}

		static ::System::Void Log(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_LOG_OFFSET))(content);
		}

		static ::System::Boolean IsRPGShellStarted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_ISRPGSHELLSTARTED_OFFSET))();
		}
	};
}
