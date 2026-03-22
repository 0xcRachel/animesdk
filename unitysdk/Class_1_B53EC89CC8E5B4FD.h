#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_B53EC89CC8E5B4FD_METHOD_1_248B0050923B367D_OFFSET UNITYSDK_OFFSET(0xFE68150)
#define CLASS_1_B53EC89CC8E5B4FD_METHOD_1_A457149E7F33CAA8_OFFSET UNITYSDK_OFFSET(0xFE67E00)
#define CLASS_1_B53EC89CC8E5B4FD__CTOR_OFFSET UNITYSDK_OFFSET(0xFE683E0)

inline static constexpr unsigned int Class_1_B53EC89CC8E5B4FD_TypeDefinitionIndex = 52658;

class Class_1_B53EC89CC8E5B4FD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B53EC89CC8E5B4FD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A457149E7F33CAA8(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_B53EC89CC8E5B4FD_METHOD_1_A457149E7F33CAA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_248B0050923B367D(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_B53EC89CC8E5B4FD_METHOD_1_248B0050923B367D_OFFSET))(this, a1);
	}
};
