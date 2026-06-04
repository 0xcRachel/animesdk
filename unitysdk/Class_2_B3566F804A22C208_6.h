#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_316;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_6_LOCK_OFFSET UNITYSDK_OFFSET(0x16C2F5E0)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_5BC1BE2F603FB98D_OFFSET UNITYSDK_OFFSET(0x16C2F7A0)
#define CLASS_2_B3566F804A22C208_6_METHOD_2_D23BF0D9B6C3246E_OFFSET UNITYSDK_OFFSET(0x16C2FBD0)
#define CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET UNITYSDK_OFFSET(0x16C2F9C0)
#define CLASS_2_B3566F804A22C208_6__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2F5D0)
#define CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x16C2FC70)
#define CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x16C2FCD0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_6_TypeDefinitionIndex = 69801;

class Class_2_B3566F804A22C208_6 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D23BF0D9B6C3246E(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_D23BF0D9B6C3246E_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_2_5BC1BE2F603FB98D()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6_METHOD_2_5BC1BE2F603FB98D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_LOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_6___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
	}
};
