#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace System { class Object; }

#define CLASS_2_34A8D080E829FDF9_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x14ACA5F0)
#define CLASS_2_34A8D080E829FDF9_METHOD_2_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x14ACA1A0)
#define CLASS_2_34A8D080E829FDF9_METHOD_2_FA784997B06804B0_OFFSET UNITYSDK_OFFSET(0x14ACA2E0)
#define CLASS_2_34A8D080E829FDF9_ONALLOC_OFFSET UNITYSDK_OFFSET(0x14ACA120)
#define CLASS_2_34A8D080E829FDF9_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14ACA160)
#define CLASS_2_34A8D080E829FDF9_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x14ACA600)
#define CLASS_2_34A8D080E829FDF9__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACA610)

inline static constexpr unsigned int Class_2_34A8D080E829FDF9_TypeDefinitionIndex = 50148;

class Class_2_34A8D080E829FDF9 : public ::System::Collections::Generic::List_1<::System::Object*>
{
public:
	::System::Boolean _IsRecycled_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_9B1F2653496E5C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_METHOD_2_9B1F2653496E5C47_OFFSET))(this);
	}

	::System::Void Method_2_FA784997B06804B0(::Class_2_34A8D080E829FDF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_34A8D080E829FDF9*))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_METHOD_2_FA784997B06804B0_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecycled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_GET_ISRECYCLED_OFFSET))(this);
	}

	::System::Void set_IsRecycled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_34A8D080E829FDF9_SET_ISRECYCLED_OFFSET))(this, a1);
	}
};
