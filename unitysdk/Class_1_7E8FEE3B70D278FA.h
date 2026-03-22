#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_7E8FEE3B70D278FA_CLEAR_OFFSET UNITYSDK_OFFSET(0x162DCE50)
#define CLASS_1_7E8FEE3B70D278FA_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x162DD070)
#define CLASS_1_7E8FEE3B70D278FA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x162DCED0)
#define CLASS_1_7E8FEE3B70D278FA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x162DD030)
#define CLASS_1_7E8FEE3B70D278FA__CTOR_OFFSET UNITYSDK_OFFSET(0x162DD190)

inline static constexpr unsigned int Class_1_7E8FEE3B70D278FA_TypeDefinitionIndex = 32497;

class Class_1_7E8FEE3B70D278FA : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::Single Field_1_3; // 0x30
	::System::Single Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8FEE3B70D278FA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8FEE3B70D278FA_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8FEE3B70D278FA_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8FEE3B70D278FA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E8FEE3B70D278FA_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
