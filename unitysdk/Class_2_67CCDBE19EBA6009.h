#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EraEntityType.h"
#include "unitysdk/RPG/Client/EraVisibleReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class ProxyEffectProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_67CCDBE19EBA6009_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x10D723E0)
#define CLASS_2_67CCDBE19EBA6009_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D727B0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x10D74300)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0x10D73170)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_1A05B98B35159C45_OFFSET UNITYSDK_OFFSET(0x10D737C0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_1_OFFSET UNITYSDK_OFFSET(0x10D742A0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_2_OFFSET UNITYSDK_OFFSET(0x10D743B0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_OFFSET UNITYSDK_OFFSET(0x10D74240)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x10D732B0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10D72390)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_3E8209FF824D1D26_OFFSET UNITYSDK_OFFSET(0x10D73F70)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_5F48EF27EF2877CC_OFFSET UNITYSDK_OFFSET(0x10D72910)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_640328229425E189_OFFSET UNITYSDK_OFFSET(0x10D73230)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_6C36047E10D39882_OFFSET UNITYSDK_OFFSET(0x10D73300)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_6D350E9E915B9792_OFFSET UNITYSDK_OFFSET(0x10D71030)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x10D73360)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_731625464DEE752F_OFFSET UNITYSDK_OFFSET(0x10D73C60)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_7BA5C34C54F10DFA_OFFSET UNITYSDK_OFFSET(0x10D71E60)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_93A5D55D2C9F5E06_OFFSET UNITYSDK_OFFSET(0x10D714A0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0x10D72720)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x10D73AB0)
#define CLASS_2_67CCDBE19EBA6009_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D74410)
#define CLASS_2_67CCDBE19EBA6009_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x10D72E30)
#define CLASS_2_67CCDBE19EBA6009_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x10D72C30)
#define CLASS_2_67CCDBE19EBA6009_TICK_OFFSET UNITYSDK_OFFSET(0x10D71E70)
#define CLASS_2_67CCDBE19EBA6009__BEFOREDISPOSE_B__4_0_OFFSET UNITYSDK_OFFSET(0x10D74520)
#define CLASS_2_67CCDBE19EBA6009__CTOR_OFFSET UNITYSDK_OFFSET(0x10D74450)
#define CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0x10D74460)
#define CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_1_OFFSET UNITYSDK_OFFSET(0x10D744A0)
#define CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_2_OFFSET UNITYSDK_OFFSET(0x10D744E0)
#define CLASS_2_67CCDBE19EBA6009___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10D74560)

inline static constexpr unsigned int Class_2_67CCDBE19EBA6009_TypeDefinitionIndex = 58427;

class Class_2_67CCDBE19EBA6009 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 Field_2_19 = 0x3DB5B6; // 0x0
	::RPG::Client::EraFlipperManager* Field_2_0; // 0x18
	::RPG::Client::EraFlipperCommonConfig* Field_2_12; // 0x20
	::System::String* Field_2_13; // 0x28
	::RPG::GameCore::PropComponent* Field_2_16; // 0x30
	::Class_1_9CBC71DC5240DC00* Field_2_15; // 0x38
	::RPG::GameCore::GameEntity* Field_2_1; // 0x40
	::RPG::Client::ReasonBool_1<::RPG::Client::EraVisibleReason> Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::Boolean Field_2_3; // 0x51
	::System::Boolean Field_2_18; // 0x52
	::System::Boolean Field_2_9; // 0x53
	::RPG::GameCore::EraStateType Field_2_5; // 0x54
	::RPG::Client::EraEntityType Field_2_2; // 0x58
	::System::Boolean Field_2_17; // 0x5C
	::System::Boolean Field_2_14; // 0x5D
	::System::Boolean Field_2_4; // 0x5E
	::System::Nullable_1<::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState> Field_2_8; // 0x60
	::System::UInt32 Field_2_11; // 0x68
	::System::UInt32 Field_2_10; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6D350E9E915B9792(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EraEntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EraEntityType))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_6D350E9E915B9792_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EraEntityType Method_2_7BA5C34C54F10DFA()
	{
		return ((::RPG::Client::EraEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_7BA5C34C54F10DFA_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_TICK_OFFSET))(this, a1);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F48EF27EF2877CC(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_5F48EF27EF2877CC_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Void Method_2_640328229425E189(::System::Boolean a1, ::RPG::Client::EraVisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EraVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_640328229425E189_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_93A5D55D2C9F5E06(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_93A5D55D2C9F5E06_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_731625464DEE752F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_731625464DEE752F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E8209FF824D1D26(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_3E8209FF824D1D26_OFFSET))(this, a1);
	}

	::System::Void Method_2_27F418D042D3D3F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_27F418D042D3D3F0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_091B1F0E0E06E7DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_091B1F0E0E06E7DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_27F418D042D3D3F0_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_27F418D042D3D3F0_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_1A05B98B35159C45(::System::String* a1, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a2, ::System::Boolean a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_1A05B98B35159C45_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1B466AFE3B0CC1E(::System::UInt32& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_B1B466AFE3B0CC1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_6C36047E10D39882(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009_METHOD_2_6C36047E10D39882_OFFSET))(this, a1);
	}

	::System::Boolean _InitComponent_b__0_0(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_0_OFFSET))(this, tuple);
	}

	::System::Boolean _InitComponent_b__0_1(::RPG::Client::ProxyEffectProp* tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ProxyEffectProp*))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_1_OFFSET))(this, tuple);
	}

	::System::Boolean _InitComponent_b__0_2(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009__INITCOMPONENT_B__0_2_OFFSET))(this, tuple);
	}

	::System::Boolean _BeforeDispose_b__4_0(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009__BEFOREDISPOSE_B__4_0_OFFSET))(this, tuple);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67CCDBE19EBA6009___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
