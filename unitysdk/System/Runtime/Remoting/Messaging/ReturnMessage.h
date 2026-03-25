#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Reflection { class MethodBase; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting::Messaging { class ArgInfo; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Remoting::Messaging { class MethodReturnDictionary; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x163CC780)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x163CC4A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x163CC4C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x163CC7C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x163CC4D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x163CC500)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x163CC510)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x163CC540)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x163CC7D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x163CC690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x163CC870)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x163CC6F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x163CC740)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x163CC750)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x163CC880)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x163CC760)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x163CC890)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x163CC770)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163CC320)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x163CC170)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ReturnMessage_TypeDefinitionIndex = 1323;

	class ReturnMessage : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x10
		::System::String* _methodName; // 0x18
		::System::Object* _returnValue; // 0x20
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x28
		::System::String* _uri; // 0x30
		::System::Exception* _exception; // 0x38
		::System::Reflection::MethodBase* _methodBase; // 0x40
		::System::String* _typeName; // 0x48
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx; // 0x50
		::Il2CppArray<::System::Object*>* _outArgs; // 0x58
		::Il2CppArray<::System::Type*>* _methodSignature; // 0x60
		::Il2CppArray<::System::Object*>* _args; // 0x68
		::System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties; // 0x70

		::System::Void _ctor(::System::Object* ret, ::Il2CppArray<::System::Object*>* outArgs, ::System::Int32 outArgsCount, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_OFFSET))(this, ret, outArgs, outArgsCount, callCtx, mcm);
		}

		::System::Void _ctor_1(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE__CTOR_1_OFFSET))(this, e, mcm);
		}

		::System::Int32 get_ArgCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET))(this);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Object* get_MethodSignature()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET))(this, value);
		}

		::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_URI_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_URI_OFFSET))(this, value);
		}

		::System::Object* GetArg(::System::Int32 argNum)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET))(this, argNum);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET))(this);
		}

		::System::Object* get_ReturnValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity()
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_GET_TARGETIDENTITY_OFFSET))(this);
		}

		::System::Void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM_RUNTIME_REMOTING_MESSAGING_IINTERNALMESSAGE_SET_TARGETIDENTITY_OFFSET))(this, value);
		}
	};
}
