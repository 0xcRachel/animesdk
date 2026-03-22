#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_347;
class Class_1_2CAAA2FDF9170110;
class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_2_7F8F5F0272BE5351_DISPOSE_OFFSET UNITYSDK_OFFSET(0x86DEB40)
#define CLASS_2_7F8F5F0272BE5351_GET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x86DEE90)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x86DDFC0)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x86DDB90)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_479DA31439EE0D13_OFFSET UNITYSDK_OFFSET(0x86DD6A0)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x86DEE00)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_67E9FD62D9262C7F_OFFSET UNITYSDK_OFFSET(0x86DE610)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0x86DE4D0)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_83B94B1CA67B3123_OFFSET UNITYSDK_OFFSET(0x86DEBD0)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_8C272642BED64EA2_OFFSET UNITYSDK_OFFSET(0x86DDB20)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x86DEA00)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x86DEEB0)
#define CLASS_2_7F8F5F0272BE5351_METHOD_2_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0x86DD820)
#define CLASS_2_7F8F5F0272BE5351_SET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x86DEEA0)
#define CLASS_2_7F8F5F0272BE5351__CTOR_OFFSET UNITYSDK_OFFSET(0x86DEEC0)

inline static constexpr unsigned int Class_2_7F8F5F0272BE5351_TypeDefinitionIndex = 45441;

class Class_2_7F8F5F0272BE5351 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	::Class_2_1DB6C02CA182EEBA* Field_2_4; // 0x18
	::RPG::GameCore::AbilityComponent* Field_2_2; // 0x20
	::Class_2_7AA0468CE6C1F3D7* Field_2_5; // 0x28
	::RPG::GameCore::StageBattleEventRow* _ConfigRef_k__BackingField; // 0x30
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_3; // 0x38
	::System::Boolean Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_479DA31439EE0D13(::RPG::GameCore::StageBattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_479DA31439EE0D13_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C272642BED64EA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_8C272642BED64EA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_6A61469FD94C414E_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_83B94B1CA67B3123(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_83B94B1CA67B3123_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6E5115FB17B3B4D(::Class_1_2CAAA2FDF9170110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_67E9FD62D9262C7F(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_67E9FD62D9262C7F_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageBattleEventRow* get_ConfigRef()
	{
		return ((::RPG::GameCore::StageBattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_GET_CONFIGREF_OFFSET))(this);
	}

	::System::Void set_ConfigRef(::RPG::GameCore::StageBattleEventRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_SET_CONFIGREF_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8F5F0272BE5351_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
