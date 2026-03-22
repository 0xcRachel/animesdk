#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1BF0E9B618272C83.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_27C5423F8C6A95F7;
class Class_1_AADF1B6DF2135633;

#define CLASS_3_1FDCDF4D72183874_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xA13C430)
#define CLASS_3_1FDCDF4D72183874_METHOD_3_2D44A8D1B5BE380D_OFFSET UNITYSDK_OFFSET(0xA1484A0)
#define CLASS_3_1FDCDF4D72183874_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA1487E0)
#define CLASS_3_1FDCDF4D72183874_METHOD_3_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xA147F70)
#define CLASS_3_1FDCDF4D72183874_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA147F00)
#define CLASS_3_1FDCDF4D72183874__CTOR_OFFSET UNITYSDK_OFFSET(0xA13C350)

inline static constexpr unsigned int Class_3_1FDCDF4D72183874_TypeDefinitionIndex = 49807;

class Class_3_1FDCDF4D72183874 : public ::Class_2_1BF0E9B618272C83
{
public:
	::Class_1_27C5423F8C6A95F7* Field_3_1; // 0x28
	::Class_1_AADF1B6DF2135633* Field_3_2; // 0x30
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> Field_3_3; // 0x38
	::Struct_2_BC950E36747FB4C9 Field_3_0; // 0x44

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_27C5423F8C6A95F7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_27C5423F8C6A95F7*))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_AADF1B6DF2135633* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AADF1B6DF2135633*))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874_METHOD_3_572E53F76E315839_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_2D44A8D1B5BE380D(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874_METHOD_3_2D44A8D1B5BE380D_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FDCDF4D72183874_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
