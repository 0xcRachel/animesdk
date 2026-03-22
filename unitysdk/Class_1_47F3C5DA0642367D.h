#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore::Match3 { class ShowCharacterCutInGroupAction; }

#define CLASS_1_47F3C5DA0642367D_CLEAR_OFFSET UNITYSDK_OFFSET(0x161A29A0)
#define CLASS_1_47F3C5DA0642367D_ONALLOC_OFFSET UNITYSDK_OFFSET(0x161A2A90)
#define CLASS_1_47F3C5DA0642367D_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x161A2D10)
#define CLASS_1_47F3C5DA0642367D__CTOR_OFFSET UNITYSDK_OFFSET(0x161A2D50)

inline static constexpr unsigned int Class_1_47F3C5DA0642367D_TypeDefinitionIndex = 32164;

class Class_1_47F3C5DA0642367D : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::RPG::PoolList_1<::System::UInt32>* Field_1_0; // 0x18
	::RPG::PoolDictionary_2<::RPG::GameCore::Match3::ShowCharacterCutInGroupAction*, ::System::UInt32>* Field_1_2; // 0x20
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole>>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F3C5DA0642367D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F3C5DA0642367D_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F3C5DA0642367D_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F3C5DA0642367D_ONRECYCLE_OFFSET))(this);
	}
};
