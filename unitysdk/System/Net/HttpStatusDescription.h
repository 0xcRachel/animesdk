#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET UNITYSDK_OFFSET(0x17ECD6F0)

namespace System::Net
{
	inline static constexpr unsigned int HttpStatusDescription_TypeDefinitionIndex = 2706;

	class HttpStatusDescription : public ::System::Object
	{
	public:
		static ::System::String* Get(::System::Int32 code)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET))(code);
		}
	};
}
