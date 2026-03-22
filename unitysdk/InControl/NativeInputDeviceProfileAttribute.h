#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x154F8C00)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceProfileAttribute_TypeDefinitionIndex = 30578;

	class NativeInputDeviceProfileAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
