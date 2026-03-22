#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202E990)
#define SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x202E8B0)
#define SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202EA20)
#define SYSTEM_NUMERICS_COMPLEX_GET_IMAGINARY_OFFSET UNITYSDK_OFFSET(0x15AF630)
#define SYSTEM_NUMERICS_COMPLEX_GET_REAL_OFFSET UNITYSDK_OFFSET(0x14E73B0)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x202EB80)
#define SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202EA60)
#define SYSTEM_NUMERICS_COMPLEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D36C40)
#define SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x202E8A0)

namespace System::Numerics
{
	inline static constexpr unsigned int Complex_TypeDefinitionIndex = 4755;

	struct alignas(8) Complex
	{
		static ::System::Double* StaticGet_s_asinOverflowThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xB0);
		}
		static ::System::Double* StaticGet_s_log2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xB8);
		}
		static ::System::Double* StaticGet_s_sqrtRescaleThreshold()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xC0);
		}
		static ::System::Numerics::Complex* StaticGet_One()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xC8);
		}
		static ::System::Numerics::Complex* StaticGet_ImaginaryOne()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xD8);
		}
		static ::System::Numerics::Complex* StaticGet_Zero()
		{
			return (::System::Numerics::Complex*)Il2CppClass::FromTypeDefinitionIndex(Complex_TypeDefinitionIndex)->GetStaticField(0xE8);
		}
		::System::Double m_real; // 0x10
		::System::Double m_imaginary; // 0x18

		::System::Void _ctor(::System::Double real, ::System::Double imaginary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX__CTOR_OFFSET))(this, real, imaginary);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX__CCTOR_OFFSET))();
		}

		::System::Double get_Real()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GET_REAL_OFFSET))(this);
		}

		::System::Double get_Imaginary()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GET_IMAGINARY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Numerics::Complex value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::Complex))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_EQUALS_1_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_COMPLEX_TOSTRING_1_OFFSET))(this, format, provider);
		}
	};
}
