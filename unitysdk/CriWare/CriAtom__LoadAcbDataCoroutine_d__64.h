#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcbLoader; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18265110)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18265A00)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18265A60)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18265A10)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18265030)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64__CTOR_OFFSET UNITYSDK_OFFSET(0x182645C0)
#define CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x182650B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom__LoadAcbDataCoroutine_d__64_TypeDefinitionIndex = 36681;

	class CriAtom__LoadAcbDataCoroutine_d__64 : public ::System::Object
	{
	public:
		::CriWare::CriAtomCueSheet* cueSheet; // 0x10
		::Il2CppArray<::System::Byte>* acbData; // 0x18
		::CriWare::CriAtom* __4__this; // 0x20
		::CriWare::CriAtomExAcbLoader* _asyncLoader_5__2; // 0x28
		::System::String* awbPath; // 0x30
		::System::Object* __2__current; // 0x38
		::CriWare::CriFsBinder* awbBinder; // 0x40
		::System::Boolean loadAwbOnMemory; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBDATACOROUTINE_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
