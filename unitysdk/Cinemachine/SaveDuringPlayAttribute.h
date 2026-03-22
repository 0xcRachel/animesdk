#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CINEMACHINE_SAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11266A70)

namespace Cinemachine
{
	inline static constexpr unsigned int SaveDuringPlayAttribute_TypeDefinitionIndex = 29994;

	class SaveDuringPlayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SAVEDURINGPLAYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
