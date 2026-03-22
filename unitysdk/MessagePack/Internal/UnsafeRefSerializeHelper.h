#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x156700B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x15670460)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x15670830)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15670AC0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15670DA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15671180)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15671490)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x156717B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1566FD10)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1566FEF0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x156702E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x15670680)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15670910)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15670BA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15670FC0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15671310)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x15671630)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1566FB30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET UNITYSDK_OFFSET(0x15671950)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET UNITYSDK_OFFSET(0x15671970)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET UNITYSDK_OFFSET(0x156719B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET UNITYSDK_OFFSET(0x15671A20)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET UNITYSDK_OFFSET(0x15671A70)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET UNITYSDK_OFFSET(0x15671B10)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET UNITYSDK_OFFSET(0x15671B80)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET UNITYSDK_OFFSET(0x15671930)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x15671610)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1566FAB0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1566FE70)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x156701E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15670260)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15670600)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15670890)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15670B20)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x15670F40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x156712F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1566F990)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefSerializeHelper_TypeDefinitionIndex = 9607;

	class UnsafeRefSerializeHelper : public ::System::Object
	{
	public:
		static ::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Boolean& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_1(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_2(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_1(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_1(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_3(::MessagePack::MessagePackWriter& writer, ::System::Char& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Char&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_2(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_2(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_3(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_3(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_7(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_8(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_9(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_7(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_7(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_10(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_8(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_8(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::UIntPtr ReverseWriteUnknown(::System::Byte& destination, ::System::Byte value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_1(::System::Byte& destination, ::System::SByte value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_2(::System::Byte& destination, ::System::UInt16 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_3(::System::Byte& destination, ::System::Int16 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_4(::System::Byte& destination, ::System::UInt32 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_5(::System::Byte& destination, ::System::Int32 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_6(::System::Byte& destination, ::System::UInt64 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_7(::System::Byte& destination, ::System::Int64 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET))(destination, value);
		}
	};
}
