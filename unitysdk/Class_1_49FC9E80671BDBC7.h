#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_4;

#define CLASS_1_49FC9E80671BDBC7_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15F1E700)
#define CLASS_1_49FC9E80671BDBC7__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E770)

inline static constexpr unsigned int Class_1_49FC9E80671BDBC7_TypeDefinitionIndex = 28106;

class Class_1_49FC9E80671BDBC7 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_5; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FC9E80671BDBC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_F3CA30716D4FAF92_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_4*))((::PBYTE)hIl2Cpp + CLASS_1_49FC9E80671BDBC7_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
