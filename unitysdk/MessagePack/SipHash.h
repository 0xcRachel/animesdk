#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define MESSAGEPACK_SIPHASH_COMPUTE_OFFSET UNITYSDK_OFFSET(0x15684880)
#define MESSAGEPACK_SIPHASH_GETKEY_OFFSET UNITYSDK_OFFSET(0x156A7320)
#define MESSAGEPACK_SIPHASH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156A7180)
#define MESSAGEPACK_SIPHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x15685340)

namespace MessagePack
{
	inline static constexpr unsigned int SipHash_TypeDefinitionIndex = 9496;

	class SipHash : public ::System::Object
	{
	public:
		::System::UInt64 initialState1; // 0x10
		::System::UInt64 initialState0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::Byte> key)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH__CTOR_1_OFFSET))(this, key);
		}

		::System::Void GetKey(::System::Span_1<::System::Byte> key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH_GETKEY_OFFSET))(this, key);
		}

		::System::Int64 Compute(::System::ReadOnlySpan_1<::System::Byte> data)
		{
			return ((::System::Int64(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SIPHASH_COMPUTE_OFFSET))(this, data);
		}
	};
}
