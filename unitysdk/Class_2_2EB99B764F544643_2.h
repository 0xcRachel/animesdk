#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_2EB99B764F544643_2_METHOD_2_3F80D57BE81BD898_OFFSET UNITYSDK_OFFSET(0x176E1830)
#define CLASS_2_2EB99B764F544643_2_METHOD_2_546D91764BF0A3F7_OFFSET UNITYSDK_OFFSET(0x176E1750)
#define CLASS_2_2EB99B764F544643_2_METHOD_2_7DAF841E8207A943_OFFSET UNITYSDK_OFFSET(0x176E13D0)
#define CLASS_2_2EB99B764F544643_2_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x176E13C0)
#define CLASS_2_2EB99B764F544643_2_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x176E1470)
#define CLASS_2_2EB99B764F544643_2__CTOR_OFFSET UNITYSDK_OFFSET(0x176E1820)

inline static constexpr unsigned int Class_2_2EB99B764F544643_2_TypeDefinitionIndex = 69924;

class Class_2_2EB99B764F544643_2 : public ::Class_1_D019640AABA5E1A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_7DAF841E8207A943(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2_METHOD_2_7DAF841E8207A943_OFFSET))(this, a1);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_546D91764BF0A3F7(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2_METHOD_2_546D91764BF0A3F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F80D57BE81BD898(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_2EB99B764F544643_2_METHOD_2_3F80D57BE81BD898_OFFSET))(this, a1);
	}
};
