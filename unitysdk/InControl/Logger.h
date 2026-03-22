#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x15467040)
#define INCONTROL_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x15475BA0)
#define INCONTROL_LOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x154670D0)
#define INCONTROL_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x15472470)
#define INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x15466FB0)
#define INCONTROL_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1547A0C0)

namespace InControl
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 30543;

	class Logger : public ::System::Object
	{
	public:
		static ::System::Action_1<::InControl::LogMessage>** StaticGet_OnLogMessage()
		{
			return (::System::Action_1<::InControl::LogMessage>**)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x30340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogMessage(::System::Action_1<::InControl::LogMessage>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void remove_OnLogMessage(::System::Action_1<::InControl::LogMessage>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET))(value);
		}

		static ::System::Void LogInfo(::System::String* text)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGINFO_OFFSET))(text);
		}

		static ::System::Void LogWarning(::System::String* text)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGWARNING_OFFSET))(text);
		}

		static ::System::Void LogError(::System::String* text)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGERROR_OFFSET))(text);
		}
	};
}
