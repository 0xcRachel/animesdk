#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_15C380EE9BA3240C_GET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0x10A1D720)
#define CLASS_1_15C380EE9BA3240C_METHOD_1_60B7723520D6ACCF_OFFSET UNITYSDK_OFFSET(0x10A1D5C0)
#define CLASS_1_15C380EE9BA3240C_METHOD_1_79ADF2A344751F1C_OFFSET UNITYSDK_OFFSET(0x10A1D310)
#define CLASS_1_15C380EE9BA3240C_SET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0x10A1D730)
#define CLASS_1_15C380EE9BA3240C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1D740)

inline static constexpr unsigned int Class_1_15C380EE9BA3240C_TypeDefinitionIndex = 44752;

class Class_1_15C380EE9BA3240C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _HideSkillIDs_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15C380EE9BA3240C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79ADF2A344751F1C(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_15C380EE9BA3240C_METHOD_1_79ADF2A344751F1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60B7723520D6ACCF(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_15C380EE9BA3240C_METHOD_1_60B7723520D6ACCF_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_HideSkillIDs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15C380EE9BA3240C_GET_HIDESKILLIDS_OFFSET))(this);
	}

	::System::Void set_HideSkillIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_15C380EE9BA3240C_SET_HIDESKILLIDS_OFFSET))(this, value);
	}
};
