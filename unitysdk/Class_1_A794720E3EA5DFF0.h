#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A794720E3EA5DFF0_State.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAssistantController; }
namespace RPG::GameCore { class PlanetFesAssistantMessageRow; }

#define CLASS_1_A794720E3EA5DFF0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1062AB40)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1062AC40)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1062A960)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_49584CF3091B56B6_OFFSET UNITYSDK_OFFSET(0x1062A7E0)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_4D24AF6D3F0D4655_OFFSET UNITYSDK_OFFSET(0x1062AD50)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1062A890)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1062A840)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1062ABF0)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1062AC90)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1062A9A0)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_CA71A1C6F5791797_OFFSET UNITYSDK_OFFSET(0x1062A7A0)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_D556537D6AAA10B4_OFFSET UNITYSDK_OFFSET(0x1062A720)
#define CLASS_1_A794720E3EA5DFF0_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x1062ACE0)
#define CLASS_1_A794720E3EA5DFF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1062ADA0)

inline static constexpr unsigned int Class_1_A794720E3EA5DFF0_TypeDefinitionIndex = 61265;

class Class_1_A794720E3EA5DFF0 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_8; // 0x0
	::RPG::Client::PlanetFesAssistantController* Field_1_5; // 0x10
	::RPG::GameCore::PlanetFesAssistantMessageRow* Field_1_6; // 0x18
	::System::Single Field_1_4; // 0x20
	::System::Single Field_1_2; // 0x24
	::System::Single Field_1_1; // 0x28
	::Class_1_A794720E3EA5DFF0_State Field_1_0; // 0x2C
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D556537D6AAA10B4(::RPG::GameCore::PlanetFesAssistantMessageRow* a1, ::RPG::Client::PlanetFesAssistantController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAssistantMessageRow*, ::RPG::Client::PlanetFesAssistantController*))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_D556537D6AAA10B4_OFFSET))(this, a1, a2);
	}

	::Class_1_A794720E3EA5DFF0_State Method_1_CA71A1C6F5791797()
	{
		return ((::Class_1_A794720E3EA5DFF0_State(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_CA71A1C6F5791797_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_49584CF3091B56B6()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_49584CF3091B56B6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A794720E3EA5DFF0_METHOD_1_4D24AF6D3F0D4655_OFFSET))(this);
	}
};
