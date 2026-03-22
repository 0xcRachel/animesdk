#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SRDEBUGGER_CUSTOMOPTIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2DE70)

namespace SRDebugger
{
	inline static constexpr unsigned int CustomOptionsAttribute_TypeDefinitionIndex = 28735;

	class CustomOptionsAttribute : public ::System::Attribute
	{
	public:
		::System::String* TargetOptionTab; // 0x10

		::System::Void _ctor(::System::String* tabName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_CUSTOMOPTIONSATTRIBUTE__CTOR_OFFSET))(this, tabName);
		}
	};
}
