#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET UNITYSDK_OFFSET(0x15674840)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET UNITYSDK_OFFSET(0x156748C0)
#define MESSAGEPACK_LZ4_LZ4CODEC_CHECKARGUMENTS_OFFSET UNITYSDK_OFFSET(0x15671CE0)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET UNITYSDK_OFFSET(0x15673FA0)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x15671ED0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET UNITYSDK_OFFSET(0x15672230)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET UNITYSDK_OFFSET(0x156728F0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET UNITYSDK_OFFSET(0x156731A0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET UNITYSDK_OFFSET(0x15673870)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET UNITYSDK_OFFSET(0x156740E0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET UNITYSDK_OFFSET(0x15674450)
#define MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x15671C50)
#define MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15674960)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4Codec_TypeDefinitionIndex = 9568;

	class LZ4Codec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x26730);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x26738);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x26740);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x26748);
		}
		// static const ::System::Int32 MEMORY_USAGE = 0xC; // 0x0
		// static const ::System::Int32 NOTCOMPRESSIBLE_DETECTIONLEVEL = 0x6; // 0x0
		// static const ::System::Int32 MINMATCH = 0x4; // 0x0
		// static const ::System::Int32 SKIPSTRENGTH = 0x6; // 0x0
		// static const ::System::Int32 COPYLENGTH = 0x8; // 0x0
		// static const ::System::Int32 LASTLITERALS = 0x5; // 0x0
		// static const ::System::Int32 MFLIMIT = 0xC; // 0x0
		// static const ::System::Int32 MINLENGTH = 0xD; // 0x0
		// static const ::System::Int32 MAXD_LOG = 0x10; // 0x0
		// static const ::System::Int32 MAXD = 0x10000; // 0x0
		// static const ::System::Int32 MAXD_MASK = 0xFFFF; // 0x0
		// static const ::System::Int32 MAX_DISTANCE = 0xFFFF; // 0x0
		// static const ::System::Int32 ML_BITS = 0x4; // 0x0
		// static const ::System::Int32 ML_MASK = 0xF; // 0x0
		// static const ::System::Int32 RUN_BITS = 0x4; // 0x0
		// static const ::System::Int32 RUN_MASK = 0xF; // 0x0
		// static const ::System::Int32 STEPSIZE_64 = 0x8; // 0x0
		// static const ::System::Int32 STEPSIZE_32 = 0x4; // 0x0
		// static const ::System::Int32 LZ4_64KLIMIT = 0x1000B; // 0x0
		// static const ::System::Int32 HASH_LOG = 0xA; // 0x0
		// static const ::System::Int32 HASH_TABLESIZE = 0x400; // 0x0
		// static const ::System::Int32 HASH_ADJUST = 0x16; // 0x0
		// static const ::System::Int32 HASH64K_LOG = 0xB; // 0x0
		// static const ::System::Int32 HASH64K_TABLESIZE = 0x800; // 0x0
		// static const ::System::Int32 HASH64K_ADJUST = 0x15; // 0x0
		// static const ::System::Int32 HASHHC_LOG = 0xF; // 0x0
		// static const ::System::Int32 HASHHC_TABLESIZE = 0x8000; // 0x0
		// static const ::System::Int32 HASHHC_ADJUST = 0x11; // 0x0
		// static const ::System::Int32 MAX_NB_ATTEMPTS = 0x100; // 0x0
		// static const ::System::Int32 OPTIMAL_ML = 0x12; // 0x0
		// static const ::System::Int32 BLOCK_COPY_LIMIT = 0x10; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET))();
		}

		static ::System::Int32 MaximumOutputLength(::System::Int32 inputLength)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET))(inputLength);
		}

		static ::System::Void CheckArguments(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_CHECKARGUMENTS_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Encode(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET))(input, output);
		}

		static ::System::Int32 Decode(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET))(input, output);
		}

		static ::System::Int32 LZ4_compressCtx_32(::System::UInt32* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_32(::System::UInt16* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_32(::System::Byte* src, ::System::Byte* dst, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET))(src, dst, dst_len);
		}

		static ::System::Void BlockCopy32(::System::Byte* src, ::System::Byte* dst, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET))(src, dst, len);
		}

		static ::System::Int32 LZ4_compressCtx_64(::System::UInt32* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_64(::System::UInt16* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_64(::System::Byte* src, ::System::Byte* dst, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET))(src, dst, dst_len);
		}

		static ::System::Void BlockCopy64(::System::Byte* src, ::System::Byte* dst, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET))(src, dst, len);
		}
	};
}
