#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Fire; }

#define CLASS_3_088B3F3DF88CF846_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1105E8F0)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1105EEF0)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1105EE90)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1105EF50)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1105E8B0)
#define CLASS_3_088B3F3DF88CF846_METHOD_3_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0x1105EB80)
#define CLASS_3_088B3F3DF88CF846__CTOR_OFFSET UNITYSDK_OFFSET(0x1105EE70)

inline static constexpr unsigned int Class_3_088B3F3DF88CF846_TypeDefinitionIndex = 54538;

class Class_3_088B3F3DF88CF846 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Fire*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_088B3F3DF88CF846_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
