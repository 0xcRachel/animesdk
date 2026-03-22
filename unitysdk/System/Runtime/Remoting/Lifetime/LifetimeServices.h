#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting::Lifetime { class LeaseManager; }

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x15CF2CE0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x15CF2D40)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x15CF2E00)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x15CF2EC0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET UNITYSDK_OFFSET(0x15CED380)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET UNITYSDK_OFFSET(0x15CF2DA0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET UNITYSDK_OFFSET(0x15CF2E60)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x15CF2F20)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x15CF2F80)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CF2C40)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LifetimeServices_TypeDefinitionIndex = 1230;

	class LifetimeServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Lifetime::LeaseManager** StaticGet__leaseManager()
		{
			return (::System::Runtime::Remoting::Lifetime::LeaseManager**)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x8E60);
		}
		static ::System::TimeSpan* StaticGet__leaseManagerPollTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x2CF0);
		}
		static ::System::TimeSpan* StaticGet__renewOnCallTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x2CF8);
		}
		static ::System::TimeSpan* StaticGet__sponsorshipTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x2D00);
		}
		static ::System::TimeSpan* StaticGet__leaseTime()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(LifetimeServices_TypeDefinitionIndex)->GetStaticField(0x2D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES__CCTOR_OFFSET))();
		}

		static ::System::TimeSpan get_LeaseManagerPollTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASEMANAGERPOLLTIME_OFFSET))();
		}

		static ::System::Void set_LeaseManagerPollTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASEMANAGERPOLLTIME_OFFSET))(value);
		}

		static ::System::TimeSpan get_LeaseTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_LEASETIME_OFFSET))();
		}

		static ::System::Void set_LeaseTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_LEASETIME_OFFSET))(value);
		}

		static ::System::TimeSpan get_RenewOnCallTime()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_RENEWONCALLTIME_OFFSET))();
		}

		static ::System::Void set_RenewOnCallTime(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_RENEWONCALLTIME_OFFSET))(value);
		}

		static ::System::TimeSpan get_SponsorshipTimeout()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_GET_SPONSORSHIPTIMEOUT_OFFSET))();
		}

		static ::System::Void set_SponsorshipTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_SET_SPONSORSHIPTIMEOUT_OFFSET))(value);
		}

		static ::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LIFETIMESERVICES_TRACKLIFETIME_OFFSET))(identity);
		}
	};
}
