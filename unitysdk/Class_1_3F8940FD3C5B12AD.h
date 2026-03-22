#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x850AA20)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x850A930)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x850A810)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET UNITYSDK_OFFSET(0x850A9C0)
#define CLASS_1_3F8940FD3C5B12AD_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x850AA70)
#define CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET UNITYSDK_OFFSET(0x850AC40)

inline static constexpr unsigned int Class_1_3F8940FD3C5B12AD_TypeDefinitionIndex = 53938;

class Class_1_3F8940FD3C5B12AD : public ::System::Object
{
public:
	::RPG::Client::StoryLineSwitchReason Field_1_4; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_BBB1333EA7D99D7D(::RPG::Client::StoryLineSwitchReason a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_BBB1333EA7D99D7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F8940FD3C5B12AD_METHOD_1_4484591CA1060976_OFFSET))(this);
	}
};
