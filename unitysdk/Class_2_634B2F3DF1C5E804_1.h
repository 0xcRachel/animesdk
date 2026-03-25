#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A66610)
#define CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16A664B0)
#define CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A666E0)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A66780)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16A666F0)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_1_TypeDefinitionIndex = 33551;

class Class_2_634B2F3DF1C5E804_1 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_3; // 0x340
	::UnityEngine::Vector3 Field_2_14; // 0x348
	::System::Boolean Field_2_18; // 0x354
	::System::Boolean Field_2_4; // 0x355
	::System::Single Field_2_6; // 0x358
	::UnityEngine::Vector3 Field_2_13; // 0x35C
	::System::Int32 Field_2_5; // 0x368
	::System::Int32 Field_2_16; // 0x36C
	::System::Int32 Field_2_9; // 0x370
	::System::Int32 Field_2_17; // 0x374
	::System::Int32 Field_2_15; // 0x378
	::System::Boolean Field_2_10; // 0x37C
	::System::Boolean Field_2_8; // 0x37D
	::System::Boolean Field_2_1; // 0x37E
	::System::Single Field_2_7; // 0x380
	::RPG::GameCore::FiveDimOrthoDirection Field_2_0; // 0x384
	::System::Int32 Field_2_12; // 0x388
	::System::Int32 Field_2_11; // 0x38C

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
