#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D79AB61125A404E.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_9DDFABCE5588F6DA_METHOD_2_63560F881673CA13_OFFSET UNITYSDK_OFFSET(0x103DD6E0)
#define CLASS_2_9DDFABCE5588F6DA__CTOR_OFFSET UNITYSDK_OFFSET(0x103DD730)

inline static constexpr unsigned int Class_2_9DDFABCE5588F6DA_TypeDefinitionIndex = 51803;

class Class_2_9DDFABCE5588F6DA : public ::Class_1_3D79AB61125A404E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DDFABCE5588F6DA__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_2_63560F881673CA13(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_9DDFABCE5588F6DA_METHOD_2_63560F881673CA13_OFFSET))(this, a1);
	}
};
