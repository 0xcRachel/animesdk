#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9768E42F45878509;
namespace RPG::Client { class FatePhaseInfoItem; }

#define CLASS_1_BDAD8DA3E6ABF4D5_METHOD_1_185DF6F7FCE8DC2C_OFFSET UNITYSDK_OFFSET(0x10EDF9A0)
#define CLASS_1_BDAD8DA3E6ABF4D5_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x10EDFC90)
#define CLASS_1_BDAD8DA3E6ABF4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x10EDF950)

inline static constexpr unsigned int Class_1_BDAD8DA3E6ABF4D5_TypeDefinitionIndex = 50893;

class Class_1_BDAD8DA3E6ABF4D5 : public ::System::Object
{
public:
	::Class_1_9768E42F45878509* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDAD8DA3E6ABF4D5__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FatePhaseInfoItem* Method_1_185DF6F7FCE8DC2C(::System::UInt32 a1)
	{
		return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDAD8DA3E6ABF4D5_METHOD_1_185DF6F7FCE8DC2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDAD8DA3E6ABF4D5_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}
};
