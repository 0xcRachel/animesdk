#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloatCurve; }

#define CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET UNITYSDK_OFFSET(0x166CC520)

inline static constexpr unsigned int Class_1_41AC5868B3A5F5A4_TypeDefinitionIndex = 28609;

class Class_1_41AC5868B3A5F5A4 : public ::System::Object
{
public:
	::RPG::GameCore::FloatCurve* Field_1_6; // 0x10
	::RPG::MVector3 Field_1_9; // 0x18
	::System::Single Field_1_2; // 0x24
	::RPG::MVector3 Field_1_7; // 0x28
	::RPG::GameCore::CakeRaceCurveType Field_1_5; // 0x34
	::System::Boolean Field_1_10; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_4; // 0x40
	::RPG::MVector3 Field_1_8; // 0x44
	::System::Single Field_1_1; // 0x50
	::System::Single Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC5868B3A5F5A4__CTOR_OFFSET))(this);
	}
};
