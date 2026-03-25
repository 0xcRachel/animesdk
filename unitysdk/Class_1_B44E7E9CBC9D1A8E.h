#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET UNITYSDK_OFFSET(0x168F3150)

inline static constexpr unsigned int Class_1_B44E7E9CBC9D1A8E_TypeDefinitionIndex = 33709;

class Class_1_B44E7E9CBC9D1A8E : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_3; // 0x10
	::UnityEngine::Vector3 Field_1_4; // 0x1C
	::RPG::Client::LittleGame::ChenLing::ChenLingHitType Field_1_0; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::RPG::GameCore::FixPoint Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET))(this);
	}
};
