#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraEndlessWorkRoundRow; }

#define CLASS_1_1B7044A592B17773_1_GET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x109B0130)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_5135E99239DDCA8C_OFFSET UNITYSDK_OFFSET(0x109B0150)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_86627C0462DD34E7_OFFSET UNITYSDK_OFFSET(0x109B01F0)
#define CLASS_1_1B7044A592B17773_1_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x109B00C0)
#define CLASS_1_1B7044A592B17773_1_SET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x109B0140)
#define CLASS_1_1B7044A592B17773_1__CTOR_OFFSET UNITYSDK_OFFSET(0x109B0120)

inline static constexpr unsigned int Class_1_1B7044A592B17773_1_TypeDefinitionIndex = 50357;

class Class_1_1B7044A592B17773_1 : public ::System::Object
{
public:
	::System::UInt32 _RoundID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_1B7044A592B17773_1* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_1*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	::System::UInt32 get_RoundID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_GET_ROUNDID_OFFSET))(this);
	}

	::System::Void set_RoundID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_SET_ROUNDID_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* Method_1_5135E99239DDCA8C()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_5135E99239DDCA8C_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraEndlessWorkRoundRow* Method_1_86627C0462DD34E7()
	{
		return ((::RPG::GameCore::ChimeraEndlessWorkRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_1_METHOD_1_86627C0462DD34E7_OFFSET))(this);
	}
};
