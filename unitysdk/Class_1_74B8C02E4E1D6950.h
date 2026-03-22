#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2AC0AF35BE66B2A;
namespace RPG::GameCore { class LevelUIComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET UNITYSDK_OFFSET(0xFE5A210)

inline static constexpr unsigned int Class_1_74B8C02E4E1D6950_TypeDefinitionIndex = 57217;

class Class_1_74B8C02E4E1D6950 : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_3; // 0x10
	::Class_1_A2AC0AF35BE66B2A* Field_1_2; // 0x18
	::UnityEngine::UI::Text* Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74B8C02E4E1D6950__CTOR_OFFSET))(this);
	}
};
