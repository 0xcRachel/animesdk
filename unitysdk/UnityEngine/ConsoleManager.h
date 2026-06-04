#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableProperty.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_CONSOLEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A4CFC90)
#define UNITYENGINE_CONSOLEMANAGER_GETCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A4CFCA0)
#define UNITYENGINE_CONSOLEMANAGER_ONCONSOLEVARIABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1A4D0040)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A4CFF60)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1A4CFE50)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_2_OFFSET UNITYSDK_OFFSET(0x1A4CFEB0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_3_OFFSET UNITYSDK_OFFSET(0x1A4CFF00)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A4CFE00)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCALLBACKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A4D0030)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHBOOL_OFFSET UNITYSDK_OFFSET(0x1A4CFE40)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHFLOAT_OFFSET UNITYSDK_OFFSET(0x1A4CFEA0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHINT_OFFSET UNITYSDK_OFFSET(0x1A4CFEF0)
#define UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x1A4CFF50)
#define UNITYENGINE_CONSOLEMANAGER_SENDCOMMANDTOCONSOLEMANAGER_OFFSET UNITYSDK_OFFSET(0x1A4CFC70)
#define UNITYENGINE_CONSOLEMANAGER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1A4CFC80)
#define UNITYENGINE_CONSOLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4D0260)

namespace UnityEngine
{
	inline static constexpr unsigned int ConsoleManager_TypeDefinitionIndex = 4046;

	class ConsoleManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>** StaticGet_s_ConsoleVariableChangedCallbackMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleManager_TypeDefinitionIndex)->GetStaticField(0x30230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SendCommandToConsoleManager(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_SENDCOMMANDTOCONSOLEMANAGER_OFFSET))(a1);
		}

		static ::System::Void SetString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_SETSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_CONTAINS_OFFSET))(a1);
		}

		static ::UnityEngine::ConsoleVariableProperty GetConsoleVariable(::System::String* a1)
		{
			return ((::UnityEngine::ConsoleVariableProperty(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_GETCONSOLEVARIABLE_OFFSET))(a1);
		}

		static ::System::Void RegisterConsoleVariable(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterConsoleVariable_1(::System::String* a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterConsoleVariable_2(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterConsoleVariable_3(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARIABLE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterConsoleVarChangedCallback(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERCONSOLEVARCHANGEDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void OnConsoleVariableChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_ONCONSOLEVARIABLECHANGED_OFFSET))(a1);
		}

		static ::System::Void RegisterManagedConsoleVariableWithBool(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHBOOL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterManagedConsoleVariableWithFloat(::System::String* a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterManagedConsoleVariableWithInt(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterManagedConsoleVariableWithString(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCONSOLEVARIABLEWITHSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterManagedCallbackNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONSOLEMANAGER_REGISTERMANAGEDCALLBACKNOTIFICATION_OFFSET))(a1);
		}
	};
}
