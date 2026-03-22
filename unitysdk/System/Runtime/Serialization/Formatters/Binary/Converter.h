#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x15D1E3B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x15D1ED40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET UNITYSDK_OFFSET(0x15D1D2D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET UNITYSDK_OFFSET(0x15D1EA70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET UNITYSDK_OFFSET(0x15D1DB40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET UNITYSDK_OFFSET(0x15D1E6F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET UNITYSDK_OFFSET(0x15D1E420)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x15D19680)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x15D1D290)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x15D1A5D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET UNITYSDK_OFFSET(0x15D19E50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET UNITYSDK_OFFSET(0x15D1A3B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET UNITYSDK_OFFSET(0x15D1D190)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET UNITYSDK_OFFSET(0x15D1E970)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x15D1A4C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET UNITYSDK_OFFSET(0x15D1D2B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1EDC0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int Converter_TypeDefinitionIndex = 1150;

	class Converter : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_typeofInt16()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9350);
		}
		static ::System::Type** StaticGet_typeofByteArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9358);
		}
		static ::System::Type** StaticGet_typeofChar()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9360);
		}
		static ::System::Type** StaticGet_typeofSystemVoid()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9368);
		}
		static ::System::Type** StaticGet_typeofUInt64()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9370);
		}
		static ::System::Type** StaticGet_typeofCharArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9378);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_typeA()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9380);
		}
		static ::System::Type** StaticGet_typeofUInt16Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9388);
		}
		static ::System::Type** StaticGet_typeofDouble()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9390);
		}
		static ::System::Type** StaticGet_typeofString()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9398);
		}
		static ::System::Type** StaticGet_typeofStringArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93A0);
		}
		static ::System::Type** StaticGet_typeofInt64Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93A8);
		}
		static ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>** StaticGet_codeA()
		{
			return (::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93B0);
		}
		static ::System::Type** StaticGet_typeofUInt16()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93B8);
		}
		static ::System::Type** StaticGet_typeofDateTime()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93C0);
		}
		static ::System::Type** StaticGet_typeofUInt32()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93C8);
		}
		static ::System::Type** StaticGet_typeofObjectArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93D0);
		}
		static ::System::Type** StaticGet_typeofDecimalArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93D8);
		}
		static ::System::Type** StaticGet_typeofInt16Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93E0);
		}
		static ::System::Type** StaticGet_typeofUInt32Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_valueA()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93F0);
		}
		static ::System::Type** StaticGet_typeofBooleanArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x93F8);
		}
		static ::System::String** StaticGet_urtAssemblyString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9400);
		}
		static ::System::Type** StaticGet_typeofTimeSpan()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9408);
		}
		static ::System::Type** StaticGet_typeofSByteArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9410);
		}
		static ::System::Type** StaticGet_typeofInt32Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9418);
		}
		static ::System::Type** StaticGet_typeofUInt64Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9420);
		}
		static ::System::Type** StaticGet_typeofDecimal()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9428);
		}
		static ::System::Type** StaticGet_typeofInt32()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9430);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_arrayTypeA()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9438);
		}
		static ::System::Type** StaticGet_typeofDoubleArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9440);
		}
		static ::System::Type** StaticGet_typeofObject()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9448);
		}
		static ::System::Type** StaticGet_typeofSingleArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9450);
		}
		static ::System::Type** StaticGet_typeofDateTimeArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9458);
		}
		static ::System::Type** StaticGet_typeofSingle()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9460);
		}
		static ::System::Type** StaticGet_typeofSByte()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9468);
		}
		static ::System::Type** StaticGet_typeofTimeSpanArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9470);
		}
		static ::System::Type** StaticGet_typeofInt64()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9478);
		}
		static ::System::Type** StaticGet_typeofBoolean()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9480);
		}
		static ::Il2CppArray<::System::TypeCode>** StaticGet_typeCodeA()
		{
			return (::Il2CppArray<::System::TypeCode>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9488);
		}
		static ::System::Type** StaticGet_typeofISerializable()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9490);
		}
		static ::System::Type** StaticGet_typeofConverter()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x9498);
		}
		static ::System::Type** StaticGet_typeofTypeArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x94A0);
		}
		static ::System::Reflection::Assembly** StaticGet_urtAssembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x94A8);
		}
		static ::System::Type** StaticGet_typeofByte()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x94B0);
		}
		static ::System::Type** StaticGet_typeofMarshalByRefObject()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x94B8);
		}
		static ::System::Int32* StaticGet_primitiveTypeEnumLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x2D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET))(type);
		}

		static ::System::Boolean IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET))(code);
		}

		static ::System::Int32 TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Int32(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET))(code);
		}

		static ::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET))(code);
		}

		static ::System::Void InitTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET))();
		}

		static ::System::Void InitArrayTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET))();
		}

		static ::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET))(code);
		}

		static ::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Int32 length)
		{
			return ((::System::Array*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET))(code, length);
		}

		static ::System::Boolean IsPrimitiveArray(::System::Type* type, ::System::Object*& typeInformation)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET))(type, typeInformation);
		}

		static ::System::Void InitValueA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET))();
		}

		static ::System::String* ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::String*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET))(code);
		}

		static ::System::Void InitTypeCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET))();
		}

		static ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::TypeCode(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET))(code);
		}

		static ::System::Void InitCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode typeCode)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::TypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET))(typeCode);
		}

		static ::System::Object* FromString(::System::String* value, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET))(value, code);
		}
	};
}
