#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseFrameSyncOperation_1.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"

class Class_2_FE27D0FC265DDD96;

#define CLASS_2_26E09E2F90E17CD4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8EB4760)
#define CLASS_2_26E09E2F90E17CD4__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB4A30)

inline static constexpr unsigned int Class_2_26E09E2F90E17CD4_TypeDefinitionIndex = 45251;

class Class_2_26E09E2F90E17CD4 : public ::RPG::GameCore::BaseFrameSyncOperation_1<::Class_2_FE27D0FC265DDD96*>
{
public:
	::System::UInt32 Field_2_1; // 0x20
	::RPG::GameCore::FixVec2 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26E09E2F90E17CD4__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_26E09E2F90E17CD4_EXECUTE_OFFSET))(this, a1);
	}
};
