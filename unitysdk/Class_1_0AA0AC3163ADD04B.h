#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD06ACFB24F923CA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0AA0AC3163ADD04B__CTOR_OFFSET UNITYSDK_OFFSET(0xD28EE50)

inline static constexpr unsigned int Class_1_0AA0AC3163ADD04B_TypeDefinitionIndex = 67487;

class Class_1_0AA0AC3163ADD04B : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_DD06ACFB24F923CA*>* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA0AC3163ADD04B__CTOR_OFFSET))(this);
	}
};
