#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_MENUCATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18197540)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MenuCategoryAttribute_TypeDefinitionIndex = 29034;

	class MenuCategoryAttribute : public ::System::Attribute
	{
	public:
		::System::String* category; // 0x10

		::System::Void _ctor(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MENUCATEGORYATTRIBUTE__CTOR_OFFSET))(this, category);
		}
	};
}
