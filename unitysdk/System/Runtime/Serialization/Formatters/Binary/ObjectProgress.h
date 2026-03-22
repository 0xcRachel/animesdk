#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET UNITYSDK_OFFSET(0x15D21890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET UNITYSDK_OFFSET(0x15D218A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET UNITYSDK_OFFSET(0x15D21760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D219C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x15D21700)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectProgress_TypeDefinitionIndex = 1149;

	class ObjectProgress : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_opRecordIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectProgress_TypeDefinitionIndex)->GetStaticField(0x2D90);
		}
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x10
		::Il2CppArray<::System::String*>* memberNames; // 0x18
		::System::Object* expectedTypeInformation; // 0x20
		::System::Type* dtType; // 0x28
		::Il2CppArray<::System::Type*>* memberTypes; // 0x30
		::System::String* name; // 0x38
		::System::Object* typeInformation; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr; // 0x48
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum; // 0x58
		::System::Int32 nullCount; // 0x5C
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum; // 0x60
		::System::Int32 memberLength; // 0x64
		::System::Int32 numItems; // 0x68
		::System::Int32 count; // 0x6C
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum; // 0x74
		::System::Boolean isInitial; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET))(this);
		}

		::System::Void ArrayCountIncrement(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET))(this, value);
		}

		::System::Boolean GetNext(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& outBinaryTypeEnum, ::System::Object*& outTypeInformation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum&, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET))(this, outBinaryTypeEnum, outTypeInformation);
		}
	};
}
