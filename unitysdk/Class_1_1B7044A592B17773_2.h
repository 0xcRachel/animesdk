#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraEvaluationGroupRow; }

#define CLASS_1_1B7044A592B17773_2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10C5BD20)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x10C5BD40)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_70E5406330FA29B7_OFFSET UNITYSDK_OFFSET(0x10C5BDB0)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x10C5BCB0)
#define CLASS_1_1B7044A592B17773_2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10C5BD30)
#define CLASS_1_1B7044A592B17773_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5BD10)

inline static constexpr unsigned int Class_1_1B7044A592B17773_2_TypeDefinitionIndex = 50424;

class Class_1_1B7044A592B17773_2 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2__CTOR_OFFSET))(this);
	}

	static ::Class_1_1B7044A592B17773_2* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_2*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraEvaluationGroupRow* Method_1_70E5406330FA29B7()
	{
		return ((::RPG::GameCore::ChimeraEvaluationGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_70E5406330FA29B7_OFFSET))(this);
	}
};
