#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class EndSessionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2339C50)
#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2339B30)
#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2339A60)
#define EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x23399B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int EndSessionOptionsInternal_TypeDefinitionIndex = 41266;

	struct alignas(8) EndSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::EndSessionOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ENDSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
