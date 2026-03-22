#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_THREADING_TIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B9BB60)

namespace System::Threading
{
	inline static constexpr unsigned int Timeout_TypeDefinitionIndex = 864;

	class Timeout : public ::System::Object
	{
	public:
		static ::System::TimeSpan* StaticGet_InfiniteTimeSpan()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Timeout_TypeDefinitionIndex)->GetStaticField(0x4730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUT__CCTOR_OFFSET))();
		}
	};
}
