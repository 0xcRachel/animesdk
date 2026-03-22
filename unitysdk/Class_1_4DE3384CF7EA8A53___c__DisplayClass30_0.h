#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
namespace System { class Action; }

#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS30_0__APPLYLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x8F8C3C0)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8A750)

inline static constexpr unsigned int Class_1_4DE3384CF7EA8A53___c__DisplayClass30_0_TypeDefinitionIndex = 39150;

class Class_1_4DE3384CF7EA8A53___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_277* handle; // 0x10
	::System::Action* finishCallback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyLayer_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS30_0__APPLYLAYER_B__0_OFFSET))(this, v);
	}
};
