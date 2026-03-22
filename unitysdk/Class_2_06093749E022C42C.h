#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleChooseTarget; }

#define CLASS_2_06093749E022C42C_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x161101A0)
#define CLASS_2_06093749E022C42C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16110210)
#define CLASS_2_06093749E022C42C__CTOR_OFFSET UNITYSDK_OFFSET(0x16110190)

inline static constexpr unsigned int Class_2_06093749E022C42C_TypeDefinitionIndex = 32261;

class Class_2_06093749E022C42C : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleChooseTarget* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleChooseTarget* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleChooseTarget*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06093749E022C42C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
