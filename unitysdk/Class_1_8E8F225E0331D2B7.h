#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_8E8F225E0331D2B7_METHOD_1_85D20BB64ACF4BFF_OFFSET UNITYSDK_OFFSET(0x10271E50)
#define CLASS_1_8E8F225E0331D2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x10271EA0)

inline static constexpr unsigned int Class_1_8E8F225E0331D2B7_TypeDefinitionIndex = 51804;

class Class_1_8E8F225E0331D2B7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E8F225E0331D2B7__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_85D20BB64ACF4BFF(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_8E8F225E0331D2B7_METHOD_1_85D20BB64ACF4BFF_OFFSET))(this, a1);
	}
};
