#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x164CD840)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x164CDA40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x164CDCB0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x164CDEE0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x164CE160)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x164CE3A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x164CE5A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x164CE8F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x164CD600)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x164CD660)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x164CD8A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x164CDAA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x164CDD10)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x164CDF40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x164CE1C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x164CE400)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x164CE740)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x164CD3F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET UNITYSDK_OFFSET(0x164CEAB0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET UNITYSDK_OFFSET(0x164CEAD0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET UNITYSDK_OFFSET(0x164CEB10)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET UNITYSDK_OFFSET(0x164CEB80)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET UNITYSDK_OFFSET(0x164CEBD0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET UNITYSDK_OFFSET(0x164CEC70)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET UNITYSDK_OFFSET(0x164CECE0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET UNITYSDK_OFFSET(0x164CEA90)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x1649A510)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x164A7810)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1649E850)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x16498990)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x164A8420)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1649ED60)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x164A8930)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x1649F270)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x164A8E40)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x164A7CE0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x164972A0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefSerializeHelper_TypeDefinitionIndex = 9358;

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
