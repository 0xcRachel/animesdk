#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E6F440)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E6F4F0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x17E6F3B0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E6F350)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6F2D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerAttribute_TypeDefinitionIndex = 2565;

	class DesignerAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* designerTypeName; // 0x18
		::System::String* designerBaseTypeName; // 0x20

		::System::Void _ctor(::System::String* designerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_OFFSET))(this, designerTypeName);
		}

		::System::Void _ctor_1(::System::String* designerTypeName, ::System::Type* designerBaseType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE__CTOR_1_OFFSET))(this, designerTypeName, designerBaseType);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
