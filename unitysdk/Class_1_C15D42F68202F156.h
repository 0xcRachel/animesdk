#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_0_16E4307DCC419505_309;
class Class_1_303D5A33D1401D59;
class Class_1_616F89B5F43D1E61;
class Class_1_C15D42F68202F156_Class_1_191036C5664F0792;
class Class_1_C15D42F68202F156_Class_1_29346FA79C775DFC;
class Class_1_C15D42F68202F156_Class_1_6C0E0714F0095639;
class Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA;
class PreviewTrackCamera;
class TrainPartyCameraBlend;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemConfig; }
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C15D42F68202F156_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13FCD810)
#define CLASS_1_C15D42F68202F156_METHOD_1_0167890C9D885AFA_OFFSET UNITYSDK_OFFSET(0x13FD4E80)
#define CLASS_1_C15D42F68202F156_METHOD_1_022185F96633E24B_OFFSET UNITYSDK_OFFSET(0x13FD4300)
#define CLASS_1_C15D42F68202F156_METHOD_1_046253EAE7F8F964_OFFSET UNITYSDK_OFFSET(0x13FD2060)
#define CLASS_1_C15D42F68202F156_METHOD_1_0761DBE95706A568_OFFSET UNITYSDK_OFFSET(0x13FD31F0)
#define CLASS_1_C15D42F68202F156_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x13FCF5E0)
#define CLASS_1_C15D42F68202F156_METHOD_1_08D1E655AA16026D_OFFSET UNITYSDK_OFFSET(0x13FD3370)
#define CLASS_1_C15D42F68202F156_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x13FCE380)
#define CLASS_1_C15D42F68202F156_METHOD_1_0E66A936D3C7048B_OFFSET UNITYSDK_OFFSET(0x13FD0140)
#define CLASS_1_C15D42F68202F156_METHOD_1_1518E4B2317EB380_OFFSET UNITYSDK_OFFSET(0x13FD2AE0)
#define CLASS_1_C15D42F68202F156_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x13FCBC80)
#define CLASS_1_C15D42F68202F156_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x13FCE200)
#define CLASS_1_C15D42F68202F156_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x13FCE020)
#define CLASS_1_C15D42F68202F156_METHOD_1_314748CADBE17357_OFFSET UNITYSDK_OFFSET(0x13FCD030)
#define CLASS_1_C15D42F68202F156_METHOD_1_322305E263B00C3F_OFFSET UNITYSDK_OFFSET(0x13FCBED0)
#define CLASS_1_C15D42F68202F156_METHOD_1_3311DDE5F1FA2FEE_OFFSET UNITYSDK_OFFSET(0x13FCC200)
#define CLASS_1_C15D42F68202F156_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x13FCB8B0)
#define CLASS_1_C15D42F68202F156_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13FCDFC0)
#define CLASS_1_C15D42F68202F156_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x13FD4420)
#define CLASS_1_C15D42F68202F156_METHOD_1_53C19D54FAFB9954_OFFSET UNITYSDK_OFFSET(0x13FD0EA0)
#define CLASS_1_C15D42F68202F156_METHOD_1_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x13FCFA30)
#define CLASS_1_C15D42F68202F156_METHOD_1_5A12C00C2BBA43B1_OFFSET UNITYSDK_OFFSET(0x13FCC720)
#define CLASS_1_C15D42F68202F156_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x13FCE880)
#define CLASS_1_C15D42F68202F156_METHOD_1_617511D2527917DF_OFFSET UNITYSDK_OFFSET(0x13FD11C0)
#define CLASS_1_C15D42F68202F156_METHOD_1_6248BDDF38E2649E_OFFSET UNITYSDK_OFFSET(0x13FD06C0)
#define CLASS_1_C15D42F68202F156_METHOD_1_672A0099EFAD8FCE_OFFSET UNITYSDK_OFFSET(0x13FD4150)
#define CLASS_1_C15D42F68202F156_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x13FCF140)
#define CLASS_1_C15D42F68202F156_METHOD_1_68B181859C0833E2_OFFSET UNITYSDK_OFFSET(0x13FD2470)
#define CLASS_1_C15D42F68202F156_METHOD_1_68B794CF5749CE0A_OFFSET UNITYSDK_OFFSET(0x13FD1850)
#define CLASS_1_C15D42F68202F156_METHOD_1_6DEDB554CFF456B9_OFFSET UNITYSDK_OFFSET(0x13FCEE30)
#define CLASS_1_C15D42F68202F156_METHOD_1_6DF8E2E2BDB874D5_OFFSET UNITYSDK_OFFSET(0x13FD3A60)
#define CLASS_1_C15D42F68202F156_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x13FD3DE0)
#define CLASS_1_C15D42F68202F156_METHOD_1_6F62FFC062EE0C3D_OFFSET UNITYSDK_OFFSET(0x13FD5680)
#define CLASS_1_C15D42F68202F156_METHOD_1_76475A8B2C3EBBDC_OFFSET UNITYSDK_OFFSET(0x13FD1040)
#define CLASS_1_C15D42F68202F156_METHOD_1_77A1FE99BE13DCF2_OFFSET UNITYSDK_OFFSET(0x13FD1700)
#define CLASS_1_C15D42F68202F156_METHOD_1_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13FCD620)
#define CLASS_1_C15D42F68202F156_METHOD_1_78B6B08902C9ECAF_OFFSET UNITYSDK_OFFSET(0x13FD3E60)
#define CLASS_1_C15D42F68202F156_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x13FCE560)
#define CLASS_1_C15D42F68202F156_METHOD_1_8CF454EE2816B593_OFFSET UNITYSDK_OFFSET(0x13FD0B20)
#define CLASS_1_C15D42F68202F156_METHOD_1_8DBA79648044F9B1_OFFSET UNITYSDK_OFFSET(0x13FD09A0)
#define CLASS_1_C15D42F68202F156_METHOD_1_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x13FD5350)
#define CLASS_1_C15D42F68202F156_METHOD_1_924FBA0F8C479045_OFFSET UNITYSDK_OFFSET(0x13FD4970)
#define CLASS_1_C15D42F68202F156_METHOD_1_9AD043FF7578EFB2_OFFSET UNITYSDK_OFFSET(0x13FD0770)
#define CLASS_1_C15D42F68202F156_METHOD_1_A16653A71F65D5D5_OFFSET UNITYSDK_OFFSET(0x13FD4580)
#define CLASS_1_C15D42F68202F156_METHOD_1_A3F7FF00218A0311_OFFSET UNITYSDK_OFFSET(0x13FCE610)
#define CLASS_1_C15D42F68202F156_METHOD_1_A65AC190C0D0526C_OFFSET UNITYSDK_OFFSET(0x13FD3C90)
#define CLASS_1_C15D42F68202F156_METHOD_1_B269B245CF3BE93A_OFFSET UNITYSDK_OFFSET(0x13FD5210)
#define CLASS_1_C15D42F68202F156_METHOD_1_B2CDCB4B533E312F_OFFSET UNITYSDK_OFFSET(0x13FD2E00)
#define CLASS_1_C15D42F68202F156_METHOD_1_BED2D94D2E9B6565_OFFSET UNITYSDK_OFFSET(0x13FCE920)
#define CLASS_1_C15D42F68202F156_METHOD_1_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x13FCF6F0)
#define CLASS_1_C15D42F68202F156_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0x13FD50A0)
#define CLASS_1_C15D42F68202F156_METHOD_1_CA9A97F28B72FA59_OFFSET UNITYSDK_OFFSET(0x13FCEF70)
#define CLASS_1_C15D42F68202F156_METHOD_1_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x13FCBF20)
#define CLASS_1_C15D42F68202F156_METHOD_1_DA71DA6FDD780977_OFFSET UNITYSDK_OFFSET(0x13FD4C10)
#define CLASS_1_C15D42F68202F156_METHOD_1_DBC5F3BB0E348F90_OFFSET UNITYSDK_OFFSET(0x13FD5500)
#define CLASS_1_C15D42F68202F156_METHOD_1_DCDB6405B94C126D_OFFSET UNITYSDK_OFFSET(0x13FD1E60)
#define CLASS_1_C15D42F68202F156_METHOD_1_DF74391877A986A7_OFFSET UNITYSDK_OFFSET(0x13FD3FA0)
#define CLASS_1_C15D42F68202F156_METHOD_1_E48C3ABE943C2116_OFFSET UNITYSDK_OFFSET(0x13FCD420)
#define CLASS_1_C15D42F68202F156_METHOD_1_E6C4EA0B9040D600_OFFSET UNITYSDK_OFFSET(0x13FCF3C0)
#define CLASS_1_C15D42F68202F156_METHOD_1_F49CE2A420D0D523_OFFSET UNITYSDK_OFFSET(0x13FD4B60)
#define CLASS_1_C15D42F68202F156_METHOD_1_FC637D7AB4A81D8C_OFFSET UNITYSDK_OFFSET(0x13FD1930)
#define CLASS_1_C15D42F68202F156_METHOD_1_FCB1E39FE3773F4E_OFFSET UNITYSDK_OFFSET(0x13FD2C10)
#define CLASS_1_C15D42F68202F156__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FD5880)
#define CLASS_1_C15D42F68202F156__CTOR_OFFSET UNITYSDK_OFFSET(0x13FCAFE0)
#define CLASS_1_C15D42F68202F156__ENTERBUILDCAMERA_B__4_0_OFFSET UNITYSDK_OFFSET(0x13FD58A0)

inline static constexpr unsigned int Class_1_C15D42F68202F156_TypeDefinitionIndex = 56290;

class Class_1_C15D42F68202F156 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xA360);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xA364);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C15D42F68202F156_TypeDefinitionIndex)->GetStaticField(0xA368);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C15D42F68202F156_Class_1_29346FA79C775DFC*>* Field_1_3; // 0x10
	::PreviewTrackCamera* Field_1_4; // 0x18
	::UnityEngine::GameObject* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_1_6; // 0x28
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_7; // 0x30
	::RPG::Client::NotifyHandler* Field_1_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyBuildItemConfig*>* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*>* Field_1_10; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x50
	::UnityEngine::Transform* Field_1_12; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_6C0E0714F0095639*>* Field_1_13; // 0x60
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_14; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792*>* Field_1_15; // 0x70
	::RPG::Client::Stage* Field_1_16; // 0x78
	::System::Boolean Field_1_17; // 0x80
	::System::Boolean Field_1_18; // 0x81
	::System::Boolean Field_1_19; // 0x82
	::System::Boolean Field_1_20; // 0x83
	::System::UInt32 Field_1_21; // 0x84
	::System::UInt32 Field_1_22; // 0x88
	::System::UInt32 Field_1_23; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6DEDB554CFF456B9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6DEDB554CFF456B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_0E66A936D3C7048B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0E66A936D3C7048B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53C19D54FAFB9954(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_53C19D54FAFB9954_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_617511D2527917DF(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_617511D2527917DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_1_DCDB6405B94C126D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DCDB6405B94C126D_OFFSET))(this, a1);
	}

	::System::Void Method_1_68B181859C0833E2(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68B181859C0833E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_1_1518E4B2317EB380(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_1518E4B2317EB380_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_B2CDCB4B533E312F(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_B2CDCB4B533E312F_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_0761DBE95706A568(::System::UInt32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0761DBE95706A568_OFFSET))(this, a1);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_08D1E655AA16026D(::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a1, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a2, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_08D1E655AA16026D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_BED2D94D2E9B6565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_BED2D94D2E9B6565_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DF8E2E2BDB874D5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6DF8E2E2BDB874D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CF454EE2816B593(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_8CF454EE2816B593_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::Cinemachine::CinemachineBrain* Method_1_A65AC190C0D0526C()
	{
		return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_A65AC190C0D0526C_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::TrainPartyCameraBlend* Method_1_8DBA79648044F9B1()
	{
		return ((::TrainPartyCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_8DBA79648044F9B1_OFFSET))(this);
	}

	::System::Void Method_1_9AD043FF7578EFB2(::Class_0_16E4307DCC419505_309* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_9AD043FF7578EFB2_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_6248BDDF38E2649E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6248BDDF38E2649E_OFFSET))(this, a1, a2, a3);
	}

	::PreviewTrackCamera* Method_1_76475A8B2C3EBBDC(::System::UInt32 a1)
	{
		return ((::PreviewTrackCamera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_76475A8B2C3EBBDC_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_78B6B08902C9ECAF()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_78B6B08902C9ECAF_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_022185F96633E24B(::System::UInt32 a1)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_022185F96633E24B_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_672A0099EFAD8FCE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_672A0099EFAD8FCE_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_DF74391877A986A7(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DF74391877A986A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_322305E263B00C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_322305E263B00C3F_OFFSET))(this);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_D4550D9E4433D1A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3311DDE5F1FA2FEE(::RPG::GameCore::TrainPartyBuildBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_3311DDE5F1FA2FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F49CE2A420D0D523(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_F49CE2A420D0D523_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA9A97F28B72FA59(::RPG::GameCore::TrainPartyBuildStaticItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_CA9A97F28B72FA59_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA71DA6FDD780977(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DA71DA6FDD780977_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_0167890C9D885AFA(::System::Int16 a1, ::System::Int16 a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::System::Int16, ::System::Int16, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_0167890C9D885AFA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_314748CADBE17357(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_314748CADBE17357_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E48C3ABE943C2116(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_E48C3ABE943C2116_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77A1FE99BE13DCF2(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_77A1FE99BE13DCF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3F7FF00218A0311(::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_A3F7FF00218A0311_OFFSET))(this, a1);
	}

	::System::Void Method_1_046253EAE7F8F964(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_046253EAE7F8F964_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5A12C00C2BBA43B1(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_5A12C00C2BBA43B1_OFFSET))(this, a1, a2);
	}

	::Class_1_303D5A33D1401D59* Method_1_924FBA0F8C479045(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_924FBA0F8C479045_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B269B245CF3BE93A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_B269B245CF3BE93A_OFFSET))(this, a1);
	}

	::System::Void Method_1_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBC5F3BB0E348F90(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_DBC5F3BB0E348F90_OFFSET))(this, a1);
	}

	::System::Void Method_1_A16653A71F65D5D5(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_A16653A71F65D5D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCB1E39FE3773F4E(::System::UInt32 a1, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_191036C5664F0792*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_FCB1E39FE3773F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_56E8ED155DF34A44_OFFSET))(this);
	}

	::System::Void Method_1_E6C4EA0B9040D600(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_E6C4EA0B9040D600_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F62FFC062EE0C3D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_6F62FFC062EE0C3D_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_68B794CF5749CE0A(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_68B794CF5749CE0A_OFFSET))(a1);
	}

	::System::String* Method_1_FC637D7AB4A81D8C(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_METHOD_1_FC637D7AB4A81D8C_OFFSET))(this, a1);
	}

	::System::Void _EnterBuildCamera_b__4_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156__ENTERBUILDCAMERA_B__4_0_OFFSET))(this, a1);
	}
};
