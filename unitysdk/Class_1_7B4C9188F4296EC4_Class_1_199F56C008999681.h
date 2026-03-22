#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_CLEAR_OFFSET UNITYSDK_OFFSET(0x10BBFA40)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BBFAD0)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_GET_PLACEDAVATARBASEIDS_OFFSET UNITYSDK_OFFSET(0x10BBFB40)
#define CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBFB50)

inline static constexpr unsigned int Class_1_7B4C9188F4296EC4_Class_1_199F56C008999681_TypeDefinitionIndex = 53692;

class Class_1_7B4C9188F4296EC4_Class_1_199F56C008999681 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _PlacedAvatarBaseIDs_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PlacedAvatarBaseIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4C9188F4296EC4_CLASS_1_199F56C008999681_GET_PLACEDAVATARBASEIDS_OFFSET))(this);
	}
};
