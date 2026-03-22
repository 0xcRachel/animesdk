#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseLeverSwitchSystem_1.h"

class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_44EDAE37250FA2DB;
namespace System { class String; }

#define CLASS_2_AAC620481781CC35_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10EB10C0)
#define CLASS_2_AAC620481781CC35__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0x10EB1180)
#define CLASS_2_AAC620481781CC35__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x10EB13F0)
#define CLASS_2_AAC620481781CC35__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB0D70)
#define CLASS_2_AAC620481781CC35__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0x10EB1440)
#define CLASS_2_AAC620481781CC35__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10EB1100)
#define CLASS_2_AAC620481781CC35___CREATEINTERACTTRIGGER_B__3_0_OFFSET UNITYSDK_OFFSET(0x10EB1560)
#define CLASS_2_AAC620481781CC35___IFIXBASEPROXY__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0x10EB1620)
#define CLASS_2_AAC620481781CC35___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10EB15A0)

inline static constexpr unsigned int Class_2_AAC620481781CC35_TypeDefinitionIndex = 60510;

class Class_2_AAC620481781CC35 : public ::RPG::Client::LittleGame::FiveDim::BaseLeverSwitchSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_1_867B6CE75953535A_1* Field_2_0; // 0x40
	::Class_3_44EDAE37250FA2DB* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateInteractTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
	}

	::System::Void _CreatePropMoveTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Void __CreateInteractTrigger_b__3_0(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35___CREATEINTERACTTRIGGER_B__3_0_OFFSET))(this, entity);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLevelVarChange(::System::Int32 P0, ::System::String* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AAC620481781CC35___IFIXBASEPROXY__ONLEVELVARCHANGE_OFFSET))(this, P0, P1);
	}
};
