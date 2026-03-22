#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6463905D01835C6B.h"

class Class_2_DFB79F7EE671BF59;
class Class_4_D581BED103406713;

#define CLASS_2_56255087E4DCEF5F_2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1603AD60)
#define CLASS_2_56255087E4DCEF5F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1603AD50)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_2_TypeDefinitionIndex = 27836;

class Class_2_56255087E4DCEF5F_2 : public ::Class_1_6463905D01835C6B
{
public:
	::Class_2_DFB79F7EE671BF59* Field_2_1; // 0x18
	::Class_4_D581BED103406713* Field_2_0; // 0x20

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_2_INITIALIZE_OFFSET))(this);
	}
};
