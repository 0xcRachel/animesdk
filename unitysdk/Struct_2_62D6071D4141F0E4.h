#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_62D6071D4141F0E4_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x2022050)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_9AB6F9B4F8414F84_OFFSET UNITYSDK_OFFSET(0x2021F20)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x2021F90)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_B097DE9E46680B49_OFFSET UNITYSDK_OFFSET(0x2022100)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_B350447248DADBD4_OFFSET UNITYSDK_OFFSET(0x2022270)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_E29A3544556C0908_OFFSET UNITYSDK_OFFSET(0x2021DD0)
#define STRUCT_2_62D6071D4141F0E4_METHOD_2_EEB95CFE1E27DD81_OFFSET UNITYSDK_OFFSET(0x20220B0)
#define STRUCT_2_62D6071D4141F0E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2022360)
#define STRUCT_2_62D6071D4141F0E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2021DD0)
#define STRUCT_2_62D6071D4141F0E4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2021EB0)
#define STRUCT_2_62D6071D4141F0E4__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2021F20)
#define STRUCT_2_62D6071D4141F0E4__CTOR_OFFSET UNITYSDK_OFFSET(0x2021CF0)

inline static constexpr unsigned int Struct_2_62D6071D4141F0E4_TypeDefinitionIndex = 8468;

struct alignas(4) Struct_2_62D6071D4141F0E4
{
	::RPG::MVector3 Field_2_0; // 0x10
	::RPG::MVector3 Field_2_1; // 0x1C
	::RPG::MVector3 Field_2_2; // 0x28
	::RPG::MVector3 Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x40

	::System::Void _ctor(::RPG::MVector3& a1, ::RPG::MVector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::RPG::MVector3& a1, ::RPG::MVector3& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3&, ::RPG::MVector3&, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4__CTOR_3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E29A3544556C0908(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_E29A3544556C0908_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9AB6F9B4F8414F84(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_9AB6F9B4F8414F84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_EEB95CFE1E27DD81(::System::Single a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_EEB95CFE1E27DD81_OFFSET))(this, a1);
	}

	::System::Single Method_2_B097DE9E46680B49(::RPG::MVector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_B097DE9E46680B49_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_B350447248DADBD4(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_METHOD_2_B350447248DADBD4_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62D6071D4141F0E4_TOSTRING_OFFSET))(this);
	}
};
