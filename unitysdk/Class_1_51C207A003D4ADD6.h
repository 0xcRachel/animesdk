#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_553;
namespace RPG::GameCore { class SpecialAvatarRow; }

#define CLASS_1_51C207A003D4ADD6_METHOD_1_97D89326899F6469_OFFSET UNITYSDK_OFFSET(0xEEB7F70)
#define CLASS_1_51C207A003D4ADD6__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB7EF0)

inline static constexpr unsigned int Class_1_51C207A003D4ADD6_TypeDefinitionIndex = 49794;

class Class_1_51C207A003D4ADD6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_553* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_553* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_553*))((::PBYTE)hIl2Cpp + CLASS_1_51C207A003D4ADD6__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::SpecialAvatarRow* Method_1_97D89326899F6469(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C207A003D4ADD6_METHOD_1_97D89326899F6469_OFFSET))(this, a1);
	}
};
