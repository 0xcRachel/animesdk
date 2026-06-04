#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PauseRegionManagerReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/RegionVisualStateV2Mode.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_616F89B5F43D1E61;
class Class_1_CEDC0206E1A3EA8E;
class Class_1_D256EDA05CFBDF64;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RegionManagerDebugMono; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRegionCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x1353D030)
#define CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x1353D000)
#define CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET UNITYSDK_OFFSET(0x1353CFE0)
#define CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x1353D070)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x1353A410)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x135385A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0AC1A67F263CD5B2_OFFSET UNITYSDK_OFFSET(0x1353BAA0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x13538620)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1408C4EC15DBC35E_OFFSET UNITYSDK_OFFSET(0x1353D090)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_1_OFFSET UNITYSDK_OFFSET(0x13535F40)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_OFFSET UNITYSDK_OFFSET(0x13535ED0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13536B80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x13535E80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1353CFD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET UNITYSDK_OFFSET(0x1353CEA0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2A1D952CF4B4841A_OFFSET UNITYSDK_OFFSET(0x13536AB0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x1353BB60)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET UNITYSDK_OFFSET(0x13536E70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x13538190)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_3CE3888623737EB0_OFFSET UNITYSDK_OFFSET(0x13538760)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET UNITYSDK_OFFSET(0x135366D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_4239FC7F38584387_OFFSET UNITYSDK_OFFSET(0x13536CD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_42AB92ACE9589046_OFFSET UNITYSDK_OFFSET(0x1353BBF0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_69A655D60FED9096_OFFSET UNITYSDK_OFFSET(0x135378C0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_78A69BBDCB1FA27A_OFFSET UNITYSDK_OFFSET(0x13536430)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_7918FD9812DA1EC6_OFFSET UNITYSDK_OFFSET(0x1353B3D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x13539A60)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_1_OFFSET UNITYSDK_OFFSET(0x13535D00)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_2_OFFSET UNITYSDK_OFFSET(0x13535D80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_3_OFFSET UNITYSDK_OFFSET(0x13535E00)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0x13535C80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_977363C43A88A54F_OFFSET UNITYSDK_OFFSET(0x135364D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x13536D20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET UNITYSDK_OFFSET(0x13536030)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET UNITYSDK_OFFSET(0x13535FB0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0x135356D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_AA8D34EB42413671_OFFSET UNITYSDK_OFFSET(0x1353BCF0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13536C20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B4C5013482293259_OFFSET UNITYSDK_OFFSET(0x1353BC70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET UNITYSDK_OFFSET(0x135359B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x135357E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_C0CFDE2355F2B2ED_OFFSET UNITYSDK_OFFSET(0x135360B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1353B9D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13536BE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x1353D020)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D7E7B17A71976D23_OFFSET UNITYSDK_OFFSET(0x13535BF0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D80E77267CCBA66A_OFFSET UNITYSDK_OFFSET(0x1353A590)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D9E62CB89C4A78F1_OFFSET UNITYSDK_OFFSET(0x13535880)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E138663013B7F6C5_OFFSET UNITYSDK_OFFSET(0x1353D060)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET UNITYSDK_OFFSET(0x1353C250)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E90A8A4A64A324ED_OFFSET UNITYSDK_OFFSET(0x13535410)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1353D050)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET UNITYSDK_OFFSET(0x1353AC70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x13535680)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x135353D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_FC3D01938DB4F220_OFFSET UNITYSDK_OFFSET(0x1353BA10)
#define CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x1353D040)
#define CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x1353D010)
#define CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET UNITYSDK_OFFSET(0x1353CFF0)
#define CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x1353D080)
#define CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1353D0A0)
#define CLASS_1_3948F09825CE1BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x13536F10)

inline static constexpr unsigned int Class_1_3948F09825CE1BA8_TypeDefinitionIndex = 58160;

class Class_1_3948F09825CE1BA8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x3B570);
	}
	static ::RPG::Client::RegionVisualStateV2Mode* StaticGet_Field_1_1()
	{
		return (::RPG::Client::RegionVisualStateV2Mode*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0xB770);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0xB774);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0xB775);
	}
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurrentActiveAndConnectionRegionsIDs_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_8; // 0x30
	::UnityEngine::GameObject* Field_1_9; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_10; // 0x40
	::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*>* Field_1_11; // 0x48
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_12; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_616F89B5F43D1E61*>* Field_1_14; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_616F89B5F43D1E61*>* Field_1_15; // 0x68
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_16; // 0x70
	::RPG::Client::Stage* Field_1_17; // 0x78
	::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>* Field_1_18; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_616F89B5F43D1E61*>* Field_1_19; // 0x88
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_20; // 0x90
	::System::Action_1<::Class_1_616F89B5F43D1E61*>* Field_1_21; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_22; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Field_1_23; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Field_1_24; // 0xB0
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_25; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>*>* Field_1_26; // 0xC0
	::Class_1_616F89B5F43D1E61* Field_1_27; // 0xC8
	::RPG::GameCore::StageRegionCollection* Field_1_28; // 0xD0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D256EDA05CFBDF64*>* Field_1_29; // 0xD8
	::RPG::Client::RegionManagerDebugMono* Field_1_30; // 0xE0
	::System::Action_1<::Class_1_616F89B5F43D1E61*>* Field_1_31; // 0xE8
	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Field_1_32; // 0xF0
	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Field_1_33; // 0xF8
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_34; // 0x100
	::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* Field_1_35; // 0x108
	::Class_1_CEDC0206E1A3EA8E* Field_1_36; // 0x110
	::RPG::Client::ReasonBool_1<::RPG::Client::PauseRegionManagerReason> Field_1_37; // 0x118
	::System::UInt64 Field_1_38; // 0x120
	::System::Boolean _SourceDistUseRegionV1_k__BackingField; // 0x128
	::System::Boolean _HasRegion_k__BackingField; // 0x129
	::System::Boolean Field_1_41; // 0x12A
	::System::Boolean _EnableGroupRegionStreaming_k__BackingField; // 0x12B
	::System::Boolean Field_1_43; // 0x12C
	::System::Boolean Field_1_44; // 0x12D
	::System::UInt64 Field_1_45; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET))();
	}

	::Class_1_CEDC0206E1A3EA8E* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CEDC0206E1A3EA8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_E90A8A4A64A324ED(::Class_1_DE4C6B309308A230* a1, ::Class_1_616F89B5F43D1E61* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::Class_1_616F89B5F43D1E61*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E90A8A4A64A324ED_OFFSET))(this, a1, a2);
	}

	::Class_1_616F89B5F43D1E61* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::Class_1_616F89B5F43D1E61* Method_1_A85A5A4F484E8E77(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET))(this, a1);
	}

	static ::Class_1_616F89B5F43D1E61* Method_1_D9E62CB89C4A78F1(::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D9E62CB89C4A78F1_OFFSET))(a1, a2);
	}

	::Class_1_616F89B5F43D1E61* Method_1_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA7208D5810564A8(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7E7B17A71976D23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D7E7B17A71976D23_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5(::System::Action_1<::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5_1(::System::Action_1<::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5_2(::System::Action_1<::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5_3(::System::Action_1<::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_8290F76E5BF655A5_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_1BA8221723B2A0E3(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BA8221723B2A0E3_1(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B(::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B_1(::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0CFDE2355F2B2ED(::System::Action_3<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_C0CFDE2355F2B2ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_977363C43A88A54F(::System::Action_3<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_977363C43A88A54F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_418875B112A8CF2C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_2A1D952CF4B4841A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2A1D952CF4B4841A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::RPG::Client::RegionVisualStateV2Mode Method_1_4239FC7F38584387(::RPG::Client::RegionVisualStateV2Mode a1)
	{
		return ((::RPG::Client::RegionVisualStateV2Mode(*)(::RPG::Client::RegionVisualStateV2Mode))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_4239FC7F38584387_OFFSET))(a1);
	}

	static ::Class_1_3948F09825CE1BA8* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_3948F09825CE1BA8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::RPG::GameCore::StageRegionCollection* Method_1_394905343968AA47(::System::String* a1)
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET))(a1);
	}

	::System::Void Method_1_69A655D60FED9096(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_69A655D60FED9096_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D80E77267CCBA66A(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D80E77267CCBA66A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_FC3D01938DB4F220(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_FC3D01938DB4F220_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AC1A67F263CD5B2(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0AC1A67F263CD5B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_78A69BBDCB1FA27A(::System::UInt32 a1, ::Class_1_616F89B5F43D1E61*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_616F89B5F43D1E61*&))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_78A69BBDCB1FA27A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CE3888623737EB0(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_3CE3888623737EB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7918FD9812DA1EC6(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_7918FD9812DA1EC6_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_AA8D34EB42413671(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_AA8D34EB42413671_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E6A156CCCF0451F6(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3FEE5E138A4E64E(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_42AB92ACE9589046(::Class_1_616F89B5F43D1E61* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_42AB92ACE9589046_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B4C5013482293259(::Class_1_616F89B5F43D1E61* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B4C5013482293259_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_2964439C006AF9F5()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET))(this);
	}

	::Class_1_616F89B5F43D1E61* Method_1_24748FC20F375725()
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_616F89B5F43D1E61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean get_HasRegion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET))(this);
	}

	::System::Void set_HasRegion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_EnableGroupRegionStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this);
	}

	::System::Void set_EnableGroupRegionStreaming(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_CurrentActiveAndConnectionRegionsIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this);
	}

	::System::Void set_CurrentActiveAndConnectionRegionsIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionCollection* Method_1_E138663013B7F6C5()
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E138663013B7F6C5_OFFSET))(this);
	}

	::System::Boolean get_SourceDistUseRegionV1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET))(this);
	}

	::System::Void set_SourceDistUseRegionV1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* Method_1_1408C4EC15DBC35E()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1408C4EC15DBC35E_OFFSET))(this);
	}
};
