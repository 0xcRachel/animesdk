#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AILeadWayState.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"

class Class_2_19E76B515E7B257C;
class Class_2_6BFAFA494F2D1E4B;
class Class_2_A0580152EB393340;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class AdvSetAILeadWay; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_3CA7881CC3C795F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105ED7B0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x105EF240)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x105EF520)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x105EF730)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x105EF8C0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_44D7B58B9D189F38_OFFSET UNITYSDK_OFFSET(0x105EDF50)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_863E5A6387EFA516_OFFSET UNITYSDK_OFFSET(0x105EEA10)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x105EE030)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_9DF32A38C8C42AFC_OFFSET UNITYSDK_OFFSET(0x105EF2E0)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x105EE720)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x105EE840)
#define CLASS_3_3CA7881CC3C795F1_METHOD_3_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x105EF070)
#define CLASS_3_3CA7881CC3C795F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105ED880)
#define CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105EF600)
#define CLASS_3_3CA7881CC3C795F1_TICK_OFFSET UNITYSDK_OFFSET(0x105EE0F0)
#define CLASS_3_3CA7881CC3C795F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x105EF9E0)
#define CLASS_3_3CA7881CC3C795F1__CTOR_OFFSET UNITYSDK_OFFSET(0x105ED680)
#define CLASS_3_3CA7881CC3C795F1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105EFA00)

inline static constexpr unsigned int Class_3_3CA7881CC3C795F1_TypeDefinitionIndex = 41457;

class Class_3_3CA7881CC3C795F1 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	static ::System::Single* StaticGet_Field_3_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x10560);
	}
	static ::System::Single* StaticGet_Field_3_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x10564);
	}
	static ::System::Single* StaticGet_Field_3_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3CA7881CC3C795F1_TypeDefinitionIndex)->GetStaticField(0x10568);
	}
	::Class_2_19E76B515E7B257C* Field_3_4; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_3_1; // 0x38
	::RPG::GameCore::AdvSetAILeadWay* Field_3_0; // 0x40
	::Class_2_6BFAFA494F2D1E4B* Field_3_5; // 0x48
	::RPG::GameCore::TransformComponent* Field_3_3; // 0x50
	::Class_2_A0580152EB393340* Field_3_2; // 0x58
	::System::Single Field_3_9; // 0x60
	::System::Single Field_3_11; // 0x64
	::System::Single Field_3_10; // 0x68
	::System::Boolean Field_3_7; // 0x6C
	::System::Boolean Field_3_8; // 0x6D
	::RPG::GameCore::AILeadWayState Field_3_6; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAILeadWay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAILeadWay*))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_3_863E5A6387EFA516()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_863E5A6387EFA516_OFFSET))(this);
	}

	::System::Boolean Method_3_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_B8817F4F77EFC234_OFFSET))(this);
	}

	::System::Void Method_3_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_3_9DF32A38C8C42AFC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_9DF32A38C8C42AFC_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_44D7B58B9D189F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_44D7B58B9D189F38_OFFSET))(this, a1);
	}

	::System::Void Method_3_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::System::Void Method_3_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CA7881CC3C795F1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
