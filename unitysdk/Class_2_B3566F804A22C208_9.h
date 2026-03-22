#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_262;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_9_LOCK_OFFSET UNITYSDK_OFFSET(0x8ABAC10)
#define CLASS_2_B3566F804A22C208_9_METHOD_2_446196FA4D8C65AD_OFFSET UNITYSDK_OFFSET(0x8ABAD90)
#define CLASS_2_B3566F804A22C208_9_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x8ABAD50)
#define CLASS_2_B3566F804A22C208_9_UNLOCK_OFFSET UNITYSDK_OFFSET(0x8ABACB0)
#define CLASS_2_B3566F804A22C208_9__CTOR_OFFSET UNITYSDK_OFFSET(0x8ABAC00)
#define CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x8ABADA0)
#define CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x8ABAE80)
#define CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x8ABAE10)

inline static constexpr unsigned int Class_2_B3566F804A22C208_9_TypeDefinitionIndex = 59729;

class Class_2_B3566F804A22C208_9 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_262*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_262*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void RefreshLock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9_REFRESHLOCK_OFFSET))(this);
	}

	::RPG::Client::GamePlayLockTarget Method_2_446196FA4D8C65AD()
	{
		return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9_METHOD_2_446196FA4D8C65AD_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_RefreshLock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_9___IFIXBASEPROXY_REFRESHLOCK_OFFSET))(this);
	}
};
