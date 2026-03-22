#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_81F92B0B04671207_Struct_2_4BD81F7DF3F0B2E7.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_407;
class Class_1_800B9D8C954C3005;
class Class_1_82297B6AFFE49354_3;
class Class_1_EF7A5DF238C10B96;
class Class_2_BF927CBEA754F6BE;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class EntityHitMotion; }
namespace RPG::GameCore { class HitMotionParams; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_81F92B0B04671207_DISPOSE_OFFSET UNITYSDK_OFFSET(0x841C2D0)
#define CLASS_2_81F92B0B04671207_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x841C260)
#define CLASS_2_81F92B0B04671207_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x841C270)
#define CLASS_2_81F92B0B04671207_GET_MOTIONDELTAMODIFYDEL_OFFSET UNITYSDK_OFFSET(0x841FFA0)
#define CLASS_2_81F92B0B04671207_GET_NEEDSYNCROOTMOTION_OFFSET UNITYSDK_OFFSET(0x841FF10)
#define CLASS_2_81F92B0B04671207_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x841E4C0)
#define CLASS_2_81F92B0B04671207_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x841CD00)
#define CLASS_2_81F92B0B04671207_METHOD_2_16AF7B4CF58A05CE_OFFSET UNITYSDK_OFFSET(0x841F020)
#define CLASS_2_81F92B0B04671207_METHOD_2_2386CB673794F76F_OFFSET UNITYSDK_OFFSET(0x841F220)
#define CLASS_2_81F92B0B04671207_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x841E330)
#define CLASS_2_81F92B0B04671207_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x841E1F0)
#define CLASS_2_81F92B0B04671207_METHOD_2_3260EAC599A4F68A_OFFSET UNITYSDK_OFFSET(0x841C3D0)
#define CLASS_2_81F92B0B04671207_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x841FB60)
#define CLASS_2_81F92B0B04671207_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x841CE20)
#define CLASS_2_81F92B0B04671207_METHOD_2_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x841C930)
#define CLASS_2_81F92B0B04671207_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x841FF30)
#define CLASS_2_81F92B0B04671207_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x841D2A0)
#define CLASS_2_81F92B0B04671207_METHOD_2_5C7853B47665C576_OFFSET UNITYSDK_OFFSET(0x841D300)
#define CLASS_2_81F92B0B04671207_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x841F190)
#define CLASS_2_81F92B0B04671207_METHOD_2_6C45DFFB47F952B7_OFFSET UNITYSDK_OFFSET(0x841F9A0)
#define CLASS_2_81F92B0B04671207_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x841CA50)
#define CLASS_2_81F92B0B04671207_METHOD_2_77D630694D127945_OFFSET UNITYSDK_OFFSET(0x841FE40)
#define CLASS_2_81F92B0B04671207_METHOD_2_7AE56C7F03FD0B99_OFFSET UNITYSDK_OFFSET(0x841C8B0)
#define CLASS_2_81F92B0B04671207_METHOD_2_801CA383A9EE0F50_OFFSET UNITYSDK_OFFSET(0x841D1D0)
#define CLASS_2_81F92B0B04671207_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0x841FA80)
#define CLASS_2_81F92B0B04671207_METHOD_2_8E8A06F73E767BBC_OFFSET UNITYSDK_OFFSET(0x841E730)
#define CLASS_2_81F92B0B04671207_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x841DF70)
#define CLASS_2_81F92B0B04671207_METHOD_2_C33673ACAA2C019A_OFFSET UNITYSDK_OFFSET(0x841E670)
#define CLASS_2_81F92B0B04671207_METHOD_2_D2B801F9F5F49124_OFFSET UNITYSDK_OFFSET(0x841CEF0)
#define CLASS_2_81F92B0B04671207_METHOD_2_D426B391706A2F6A_OFFSET UNITYSDK_OFFSET(0x841DF20)
#define CLASS_2_81F92B0B04671207_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x841FD50)
#define CLASS_2_81F92B0B04671207_METHOD_2_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0x841FF80)
#define CLASS_2_81F92B0B04671207_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x841CB90)
#define CLASS_2_81F92B0B04671207_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x841CE10)
#define CLASS_2_81F92B0B04671207_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x841FEF0)
#define CLASS_2_81F92B0B04671207_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x841E1B0)
#define CLASS_2_81F92B0B04671207_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x841F060)
#define CLASS_2_81F92B0B04671207_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x841C570)
#define CLASS_2_81F92B0B04671207_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x841C810)
#define CLASS_2_81F92B0B04671207_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x841C280)
#define CLASS_2_81F92B0B04671207_SET_MOTIONDELTAMODIFYDEL_OFFSET UNITYSDK_OFFSET(0x841FFB0)
#define CLASS_2_81F92B0B04671207_SET_NEEDSYNCROOTMOTION_OFFSET UNITYSDK_OFFSET(0x841FF20)
#define CLASS_2_81F92B0B04671207__CTOR_OFFSET UNITYSDK_OFFSET(0x841C290)
#define CLASS_2_81F92B0B04671207___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x841FFC0)

inline static constexpr unsigned int Class_2_81F92B0B04671207_TypeDefinitionIndex = 44770;

class Class_2_81F92B0B04671207 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_0_16E4307DCC419505_407* Field_2_17; // 0x18
	::Class_2_BF927CBEA754F6BE* Field_2_24; // 0x20
	::Class_1_82297B6AFFE49354_3* Field_2_15; // 0x28
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x30
	::Class_1_800B9D8C954C3005* Field_2_8; // 0x38
	::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* _MotionDeltaModifyDel_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_374* Field_2_4; // 0x48
	::RPG::GameCore::EntityHitMotion* Field_2_16; // 0x50
	::RPG::GameCore::CharacterModelComponent* Field_2_23; // 0x58
	::UnityEngine::Transform* Field_2_18; // 0x60
	::Struct_2_2B16FFFF87B43037 Field_2_22; // 0x68
	::System::Single Field_2_20; // 0x78
	::System::Single Field_2_19; // 0x7C
	::Class_2_81F92B0B04671207_Struct_2_4BD81F7DF3F0B2E7 Field_2_14; // 0x80
	::System::Single Field_2_11; // 0xB0
	::System::Boolean Field_2_6; // 0xB4
	::System::Boolean Field_2_21; // 0xB5
	::System::Boolean _NeedSyncRootMotion_k__BackingField; // 0xB6
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xB7
	::System::Int32 Field_2_7; // 0xB8
	::RPG::MVector3 Field_2_13; // 0xBC
	::RPG::MVector3 Field_2_10; // 0xC8
	::RPG::MVector3 Field_2_12; // 0xD4
	::System::Int32 Field_2_9; // 0xE0
	::System::Nullable_1<::System::Single> Field_2_2; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207__CTOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void set_EnableAnimatorMoveCallback(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_SET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3260EAC599A4F68A(::Class_0_16E4307DCC419505_374* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::CharacterDataComponent* a3, ::Class_0_16E4307DCC419505_407* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_374*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::CharacterDataComponent*, ::Class_0_16E4307DCC419505_407*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_3260EAC599A4F68A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_7AE56C7F03FD0B99(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_7AE56C7F03FD0B99_OFFSET))(this, a1);
	}

	::System::Void Method_2_368884BBCA3D2697(::Class_1_800B9D8C954C3005* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_800B9D8C954C3005*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_801CA383A9EE0F50(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_801CA383A9EE0F50_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5C7853B47665C576(::RPG::GameCore::HitMotionParams* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HitMotionParams*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_5C7853B47665C576_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::Class_1_800B9D8C954C3005* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_800B9D8C954C3005*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C33673ACAA2C019A(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_C33673ACAA2C019A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TransformComponent* Method_2_16AF7B4CF58A05CE()
	{
		return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_16AF7B4CF58A05CE_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2386CB673794F76F(::System::Single a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_2386CB673794F76F_OFFSET))(this, a1, a2);
	}

	::Class_1_EF7A5DF238C10B96* Method_2_D2B801F9F5F49124()
	{
		return ((::Class_1_EF7A5DF238C10B96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_D2B801F9F5F49124_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_8E8A06F73E767BBC(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_8E8A06F73E767BBC_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_6C45DFFB47F952B7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_6C45DFFB47F952B7_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_867F85CA133E06EB_OFFSET))(a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_77D630694D127945(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_77D630694D127945_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_2_D426B391706A2F6A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_D426B391706A2F6A_OFFSET))(this);
	}

	::System::Boolean get_NeedSyncRootMotion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_GET_NEEDSYNCROOTMOTION_OFFSET))(this);
	}

	::System::Void set_NeedSyncRootMotion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_SET_NEEDSYNCROOTMOTION_OFFSET))(this, value);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_E3FE109D06BE7F76()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_METHOD_2_E3FE109D06BE7F76_OFFSET))(this);
	}

	::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* get_MotionDeltaModifyDel()
	{
		return ((::System::Func_2<::RPG::MVector3, ::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_GET_MOTIONDELTAMODIFYDEL_OFFSET))(this);
	}

	::System::Void set_MotionDeltaModifyDel(::System::Func_2<::RPG::MVector3, ::RPG::MVector3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::MVector3, ::RPG::MVector3>*))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207_SET_MOTIONDELTAMODIFYDEL_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81F92B0B04671207___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
