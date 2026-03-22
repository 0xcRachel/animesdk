#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B9E56D0D50E02617_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_F1D65D77731F2AD9_METHOD_2_4621B9C22DF126F2_OFFSET UNITYSDK_OFFSET(0x1045B520)
#define CLASS_2_F1D65D77731F2AD9_METHOD_2_4B581D26F198C904_OFFSET UNITYSDK_OFFSET(0x1045B480)
#define CLASS_2_F1D65D77731F2AD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1045B470)

inline static constexpr unsigned int Class_2_F1D65D77731F2AD9_TypeDefinitionIndex = 51657;

class Class_2_F1D65D77731F2AD9 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + CLASS_2_F1D65D77731F2AD9__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* Method_2_4B581D26F198C904()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D65D77731F2AD9_METHOD_2_4B581D26F198C904_OFFSET))(this);
	}

	::System::UInt32 Method_2_4621B9C22DF126F2(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F1D65D77731F2AD9_METHOD_2_4621B9C22DF126F2_OFFSET))(this, a1);
	}
};
