#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPREMESHINGSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B71350)
#define SIMPLYGON_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x17B714E0)
#define SIMPLYGON_SPREMESHINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17B70F40)

namespace Simplygon
{
	inline static constexpr unsigned int spRemeshingSettings_TypeDefinitionIndex = 28692;

	class spRemeshingSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGSETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetOnScreenSize(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPREMESHINGSETTINGS_SETONSCREENSIZE_OFFSET))(this, value);
		}
	};
}
