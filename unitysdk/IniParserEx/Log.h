#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INIPARSEREX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x19CF3530)
#define INIPARSEREX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x19CF1AC0)

namespace IniParserEx
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 3758;

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
