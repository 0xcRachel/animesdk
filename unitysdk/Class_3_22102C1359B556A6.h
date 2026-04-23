#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F9B8FAD13AB85B32_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_22102C1359B556A6_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10FA9360)
#define CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10FA9700)
#define CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10FA96A0)
#define CLASS_3_22102C1359B556A6_METHOD_3_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x10FA9410)
#define CLASS_3_22102C1359B556A6__CTOR_OFFSET UNITYSDK_OFFSET(0x10FA95D0)
#define CLASS_3_22102C1359B556A6__ONBIND_OFFSET UNITYSDK_OFFSET(0x10FA9300)
#define CLASS_3_22102C1359B556A6__ONTICK_OFFSET UNITYSDK_OFFSET(0x10FA9550)
#define CLASS_3_22102C1359B556A6__STARTFADEIN_B__5_0_OFFSET UNITYSDK_OFFSET(0x10FA9600)
#define CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10FA9640)
#define CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10FA9760)

inline static constexpr unsigned int Class_3_22102C1359B556A6_TypeDefinitionIndex = 66121;

class Class_3_22102C1359B556A6 : public ::Class_2_F9B8FAD13AB85B32_1
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::Animation* Field_3_0; // 0x60
	::System::Boolean Field_3_3; // 0x68
	::System::Single Field_3_5; // 0x6C
	::System::Single Field_3_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _StartFadeIn_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__STARTFADEIN_B__5_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
