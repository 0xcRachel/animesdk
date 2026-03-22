#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D9631739BEA23757.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x10DC0AE0)
#define CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x10DC0AF0)
#define CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC09E0)

inline static constexpr unsigned int Class_2_ECFFE2D95FB9D2F9_TypeDefinitionIndex = 52644;

class Class_2_ECFFE2D95FB9D2F9 : public ::System::Exception
{
public:
	::Enum_3_D9631739BEA23757 _Retcode_k__BackingField; // 0x88
	::System::UInt32 _MainMissionID_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_D9631739BEA23757 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_D9631739BEA23757))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET))(this);
	}

	::Enum_3_D9631739BEA23757 get_Retcode()
	{
		return ((::Enum_3_D9631739BEA23757(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET))(this);
	}
};
