#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryArray; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssembly; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryMethodCall; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryMethodReturn; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObject; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectString; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMap; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMapTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveUnTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberReference; }
namespace System::Runtime::Serialization::Formatters::Binary { class NameInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectNull; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectWriter; }
namespace System::Runtime::Serialization::Formatters::Binary { class WriteObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_INTERNALWRITEITEMNULL_OFFSET UNITYSDK_OFFSET(0x17626ED0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEARRAYASBYTES_OFFSET UNITYSDK_OFFSET(0x176274E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x176288C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBEGIN_OFFSET UNITYSDK_OFFSET(0x176260E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x17626120)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_1_OFFSET UNITYSDK_OFFSET(0x176261B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x17626180)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x17626150)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x17626210)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHAR_OFFSET UNITYSDK_OFFSET(0x176261E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDATETIME_OFFSET UNITYSDK_OFFSET(0x17626430)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDECIMAL_OFFSET UNITYSDK_OFFSET(0x17626240)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDELAYEDNULLITEM_OFFSET UNITYSDK_OFFSET(0x17628790)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x17626310)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x176260F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x17626340)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x17626370)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x176263A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMEND_OFFSET UNITYSDK_OFFSET(0x176287A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMOBJECTREF_OFFSET UNITYSDK_OFFSET(0x17628820)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEM_OFFSET UNITYSDK_OFFSET(0x17628650)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEJAGGEDARRAY_OFFSET UNITYSDK_OFFSET(0x17627B90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERNESTED_OFFSET UNITYSDK_OFFSET(0x17628500)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBEROBJECTREF_OFFSET UNITYSDK_OFFSET(0x176283B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERSTRING_OFFSET UNITYSDK_OFFSET(0x17628590)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBER_OFFSET UNITYSDK_OFFSET(0x176280F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODCALL_OFFSET UNITYSDK_OFFSET(0x176265F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODRETURN_OFFSET UNITYSDK_OFFSET(0x17626650)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLITEM_OFFSET UNITYSDK_OFFSET(0x17628700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLMEMBER_OFFSET UNITYSDK_OFFSET(0x176282A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x17628050)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x176264F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTSTRING_OFFSET UNITYSDK_OFFSET(0x17626F50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x176266B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITERECTANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x17627E10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESBYTE_OFFSET UNITYSDK_OFFSET(0x176263D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADEREND_OFFSET UNITYSDK_OFFSET(0x17626500)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADER_OFFSET UNITYSDK_OFFSET(0x17626580)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLEARRAY_OFFSET UNITYSDK_OFFSET(0x176270B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLE_OFFSET UNITYSDK_OFFSET(0x176262E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x176262B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITETIMESPAN_OFFSET UNITYSDK_OFFSET(0x17626400)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x17626460)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x17626490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x176264C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x17628A60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x17626010)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int __BinaryWriter_TypeDefinitionIndex = 1172;

	class __BinaryWriter : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped; // 0x10
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray; // 0x58
		::System::Collections::Hashtable* objectMapTable; // 0x60
		::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall; // 0x68
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn; // 0x78
		::System::IO::BinaryWriter* dataWriter; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter; // 0x88
		::System::IO::Stream* sout; // 0x90
		::System::Int32 nullCount; // 0x98
		::System::Int32 m_nestedObjectCount; // 0x9C
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle; // 0xA0
		::System::Int32 chunkSize; // 0xA4

		::System::Void _ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER__CTOR_OFFSET))(this, sout, objectWriter, formatterTypeStyle);
		}

		::System::Void WriteBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBEGIN_OFFSET))(this);
		}

		::System::Void WriteEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEEND_OFFSET))(this);
		}

		::System::Void WriteBoolean(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBOOLEAN_OFFSET))(this, value);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void WriteBytes(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_OFFSET))(this, value);
		}

		::System::Void WriteBytes_1(::Il2CppArray<::System::Byte>* byteA, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEBYTES_1_OFFSET))(this, byteA, offset, size);
		}

		::System::Void WriteChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHAR_OFFSET))(this, value);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITECHARS_OFFSET))(this, value);
		}

		::System::Void WriteDecimal(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDECIMAL_OFFSET))(this, value);
		}

		::System::Void WriteSingle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLE_OFFSET))(this, value);
		}

		::System::Void WriteDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDOUBLE_OFFSET))(this, value);
		}

		::System::Void WriteInt16(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT16_OFFSET))(this, value);
		}

		::System::Void WriteInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT32_OFFSET))(this, value);
		}

		::System::Void WriteInt64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEINT64_OFFSET))(this, value);
		}

		::System::Void WriteSByte(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESBYTE_OFFSET))(this, value);
		}

		::System::Void WriteString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESTRING_OFFSET))(this, value);
		}

		::System::Void WriteTimeSpan(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITETIMESPAN_OFFSET))(this, value);
		}

		::System::Void WriteDateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDATETIME_OFFSET))(this, value);
		}

		::System::Void WriteUInt16(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT16_OFFSET))(this, value);
		}

		::System::Void WriteUInt32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT32_OFFSET))(this, value);
		}

		::System::Void WriteUInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEUINT64_OFFSET))(this, value);
		}

		::System::Void WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTEND_OFFSET))(this, memberNameInfo, typeNameInfo);
		}

		::System::Void WriteSerializationHeaderEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADEREND_OFFSET))(this);
		}

		::System::Void WriteSerializationHeader(::System::Int32 topId, ::System::Int32 headerId, ::System::Int32 minorVersion, ::System::Int32 majorVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESERIALIZATIONHEADER_OFFSET))(this, topId, headerId, minorVersion, majorVersion);
		}

		::System::Void WriteMethodCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODCALL_OFFSET))(this);
		}

		::System::Void WriteMethodReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMETHODRETURN_OFFSET))(this);
		}

		::System::Void WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Int32 numMembers, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECT_OFFSET))(this, nameInfo, typeNameInfo, numMembers, memberNames, memberTypes, memberObjectInfos);
		}

		::System::Void WriteObjectString(::System::Int32 objectId, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTSTRING_OFFSET))(this, objectId, value);
		}

		::System::Void WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::System::Int32 length, ::System::Int32 lowerBound, ::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITESINGLEARRAY_OFFSET))(this, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound, array);
		}

		::System::Void WriteArrayAsBytes(::System::Array* array, ::System::Int32 typeLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEARRAYASBYTES_OFFSET))(this, array, typeLength);
		}

		::System::Void WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::System::Int32 length, ::System::Int32 lowerBound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEJAGGEDARRAY_OFFSET))(this, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound);
		}

		::System::Void WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::System::Int32 rank, ::Il2CppArray<::System::Int32>* lengthA, ::Il2CppArray<::System::Int32>* lowerBoundA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITERECTANGLEARRAY_OFFSET))(this, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, rank, lengthA, lowerBoundA);
		}

		::System::Void WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::System::Int32 length, ::System::Int32 lowerBound, ::Il2CppArray<::System::Byte>* byteA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEOBJECTBYTEARRAY_OFFSET))(this, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound, byteA);
		}

		::System::Void WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBER_OFFSET))(this, memberNameInfo, typeNameInfo, value);
		}

		::System::Void WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLMEMBER_OFFSET))(this, memberNameInfo, typeNameInfo);
		}

		::System::Void WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Int32 idRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBEROBJECTREF_OFFSET))(this, memberNameInfo, idRef);
		}

		::System::Void WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERNESTED_OFFSET))(this, memberNameInfo);
		}

		::System::Void WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEMEMBERSTRING_OFFSET))(this, memberNameInfo, typeNameInfo, value);
		}

		::System::Void WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEM_OFFSET))(this, itemNameInfo, typeNameInfo, value);
		}

		::System::Void WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITENULLITEM_OFFSET))(this, itemNameInfo, typeNameInfo);
		}

		::System::Void WriteDelayedNullItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEDELAYEDNULLITEM_OFFSET))(this);
		}

		::System::Void WriteItemEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMEND_OFFSET))(this);
		}

		::System::Void InternalWriteItemNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_INTERNALWRITEITEMNULL_OFFSET))(this);
		}

		::System::Void WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Int32 idRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEITEMOBJECTREF_OFFSET))(this, nameInfo, idRef);
		}

		::System::Void WriteAssembly(::System::Type* type, ::System::String* assemblyString, ::System::Int32 assemId, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEASSEMBLY_OFFSET))(this, type, assemblyString, assemId, isNew);
		}

		::System::Void WriteValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYWRITER_WRITEVALUE_OFFSET))(this, code, value);
		}
	};
}
