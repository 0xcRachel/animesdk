#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_7B17C3A61CEC44E6_METHOD_1_752AB718DB9788BA_OFFSET UNITYSDK_OFFSET(0x1058E710)
#define CLASS_1_7B17C3A61CEC44E6_METHOD_1_91016EC36148AED9_OFFSET UNITYSDK_OFFSET(0x1058E9A0)
#define CLASS_1_7B17C3A61CEC44E6_METHOD_1_D18E4E0CEC6F6679_OFFSET UNITYSDK_OFFSET(0x1058EE40)
#define CLASS_1_7B17C3A61CEC44E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1058EF60)

inline static constexpr unsigned int Class_1_7B17C3A61CEC44E6_TypeDefinitionIndex = 60015;

class Class_1_7B17C3A61CEC44E6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B17C3A61CEC44E6__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_752AB718DB9788BA(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_7B17C3A61CEC44E6_METHOD_1_752AB718DB9788BA_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_91016EC36148AED9(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_7B17C3A61CEC44E6_METHOD_1_91016EC36148AED9_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_D18E4E0CEC6F6679(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_7B17C3A61CEC44E6_METHOD_1_D18E4E0CEC6F6679_OFFSET))(this, a1);
	}
};
