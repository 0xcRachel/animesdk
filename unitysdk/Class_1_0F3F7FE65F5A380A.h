#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_21;
class Class_1_859C8B90384D9B45;
class Class_1_87EAC1A8F0E1AE21;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0F3F7FE65F5A380A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104BFED0)
#define CLASS_1_0F3F7FE65F5A380A_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x104C1C40)
#define CLASS_1_0F3F7FE65F5A380A_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x104C1C60)
#define CLASS_1_0F3F7FE65F5A380A_GET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0x104C1C80)
#define CLASS_1_0F3F7FE65F5A380A_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x104C1CA0)
#define CLASS_1_0F3F7FE65F5A380A_GET_TIPINFO_OFFSET UNITYSDK_OFFSET(0x104C1CC0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_040ED73F13BA976A_OFFSET UNITYSDK_OFFSET(0x104C0BE0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_09526F48C04056C9_OFFSET UNITYSDK_OFFSET(0x104C07E0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_0F20B0468F2B748D_OFFSET UNITYSDK_OFFSET(0x104C1AC0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x104C0720)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_1715C2F577838A97_OFFSET UNITYSDK_OFFSET(0x104C1300)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_1B4C61D50564D4ED_OFFSET UNITYSDK_OFFSET(0x104C16A0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x104C0D40)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_5446250EE72EFCF1_OFFSET UNITYSDK_OFFSET(0x104C0E20)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_5AFF66468E5869A6_OFFSET UNITYSDK_OFFSET(0x104C11A0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_5F85A4993CA2226B_OFFSET UNITYSDK_OFFSET(0x104C0770)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_64497D8887A24FCC_OFFSET UNITYSDK_OFFSET(0x104C0AF0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_664B4BD12A9D1EA2_OFFSET UNITYSDK_OFFSET(0x104C1620)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_965CBA9A081F5848_OFFSET UNITYSDK_OFFSET(0x104C0010)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x104C1B80)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_9D95F04619BFD598_1_OFFSET UNITYSDK_OFFSET(0x104C09D0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_9D95F04619BFD598_OFFSET UNITYSDK_OFFSET(0x104C1500)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_AA94F48ED4139C2A_1_OFFSET UNITYSDK_OFFSET(0x104C13A0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_AA94F48ED4139C2A_OFFSET UNITYSDK_OFFSET(0x104C0860)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_D5782CE7EA1A45DE_OFFSET UNITYSDK_OFFSET(0x104C0DB0)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_DC24E4B1D7A78C82_OFFSET UNITYSDK_OFFSET(0x104C0180)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_E592BD8E258A34F9_OFFSET UNITYSDK_OFFSET(0x104C1430)
#define CLASS_1_0F3F7FE65F5A380A_METHOD_1_FF1AE5FBA194EFE6_OFFSET UNITYSDK_OFFSET(0x104C08E0)
#define CLASS_1_0F3F7FE65F5A380A_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x104C1C50)
#define CLASS_1_0F3F7FE65F5A380A_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x104C1C70)
#define CLASS_1_0F3F7FE65F5A380A_SET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0x104C1C90)
#define CLASS_1_0F3F7FE65F5A380A_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x104C1CB0)
#define CLASS_1_0F3F7FE65F5A380A_SET_TIPINFO_OFFSET UNITYSDK_OFFSET(0x104C1CD0)
#define CLASS_1_0F3F7FE65F5A380A__CTOR_OFFSET UNITYSDK_OFFSET(0x104BFE20)

inline static constexpr unsigned int Class_1_0F3F7FE65F5A380A_TypeDefinitionIndex = 55182;

class Class_1_0F3F7FE65F5A380A : public ::System::Object
{
public:
	::Class_1_859C8B90384D9B45* Field_1_7; // 0x10
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x18
	::Class_1_87EAC1A8F0E1AE21* _TipInfo_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_859C8B90384D9B45*>* Field_1_8; // 0x28
	::Class_1_83665B095F1535B5_21* Field_1_12; // 0x30
	::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x38
	::System::Int32 Field_1_11; // 0x3C
	::System::Int32 Field_1_9; // 0x40
	::System::Boolean _PhotoGraphConditionComplete_k__BackingField; // 0x44
	::System::Boolean Field_1_0; // 0x45
	::System::Boolean Field_1_1; // 0x46
	::RPG::GameCore::StringHash _FlagName_k__BackingField; // 0x48
	::System::Int32 Field_1_10; // 0x4C

	::System::Void _ctor(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_965CBA9A081F5848(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_965CBA9A081F5848_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean Method_1_5F85A4993CA2226B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_5F85A4993CA2226B_OFFSET))(this);
	}

	::System::Boolean Method_1_09526F48C04056C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_09526F48C04056C9_OFFSET))(this);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_AA94F48ED4139C2A_OFFSET))(this);
	}

	::System::Boolean Method_1_64497D8887A24FCC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_64497D8887A24FCC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_D5782CE7EA1A45DE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_D5782CE7EA1A45DE_OFFSET))(this);
	}

	::Class_1_87EAC1A8F0E1AE21* Method_1_5446250EE72EFCF1(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_5446250EE72EFCF1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E592BD8E258A34F9(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_E592BD8E258A34F9_OFFSET))(this, a1, a2);
	}

	::Class_1_859C8B90384D9B45* Method_1_DC24E4B1D7A78C82(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_859C8B90384D9B45* a3)
	{
		return ((::Class_1_859C8B90384D9B45*(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::Class_1_859C8B90384D9B45*))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_DC24E4B1D7A78C82_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5AFF66468E5869A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_5AFF66468E5869A6_OFFSET))(this);
	}

	::System::Void Method_1_1715C2F577838A97(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_1715C2F577838A97_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AA94F48ED4139C2A_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_AA94F48ED4139C2A_1_OFFSET))(this);
	}

	::System::Boolean Method_1_664B4BD12A9D1EA2(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_664B4BD12A9D1EA2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1B4C61D50564D4ED(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_1B4C61D50564D4ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F20B0468F2B748D(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_0F20B0468F2B748D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D95F04619BFD598(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_9D95F04619BFD598_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FF1AE5FBA194EFE6(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_FF1AE5FBA194EFE6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9D95F04619BFD598_1(::Il2CppArray<::Class_1_859C8B90384D9B45*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_9D95F04619BFD598_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_040ED73F13BA976A(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::Class_1_859C8B90384D9B45*>* a3, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::Class_1_859C8B90384D9B45*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_METHOD_1_040ED73F13BA976A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_GET_AIMIDENTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_SET_AIMIDENTIFYTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_SET_CONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::StringHash get_FlagName()
	{
		return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_GET_FLAGNAME_OFFSET))(this);
	}

	::System::Void set_FlagName(::RPG::GameCore::StringHash value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_SET_FLAGNAME_OFFSET))(this, value);
	}

	::System::Boolean get_PhotoGraphConditionComplete()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this);
	}

	::System::Void set_PhotoGraphConditionComplete(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this, value);
	}

	::Class_1_87EAC1A8F0E1AE21* get_TipInfo()
	{
		return ((::Class_1_87EAC1A8F0E1AE21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_GET_TIPINFO_OFFSET))(this);
	}

	::System::Void set_TipInfo(::Class_1_87EAC1A8F0E1AE21* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_0F3F7FE65F5A380A_SET_TIPINFO_OFFSET))(this, value);
	}
};
