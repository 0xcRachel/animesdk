#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_0_16E4307DCC419505_282;
class Class_0_16E4307DCC419505_286;
class Class_1_4DE3384CF7EA8A53;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x8F8B8B0)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0x8F8BD90)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0x8F8BEF0)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8A0F0)

inline static constexpr unsigned int Class_1_4DE3384CF7EA8A53___c__DisplayClass25_0_TypeDefinitionIndex = 39148;

class Class_1_4DE3384CF7EA8A53___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_1_4DE3384CF7EA8A53* __4__this; // 0x10
	::Class_0_16E4307DCC419505_277* h; // 0x18
	::Class_0_16E4307DCC419505_286* loadingObj; // 0x20
	::Class_1_EAF7984A8FAD6BE4* p; // 0x28
	::Class_0_16E4307DCC419505_282* du; // 0x30
	::Class_0_16E4307DCC419505_277* asyncResLoadingHandle; // 0x38
	::EnviromentSystemV2Space::OutputType tp; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyPropertyWithResLoading_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET))(this, v);
	}

	::System::Void _ApplyPropertyWithResLoading_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET))(this);
	}

	::System::Void _ApplyPropertyWithResLoading_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS25_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET))(this);
	}
};
