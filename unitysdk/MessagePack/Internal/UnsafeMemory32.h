#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW10_OFFSET UNITYSDK_OFFSET(0x1566C0A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW11_OFFSET UNITYSDK_OFFSET(0x1566C1A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW12_OFFSET UNITYSDK_OFFSET(0x1566C2A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW13_OFFSET UNITYSDK_OFFSET(0x1566C3A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW14_OFFSET UNITYSDK_OFFSET(0x1566C4B0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW15_OFFSET UNITYSDK_OFFSET(0x1566C5C0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW16_OFFSET UNITYSDK_OFFSET(0x1566C6D0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW17_OFFSET UNITYSDK_OFFSET(0x1566C7E0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW18_OFFSET UNITYSDK_OFFSET(0x1566C8F0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW19_OFFSET UNITYSDK_OFFSET(0x1566CA00)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW1_OFFSET UNITYSDK_OFFSET(0x1566D870)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW20_OFFSET UNITYSDK_OFFSET(0x1566CB10)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW21_OFFSET UNITYSDK_OFFSET(0x1566CC20)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW22_OFFSET UNITYSDK_OFFSET(0x1566CD30)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW23_OFFSET UNITYSDK_OFFSET(0x1566CE40)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW24_OFFSET UNITYSDK_OFFSET(0x1566CF50)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW25_OFFSET UNITYSDK_OFFSET(0x1566D060)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW26_OFFSET UNITYSDK_OFFSET(0x1566D180)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW27_OFFSET UNITYSDK_OFFSET(0x1566D2A0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW28_OFFSET UNITYSDK_OFFSET(0x1566D3C0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW29_OFFSET UNITYSDK_OFFSET(0x1566D4E0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW2_OFFSET UNITYSDK_OFFSET(0x1566D930)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW30_OFFSET UNITYSDK_OFFSET(0x1566D610)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW31_OFFSET UNITYSDK_OFFSET(0x1566D740)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW3_OFFSET UNITYSDK_OFFSET(0x1566D9F0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW4_OFFSET UNITYSDK_OFFSET(0x1566BA80)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW5_OFFSET UNITYSDK_OFFSET(0x1566BBE0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW6_OFFSET UNITYSDK_OFFSET(0x1566BCD0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW7_OFFSET UNITYSDK_OFFSET(0x1566BDC0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW8_OFFSET UNITYSDK_OFFSET(0x1566BEB0)
#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW9_OFFSET UNITYSDK_OFFSET(0x1566BFA0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeMemory32_TypeDefinitionIndex = 9603;

	class UnsafeMemory32 : public ::System::Object
	{
	public:
		static ::System::Void WriteRaw4(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW4_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw5(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW5_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw6(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW6_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw7(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW7_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw8(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW8_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw9(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW9_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw10(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW10_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw11(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW11_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw12(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW12_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw13(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW13_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw14(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW14_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw15(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW15_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw16(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW16_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw17(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW17_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw18(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW18_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw19(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW19_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw20(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW20_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw21(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW21_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw22(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW22_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw23(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW23_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw24(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW24_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw25(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW25_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw26(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW26_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw27(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW27_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw28(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW28_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw29(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW29_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw30(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW30_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw31(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW31_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw1(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW1_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw2(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW2_OFFSET))(writer, src);
		}

		static ::System::Void WriteRaw3(::MessagePack::MessagePackWriter& writer, ::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY32_WRITERAW3_OFFSET))(writer, src);
		}
	};
}
