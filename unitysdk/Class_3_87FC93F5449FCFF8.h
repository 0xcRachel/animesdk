#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WaveFloatingProxy;

#define CLASS_3_87FC93F5449FCFF8_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xFEE88A0)
#define CLASS_3_87FC93F5449FCFF8_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xFEE8650)
#define CLASS_3_87FC93F5449FCFF8_METHOD_3_CD1693487E759624_OFFSET UNITYSDK_OFFSET(0xFEE87A0)
#define CLASS_3_87FC93F5449FCFF8__CTOR_OFFSET UNITYSDK_OFFSET(0xFEE8890)

inline static constexpr unsigned int Class_3_87FC93F5449FCFF8_TypeDefinitionIndex = 37388;

class Class_3_87FC93F5449FCFF8 : public ::RPG::Client::TABehaviorBase
{
public:
	::WaveFloatingProxy* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87FC93F5449FCFF8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87FC93F5449FCFF8_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_3_CD1693487E759624()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87FC93F5449FCFF8_METHOD_3_CD1693487E759624_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87FC93F5449FCFF8_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
