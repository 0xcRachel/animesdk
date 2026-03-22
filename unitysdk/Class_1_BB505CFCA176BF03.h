#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
class Class_1_C0BFEE1D316B82F5;

#define CLASS_1_BB505CFCA176BF03_METHOD_1_1FCC85A147E9D2FD_OFFSET UNITYSDK_OFFSET(0x85E6B80)
#define CLASS_1_BB505CFCA176BF03_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x85E6C20)
#define CLASS_1_BB505CFCA176BF03__CTOR_OFFSET UNITYSDK_OFFSET(0x85E6C10)

inline static constexpr unsigned int Class_1_BB505CFCA176BF03_TypeDefinitionIndex = 44071;

class Class_1_BB505CFCA176BF03 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_358* Field_1_4; // 0x10
	::RPG::GameCore::FixPoint Field_1_2; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::UInt32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03__CTOR_OFFSET))(this);
	}

	::Class_1_BB505CFCA176BF03* Method_1_1FCC85A147E9D2FD()
	{
		return ((::Class_1_BB505CFCA176BF03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03_METHOD_1_1FCC85A147E9D2FD_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_C0BFEE1D316B82F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0BFEE1D316B82F5*))((::PBYTE)hIl2Cpp + CLASS_1_BB505CFCA176BF03_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
