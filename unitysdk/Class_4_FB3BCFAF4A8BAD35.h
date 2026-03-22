#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_5AA5647542AA49BD;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_9ACFABBB24F18F93_OFFSET UNITYSDK_OFFSET(0x10F75770)
#define CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_F2F897D022B01A1F_OFFSET UNITYSDK_OFFSET(0x10F75840)
#define CLASS_4_FB3BCFAF4A8BAD35__CTOR_OFFSET UNITYSDK_OFFSET(0x10F75760)

inline static constexpr unsigned int Class_4_FB3BCFAF4A8BAD35_TypeDefinitionIndex = 61169;

class Class_4_FB3BCFAF4A8BAD35 : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_5AA5647542AA49BD* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_5AA5647542AA49BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_5AA5647542AA49BD*))((::PBYTE)hIl2Cpp + CLASS_4_FB3BCFAF4A8BAD35__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_9ACFABBB24F18F93(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_9ACFABBB24F18F93_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F2F897D022B01A1F(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_FB3BCFAF4A8BAD35_METHOD_4_F2F897D022B01A1F_OFFSET))(this, P0);
	}
};
