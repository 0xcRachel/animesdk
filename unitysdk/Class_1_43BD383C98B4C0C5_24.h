#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9DD8A46984F1AFFD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_24_CLEAR_OFFSET UNITYSDK_OFFSET(0x15383360)
#define CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET UNITYSDK_OFFSET(0x15383440)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_24_TypeDefinitionIndex = 39384;

class Class_1_43BD383C98B4C0C5_24 : public ::System::Object
{
public:
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_15; // 0x10
	::Class_2_9DD8A46984F1AFFD* Field_1_12; // 0x18
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_16; // 0x20
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x28
	::System::Action_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_14; // 0x30
	::Class_2_9DD8A46984F1AFFD* Field_1_8; // 0x38
	::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x40
	::Class_2_9DD8A46984F1AFFD* Field_1_13; // 0x48
	::System::Single Field_1_6; // 0x50
	::System::Int32 Field_1_10; // 0x54
	::System::Int32 Field_1_11; // 0x58
	::System::Int32 Field_1_7; // 0x5C
	::System::Boolean Field_1_5; // 0x60
	::System::UInt16 Field_1_2; // 0x62
	::System::Single Field_1_1; // 0x64
	::UnityEngine::Vector2 Field_1_9; // 0x68
	::System::Single Field_1_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24_CLEAR_OFFSET))(this);
	}
};
