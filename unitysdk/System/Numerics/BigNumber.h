#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Numerics/BigNumber_BigNumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1A48DAD0)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A48E130)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1A483C20)
#define SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1A48DC30)
#define SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1A48DDD0)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1A47F2B0)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1A47EDC0)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1A48E040)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1A47F400)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1A47F170)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x1A48D9D0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigNumber_TypeDefinitionIndex = 4860;

	class BigNumber : public ::System::Object
	{
	public:
		static ::System::Boolean TryValidateParseStyleInteger(::System::Globalization::NumberStyles style, ::System::ArgumentException*& e)
		{
			return ((::System::Boolean(*)(::System::Globalization::NumberStyles, ::System::ArgumentException*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET))(style, e);
		}

		static ::System::Boolean TryParseBigInteger(::System::String* value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::Numerics::BigInteger& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET))(value, style, info, result);
		}

		static ::System::Boolean TryParseBigInteger_1(::System::ReadOnlySpan_1<::System::Char> value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::Numerics::BigInteger& result)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET))(value, style, info, result);
		}

		static ::System::Numerics::BigInteger ParseBigInteger(::System::String* value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET))(value, style, info);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsReadOnlySpan(::System::String* s)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET))(s);
		}

		static ::System::Numerics::BigInteger ParseBigInteger_1(::System::ReadOnlySpan_1<::System::Char> value, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Numerics::BigInteger(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET))(value, style, info);
		}

		static ::System::Boolean HexNumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer& number, ::System::Numerics::BigInteger& value)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer&, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET))(number, value);
		}

		static ::System::Boolean NumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer& number, ::System::Numerics::BigInteger& value)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer&, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET))(number, value);
		}

		static ::System::Char ParseFormatSpecifier(::System::String* format, ::System::Int32& digits)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET))(format, digits);
		}

		static ::System::String* FormatBigIntegerToHexString(::System::Numerics::BigInteger value, ::System::Char format, ::System::Int32 digits, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET))(value, format, digits, info);
		}

		static ::System::String* FormatBigInteger(::System::Numerics::BigInteger value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET))(value, format, info);
		}
	};
}
