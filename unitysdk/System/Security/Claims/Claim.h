#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET UNITYSDK_OFFSET(0x16418C20)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x16418720)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x16418BE0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16418C00)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16418C10)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x16418BC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x16418BF0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16418C80)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16418510)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16418860)
#define SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x164184E0)

namespace System::Security::Claims
{
	inline static constexpr unsigned int Claim_TypeDefinitionIndex = 983;

	class Claim : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* m_properties; // 0x10
		::System::Object* m_propertyLock; // 0x18
		::System::String* m_issuer; // 0x20
		::System::Security::Claims::ClaimsIdentity* m_subject; // 0x28
		::System::String* m_valueType; // 0x30
		::System::String* m_type; // 0x38
		::Il2CppArray<::System::Byte>* m_userSerializationData; // 0x40
		::System::String* m_originalIssuer; // 0x48
		::System::String* m_value; // 0x50

		::System::Void _ctor(::System::String* type, ::System::String* value, ::System::String* valueType, ::System::String* issuer, ::System::String* originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_OFFSET))(this, type, value, valueType, issuer, originalIssuer, subject);
		}

		::System::Void _ctor_1(::System::String* type, ::System::String* value, ::System::String* valueType, ::System::String* issuer, ::System::String* originalIssuer, ::System::Security::Claims::ClaimsIdentity* subject, ::System::String* propertyKey, ::System::String* propertyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_1_OFFSET))(this, type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue);
		}

		::System::Void _ctor_2(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::Claim*, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM__CTOR_2_OFFSET))(this, other, subject);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET))(this, context);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* get_Properties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Security::Claims::ClaimsIdentity* get_Subject()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET))(this);
		}

		::System::Void set_Subject(::System::Security::Claims::ClaimsIdentity* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET))(this, value);
		}

		::System::String* get_Type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET))(this);
		}

		::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* identity)
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET))(this, identity);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET))(this);
		}
	};
}
