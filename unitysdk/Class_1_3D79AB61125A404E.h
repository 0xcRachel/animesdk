#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_3D79AB61125A404E_METHOD_1_0053C1064C5FCA6B_OFFSET UNITYSDK_OFFSET(0x10351F80)
#define CLASS_1_3D79AB61125A404E_METHOD_1_73E1287FFBB0181F_OFFSET UNITYSDK_OFFSET(0x10351D50)
#define CLASS_1_3D79AB61125A404E_METHOD_1_E1862BEC502F5E6D_OFFSET UNITYSDK_OFFSET(0x10352310)
#define CLASS_1_3D79AB61125A404E__CTOR_OFFSET UNITYSDK_OFFSET(0x103523E0)

inline static constexpr unsigned int Class_1_3D79AB61125A404E_TypeDefinitionIndex = 51800;

class Class_1_3D79AB61125A404E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D79AB61125A404E__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_73E1287FFBB0181F(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_3D79AB61125A404E_METHOD_1_73E1287FFBB0181F_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarData* Method_1_0053C1064C5FCA6B(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_3D79AB61125A404E_METHOD_1_0053C1064C5FCA6B_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarData* Method_1_E1862BEC502F5E6D(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_3D79AB61125A404E_METHOD_1_E1862BEC502F5E6D_OFFSET))(this, a1);
	}
};
