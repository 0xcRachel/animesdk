#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792;
class Class_1_C4FFB95AA4FB577F_Class_1_29346FA79C775DFC;
class Class_1_C4FFB95AA4FB577F_Class_1_6C0E0714F0095639;
class Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5;
class Class_1_ECBCF86CDE61CBCA;
class PreviewTrackCamera;
class TrainPartyCameraBlend;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
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

#define CLASS_1_C4FFB95AA4FB577F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C65860)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_001D6408137F1F1E_OFFSET UNITYSDK_OFFSET(0x8C67E20)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_01DE8FB64951C088_OFFSET UNITYSDK_OFFSET(0x8C64920)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_022185F96633E24B_OFFSET UNITYSDK_OFFSET(0x8C6B980)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_04C8F82349DC4E83_OFFSET UNITYSDK_OFFSET(0x8C6CA00)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x8C67320)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_0A98D70CB06DD547_OFFSET UNITYSDK_OFFSET(0x8C6A140)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_19B7442A74D19BBF_OFFSET UNITYSDK_OFFSET(0x8C68650)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_1B4187F96A348A7D_OFFSET UNITYSDK_OFFSET(0x8C69AD0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x8C67700)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_2703461EC3882894_OFFSET UNITYSDK_OFFSET(0x8C6C000)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8C63FA0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_29494E979167CE4A_OFFSET UNITYSDK_OFFSET(0x8C69210)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_2F31AEDFB2265E0B_OFFSET UNITYSDK_OFFSET(0x8C6CD50)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_397AFDCBC683E63F_OFFSET UNITYSDK_OFFSET(0x8C641E0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x8C656C0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_4C9F052AE8E41112_OFFSET UNITYSDK_OFFSET(0x8C6BAA0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_516141A54B8DE370_OFFSET UNITYSDK_OFFSET(0x8C684C0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_53C19D54FAFB9954_OFFSET UNITYSDK_OFFSET(0x8C68980)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_5401FF5647F5B620_OFFSET UNITYSDK_OFFSET(0x8C6A930)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_5D2D3F783CD839AE_OFFSET UNITYSDK_OFFSET(0x8C696F0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x8C666C0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_5F6D9CDC992CDDF3_OFFSET UNITYSDK_OFFSET(0x8C650E0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_6248BDDF38E2649E_OFFSET UNITYSDK_OFFSET(0x8C68290)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_65221CD4A9269503_OFFSET UNITYSDK_OFFSET(0x8C66C90)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x8C67430)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_672A0099EFAD8FCE_OFFSET UNITYSDK_OFFSET(0x8C6B7D0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_6DF8E2E2BDB874D5_OFFSET UNITYSDK_OFFSET(0x8C6B040)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x8C6B450)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_71BD3F0BF7CA602C_OFFSET UNITYSDK_OFFSET(0x8C6C560)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_76475A8B2C3EBBDC_OFFSET UNITYSDK_OFFSET(0x8C68B20)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_78B6B08902C9ECAF_OFFSET UNITYSDK_OFFSET(0x8C6B4D0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_7931B2ADFD446F0D_OFFSET UNITYSDK_OFFSET(0x8C65530)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x8C63BF0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x8C65F90)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_8DBA79648044F9B1_OFFSET UNITYSDK_OFFSET(0x8C68340)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_8E3FEBC8010AEB35_OFFSET UNITYSDK_OFFSET(0x8C68CB0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_96A2939A97E26414_OFFSET UNITYSDK_OFFSET(0x8C6A490)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_96BF62E147D3D419_OFFSET UNITYSDK_OFFSET(0x8C67100)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_9B03CD736559ED18_OFFSET UNITYSDK_OFFSET(0x8C66410)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_A0727F544AFBB0C5_OFFSET UNITYSDK_OFFSET(0x8C660F0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_A16653A71F65D5D5_OFFSET UNITYSDK_OFFSET(0x8C6BBC0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_A65AC190C0D0526C_OFFSET UNITYSDK_OFFSET(0x8C6B300)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_ABD781CAE1D41BD7_OFFSET UNITYSDK_OFFSET(0x8C6CBD0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_B050ECED631DF429_OFFSET UNITYSDK_OFFSET(0x8C66750)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_B269B245CF3BE93A_OFFSET UNITYSDK_OFFSET(0x8C6C890)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_BC2B532D3B9882DD_OFFSET UNITYSDK_OFFSET(0x8C66260)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_CA9A97F28B72FA59_OFFSET UNITYSDK_OFFSET(0x8C66E70)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x8C64230)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x8C66F70)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_D9B846FDD99576D5_OFFSET UNITYSDK_OFFSET(0x8C64510)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_DF74391877A986A7_OFFSET UNITYSDK_OFFSET(0x8C6B610)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_F39984E38B384970_OFFSET UNITYSDK_OFFSET(0x8C6C710)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_F49CE2A420D0D523_OFFSET UNITYSDK_OFFSET(0x8C6C1E0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_FCB1E39FE3773F4E_OFFSET UNITYSDK_OFFSET(0x8C6A2A0)
#define CLASS_1_C4FFB95AA4FB577F_METHOD_1_FE71BCE3AD5143E2_OFFSET UNITYSDK_OFFSET(0x8C6C290)
#define CLASS_1_C4FFB95AA4FB577F__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C6CF60)
#define CLASS_1_C4FFB95AA4FB577F__CTOR_OFFSET UNITYSDK_OFFSET(0x8C63410)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F_TypeDefinitionIndex = 48775;

class Class_1_C4FFB95AA4FB577F : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F_TypeDefinitionIndex)->GetStaticField(0x2740);
	}
	static ::System::Single* StaticGet_Field_1_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F_TypeDefinitionIndex)->GetStaticField(0x2744);
	}
	static ::System::Single* StaticGet_Field_1_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F_TypeDefinitionIndex)->GetStaticField(0x2748);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C4FFB95AA4FB577F_Class_1_29346FA79C775DFC*>* Field_1_13; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792*>* Field_1_12; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*>* Field_1_11; // 0x28
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_17; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_14; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::RPG::Client::Stage* Field_1_4; // 0x48
	::PreviewTrackCamera* Field_1_8; // 0x50
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyBuildItemConfig*>* Field_1_9; // 0x60
	::UnityEngine::GameObject* Field_1_5; // 0x68
	::Class_1_C4FFB95AA4FB577F_Class_1_6C0E0714F0095639* Field_1_16; // 0x70
	::System::UInt32 Field_1_2; // 0x78
	::System::Boolean Field_1_15; // 0x7C
	::System::Boolean Field_1_1; // 0x7D
	::System::Boolean Field_1_0; // 0x7E
	::System::Boolean Field_1_3; // 0x7F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65221CD4A9269503(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_65221CD4A9269503_OFFSET))(this, a1);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_001D6408137F1F1E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_001D6408137F1F1E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53C19D54FAFB9954(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_53C19D54FAFB9954_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E3FEBC8010AEB35(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_8E3FEBC8010AEB35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_1B4187F96A348A7D(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_1B4187F96A348A7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0727F544AFBB0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_A0727F544AFBB0C5_OFFSET))(this);
	}

	::System::Void Method_1_0A98D70CB06DD547(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_0A98D70CB06DD547_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_96A2939A97E26414(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_96A2939A97E26414_OFFSET))(this, a1);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_5401FF5647F5B620(::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a1, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a2, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_5401FF5647F5B620_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Method_1_BC2B532D3B9882DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_BC2B532D3B9882DD_OFFSET))(this);
	}

	::System::Void Method_1_B050ECED631DF429(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_B050ECED631DF429_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DF8E2E2BDB874D5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_6DF8E2E2BDB874D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B7442A74D19BBF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_19B7442A74D19BBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::Cinemachine::CinemachineBrain* Method_1_A65AC190C0D0526C()
	{
		return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_A65AC190C0D0526C_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::TrainPartyCameraBlend* Method_1_8DBA79648044F9B1()
	{
		return ((::TrainPartyCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_8DBA79648044F9B1_OFFSET))(this);
	}

	::System::Void Method_1_516141A54B8DE370(::TrainPartyCameraBlend* a1)
	{
		return ((::System::Void(*)(::PVOID, ::TrainPartyCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_516141A54B8DE370_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_6248BDDF38E2649E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_6248BDDF38E2649E_OFFSET))(this, a1, a2, a3);
	}

	::PreviewTrackCamera* Method_1_76475A8B2C3EBBDC(::System::UInt32 a1)
	{
		return ((::PreviewTrackCamera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_76475A8B2C3EBBDC_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_78B6B08902C9ECAF()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_78B6B08902C9ECAF_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_022185F96633E24B(::System::UInt32 a1)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_022185F96633E24B_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_672A0099EFAD8FCE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_672A0099EFAD8FCE_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_DF74391877A986A7(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_DF74391877A986A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_397AFDCBC683E63F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_397AFDCBC683E63F_OFFSET))(this);
	}

	::System::Void Method_1_4C9F052AE8E41112()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_4C9F052AE8E41112_OFFSET))(this);
	}

	::System::Void Method_1_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_D4550D9E4433D1A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9B846FDD99576D5(::RPG::GameCore::TrainPartyBuildBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_D9B846FDD99576D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F49CE2A420D0D523(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_F49CE2A420D0D523_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA9A97F28B72FA59(::RPG::GameCore::TrainPartyBuildStaticItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_CA9A97F28B72FA59_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE71BCE3AD5143E2(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_FE71BCE3AD5143E2_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_71BD3F0BF7CA602C(::System::Int16 a1, ::System::Int16 a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::System::Int16, ::System::Int16, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_71BD3F0BF7CA602C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_5F6D9CDC992CDDF3(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_5F6D9CDC992CDDF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7931B2ADFD446F0D(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_7931B2ADFD446F0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29494E979167CE4A(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_29494E979167CE4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B03CD736559ED18(::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_9B03CD736559ED18_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D2D3F783CD839AE(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_5D2D3F783CD839AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_01DE8FB64951C088(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_01DE8FB64951C088_OFFSET))(this, a1, a2);
	}

	::Class_1_303D5A33D1401D59* Method_1_2703461EC3882894(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_2703461EC3882894_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59* Method_1_F39984E38B384970(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_F39984E38B384970_OFFSET))(this, a1);
	}

	::System::Void Method_1_B269B245CF3BE93A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_B269B245CF3BE93A_OFFSET))(this, a1);
	}

	::System::Void Method_1_04C8F82349DC4E83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_04C8F82349DC4E83_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABD781CAE1D41BD7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_ABD781CAE1D41BD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A16653A71F65D5D5(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_A16653A71F65D5D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCB1E39FE3773F4E(::System::UInt32 a1, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_FCB1E39FE3773F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_96BF62E147D3D419(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_96BF62E147D3D419_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F31AEDFB2265E0B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_METHOD_1_2F31AEDFB2265E0B_OFFSET))(this, a1);
	}
};
