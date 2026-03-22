#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckSkillBPAxis; }

#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_3067CFC0E98CC4EC_OFFSET UNITYSDK_OFFSET(0x10A14E80)
#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x10A150A0)
#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x10A14E10)
#define CLASS_2_9F14BDA3ABFD8F02__CTOR_OFFSET UNITYSDK_OFFSET(0x10A14E00)

inline static constexpr unsigned int Class_2_9F14BDA3ABFD8F02_TypeDefinitionIndex = 42401;

class Class_2_9F14BDA3ABFD8F02 : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::RPG::GameCore::CheckSkillBPAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillBPAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillBPAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_3067CFC0E98CC4EC(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_3067CFC0E98CC4EC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
