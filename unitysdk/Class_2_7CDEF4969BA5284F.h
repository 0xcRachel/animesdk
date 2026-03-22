#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D79AB61125A404E.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_7CDEF4969BA5284F_METHOD_2_4B34D70F8B707516_OFFSET UNITYSDK_OFFSET(0x10FAD270)
#define CLASS_2_7CDEF4969BA5284F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FAD2C0)

inline static constexpr unsigned int Class_2_7CDEF4969BA5284F_TypeDefinitionIndex = 51801;

class Class_2_7CDEF4969BA5284F : public ::Class_1_3D79AB61125A404E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CDEF4969BA5284F__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_2_4B34D70F8B707516(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_7CDEF4969BA5284F_METHOD_2_4B34D70F8B707516_OFFSET))(this, a1);
	}
};
