#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueReaderFunc; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueWriterAction; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_FIELDCODEC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EAB090)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAB0C0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_0_OFFSET UNITYSDK_OFFSET(0x17EAB110)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_1_OFFSET UNITYSDK_OFFSET(0x17EAB140)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_0_OFFSET UNITYSDK_OFFSET(0x17EAB280)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_1_OFFSET UNITYSDK_OFFSET(0x17EAB2B0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_0_OFFSET UNITYSDK_OFFSET(0x17EAB240)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_1_OFFSET UNITYSDK_OFFSET(0x17EAB260)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET UNITYSDK_OFFSET(0x17EAB160)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET UNITYSDK_OFFSET(0x17EAB180)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET UNITYSDK_OFFSET(0x17EAB0D0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET UNITYSDK_OFFSET(0x17EAB0F0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_0_OFFSET UNITYSDK_OFFSET(0x17EAB1C0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_1_OFFSET UNITYSDK_OFFSET(0x17EAB1E0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_0_OFFSET UNITYSDK_OFFSET(0x17EAB200)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_1_OFFSET UNITYSDK_OFFSET(0x17EAB220)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c_TypeDefinitionIndex = 6177;

	class FieldCodec___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Double>** StaticGet___9__14_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4D90);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Single>** StaticGet___9__13_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4D98);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Boolean>** StaticGet___9__2_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DA0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Single>** StaticGet___9__13_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DA8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt32>** StaticGet___9__7_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DB0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Double>** StaticGet___9__14_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DB8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt64>** StaticGet___9__12_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DC0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt32>** StaticGet___9__7_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DC8);
		}
		static ::Google::Protobuf::FieldCodec___c** StaticGet___9()
		{
			return (::Google::Protobuf::FieldCodec___c**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DD0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Int32>** StaticGet___9__3_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DD8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt64>** StaticGet___9__12_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DE0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::String*>** StaticGet___9__0_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DE8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::String*>** StaticGet___9__0_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DF0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Boolean>** StaticGet___9__2_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4DF8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Int32>** StaticGet___9__3_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x4E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__CTOR_OFFSET))(this);
		}

		::System::String* _ForString_b__0_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET))(this, input);
		}

		::System::Void _ForString_b__0_1(::Google::Protobuf::CodedOutputStream* output, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET))(this, output, value);
		}

		::System::Boolean _ForBool_b__2_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_0_OFFSET))(this, input);
		}

		::System::Void _ForBool_b__2_1(::Google::Protobuf::CodedOutputStream* output, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_1_OFFSET))(this, output, value);
		}

		::System::Int32 _ForInt32_b__3_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET))(this, input);
		}

		::System::Void _ForInt32_b__3_1(::Google::Protobuf::CodedOutputStream* output, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET))(this, output, value);
		}

		::System::UInt32 _ForUInt32_b__7_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::UInt32(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_0_OFFSET))(this, input);
		}

		::System::Void _ForUInt32_b__7_1(::Google::Protobuf::CodedOutputStream* output, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_1_OFFSET))(this, output, value);
		}

		::System::UInt64 _ForUInt64_b__12_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::UInt64(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_0_OFFSET))(this, input);
		}

		::System::Void _ForUInt64_b__12_1(::Google::Protobuf::CodedOutputStream* output, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_1_OFFSET))(this, output, value);
		}

		::System::Single _ForFloat_b__13_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Single(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_0_OFFSET))(this, input);
		}

		::System::Void _ForFloat_b__13_1(::Google::Protobuf::CodedOutputStream* output, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_1_OFFSET))(this, output, value);
		}

		::System::Double _ForDouble_b__14_0(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Double(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_0_OFFSET))(this, input);
		}

		::System::Void _ForDouble_b__14_1(::Google::Protobuf::CodedOutputStream* output, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_1_OFFSET))(this, output, value);
		}
	};
}
