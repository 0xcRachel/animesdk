#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1AFB3F1F454D0FAD_DeviceInputType.h"
#include "unitysdk/Class_2_72B76AE5602B35F0_NpcShowState.h"
#include "unitysdk/Class_2_72B76AE5602B35F0_NpcStateControlSource.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_5B72BB58011DDDD8;
class Class_1_8A6989C352B0F0F0;
class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_1AFB3F1F454D0FAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF2D190)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_06D1E9AF28B5846F_OFFSET UNITYSDK_OFFSET(0xFF2D500)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xFF2AC10)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_26FB0ED168B56315_OFFSET UNITYSDK_OFFSET(0xFF30110)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFF2CB20)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_36058D2BD68C4484_OFFSET UNITYSDK_OFFSET(0xFF2EEF0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_3789E05CE3C8CF29_OFFSET UNITYSDK_OFFSET(0xFF2C890)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xFF2D080)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xFF2D0C0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0xFF2D110)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0xFF2D150)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFF2D040)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xFF2FB40)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0xFF2E4B0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4707542020D1D7B1_OFFSET UNITYSDK_OFFSET(0xFF2CBC0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4B8CA93386A3DF94_OFFSET UNITYSDK_OFFSET(0xFF2FF60)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4BD913AFB9634F5C_OFFSET UNITYSDK_OFFSET(0xFF2A850)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_54395205D768CD3A_OFFSET UNITYSDK_OFFSET(0xFF2FD70)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0xFF2CEF0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_5CED703307E283E2_OFFSET UNITYSDK_OFFSET(0xFF2EE70)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0xFF2B2C0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_76E370440BCD1F7F_OFFSET UNITYSDK_OFFSET(0xFF2E610)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xFF2F5F0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_909D3C5E0F691F8B_OFFSET UNITYSDK_OFFSET(0xFF2C060)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xFF2BAC0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xFF2FA60)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_98B33FF96A5BD540_OFFSET UNITYSDK_OFFSET(0xFF2E890)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_9AE9D0F1A19E41A8_OFFSET UNITYSDK_OFFSET(0xFF2F140)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xFF2DAA0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0xFF2DB20)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_B815CC8D577760D2_OFFSET UNITYSDK_OFFSET(0xFF2D7D0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_C122055518F63AF1_OFFSET UNITYSDK_OFFSET(0xFF2B0A0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xFF2C920)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_CAE0B6AE1B0E6258_OFFSET UNITYSDK_OFFSET(0xFF2EB20)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_DC56C980598137B4_OFFSET UNITYSDK_OFFSET(0xFF2D680)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_EDB3A77AD5C03CC0_OFFSET UNITYSDK_OFFSET(0xFF2DD90)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F07023084C1C5A2E_OFFSET UNITYSDK_OFFSET(0xFF2E010)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xFF2DCB0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xFF2CAD0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0xFF2F150)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xFF2EBF0)
#define CLASS_1_1AFB3F1F454D0FAD_METHOD_1_FE97A51964212110_OFFSET UNITYSDK_OFFSET(0xFF2E140)
#define CLASS_1_1AFB3F1F454D0FAD__CTOR_OFFSET UNITYSDK_OFFSET(0xFF2A630)

inline static constexpr unsigned int Class_1_1AFB3F1F454D0FAD_TypeDefinitionIndex = 47929;

class Class_1_1AFB3F1F454D0FAD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::System::Int32>* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_15; // 0x18
	::Il2CppArray<::RPG::Client::PartialFlipDeviceComponent*>* Field_1_2; // 0x20
	::Class_1_ECBCF86CDE61CBCA* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*>* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::Class_1_5B72BB58011DDDD8*>* Field_1_0; // 0x38
	::RPG::Client::PartialFlipDeviceComponent* Field_1_3; // 0x40
	::RPG::Client::EraFlipperCommonConfig* Field_1_10; // 0x48
	::System::Boolean Field_1_7; // 0x50
	::System::Boolean Field_1_6; // 0x51
	::System::Boolean Field_1_5; // 0x52
	::System::Boolean Field_1_16; // 0x53
	::System::Boolean Field_1_14; // 0x54
	::System::Boolean Field_1_8; // 0x55
	::System::Boolean Field_1_9; // 0x56
	::Class_1_1AFB3F1F454D0FAD_DeviceInputType Field_1_13; // 0x58
	::System::Int64 Field_1_12; // 0x60

	::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD913AFB9634F5C(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4BD913AFB9634F5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C122055518F63AF1(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_C122055518F63AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_909D3C5E0F691F8B(::Class_1_ECBCF86CDE61CBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_909D3C5E0F691F8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3789E05CE3C8CF29(::RPG::GameCore::EraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_3789E05CE3C8CF29_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4707542020D1D7B1(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4707542020D1D7B1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_5A8B223EA7063738_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_391A84BCD9F51317_4_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_06D1E9AF28B5846F(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_06D1E9AF28B5846F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B815CC8D577760D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_B815CC8D577760D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EDB3A77AD5C03CC0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_EDB3A77AD5C03CC0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F07023084C1C5A2E(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F07023084C1C5A2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE97A51964212110(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*&))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_FE97A51964212110_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_76E370440BCD1F7F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_76E370440BCD1F7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAE0B6AE1B0E6258(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_CAE0B6AE1B0E6258_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CED703307E283E2(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_5CED703307E283E2_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> Method_1_36058D2BD68C4484()
	{
		return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_36058D2BD68C4484_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::PartialFlipDeviceComponent* Method_1_9AE9D0F1A19E41A8()
	{
		return ((::RPG::Client::PartialFlipDeviceComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_9AE9D0F1A19E41A8_OFFSET))(this);
	}

	::System::Void Method_1_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B33FF96A5BD540(::Class_2_72B76AE5602B35F0_NpcShowState a1, ::Class_2_72B76AE5602B35F0_NpcStateControlSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72B76AE5602B35F0_NpcShowState, ::Class_2_72B76AE5602B35F0_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_98B33FF96A5BD540_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::System::Void Method_1_54395205D768CD3A(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_54395205D768CD3A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4B8CA93386A3DF94(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_4B8CA93386A3DF94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC56C980598137B4(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_DC56C980598137B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_26FB0ED168B56315(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD_METHOD_1_26FB0ED168B56315_OFFSET))(this, a1);
	}
};
