#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE1_OFFSET UNITYSDK_OFFSET(0x17CFF350)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE_OFFSET UNITYSDK_OFFSET(0x17CFED80)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_GET_DEBUG_OFFSET UNITYSDK_OFFSET(0x17CFED50)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_SETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x17D0C220)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D25CC0)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D25C80)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TplEtwProvider_TypeDefinitionIndex = 1667;

	class TplEtwProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Diagnostics::Tracing::TplEtwProvider** StaticGet_Log()
		{
			return (::System::Diagnostics::Tracing::TplEtwProvider**)Il2CppClass::FromTypeDefinitionIndex(TplEtwProvider_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CCTOR_OFFSET))();
		}

		::System::Boolean get_Debug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_GET_DEBUG_OFFSET))(this);
		}

		::System::Void DebugFacilityMessage(::System::String* Facility, ::System::String* Message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE_OFFSET))(this, Facility, Message);
		}

		::System::Void DebugFacilityMessage1(::System::String* Facility, ::System::String* Message, ::System::String* Arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE1_OFFSET))(this, Facility, Message, Arg);
		}

		::System::Void SetActivityId(::System::Guid Id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_SETACTIVITYID_OFFSET))(this, Id);
		}
	};
}
