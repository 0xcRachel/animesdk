#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x144FC220)
#define CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x144FC260)
#define CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x144FC1E0)
#define CLASS_1_03012F75E773046C_3_METHOD_1_1E578ED319BE3AC6_OFFSET UNITYSDK_OFFSET(0x144FC1D0)
#define CLASS_1_03012F75E773046C_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x144FC2A0)
#define CLASS_1_03012F75E773046C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x144FC2B0)

inline static constexpr unsigned int Class_1_03012F75E773046C_3_TypeDefinitionIndex = 67453;

class Class_1_03012F75E773046C_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ElationTimeAtmosphereType Method_1_1E578ED319BE3AC6()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3_METHOD_1_1E578ED319BE3AC6_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
