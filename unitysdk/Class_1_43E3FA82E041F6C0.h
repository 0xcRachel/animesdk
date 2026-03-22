#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_618;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_43E3FA82E041F6C0_METHOD_1_245C4F01BC1D8158_OFFSET UNITYSDK_OFFSET(0xFEDFC50)
#define CLASS_1_43E3FA82E041F6C0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFEDF9B0)
#define CLASS_1_43E3FA82E041F6C0_METHOD_1_7103ADB5F059117C_OFFSET UNITYSDK_OFFSET(0xFEDFA00)
#define CLASS_1_43E3FA82E041F6C0_METHOD_1_FE5F0A0792FB0999_OFFSET UNITYSDK_OFFSET(0xFEDF7E0)
#define CLASS_1_43E3FA82E041F6C0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEDFD50)
#define CLASS_1_43E3FA82E041F6C0__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xFEDFD60)

inline static constexpr unsigned int Class_1_43E3FA82E041F6C0_TypeDefinitionIndex = 52115;

class Class_1_43E3FA82E041F6C0 : public ::System::Object
{
public:
	::RPG::Client::EquipmentItemData* Field_1_2; // 0x10
	::RPG::Client::AvatarData* Field_1_0; // 0x18
	::Class_1_AE0CA897D782D638* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE5F0A0792FB0999(::RPG::Client::AvatarData* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0_METHOD_1_FE5F0A0792FB0999_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_618* Method_1_7103ADB5F059117C()
	{
		return ((::Class_0_16E4307DCC419505_618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0_METHOD_1_7103ADB5F059117C_OFFSET))(this);
	}

	::System::Int32 Method_1_245C4F01BC1D8158(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0_METHOD_1_245C4F01BC1D8158_OFFSET))(this, a1, a2);
	}

	::System::Boolean _SetData_b__0_0(::RPG::Client::EquipmentItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_43E3FA82E041F6C0__SETDATA_B__0_0_OFFSET))(this, x);
	}
};
