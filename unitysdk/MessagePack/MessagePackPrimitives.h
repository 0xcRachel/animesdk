#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/ExtensionHeader.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class Exception; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_ASSUMESTRUE_OFFSET UNITYSDK_OFFSET(0x15676DE0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_THROWUNREACHABLE_OFFSET UNITYSDK_OFFSET(0x1567A680)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x156761A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x15677160)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x15676310)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x156771B0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x15676E20)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x15676E60)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x156762D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBINHEADER_OFFSET UNITYSDK_OFFSET(0x15676EB0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBOOL_OFFSET UNITYSDK_OFFSET(0x15676470)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBYTE_OFFSET UNITYSDK_OFFSET(0x156771F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADCHAR_OFFSET UNITYSDK_OFFSET(0x156764E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_1_OFFSET UNITYSDK_OFFSET(0x156769D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_OFFSET UNITYSDK_OFFSET(0x15676710)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDOUBLE_OFFSET UNITYSDK_OFFSET(0x15678010)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADEXTENSIONHEADER_OFFSET UNITYSDK_OFFSET(0x15676810)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT16_OFFSET UNITYSDK_OFFSET(0x156778F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT32_OFFSET UNITYSDK_OFFSET(0x15677AD0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT64_OFFSET UNITYSDK_OFFSET(0x15677C90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x15676350)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADNIL_OFFSET UNITYSDK_OFFSET(0x15676160)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSBYTE_OFFSET UNITYSDK_OFFSET(0x15677710)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSINGLE_OFFSET UNITYSDK_OFFSET(0x15677E30)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x15676FC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT16_OFFSET UNITYSDK_OFFSET(0x15676530)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT32_OFFSET UNITYSDK_OFFSET(0x156773B0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT64_OFFSET UNITYSDK_OFFSET(0x15677570)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x15678210)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEBINHEADER_OFFSET UNITYSDK_OFFSET(0x15679EC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x1567A2C0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEFIXINTUNSAFE_OFFSET UNITYSDK_OFFSET(0x15679300)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT16_OFFSET UNITYSDK_OFFSET(0x15678A00)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT32_OFFSET UNITYSDK_OFFSET(0x15678DF0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT64_OFFSET UNITYSDK_OFFSET(0x15679250)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT8_OFFSET UNITYSDK_OFFSET(0x15678780)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEMAPHEADER_OFFSET UNITYSDK_OFFSET(0x156784C0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENEGATIVEFIXINTUNSAFE_OFFSET UNITYSDK_OFFSET(0x15678750)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENIL_OFFSET UNITYSDK_OFFSET(0x156781E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITESTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x1567A090)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT16_OFFSET UNITYSDK_OFFSET(0x156793A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT32_OFFSET UNITYSDK_OFFSET(0x15679430)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT64_OFFSET UNITYSDK_OFFSET(0x15679640)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT8_OFFSET UNITYSDK_OFFSET(0x15679330)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_10_OFFSET UNITYSDK_OFFSET(0x156799A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_11_OFFSET UNITYSDK_OFFSET(0x156799E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_12_OFFSET UNITYSDK_OFFSET(0x15679A80)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0x156787F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_2_OFFSET UNITYSDK_OFFSET(0x15678A90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_3_OFFSET UNITYSDK_OFFSET(0x15678EB0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_4_OFFSET UNITYSDK_OFFSET(0x156786E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_5_OFFSET UNITYSDK_OFFSET(0x15678950)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_6_OFFSET UNITYSDK_OFFSET(0x15678CD0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_7_OFFSET UNITYSDK_OFFSET(0x15678F40)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_8_OFFSET UNITYSDK_OFFSET(0x15679850)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_9_OFFSET UNITYSDK_OFFSET(0x15679920)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x15678650)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x15678400)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x156796C0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x156791A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x156791E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x156792D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x156783A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_35_0_OFFSET UNITYSDK_OFFSET(0x15678FA0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_43_0_OFFSET UNITYSDK_OFFSET(0x156794F0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_TypeDefinitionIndex = 9412;

	class MessagePackPrimitives : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadNil(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADNIL_OFFSET))(source, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadArrayHeader(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& count, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADARRAYHEADER_OFFSET))(source, count, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadMapHeader(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& count, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADMAPHEADER_OFFSET))(source, count, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadBool(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Boolean& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBOOL_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadChar(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Char& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Char&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADCHAR_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDateTime(::System::ReadOnlySpan_1<::System::Byte> source, ::System::DateTime& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::DateTime&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDateTime_1(::System::ReadOnlySpan_1<::System::Byte> source, ::MessagePack::ExtensionHeader header, ::System::DateTime& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::MessagePack::ExtensionHeader, ::System::DateTime&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_1_OFFSET))(source, header, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadExtensionHeader(::System::ReadOnlySpan_1<::System::Byte> source, ::MessagePack::ExtensionHeader& extensionHeader, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::MessagePack::ExtensionHeader&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADEXTENSIONHEADER_OFFSET))(source, extensionHeader, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadBinHeader(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& length, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBINHEADER_OFFSET))(source, length, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadStringHeader(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& length, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSTRINGHEADER_OFFSET))(source, length, tokenSize);
		}

		static ::System::Boolean TryReadBigEndian(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_OFFSET))(source, value);
		}

		static ::System::Boolean TryReadBigEndian_1(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int16& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_1_OFFSET))(source, value);
		}

		static ::System::Boolean TryReadBigEndian_2(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_2_OFFSET))(source, value);
		}

		static ::System::Boolean TryReadBigEndian_3(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_3_OFFSET))(source, value);
		}

		static ::System::Boolean TryReadBigEndian_4(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_4_OFFSET))(source, value);
		}

		static ::System::Boolean TryReadBigEndian_5(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_5_OFFSET))(source, value);
		}

		static ::System::Void AssumesTrue(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_ASSUMESTRUE_OFFSET))(condition);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadByte(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Byte& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Byte&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBYTE_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt16(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt16& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt16&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT16_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt32(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt32& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT32_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt64(::System::ReadOnlySpan_1<::System::Byte> source, ::System::UInt64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT64_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadSByte(::System::ReadOnlySpan_1<::System::Byte> source, ::System::SByte& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::SByte&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSBYTE_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt16(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int16& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int16&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT16_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt32(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int32& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT32_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt64(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Int64& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT64_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadSingle(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Single& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSINGLE_OFFSET))(source, value, tokenSize);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDouble(::System::ReadOnlySpan_1<::System::Byte> source, ::System::Double& value, ::System::Int32& tokenSize)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Double&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDOUBLE_OFFSET))(source, value, tokenSize);
		}

		static ::System::Boolean TryWriteNil(::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENIL_OFFSET))(destination, bytesWritten);
		}

		static ::System::Boolean TryWriteArrayHeader(::System::Span_1<::System::Byte> destination, ::System::UInt32 count, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEARRAYHEADER_OFFSET))(destination, count, bytesWritten);
		}

		static ::System::Boolean TryWriteMapHeader(::System::Span_1<::System::Byte> destination, ::System::UInt32 count, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEMAPHEADER_OFFSET))(destination, count, bytesWritten);
		}

		static ::System::Boolean TryWrite(::System::Span_1<::System::Byte> destination, ::System::SByte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_1(::System::Span_1<::System::Byte> destination, ::System::Int16 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_1_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_2(::System::Span_1<::System::Byte> destination, ::System::Int32 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_2_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_3(::System::Span_1<::System::Byte> destination, ::System::Int64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_3_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteInt8(::System::Span_1<::System::Byte> destination, ::System::SByte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT8_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteInt16(::System::Span_1<::System::Byte> destination, ::System::Int16 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT16_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteInt32(::System::Span_1<::System::Byte> destination, ::System::Int32 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT32_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteInt64(::System::Span_1<::System::Byte> destination, ::System::Int64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT64_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_4(::System::Span_1<::System::Byte> destination, ::System::Byte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_4_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_5(::System::Span_1<::System::Byte> destination, ::System::UInt16 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_5_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_6(::System::Span_1<::System::Byte> destination, ::System::UInt32 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_6_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_7(::System::Span_1<::System::Byte> destination, ::System::UInt64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_7_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteUInt8(::System::Span_1<::System::Byte> destination, ::System::Byte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT8_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteUInt16(::System::Span_1<::System::Byte> destination, ::System::UInt16 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT16_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteUInt32(::System::Span_1<::System::Byte> destination, ::System::UInt32 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT32_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteUInt64(::System::Span_1<::System::Byte> destination, ::System::UInt64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT64_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_8(::System::Span_1<::System::Byte> destination, ::System::Single value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_8_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_9(::System::Span_1<::System::Byte> destination, ::System::Double value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Double, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_9_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_10(::System::Span_1<::System::Byte> destination, ::System::Boolean value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_10_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_11(::System::Span_1<::System::Byte> destination, ::System::Char value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Char, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_11_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWrite_12(::System::Span_1<::System::Byte> destination, ::System::DateTime value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_12_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteBinHeader(::System::Span_1<::System::Byte> destination, ::System::UInt32 length, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEBINHEADER_OFFSET))(destination, length, bytesWritten);
		}

		static ::System::Boolean TryWriteStringHeader(::System::Span_1<::System::Byte> destination, ::System::UInt32 byteCount, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITESTRINGHEADER_OFFSET))(destination, byteCount, bytesWritten);
		}

		static ::System::Boolean TryWriteExtensionFormatHeader(::System::Span_1<::System::Byte> destination, ::MessagePack::ExtensionHeader extensionHeader, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::MessagePack::ExtensionHeader, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEEXTENSIONFORMATHEADER_OFFSET))(destination, extensionHeader, bytesWritten);
		}

		static ::System::Boolean TryWriteFixIntUnsafe(::System::Span_1<::System::Byte> destination, ::System::Byte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEFIXINTUNSAFE_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean TryWriteNegativeFixIntUnsafe(::System::Span_1<::System::Byte> destination, ::System::SByte value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENEGATIVEFIXINTUNSAFE_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Exception* ThrowUnreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_THROWUNREACHABLE_OFFSET))();
		}

		static ::System::Void WriteBigEndian(::System::Span_1<::System::Byte> destination, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_OFFSET))(destination, value);
		}

		static ::System::Void WriteBigEndian_1(::System::Span_1<::System::Byte> destination, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_1_OFFSET))(destination, value);
		}

		static ::System::Void WriteBigEndian_2(::System::Span_1<::System::Byte> destination, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_2_OFFSET))(destination, value);
		}

		static ::System::Void WriteBigEndian_3(::System::Span_1<::System::Byte> destination, ::System::Int16 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_3_OFFSET))(destination, value);
		}

		static ::System::Void WriteBigEndian_4(::System::Span_1<::System::Byte> destination, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_4_OFFSET))(destination, value);
		}

		static ::System::Void WriteBigEndian_5(::System::Span_1<::System::Byte> destination, ::System::Int64 value)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_5_OFFSET))(destination, value);
		}

		static ::System::Boolean _TryWrite_g__SlowPath_35_0(::System::Span_1<::System::Byte> destination, ::System::Int64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_35_0_OFFSET))(destination, value, bytesWritten);
		}

		static ::System::Boolean _TryWrite_g__SlowPath_43_0(::System::Span_1<::System::Byte> destination, ::System::UInt64 value, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_43_0_OFFSET))(destination, value, bytesWritten);
		}
	};
}
