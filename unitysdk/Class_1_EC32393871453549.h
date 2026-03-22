#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_EC32393871453549_METHOD_1_09FFD07A124A43B3_OFFSET UNITYSDK_OFFSET(0x10B38290)
#define CLASS_1_EC32393871453549_METHOD_1_784AF2003D7C84CA_OFFSET UNITYSDK_OFFSET(0x10B38230)

inline static constexpr unsigned int Class_1_EC32393871453549_TypeDefinitionIndex = 49667;

class Class_1_EC32393871453549 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_784AF2003D7C84CA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EC32393871453549_METHOD_1_784AF2003D7C84CA_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_09FFD07A124A43B3(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarData* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_EC32393871453549_METHOD_1_09FFD07A124A43B3_OFFSET))(a1, a2);
	}
};
