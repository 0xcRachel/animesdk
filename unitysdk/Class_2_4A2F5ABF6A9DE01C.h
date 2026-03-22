#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D79AB61125A404E.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_4A2F5ABF6A9DE01C_METHOD_2_2592FBFE0DF1F621_OFFSET UNITYSDK_OFFSET(0x104832A0)
#define CLASS_2_4A2F5ABF6A9DE01C__CTOR_OFFSET UNITYSDK_OFFSET(0x10483290)

inline static constexpr unsigned int Class_2_4A2F5ABF6A9DE01C_TypeDefinitionIndex = 51805;

class Class_2_4A2F5ABF6A9DE01C : public ::Class_1_3D79AB61125A404E
{
public:
	::RPG::Client::GridFightBattleGameContext* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_4A2F5ABF6A9DE01C__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarData* Method_2_2592FBFE0DF1F621(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_4A2F5ABF6A9DE01C_METHOD_2_2592FBFE0DF1F621_OFFSET))(this, a1);
	}
};
