#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_5;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_2DDB12564F17A3D1_METHOD_1_007204557128B051_OFFSET UNITYSDK_OFFSET(0x109EFA70)
#define CLASS_1_2DDB12564F17A3D1_METHOD_1_FC687E80508153E9_OFFSET UNITYSDK_OFFSET(0x109EF9C0)

inline static constexpr unsigned int Class_1_2DDB12564F17A3D1_TypeDefinitionIndex = 49683;

class Class_1_2DDB12564F17A3D1 : public ::System::Object
{
public:
	static ::RPG::Client::AvatarOutfit* Method_1_FC687E80508153E9(::RPG::Client::AvatarData* a1)
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_2DDB12564F17A3D1_METHOD_1_FC687E80508153E9_OFFSET))(a1);
	}

	static ::RPG::Client::AvatarOutfit* Method_1_007204557128B051(::RPG::Client::AvatarData* a1, ::Class_1_6E708EAB438EC183_5* a2)
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::RPG::Client::AvatarData*, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + CLASS_1_2DDB12564F17A3D1_METHOD_1_007204557128B051_OFFSET))(a1, a2);
	}
};
