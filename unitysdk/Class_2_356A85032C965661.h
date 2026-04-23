#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionCountDownPreviewMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_BE9205D119086684_1.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_356A85032C965661_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3F7600)
#define CLASS_2_356A85032C965661_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xD3F8230)
#define CLASS_2_356A85032C965661_GET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0xD3F8250)
#define CLASS_2_356A85032C965661_METHOD_2_045ADCAA80288B1B_OFFSET UNITYSDK_OFFSET(0xD3F8100)
#define CLASS_2_356A85032C965661_METHOD_2_1FC4CAF1D31EC204_OFFSET UNITYSDK_OFFSET(0xD3F7210)
#define CLASS_2_356A85032C965661_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0xD3F7D30)
#define CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0xD3F7BF0)
#define CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_2_OFFSET UNITYSDK_OFFSET(0xD3F7C80)
#define CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xD3F7850)
#define CLASS_2_356A85032C965661_METHOD_2_80B07A5EC6B8F9F8_OFFSET UNITYSDK_OFFSET(0xD3F7E40)
#define CLASS_2_356A85032C965661_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xD3F79A0)
#define CLASS_2_356A85032C965661_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0xD3F7510)
#define CLASS_2_356A85032C965661_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xD3F7800)
#define CLASS_2_356A85032C965661_METHOD_2_C89438559AE22BC7_OFFSET UNITYSDK_OFFSET(0xD3F8060)
#define CLASS_2_356A85032C965661_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3F8010)
#define CLASS_2_356A85032C965661_METHOD_2_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xD3F7370)
#define CLASS_2_356A85032C965661_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xD3F7660)
#define CLASS_2_356A85032C965661_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xD3F8240)
#define CLASS_2_356A85032C965661_SET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0xD3F8260)
#define CLASS_2_356A85032C965661__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F7130)
#define CLASS_2_356A85032C965661__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD3F7170)
#define CLASS_2_356A85032C965661___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD3F8270)

inline static constexpr unsigned int Class_2_356A85032C965661_TypeDefinitionIndex = 53104;

class Class_2_356A85032C965661 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::BattleActionEventRow* _RowConfig_k__BackingField; // 0x18
	::System::String* _Description_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x30
	::System::Int32 Field_2_2; // 0x38
	::RPG::GameCore::ActionCountDownPreviewMode Field_2_8; // 0x3C
	::System::Int32 Field_2_1; // 0x40
	::System::UInt32 Field_2_6; // 0x44
	::System::Boolean Field_2_0; // 0x48
	::System::Boolean Field_2_11; // 0x49
	::System::Int32 Field_2_10; // 0x4C
	::System::Int32 Field_2_9; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_5B0531D5B96D6B96_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_80B07A5EC6B8F9F8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_80B07A5EC6B8F9F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C89438559AE22BC7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_C89438559AE22BC7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_1FC4CAF1D31EC204()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_1FC4CAF1D31EC204_OFFSET))(this);
	}

	::System::Boolean Method_2_045ADCAA80288B1B(::Struct_2_BE9205D119086684_1 a1, ::System::Int32& a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BE9205D119086684_1, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_METHOD_2_045ADCAA80288B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_Description()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_GET_DESCRIPTION_OFFSET))(this);
	}

	::System::Void set_Description(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_SET_DESCRIPTION_OFFSET))(this, value);
	}

	::RPG::GameCore::BattleActionEventRow* get_RowConfig()
	{
		return ((::RPG::GameCore::BattleActionEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_GET_ROWCONFIG_OFFSET))(this);
	}

	::System::Void set_RowConfig(::RPG::GameCore::BattleActionEventRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661_SET_ROWCONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_356A85032C965661___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
