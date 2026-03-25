#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace System { class String; }

#define CLASS_1_D8AB24DF71887101_CLEAR_OFFSET UNITYSDK_OFFSET(0x1688AE40)
#define CLASS_1_D8AB24DF71887101__CTOR_OFFSET UNITYSDK_OFFSET(0x1688AEA0)

inline static constexpr unsigned int Class_1_D8AB24DF71887101_TypeDefinitionIndex = 33435;

class Class_1_D8AB24DF71887101 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* Field_1_0; // 0x18
	::System::UInt32 Field_1_12; // 0x20
	::RPG::GameCore::FiveDimDanmuTrackAlignment Field_1_6; // 0x24
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_8; // 0x2C
	::System::Int32 Field_1_3; // 0x30
	::System::Boolean Field_1_4; // 0x34
	::System::Boolean Field_1_5; // 0x35
	::System::Single Field_1_9; // 0x38
	::System::Single Field_1_2; // 0x3C
	::System::Int32 Field_1_11; // 0x40
	::System::Single Field_1_10; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8AB24DF71887101__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8AB24DF71887101_CLEAR_OFFSET))(this);
	}
};
