#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagContainer.h"

#define CLASS_3_525D7C6BEF30E146_CLEAR_OFFSET UNITYSDK_OFFSET(0x16AE21F0)
#define CLASS_3_525D7C6BEF30E146_METHOD_3_1589DAED751FE74B_OFFSET UNITYSDK_OFFSET(0x16AE2240)
#define CLASS_3_525D7C6BEF30E146__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE23D0)
#define CLASS_3_525D7C6BEF30E146___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x16AE23E0)

inline static constexpr unsigned int Class_3_525D7C6BEF30E146_TypeDefinitionIndex = 38024;

class Class_3_525D7C6BEF30E146 : public ::RPG::GameCore::HoyoTagContainer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_525D7C6BEF30E146__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_525D7C6BEF30E146_CLEAR_OFFSET))(this);
	}

	::System::Void Method_3_1589DAED751FE74B(::RPG::GameCore::HoyoTagContainer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_3_525D7C6BEF30E146_METHOD_3_1589DAED751FE74B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_525D7C6BEF30E146___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
