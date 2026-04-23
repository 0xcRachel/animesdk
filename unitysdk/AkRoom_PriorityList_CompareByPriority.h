#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;

#define AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_COMPARE_OFFSET UNITYSDK_OFFSET(0x196FAB00)
#define AKROOM_PRIORITYLIST_COMPAREBYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x196FAAF0)

inline static constexpr unsigned int AkRoom_PriorityList_CompareByPriority_TypeDefinitionIndex = 40500;

class AkRoom_PriorityList_CompareByPriority : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_COMPAREBYPRIORITY__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::AkRoom* a, ::AkRoom* b)
	{
		return ((::System::Int32(*)(::PVOID, ::AkRoom*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_COMPAREBYPRIORITY_COMPARE_OFFSET))(this, a, b);
	}
};
