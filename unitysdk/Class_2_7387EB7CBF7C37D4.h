#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C3183153408A386B;
class Class_2_15C1107F59D2E68D;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7387EB7CBF7C37D4_GET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x16BF24F0)
#define CLASS_2_7387EB7CBF7C37D4_GET_INFO_OFFSET UNITYSDK_OFFSET(0x16BF0CC0)
#define CLASS_2_7387EB7CBF7C37D4_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x16BF0C50)
#define CLASS_2_7387EB7CBF7C37D4_GET_MODE_OFFSET UNITYSDK_OFFSET(0x16BF0CB0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_01C30F9210A77953_OFFSET UNITYSDK_OFFSET(0x16BF26A0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_0AB3ACB6E840E9A1_OFFSET UNITYSDK_OFFSET(0x16BF2770)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_0D7B5DCCDE94E1A3_OFFSET UNITYSDK_OFFSET(0x16BF2190)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_1B4418493CBE7E89_OFFSET UNITYSDK_OFFSET(0x16BF1560)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_1BB9C827421A05BD_OFFSET UNITYSDK_OFFSET(0x16BF23E0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x16BF27F0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_4073655A396E5576_1_OFFSET UNITYSDK_OFFSET(0x16BF2620)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_4073655A396E5576_OFFSET UNITYSDK_OFFSET(0x16BF25A0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x16BF1E50)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x16BF0E40)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_61FD66D870E9DE3E_OFFSET UNITYSDK_OFFSET(0x16BF1FB0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x16BF1880)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x16BF1CA0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_84816770B063DB77_1_OFFSET UNITYSDK_OFFSET(0x16BF0F00)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_84816770B063DB77_OFFSET UNITYSDK_OFFSET(0x16BF0D80)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_9F93A4AC46D6E7E9_OFFSET UNITYSDK_OFFSET(0x16BF10F0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x16BF1D50)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_AD3AA2A4D224BFF3_OFFSET UNITYSDK_OFFSET(0x16BF2200)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_B1971FCD21F5B2F8_OFFSET UNITYSDK_OFFSET(0x16BF1180)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x16BF1D00)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_C3B7C579BBD45F06_OFFSET UNITYSDK_OFFSET(0x16BF0FC0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x16BF12A0)
#define CLASS_2_7387EB7CBF7C37D4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16BF2510)
#define CLASS_2_7387EB7CBF7C37D4_SET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x16BF2500)
#define CLASS_2_7387EB7CBF7C37D4__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF0AE0)
#define CLASS_2_7387EB7CBF7C37D4___IFIXBASEPROXY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x16BF2590)
#define CLASS_2_7387EB7CBF7C37D4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x16BF2520)

inline static constexpr unsigned int Class_2_7387EB7CBF7C37D4_TypeDefinitionIndex = 53501;

class Class_2_7387EB7CBF7C37D4 : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::String* _GraphName_k__BackingField; // 0x28
	::RPG::GameCore::FreeStyleTriggerNodeInfo* Field_2_1; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x38
	::RPG::GameCore::FreeStyleTriggerGraphInfo* Field_2_3; // 0x40
	::System::Random* Field_2_4; // 0x48
	::Class_2_15C1107F59D2E68D* Field_2_5; // 0x50
	::Struct_2_648594091F1A68D6 Field_2_6; // 0x58
	::System::Boolean Field_2_7; // 0x78
	::System::Single Field_2_8; // 0x7C

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_GET_ISPLAYING_OFFSET))(this);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_84816770B063DB77(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_84816770B063DB77_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_84816770B063DB77_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_84816770B063DB77_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C3B7C579BBD45F06(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_C3B7C579BBD45F06_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F93A4AC46D6E7E9(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_9F93A4AC46D6E7E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1971FCD21F5B2F8(::System::String* a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_B1971FCD21F5B2F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_1B4418493CBE7E89(::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_1B4418493CBE7E89_OFFSET))(this, a1);
	}

	::System::Void Method_2_61FD66D870E9DE3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_61FD66D870E9DE3E_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_0D7B5DCCDE94E1A3()
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_0D7B5DCCDE94E1A3_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_1BB9C827421A05BD(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_1BB9C827421A05BD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_AD3AA2A4D224BFF3(::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_AD3AA2A4D224BFF3_OFFSET))(this, a1);
	}

	::System::String* get_GraphName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_GET_GRAPHNAME_OFFSET))(this);
	}

	::System::Void set_GraphName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_SET_GRAPHNAME_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* __iFixBaseProxy_get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4___IFIXBASEPROXY_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_4073655A396E5576(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_4073655A396E5576_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4073655A396E5576_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_4073655A396E5576_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_01C30F9210A77953(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_01C30F9210A77953_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0AB3ACB6E840E9A1(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_0AB3ACB6E840E9A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7387EB7CBF7C37D4_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
