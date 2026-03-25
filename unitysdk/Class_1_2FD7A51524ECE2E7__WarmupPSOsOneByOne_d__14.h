#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

class Class_1_2FD7A51524ECE2E7;
class Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796;
class SerializedWarmupPSO;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x114E1E00)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114E2A60)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114E29F0)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114E2B00)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114E2A50)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x114E2A00)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114E1DB0)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x114E1D90)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x114E1DF0)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x114E1DE0)
#define CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x114E1DD0)

inline static constexpr unsigned int Class_1_2FD7A51524ECE2E7__WarmupPSOsOneByOne_d__14_TypeDefinitionIndex = 38291;

class Class_1_2FD7A51524ECE2E7__WarmupPSOsOneByOne_d__14 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*>* __3__warmupPSOs; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::SerializedWarmupPSO*> __7__wrap8; // 0x18
	::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796* _shaderPSOs_5__8; // 0x30
	::System::Object* __2__current; // 0x38
	::System::Collections::Generic::Dictionary_2_Enumerator<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*> __7__wrap3; // 0x40
	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*>* warmupPSOs; // 0x68
	::Class_1_2FD7A51524ECE2E7* __4__this; // 0x70
	::System::Collections::Generic::List_1_Enumerator<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*> __7__wrap6; // 0x78
	::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>* _qualityData_5__6; // 0x90
	::System::Int32 __l__initialThreadId; // 0x98
	::System::Int32 _totalPsoCount_5__2; // 0x9C
	::System::Int32 __1__state; // 0xA0
	::System::Int32 _currentPsoIdx_5__3; // 0xA4
	::WarmupQualitySet _quality_5__5; // 0xA8

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY2_OFFSET))(this);
	}

	::System::Void __m__Finally3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14___M__FINALLY3_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7__WARMUPPSOSONEBYONE_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
