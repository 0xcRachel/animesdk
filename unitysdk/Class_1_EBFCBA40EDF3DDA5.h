#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7050783C65BD221;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_EBFCBA40EDF3DDA5__CTOR_OFFSET UNITYSDK_OFFSET(0x8668ED0)

inline static constexpr unsigned int Class_1_EBFCBA40EDF3DDA5_TypeDefinitionIndex = 58401;

class Class_1_EBFCBA40EDF3DDA5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_D7050783C65BD221*>* Field_1_3; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBFCBA40EDF3DDA5__CTOR_OFFSET))(this);
	}
};
