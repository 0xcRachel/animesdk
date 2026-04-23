#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_09E9D8F1FD26797F;
namespace RPG::GameCore { class ChimeraDuelAttackJumpTextNode; }

#define CLASS_4_5799931C82C6604C_METHOD_4_5575723A6BC708DC_OFFSET UNITYSDK_OFFSET(0x10042540)
#define CLASS_4_5799931C82C6604C_METHOD_4_F2F897D022B01A1F_OFFSET UNITYSDK_OFFSET(0x10042620)
#define CLASS_4_5799931C82C6604C__CTOR_OFFSET UNITYSDK_OFFSET(0x10042530)

inline static constexpr unsigned int Class_4_5799931C82C6604C_TypeDefinitionIndex = 71208;

class Class_4_5799931C82C6604C : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_09E9D8F1FD26797F* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_09E9D8F1FD26797F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_09E9D8F1FD26797F*))((::PBYTE)hIl2Cpp + CLASS_4_5799931C82C6604C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_5575723A6BC708DC(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_5799931C82C6604C_METHOD_4_5575723A6BC708DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F2F897D022B01A1F(::RPG::GameCore::ChimeraDuelAttackJumpTextNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + CLASS_4_5799931C82C6604C_METHOD_4_F2F897D022B01A1F_OFFSET))(this, P0);
	}
};
