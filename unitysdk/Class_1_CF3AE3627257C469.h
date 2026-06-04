#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_65223DE6C1B20E8E;

#define CLASS_1_CF3AE3627257C469_METHOD_1_1B67B939825D2568_OFFSET UNITYSDK_OFFSET(0x158ACC60)
#define CLASS_1_CF3AE3627257C469_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x158ACBF0)
#define CLASS_1_CF3AE3627257C469__CCTOR_OFFSET UNITYSDK_OFFSET(0x158ACE50)
#define CLASS_1_CF3AE3627257C469__CTOR_OFFSET UNITYSDK_OFFSET(0x158ACC50)

inline static constexpr unsigned int Class_1_CF3AE3627257C469_TypeDefinitionIndex = 70146;

class Class_1_CF3AE3627257C469 : public ::System::Object
{
public:
	static ::Class_1_CF3AE3627257C469** StaticGet_Field_1_0()
	{
		return (::Class_1_CF3AE3627257C469**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3AE3627257C469_TypeDefinitionIndex)->GetStaticField(0x3D00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF3AE3627257C469__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3AE3627257C469__CCTOR_OFFSET))();
	}

	static ::Class_1_CF3AE3627257C469* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_CF3AE3627257C469*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3AE3627257C469_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_1B67B939825D2568(::Class_2_65223DE6C1B20E8E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E*))((::PBYTE)hIl2Cpp + CLASS_1_CF3AE3627257C469_METHOD_1_1B67B939825D2568_OFFSET))(this, a1);
	}
};
