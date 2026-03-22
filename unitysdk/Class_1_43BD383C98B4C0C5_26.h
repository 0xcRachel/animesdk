#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_26_CLEAR_OFFSET UNITYSDK_OFFSET(0x16346CA0)
#define CLASS_1_43BD383C98B4C0C5_26__CTOR_OFFSET UNITYSDK_OFFSET(0x16346D70)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_26_TypeDefinitionIndex = 32655;

class Class_1_43BD383C98B4C0C5_26 : public ::System::Object
{
public:
	::Class_2_9DD8A46984F1AFFD* Field_1_12; // 0x10
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_14; // 0x18
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_16; // 0x20
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x28
	::Class_2_9DD8A46984F1AFFD* Field_1_8; // 0x30
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x38
	::Class_2_9DD8A46984F1AFFD* Field_1_13; // 0x40
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_15; // 0x48
	::System::Int32 Field_1_7; // 0x50
	::System::Int32 Field_1_11; // 0x54
	::System::Single Field_1_0; // 0x58
	::System::Int32 Field_1_10; // 0x5C
	::System::Single Field_1_6; // 0x60
	::UnityEngine::Vector2 Field_1_9; // 0x64
	::System::Single Field_1_1; // 0x6C
	::System::Boolean Field_1_5; // 0x70
	::System::UInt16 Field_1_2; // 0x72

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_26_CLEAR_OFFSET))(this);
	}
};
