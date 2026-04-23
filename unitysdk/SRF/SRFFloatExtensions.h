#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRF_SRFFLOATEXTENSIONS_APPROXZERO_OFFSET UNITYSDK_OFFSET(0x1A316960)
#define SRF_SRFFLOATEXTENSIONS_APPROX_OFFSET UNITYSDK_OFFSET(0x1A316990)
#define SRF_SRFFLOATEXTENSIONS_SQRRT_OFFSET UNITYSDK_OFFSET(0x1A316940)
#define SRF_SRFFLOATEXTENSIONS_SQR_OFFSET UNITYSDK_OFFSET(0x1A316930)

namespace SRF
{
	inline static constexpr unsigned int SRFFloatExtensions_TypeDefinitionIndex = 33279;

	class SRFFloatExtensions : public ::System::Object
	{
	public:
		static ::System::Single Sqr(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_SQR_OFFSET))(f);
		}

		static ::System::Single SqrRt(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_SQRRT_OFFSET))(f);
		}

		static ::System::Boolean ApproxZero(::System::Single f)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_APPROXZERO_OFFSET))(f);
		}

		static ::System::Boolean Approx(::System::Single f, ::System::Single f2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_APPROX_OFFSET))(f, f2);
		}
	};
}
