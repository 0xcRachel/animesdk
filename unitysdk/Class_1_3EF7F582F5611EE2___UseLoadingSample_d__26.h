#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16FB48A0)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FB4CC0)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16FB4C50)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FB4D40)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16FB4CB0)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16FB4C60)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FB4890)
#define CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB4630)

inline static constexpr unsigned int Class_1_3EF7F582F5611EE2___UseLoadingSample_d__26_TypeDefinitionIndex = 37878;

class Class_1_3EF7F582F5611EE2___UseLoadingSample_d__26 : public ::System::Object
{
public:
	::RPG::Client::AssetSystem::AssetLoader* loader; // 0x10
	::RPG::Client::AssetSystem::AssetLoader* __3__loader; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Boolean isComponent; // 0x28
	::System::Boolean __3__isComponent; // 0x29
	::System::Int32 __l__initialThreadId; // 0x2C
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EF7F582F5611EE2___USELOADINGSAMPLE_D__26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
