#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class String; }

#define CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x890D940)
#define CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x890DAC0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x890E760)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET UNITYSDK_OFFSET(0x890E030)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x890E300)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x890E9C0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x890DFE0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4306F3E882709A3A_OFFSET UNITYSDK_OFFSET(0x890DF90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x890D9D0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET UNITYSDK_OFFSET(0x890DE30)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x890E5B0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_61929A3103595552_1_OFFSET UNITYSDK_OFFSET(0x890ECD0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x890EC70)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET UNITYSDK_OFFSET(0x890DEA0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x890DD90)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_A3954765C309C87A_OFFSET UNITYSDK_OFFSET(0x890E0B0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_AC9471A0B9837F12_OFFSET UNITYSDK_OFFSET(0x890ED20)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x890EE80)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x890E1D0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x890E280)
#define CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET UNITYSDK_OFFSET(0x890DA50)
#define CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x890EE90)
#define CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x890D930)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__15_0_OFFSET UNITYSDK_OFFSET(0x890EEE0)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x890EF90)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x890F020)
#define CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x890F010)

inline static constexpr unsigned int Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex = 45139;

class Class_2_5FF2340E88CFFA8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_11()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex)->GetStaticField(0x46FD0);
	}
	::System::String* Field_2_6; // 0x18
	::RPG::GameCore::CharacterVisibleComponent* Field_2_0; // 0x20
	::Class_1_23F67DD15593C8D6* Field_2_9; // 0x28
	::System::String* Field_2_5; // 0x30
	::RPG::GameCore::StoryCharacterApperMode Field_2_3; // 0x38
	::System::Single Field_2_7; // 0x3C
	::System::Boolean Field_2_8; // 0x40
	::System::Boolean Field_2_12; // 0x41
	::System::Boolean Field_2_4; // 0x42
	::System::Boolean Field_2_2; // 0x43
	::System::Nullable_1<::System::Boolean> Field_2_1; // 0x44
	::System::Boolean Field_2_10; // 0x46

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_469B5B6FF2B897D9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4306F3E882709A3A(::RPG::GameCore::StoryCharacterApperMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterApperMode))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4306F3E882709A3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD6A0326CCBE110(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A3954765C309C87A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_A3954765C309C87A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_81855C54613E2F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_2_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E6AC14EE28F55D4_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_61929A3103595552_1_OFFSET))(this);
	}

	::System::Void Method_2_AC9471A0B9837F12(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_AC9471A0B9837F12_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __BeginFadeIn_OnlyEffectMode_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__15_0_OFFSET))(this);
	}

	::System::Void __BeginFadeOut_OnlyEffectMode_b__16_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__16_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
