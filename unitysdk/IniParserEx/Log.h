#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INIPARSEREX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x181CD5E0)
#define INIPARSEREX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x181CBB70)

namespace IniParserEx
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 3747;

	class Log : public ::System::Object
	{
	public:
		static ::System::Void Error(::System::String* info)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_LOG_ERROR_OFFSET))(info);
		}

		static ::System::Void Exception(::System::String* info)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_LOG_EXCEPTION_OFFSET))(info);
		}
	};
}
