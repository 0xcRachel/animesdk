#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_6_LOCK_OFFSET UNITYSDK_OFFSET(0xFF3EAC0)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_5435168424908816_OFFSET UNITYSDK_OFFSET(0xFF3ECE0)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_608DC9D9B356A581_OFFSET UNITYSDK_OFFSET(0xFF3F110)
#define CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET UNITYSDK_OFFSET(0xFF3EEF0)
#define CLASS_2_B3566F804A22C208_6__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3EAB0)
#define CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0xFF3F1B0)
#define CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xFF3F220)

inline static constexpr unsigned int Class_2_B3566F804A22C208_6_TypeDefinitionIndex = 68989;

class Class_2_B3566F804A22C208_6 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_608DC9D9B356A581(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_608DC9D9B356A581_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_2_5435168424908816()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_5435168424908816_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
