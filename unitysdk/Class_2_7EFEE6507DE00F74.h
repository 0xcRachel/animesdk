#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleOnField; }

#define CLASS_2_7EFEE6507DE00F74_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16174A00)
#define CLASS_2_7EFEE6507DE00F74_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x161748F0)
#define CLASS_2_7EFEE6507DE00F74__CTOR_OFFSET UNITYSDK_OFFSET(0x161748E0)

inline static constexpr unsigned int Class_2_7EFEE6507DE00F74_TypeDefinitionIndex = 32266;

class Class_2_7EFEE6507DE00F74 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleOnField* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleOnField* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleOnField*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_7EFEE6507DE00F74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EFEE6507DE00F74_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EFEE6507DE00F74_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
