#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET UNITYSDK_OFFSET(0x193BEF10)
#define SYSTEM_ATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x193BEC50)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET UNITYSDK_OFFSET(0x193BEA40)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x193BDB90)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x193BDD90)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET UNITYSDK_OFFSET(0x193BE1F0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET UNITYSDK_OFFSET(0x193BE3E0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET UNITYSDK_OFFSET(0x193BE5A0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET UNITYSDK_OFFSET(0x193BE6B0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET UNITYSDK_OFFSET(0x193BE880)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET UNITYSDK_OFFSET(0x193BE890)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET UNITYSDK_OFFSET(0x193BEA30)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193BDB80)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x193BE190)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x193BE540)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x193BEB20)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET UNITYSDK_OFFSET(0x193BEBB0)
#define SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x193BE120)
#define SYSTEM_ATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193BF370)
#define SYSTEM_ATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x193BF500)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x193BD530)
#define SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193BD4F0)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x193BDB70)
#define SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET UNITYSDK_OFFSET(0x193BDB60)
#define SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x193BD570)
#define SYSTEM_ATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x193BF510)
#define SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET UNITYSDK_OFFSET(0x193BDF60)
#define SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x193BDF50)
#define SYSTEM_ATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x193BEC40)

namespace System
{
	inline static constexpr unsigned int Attribute_TypeDefinitionIndex = 201;

	class Attribute : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes(::System::Reflection::PropertyInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalGetCustomAttributes_1(::System::Reflection::EventInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALGETCUSTOMATTRIBUTES_1_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo* parameter, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALPARAMGETCUSTOMATTRIBUTES_OFFSET))(parameter, attributeType, inherit);
		}

		static ::System::Boolean InternalIsDefined(::System::Reflection::PropertyInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Boolean InternalIsDefined_1(::System::Reflection::EventInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_INTERNALISDEFINED_1_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* type)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_OFFSET))(element, type);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* element, ::System::Type* type, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_1_OFFSET))(element, type, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_2(::System::Reflection::MemberInfo* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_2_OFFSET))(element, inherit);
		}

		static ::System::Boolean IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_OFFSET))(element, attributeType);
		}

		static ::System::Boolean IsDefined_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFINED_1_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_1_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_3(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_3_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_4(::System::Reflection::ParameterInfo* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ParameterInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_4_OFFSET))(element, inherit);
		}

		static ::System::Attribute* GetCustomAttribute_2(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_2_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_5(::System::Reflection::Module* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_5_OFFSET))(element, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_6(::System::Reflection::Module* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Module*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_6_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_7(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_7_OFFSET))(element, attributeType);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_8(::System::Reflection::Assembly* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_8_OFFSET))(element, attributeType, inherit);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_9(::System::Reflection::Assembly* element)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_9_OFFSET))(element);
		}

		static ::Il2CppArray<::System::Attribute*>* GetCustomAttributes_10(::System::Reflection::Assembly* element, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTES_10_OFFSET))(element, inherit);
		}

		static ::System::Attribute* GetCustomAttribute_3(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_3_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_4(::System::Reflection::Assembly* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETCUSTOMATTRIBUTE_4_OFFSET))(element, attributeType, inherit);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean AreFieldValuesEqual(::System::Object* thisValue, ::System::Object* thatValue)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_AREFIELDVALUESEQUAL_OFFSET))(thisValue, thatValue);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
