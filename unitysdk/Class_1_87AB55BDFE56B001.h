#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_87AB55BDFE56B001_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFED83A0)
#define CLASS_1_87AB55BDFE56B001_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xFED8600)
#define CLASS_1_87AB55BDFE56B001_METHOD_1_84E7E0B4EA58877D_OFFSET UNITYSDK_OFFSET(0xFED8440)
#define CLASS_1_87AB55BDFE56B001_METHOD_1_92F2E2192631AEF5_OFFSET UNITYSDK_OFFSET(0xFED8540)
#define CLASS_1_87AB55BDFE56B001_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xFED8240)
#define CLASS_1_87AB55BDFE56B001_METHOD_1_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0xFED81F0)
#define CLASS_1_87AB55BDFE56B001__CTOR_OFFSET UNITYSDK_OFFSET(0xFED8170)

inline static constexpr unsigned int Class_1_87AB55BDFE56B001_TypeDefinitionIndex = 42367;

class Class_1_87AB55BDFE56B001 : public ::System::Object
{
public:
	::RPG::GameCore::AIGlobalVarsConfig* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_METHOD_1_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_84E7E0B4EA58877D(::System::String* a1, ::RPG::GameCore::AIVariable* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_METHOD_1_84E7E0B4EA58877D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_92F2E2192631AEF5(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_METHOD_1_92F2E2192631AEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::Class_1_2CAAA2FDF9170110* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87AB55BDFE56B001_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}
};
