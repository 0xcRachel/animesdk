#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleAddSkillLog; }

#define CLASS_2_EBF12A58C79742FF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16341140)
#define CLASS_2_EBF12A58C79742FF_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x16341070)
#define CLASS_2_EBF12A58C79742FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16341060)

inline static constexpr unsigned int Class_2_EBF12A58C79742FF_TypeDefinitionIndex = 32282;

class Class_2_EBF12A58C79742FF : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddSkillLog* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddSkillLog* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddSkillLog*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBF12A58C79742FF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
