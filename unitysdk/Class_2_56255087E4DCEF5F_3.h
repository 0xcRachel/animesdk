#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_10.h"

class Class_2_DFB79F7EE671BF59;
class Class_4_0FE2F2FA8B5CD496;

#define CLASS_2_56255087E4DCEF5F_3_METHOD_2_AF52CAA6089336C2_OFFSET UNITYSDK_OFFSET(0x15F200E0)
#define CLASS_2_56255087E4DCEF5F_3_METHOD_2_B47714E0E0E31A95_OFFSET UNITYSDK_OFFSET(0x15F1FDD0)
#define CLASS_2_56255087E4DCEF5F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16530)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_3_TypeDefinitionIndex = 27816;

class Class_2_56255087E4DCEF5F_3 : public ::Class_1_43BD383C98B4C0C5_10
{
public:
	::Class_2_DFB79F7EE671BF59* Field_2_1; // 0x10
	::Class_4_0FE2F2FA8B5CD496* Field_2_0; // 0x18

	::System::Void _ctor(::Class_4_0FE2F2FA8B5CD496* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_0FE2F2FA8B5CD496*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B47714E0E0E31A95(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_3_METHOD_2_B47714E0E0E31A95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF52CAA6089336C2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_3_METHOD_2_AF52CAA6089336C2_OFFSET))(this, a1);
	}
};
