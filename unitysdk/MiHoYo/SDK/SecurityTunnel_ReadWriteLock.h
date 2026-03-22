#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading { class ReaderWriterLockSlim; }

#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHREADLOCK_OFFSET UNITYSDK_OFFSET(0x8250920)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x8250A60)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHWRITELOCK_OFFSET UNITYSDK_OFFSET(0x8250BA0)
#define MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x8250880)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ReadWriteLock_TypeDefinitionIndex = 36237;

	class SecurityTunnel_ReadWriteLock : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterLockSlim* locker; // 0x10

		::System::Void _ctor(::System::Boolean supportsRecursion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK__CTOR_OFFSET))(this, supportsRecursion);
		}

		::System::Void WithReadLock(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHREADLOCK_OFFSET))(this, action);
		}

		::System::Void WithUpgradeableReadLock(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHUPGRADEABLEREADLOCK_OFFSET))(this, action);
		}

		::System::Void WithWriteLock(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_READWRITELOCK_WITHWRITELOCK_OFFSET))(this, action);
		}
	};
}
