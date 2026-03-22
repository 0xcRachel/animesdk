#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_8;
class Class_1_3C58D309C7A040F5_40;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define CLASS_1_BC49C09280CEC1BA_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x103AF030)
#define CLASS_1_BC49C09280CEC1BA_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x103AEFE0)
#define CLASS_1_BC49C09280CEC1BA_METHOD_1_F99791E9932ECF79_OFFSET UNITYSDK_OFFSET(0x103AEFA0)
#define CLASS_1_BC49C09280CEC1BA_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x103AF040)
#define CLASS_1_BC49C09280CEC1BA__CTOR_OFFSET UNITYSDK_OFFSET(0x103AED40)

inline static constexpr unsigned int Class_1_BC49C09280CEC1BA_TypeDefinitionIndex = 59379;

class Class_1_BC49C09280CEC1BA : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1B7044A592B17773_8*>* Field_1_1; // 0x10
	::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_3C58D309C7A040F5_40* a1, ::RPG::Client::TrainParty::TrainPartyPassengerManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_40*, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + CLASS_1_BC49C09280CEC1BA__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_1B7044A592B17773_8*>* Method_1_F99791E9932ECF79()
	{
		return ((::Il2CppArray<::Class_1_1B7044A592B17773_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC49C09280CEC1BA_METHOD_1_F99791E9932ECF79_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1B7044A592B17773_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_8*))((::PBYTE)hIl2Cpp + CLASS_1_BC49C09280CEC1BA_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
	{
		return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC49C09280CEC1BA_GET_PASSENGERDATA_OFFSET))(this);
	}

	::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + CLASS_1_BC49C09280CEC1BA_SET_PASSENGERDATA_OFFSET))(this, value);
	}
};
