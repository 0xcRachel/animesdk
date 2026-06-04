#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x196FAE50)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FAFB0)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196FAF40)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FB030)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196FAFA0)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x196FAF50)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x196FAE40)
#define SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x196FADB0)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo__GetDeclaredMethods_d__9_TypeDefinitionIndex = 590;

	class TypeInfo__GetDeclaredMethods_d__9 : public ::System::Object
	{
	public:
		::System::String* __3__name; // 0x10
		::System::Reflection::MethodInfo* __2__current; // 0x18
		::System::String* name; // 0x20
		::Il2CppArray<::System::Reflection::MethodInfo*>* __7__wrap1; // 0x28
		::System::Reflection::TypeInfo* __4__this; // 0x30
		::System::Int32 __7__wrap2; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* System_Collections_Generic_IEnumerator_System_Reflection_MethodInfo__get_Current()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MethodInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO__GETDECLAREDMETHODS_D__9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
