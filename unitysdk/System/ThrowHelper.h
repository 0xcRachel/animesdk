#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ExceptionArgument.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentNullException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class String; }

#define SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x17D38110)
#define SYSTEM_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17D37F70)
#define SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17D38030)
#define SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17D37C30)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17D37B40)

namespace System
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 8756;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentNullException(::System::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument);
		}

		static ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument argument)
		{
			return ((::System::ArgumentNullException*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument argument)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument);
		}

		static ::System::String* GetArgumentName(::System::ExceptionArgument argument)
		{
			return ((::System::String*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET))(argument);
		}
	};
}
