#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE1099F948FDD1D;
namespace InControl { class PlayerAction; }
namespace RPG::Client::ActivityHipplen { class HipplenPickingGoodsMiniGame; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C3A50A74F898E9A_GET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x8494560)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_0E5012DEE8909536_OFFSET UNITYSDK_OFFSET(0x8494420)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_1EC253B9815DA521_OFFSET UNITYSDK_OFFSET(0x84934B0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x84944C0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_473C7C3D0724BABC_OFFSET UNITYSDK_OFFSET(0x8493600)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x8494390)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x8493CA0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8493420)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x8493D50)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_BEFC8CCB5341091A_OFFSET UNITYSDK_OFFSET(0x84932E0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_1_OFFSET UNITYSDK_OFFSET(0x84940A0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_OFFSET UNITYSDK_OFFSET(0x8493DB0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8494520)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_D7924FE52B50B418_OFFSET UNITYSDK_OFFSET(0x8493690)
#define CLASS_1_8C3A50A74F898E9A_SET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x8494570)
#define CLASS_1_8C3A50A74F898E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x8494580)

inline static constexpr unsigned int Class_1_8C3A50A74F898E9A_TypeDefinitionIndex = 59987;

class Class_1_8C3A50A74F898E9A : public ::System::Object
{
public:
	// static const ::System::Single Field_1_10; // 0x0
	::System::Action_1<::Class_1_3DE1099F948FDD1D*>* Field_1_5; // 0x10
	::InControl::PlayerAction* Field_1_12; // 0x18
	::InControl::PlayerAction* Field_1_14; // 0x20
	::InControl::PlayerAction* Field_1_13; // 0x28
	::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* Field_1_4; // 0x30
	::Class_1_3DE1099F948FDD1D* Field_1_2; // 0x38
	::System::Collections::Generic::List_1<::Class_1_3DE1099F948FDD1D*>* Field_1_3; // 0x40
	::System::Boolean Field_1_1; // 0x48
	::System::Boolean Field_1_11; // 0x49
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_6; // 0x50
	::System::Single Field_1_9; // 0x54
	::System::Single Field_1_7; // 0x58
	::System::Single _AutoInputWatingTime_k__BackingField; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BEFC8CCB5341091A(::System::Collections::Generic::List_1<::Class_1_3DE1099F948FDD1D*>* a1, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3DE1099F948FDD1D*>*, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_BEFC8CCB5341091A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_1EC253B9815DA521()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_1EC253B9815DA521_OFFSET))(this);
	}

	::System::Void Method_1_D7924FE52B50B418(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_D7924FE52B50B418_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536(::System::Action_1<::Class_1_3DE1099F948FDD1D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_3DE1099F948FDD1D*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_0E5012DEE8909536_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_473C7C3D0724BABC(::Class_1_3DE1099F948FDD1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE1099F948FDD1D*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_473C7C3D0724BABC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Boolean Method_1_C6F374D947193BA2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6F374D947193BA2_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_1_OFFSET))(this, a1);
	}

	::System::Single get_AutoInputWatingTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_GET_AUTOINPUTWATINGTIME_OFFSET))(this);
	}

	::System::Void set_AutoInputWatingTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_SET_AUTOINPUTWATINGTIME_OFFSET))(this, value);
	}
};
