#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D79AB61125A404E.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_922446B52B1399D5_METHOD_2_D93F1B6A948C62E1_OFFSET UNITYSDK_OFFSET(0x11073590)
#define CLASS_2_922446B52B1399D5__CTOR_OFFSET UNITYSDK_OFFSET(0x110735E0)

inline static constexpr unsigned int Class_2_922446B52B1399D5_TypeDefinitionIndex = 51802;

class Class_2_922446B52B1399D5 : public ::Class_1_3D79AB61125A404E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_922446B52B1399D5__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_2_D93F1B6A948C62E1(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_922446B52B1399D5_METHOD_2_D93F1B6A948C62E1_OFFSET))(this, a1);
	}
};
