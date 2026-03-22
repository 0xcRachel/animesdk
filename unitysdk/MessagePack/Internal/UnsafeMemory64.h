#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW10_OFFSET UNITYSDK_OFFSET(0x1566DCA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW11_OFFSET UNITYSDK_OFFSET(0x1566DDA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW12_OFFSET UNITYSDK_OFFSET(0x1566DEA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW13_OFFSET UNITYSDK_OFFSET(0x1566DFA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW14_OFFSET UNITYSDK_OFFSET(0x1566E0A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW15_OFFSET UNITYSDK_OFFSET(0x1566E1A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW16_OFFSET UNITYSDK_OFFSET(0x1566E2A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW17_OFFSET UNITYSDK_OFFSET(0x1566E3A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW18_OFFSET UNITYSDK_OFFSET(0x1566E4A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW19_OFFSET UNITYSDK_OFFSET(0x1566E5A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW1_OFFSET UNITYSDK_OFFSET(0x1566F310)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW20_OFFSET UNITYSDK_OFFSET(0x1566E6A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW21_OFFSET UNITYSDK_OFFSET(0x1566E7A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW22_OFFSET UNITYSDK_OFFSET(0x1566E8A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW23_OFFSET UNITYSDK_OFFSET(0x1566E9A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW24_OFFSET UNITYSDK_OFFSET(0x1566EAA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW25_OFFSET UNITYSDK_OFFSET(0x1566EBA0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW26_OFFSET UNITYSDK_OFFSET(0x1566ECB0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW27_OFFSET UNITYSDK_OFFSET(0x1566EDC0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW28_OFFSET UNITYSDK_OFFSET(0x1566EED0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW29_OFFSET UNITYSDK_OFFSET(0x1566EFE0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW2_OFFSET UNITYSDK_OFFSET(0x1566F3D0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW30_OFFSET UNITYSDK_OFFSET(0x1566F0F0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW31_OFFSET UNITYSDK_OFFSET(0x1566F200)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW3_OFFSET UNITYSDK_OFFSET(0x1566F490)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW4_OFFSET UNITYSDK_OFFSET(0x1566F580)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW5_OFFSET UNITYSDK_OFFSET(0x1566F640)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW6_OFFSET UNITYSDK_OFFSET(0x1566F730)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW7_OFFSET UNITYSDK_OFFSET(0x1566F820)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW8_OFFSET UNITYSDK_OFFSET(0x1566DAE0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW9_OFFSET UNITYSDK_OFFSET(0x1566DBA0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeMemory64_TypeDefinitionIndex = 9604;

	class UnsafeMemory64 : public ::System::Object
	{
	public:
		static ::System::Void WriteRaw8(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW8_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw9(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW9_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw10(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW10_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw11(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW11_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw12(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW12_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw13(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW13_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw14(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW14_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw15(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW15_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw16(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW16_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw17(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW17_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw18(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW18_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw19(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW19_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw20(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW20_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw21(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW21_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw22(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW22_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw23(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW23_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw24(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW24_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw25(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW25_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw26(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW26_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw27(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW27_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw28(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW28_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw29(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW29_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw30(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW30_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw31(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW31_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw1(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW1_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw2(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW2_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw3(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW3_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw4(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW4_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw5(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW5_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw6(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW6_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw7(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY64_WRITERAW7_OFFSET))(writer, src);
		}
	};
}
