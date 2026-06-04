#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x19616750)
#define CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x196165F0)
#define CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19616820)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x196168B0)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x19616830)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_1_TypeDefinitionIndex = 40121;

class Class_2_634B2F3DF1C5E804_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_0; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_1; // 0x340
	::System::Single Field_2_2; // 0x348
	::System::Int32 Field_2_3; // 0x34C
	::System::Int32 Field_2_4; // 0x350
	::System::Int32 Field_2_5; // 0x354
	::System::Int32 Field_2_6; // 0x358
	::System::Int32 Field_2_7; // 0x35C
	::System::Boolean Field_2_8; // 0x360
	::System::Int32 Field_2_9; // 0x364
	::System::Int32 Field_2_10; // 0x368
	::UnityEngine::Vector3 Field_2_11; // 0x36C
	::UnityEngine::Vector3 Field_2_12; // 0x378
	::System::Single Field_2_13; // 0x384
	::RPG::GameCore::FiveDimOrthoDirection Field_2_14; // 0x388
	::System::Boolean Field_2_15; // 0x38C
	::System::Boolean Field_2_16; // 0x38D
	::System::Boolean Field_2_17; // 0x38E
	::System::Boolean Field_2_18; // 0x38F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
