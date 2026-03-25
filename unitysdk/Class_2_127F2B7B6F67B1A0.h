#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68;
class Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00;
class Class_2_36C95D73718D07B1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11833330)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x11836A10)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_39403F1F919F447A_OFFSET UNITYSDK_OFFSET(0x11836E80)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_409D10706EC80D89_OFFSET UNITYSDK_OFFSET(0x11833AA0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_426CA09704D34DB6_OFFSET UNITYSDK_OFFSET(0x11835790)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x11834D20)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0x11836D50)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x118336D0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_79BB1AD99FCC1A4F_OFFSET UNITYSDK_OFFSET(0x11833F80)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET UNITYSDK_OFFSET(0x11834920)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x11833B20)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET UNITYSDK_OFFSET(0x11834130)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x11836DE0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_8B995E6B01D52061_OFFSET UNITYSDK_OFFSET(0x11836B70)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_90C08CCA033A7DE8_OFFSET UNITYSDK_OFFSET(0x11835E70)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x118338F0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x11836C00)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET UNITYSDK_OFFSET(0x11834010)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_BB28EEA006F6B197_OFFSET UNITYSDK_OFFSET(0x11836EF0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x11836B00)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x11836CE0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x11835DB0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET UNITYSDK_OFFSET(0x118356B0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET UNITYSDK_OFFSET(0x118340C0)
#define CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x11836C70)
#define CLASS_2_127F2B7B6F67B1A0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11836C80)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_TypeDefinitionIndex = 49102;

class Class_2_127F2B7B6F67B1A0 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00* Field_2_2; // 0x10
	::RPG::Client::MapRotationInfo* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_8; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::Class_1_64D890C466F37235* Field_2_0; // 0x30
	::Class_2_36C95D73718D07B1* Field_2_6; // 0x38
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_7; // 0x40
	::Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00* Field_2_3; // 0x48
	::RPG::Client::AdventurePhase* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A703BEBEEBA84608(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::System::Void Method_2_409D10706EC80D89(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_409D10706EC80D89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79BB1AD99FCC1A4F(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_79BB1AD99FCC1A4F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB97216C395056F6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80A1D4EEAE413441(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7F96D036B1631510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0F3151B754D3D59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_171A4D4799D0DC21(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B995E6B01D52061(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_8B995E6B01D52061_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_F4A21CEE51B916EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_426CA09704D34DB6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_426CA09704D34DB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_90C08CCA033A7DE8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_90C08CCA033A7DE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_39403F1F919F447A(::System::UInt32 P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_39403F1F919F447A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_BB28EEA006F6B197(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Quaternion P2, ::UnityEngine::Quaternion P3, ::RPG::Client::WorldShiftingReason P4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_BB28EEA006F6B197_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
