#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BigIntegerLibrary/Sign.h"
#include "unitysdk/System/Object.h"

namespace BigIntegerLibrary { class Base10BigInteger_DigitContainer; }
namespace System { class String; }

#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x185016E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET UNITYSDK_OFFSET(0x18501740)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x18502070)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18500E20)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18500C30)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18500E80)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x185015C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET UNITYSDK_OFFSET(0x185011D0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET UNITYSDK_OFFSET(0x18502830)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18502AE0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x185010C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18503020)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18502AA0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x18501F60)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18502FD0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18501190)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x185023C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18503080)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x18502470)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET UNITYSDK_OFFSET(0x18500750)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET UNITYSDK_OFFSET(0x18501670)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x185024D0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18500F30)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185030E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18500950)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18500A80)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18500760)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Base10BigInteger_TypeDefinitionIndex = 6011;

	class Base10BigInteger : public ::System::Object
	{
	public:
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_Zero()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_One()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0xA558);
		}
		::BigIntegerLibrary::Base10BigInteger_DigitContainer* digits; // 0x10
		::BigIntegerLibrary::Sign sign; // 0x18
		::System::Int32 size; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET))(this, n);
		}

		::System::Void _ctor_2(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET))(this, n);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Void set_NumberSign(::BigIntegerLibrary::Sign value)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Sign))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET))(this, value);
		}

		::System::Boolean Equals(::BigIntegerLibrary::Base10BigInteger* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Opposite(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET))(n);
		}

		static ::System::Boolean Greater(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET))(a, b);
		}

		static ::System::Boolean GreaterOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean SmallerOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Abs(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET))(n);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Addition(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiplication(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Implicit(::System::Int64 n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET))(n);
		}

		static ::System::Boolean op_Equality(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_UnaryNegation(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET))(n);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Addition(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Multiply(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Add(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Subtract(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiply(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET))(a, b);
		}
	};
}
