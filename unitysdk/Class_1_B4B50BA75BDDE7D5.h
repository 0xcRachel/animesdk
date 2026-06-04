#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class PassengerBehaviorConfigRow; }
namespace RPG::GameCore { class TrainPassengerConfigRow; }

#define CLASS_1_B4B50BA75BDDE7D5_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x172ACAE0)
#define CLASS_1_B4B50BA75BDDE7D5_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x172ACB70)
#define CLASS_1_B4B50BA75BDDE7D5_GET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x172ACAC0)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x172ACB00)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x172AC8F0)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x172ACA60)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_2_OFFSET UNITYSDK_OFFSET(0x172ACA80)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_3_OFFSET UNITYSDK_OFFSET(0x172ACAA0)
#define CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x172ACB50)
#define CLASS_1_B4B50BA75BDDE7D5_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x172ACAF0)
#define CLASS_1_B4B50BA75BDDE7D5_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x172ACB80)
#define CLASS_1_B4B50BA75BDDE7D5_SET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x172ACAD0)
#define CLASS_1_B4B50BA75BDDE7D5__CTOR_OFFSET UNITYSDK_OFFSET(0x172AC8C0)

inline static constexpr unsigned int Class_1_B4B50BA75BDDE7D5_TypeDefinitionIndex = 63768;

class Class_1_B4B50BA75BDDE7D5 : public ::System::Object
{
public:
	::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::RPG::GameCore::PassengerBehaviorConfigRow* Field_1_2; // 0x20
	::System::UInt32 _PassengerID_k__BackingField; // 0x28
	::System::UInt32 _BehaviorID_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TrainPassengerConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C66B07446448FC6(::Class_1_827373C1CEDFE355* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_9C66B07446448FC6_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassengerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_GET_PASSENGERID_OFFSET))(this);
	}

	::System::Void set_PassengerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_SET_PASSENGERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BehaviorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_GET_BEHAVIORID_OFFSET))(this);
	}

	::System::Void set_BehaviorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_SET_BEHAVIORID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_METHOD_1_D978819B0A4871A0_3_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_GET_OVERRIDEINFO_OFFSET))(this);
	}

	::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + CLASS_1_B4B50BA75BDDE7D5_SET_OVERRIDEINFO_OFFSET))(this, a1);
	}
};
