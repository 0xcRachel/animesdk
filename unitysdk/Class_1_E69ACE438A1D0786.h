#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_55;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E69ACE438A1D0786_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x103DBB10)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x103DBB30)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x103DBB40)
#define CLASS_1_E69ACE438A1D0786_METHOD_1_D0138B918A3052C4_OFFSET UNITYSDK_OFFSET(0x103DBB20)
#define CLASS_1_E69ACE438A1D0786__CTOR_OFFSET UNITYSDK_OFFSET(0x103DBB50)

inline static constexpr unsigned int Class_1_E69ACE438A1D0786_TypeDefinitionIndex = 49116;

class Class_1_E69ACE438A1D0786 : public ::System::Object
{
public:
	::Class_1_352A8B3482C80E7D_55* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_55*>* Field_1_3; // 0x18
	::RPG::GameCore::ActivitySummonDifficulty Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::Class_1_352A8B3482C80E7D_55* a3, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_55*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::Class_1_352A8B3482C80E7D_55*, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_55*>*))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySummonDifficulty Method_1_D0138B918A3052C4()
	{
		return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_D0138B918A3052C4_OFFSET))(this);
	}

	::Class_1_352A8B3482C80E7D_55* Method_1_24748FC20F375725()
	{
		return ((::Class_1_352A8B3482C80E7D_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_55*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_55*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69ACE438A1D0786_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
