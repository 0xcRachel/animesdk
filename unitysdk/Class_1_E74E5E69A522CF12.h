#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_E74E5E69A522CF12_CLEAR_OFFSET UNITYSDK_OFFSET(0x1834FB60)
#define CLASS_1_E74E5E69A522CF12_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1834FBF0)
#define CLASS_1_E74E5E69A522CF12_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1834FCC0)
#define CLASS_1_E74E5E69A522CF12__CTOR_OFFSET UNITYSDK_OFFSET(0x1834FD60)

inline static constexpr unsigned int Class_1_E74E5E69A522CF12_TypeDefinitionIndex = 40106;

class Class_1_E74E5E69A522CF12 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_0; // 0x10
	::RPG::PoolList_1<::System::Int32>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E74E5E69A522CF12__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E74E5E69A522CF12_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E74E5E69A522CF12_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E74E5E69A522CF12_ONRECYCLE_OFFSET))(this);
	}
};
