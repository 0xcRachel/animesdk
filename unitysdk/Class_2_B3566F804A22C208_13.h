#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_316;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B3566F804A22C208_13_LOCK_OFFSET UNITYSDK_OFFSET(0x1527CD40)
#define CLASS_2_B3566F804A22C208_13_METHOD_2_A4D4A2C31CDC690C_OFFSET UNITYSDK_OFFSET(0x1527CD90)
#define CLASS_2_B3566F804A22C208_13_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1527CE30)
#define CLASS_2_B3566F804A22C208_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1527CD30)
#define CLASS_2_B3566F804A22C208_13___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x1527CE80)
#define CLASS_2_B3566F804A22C208_13___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1527CEE0)

inline static constexpr unsigned int Class_2_B3566F804A22C208_13_TypeDefinitionIndex = 69814;

class Class_2_B3566F804A22C208_13 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4D4A2C31CDC690C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13_METHOD_2_A4D4A2C31CDC690C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13___IFIXBASEPROXY_LOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3566F804A22C208_13___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
	}
};
