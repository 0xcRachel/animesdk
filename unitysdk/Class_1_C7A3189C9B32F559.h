#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_C7A3189C9B32F559_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x178706E0)
#define CLASS_1_C7A3189C9B32F559_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17870490)
#define CLASS_1_C7A3189C9B32F559_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x17870630)
#define CLASS_1_C7A3189C9B32F559_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x17870620)
#define CLASS_1_C7A3189C9B32F559_GET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0x178706C0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_0684C153AAF58390_OFFSET UNITYSDK_OFFSET(0x1786F850)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x17870570)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x17870650)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x178701D0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x17870510)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1786FED0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1786FC90)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0x1786FB70)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1786FDF0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1786FA20)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_66D1C86B2E6241E5_OFFSET UNITYSDK_OFFSET(0x1786F8E0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_7BA1C462BE456A99_OFFSET UNITYSDK_OFFSET(0x1786FF50)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_AFE8A031D1451F03_OFFSET UNITYSDK_OFFSET(0x1786FC30)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_1_OFFSET UNITYSDK_OFFSET(0x1786FCF0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_2_OFFSET UNITYSDK_OFFSET(0x1786FD70)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_3_OFFSET UNITYSDK_OFFSET(0x1786FE40)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_4_OFFSET UNITYSDK_OFFSET(0x17870020)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_5_OFFSET UNITYSDK_OFFSET(0x17870150)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_6_OFFSET UNITYSDK_OFFSET(0x17870260)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_7_OFFSET UNITYSDK_OFFSET(0x178702F0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_8_OFFSET UNITYSDK_OFFSET(0x17870380)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_9_OFFSET UNITYSDK_OFFSET(0x17870410)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0x1786FAE0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_C7DD84521BBC9472_OFFSET UNITYSDK_OFFSET(0x178700B0)
#define CLASS_1_C7A3189C9B32F559_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x178706B0)
#define CLASS_1_C7A3189C9B32F559_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17870740)
#define CLASS_1_C7A3189C9B32F559_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x17870640)
#define CLASS_1_C7A3189C9B32F559_SET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0x178706D0)
#define CLASS_1_C7A3189C9B32F559__CTOR_OFFSET UNITYSDK_OFFSET(0x1786F840)

inline static constexpr unsigned int Class_1_C7A3189C9B32F559_TypeDefinitionIndex = 73741;

class Class_1_C7A3189C9B32F559 : public ::System::Object
{
public:
	::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x10
	::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* OnStateChanged; // 0x18
	::System::Boolean _HasPendingServerFight_k__BackingField; // 0x20
	::RPG::Client::Multiplayer::MPSessionState Field_1_3; // 0x24
	::Enum_3_A35B38E5F9115A76_2 _GameMode_k__BackingField; // 0x28

	::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* Method_1_0684C153AAF58390(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_0684C153AAF58390_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}

	::System::Boolean Method_1_AFE8A031D1451F03()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_AFE8A031D1451F03_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_3_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_4()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_4_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_C7DD84521BBC9472(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_C7DD84521BBC9472_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_5_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_6()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_6_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_8()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_8_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48_9()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_BB93C69D78C65A48_9_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_66D1C86B2E6241E5(::RPG::Client::Multiplayer::MPSessionState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_66D1C86B2E6241E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7BA1C462BE456A99(::RPG::Client::Multiplayer::MPSessionState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_7BA1C462BE456A99_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_1_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_0A604A5B360F30A7_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76_2 get_GameMode()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_GET_GAMEMODE_OFFSET))(this);
	}

	::RPG::Client::BaseLobby* get_CurrentLobby()
	{
		return ((::RPG::Client::BaseLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_GET_CURRENTLOBBY_OFFSET))(this);
	}

	::System::Void set_CurrentLobby(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_SET_CURRENTLOBBY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_HasPendingServerFight()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_GET_HASPENDINGSERVERFIGHT_OFFSET))(this);
	}

	::System::Void set_HasPendingServerFight(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_SET_HASPENDINGSERVERFIGHT_OFFSET))(this, a1);
	}

	::System::Void add_OnStateChanged(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_ADD_ONSTATECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnStateChanged(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + CLASS_1_C7A3189C9B32F559_REMOVE_ONSTATECHANGED_OFFSET))(this, a1);
	}
};
