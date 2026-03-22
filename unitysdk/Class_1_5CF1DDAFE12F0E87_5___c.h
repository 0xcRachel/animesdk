#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5CF1DDAFE12F0E87_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E0BB0)
#define CLASS_1_5CF1DDAFE12F0E87_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178E0BF0)
#define CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x178E0C00)
#define CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_1_OFFSET UNITYSDK_OFFSET(0x178E0C10)

inline static constexpr unsigned int Class_1_5CF1DDAFE12F0E87_5___c_TypeDefinitionIndex = 26005;

class Class_1_5CF1DDAFE12F0E87_5___c : public ::System::Object
{
public:
	static ::Class_1_5CF1DDAFE12F0E87_5___c** StaticGet___9()
	{
		return (::Class_1_5CF1DDAFE12F0E87_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CF1DDAFE12F0E87_5___c_TypeDefinitionIndex)->GetStaticField(0x37B90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__30_0(::Enum_3_0A3761FE34514D6C_63 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_63 __cctor_b__30_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_63(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CF1DDAFE12F0E87_5___C___CCTOR_B__30_1_OFFSET))(this, x);
	}
};
