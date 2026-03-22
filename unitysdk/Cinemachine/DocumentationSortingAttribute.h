#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/DocumentationSortingAttribute_Level.h"
#include "unitysdk/System/Attribute.h"

#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x11265490)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x112654A0)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x112654B0)

namespace Cinemachine
{
	inline static constexpr unsigned int DocumentationSortingAttribute_TypeDefinitionIndex = 29999;

	class DocumentationSortingAttribute : public ::System::Attribute
	{
	public:
		::Cinemachine::DocumentationSortingAttribute_Level _Category_k__BackingField; // 0x10

		::System::Void _ctor(::Cinemachine::DocumentationSortingAttribute_Level category)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::DocumentationSortingAttribute_Level))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE__CTOR_OFFSET))(this, category);
		}

		::Cinemachine::DocumentationSortingAttribute_Level get_Category()
		{
			return ((::Cinemachine::DocumentationSortingAttribute_Level(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::Cinemachine::DocumentationSortingAttribute_Level value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::DocumentationSortingAttribute_Level))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET))(this, value);
		}
	};
}
