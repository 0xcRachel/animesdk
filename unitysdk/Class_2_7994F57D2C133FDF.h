#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7994F57D2C133FDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DD08F0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_14104E9B8332C0FC_OFFSET UNITYSDK_OFFSET(0x8DD1B50)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_1E385C0D8ECA4821_OFFSET UNITYSDK_OFFSET(0x8DD2BB0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_2397BE1B090A06CF_OFFSET UNITYSDK_OFFSET(0x8DD32D0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_30627B12AF29EE9A_OFFSET UNITYSDK_OFFSET(0x8DD2600)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_39403F1F919F447A_OFFSET UNITYSDK_OFFSET(0x8DD3AB0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_527CB1D57186E828_OFFSET UNITYSDK_OFFSET(0x8DD2D00)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_5CCCEEABA4778486_OFFSET UNITYSDK_OFFSET(0x8DD09E0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0x8DD3980)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_707355BB5CCD728C_OFFSET UNITYSDK_OFFSET(0x8DD3760)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_7A75AFE63B6F101E_OFFSET UNITYSDK_OFFSET(0x8DD2730)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x8DD33E0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x8DD3A10)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x8DD2780)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_8D2B102784FDEE2D_OFFSET UNITYSDK_OFFSET(0x8DD23C0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_9A6D0FEF00DFD311_OFFSET UNITYSDK_OFFSET(0x8DD2A40)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x8DD0C80)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x8DD3610)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x8DD3660)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x8DD35C0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x8DD3090)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0x8DD3B20)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_C57DEE02E153FEEE_OFFSET UNITYSDK_OFFSET(0x8DD2330)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x8DD36B0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x8DD3130)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x8DD3910)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x8DD1BD0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x8DD3700)
#define CLASS_2_7994F57D2C133FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD38A0)
#define CLASS_2_7994F57D2C133FDF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DD38B0)

inline static constexpr unsigned int Class_2_7994F57D2C133FDF_TypeDefinitionIndex = 49100;

class Class_2_7994F57D2C133FDF : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>* Field_2_6; // 0x10
	::Class_1_64D890C466F37235* Field_2_0; // 0x18
	::RPG::Client::AdventurePhase* Field_2_1; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_7; // 0x28
	::RPG::Client::MapRotationInfo* Field_2_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::ValueTuple_3<::System::UInt32, ::System::String*, ::System::String*>>* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_2_4; // 0x40
	::RPG::Client::MapDef* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5CCCEEABA4778486(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_5CCCEEABA4778486_OFFSET))(this, a1);
	}

	::System::Void Method_2_14104E9B8332C0FC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_14104E9B8332C0FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C57DEE02E153FEEE(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_C57DEE02E153FEEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D2B102784FDEE2D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_8D2B102784FDEE2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A75AFE63B6F101E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_7A75AFE63B6F101E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6D0FEF00DFD311(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_9A6D0FEF00DFD311_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1E385C0D8ECA4821(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_1E385C0D8ECA4821_OFFSET))(this, a1);
	}

	::System::Void Method_2_527CB1D57186E828(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_527CB1D57186E828_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2397BE1B090A06CF(::RPG::GameCore::GameEntity* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_2397BE1B090A06CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	static ::System::Boolean Method_2_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_C0FF32B4D2022F8C_OFFSET))(a1);
	}

	::System::Boolean Method_2_707355BB5CCD728C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_707355BB5CCD728C_OFFSET))(this, a1);
	}

	::System::Void Method_2_30627B12AF29EE9A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_30627B12AF29EE9A_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_39403F1F919F447A(::System::UInt32 P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_39403F1F919F447A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}
};
