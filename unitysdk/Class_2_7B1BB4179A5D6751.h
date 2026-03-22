#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_451601B8BB62C38C_2.h"

class Class_0_16E4307DCC419505_278;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_7B1BB4179A5D6751_METHOD_2_0CCA14AFDA1F089B_OFFSET UNITYSDK_OFFSET(0x9EA5490)
#define CLASS_2_7B1BB4179A5D6751__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EA5560)
#define CLASS_2_7B1BB4179A5D6751__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA5550)

inline static constexpr unsigned int Class_2_7B1BB4179A5D6751_TypeDefinitionIndex = 38968;

class Class_2_7B1BB4179A5D6751 : public ::Class_1_451601B8BB62C38C_2
{
public:
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*>** StaticGet_Field_2_0()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B1BB4179A5D6751_TypeDefinitionIndex)->GetStaticField(0x19370);
	}
	::System::Action_1<::System::Boolean>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B1BB4179A5D6751__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7B1BB4179A5D6751__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_0CCA14AFDA1F089B(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_278* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_278*))((::PBYTE)hIl2Cpp + CLASS_2_7B1BB4179A5D6751_METHOD_2_0CCA14AFDA1F089B_OFFSET))(a1, a2, a3);
	}
};
