#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_2FDE33CCAE591AA8;
namespace System { class String; }

#define CLASS_2_AE868DCDC9CB2888_METHOD_2_A5CF98813101ABF4_OFFSET UNITYSDK_OFFSET(0x10E37A60)
#define CLASS_2_AE868DCDC9CB2888__CTOR_OFFSET UNITYSDK_OFFSET(0x10E37DC0)
#define CLASS_2_AE868DCDC9CB2888___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x10E37E50)

inline static constexpr unsigned int Class_2_AE868DCDC9CB2888_TypeDefinitionIndex = 40886;

class Class_2_AE868DCDC9CB2888 : public ::Sofa::Core::ObservableObject
{
public:
	::Class_1_2FDE33CCAE591AA8* Field_2_6; // 0x18
	::System::String* Field_2_3; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::String* Field_2_1; // 0x30
	::System::String* Field_2_4; // 0x38
	::System::UInt32 Field_2_2; // 0x40
	::System::UInt32 Field_2_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE868DCDC9CB2888__CTOR_OFFSET))(this);
	}

	static ::Class_2_AE868DCDC9CB2888* Method_2_A5CF98813101ABF4(::System::UInt32 a1)
	{
		return ((::Class_2_AE868DCDC9CB2888*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AE868DCDC9CB2888_METHOD_2_A5CF98813101ABF4_OFFSET))(a1);
	}

	::System::Void __ctor_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE868DCDC9CB2888___CTOR_B__1_0_OFFSET))(this);
	}
};
