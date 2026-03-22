#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60F26A1CCB44B5BD;

#define CLASS_1_47F523CB5C537A8A_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x10E86480)
#define CLASS_1_47F523CB5C537A8A_2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10E86500)
#define CLASS_1_47F523CB5C537A8A_2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10E864C0)
#define CLASS_1_47F523CB5C537A8A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10E86470)

inline static constexpr unsigned int Class_1_47F523CB5C537A8A_2_TypeDefinitionIndex = 60788;

class Class_1_47F523CB5C537A8A_2 : public ::System::Object
{
public:
	::Class_2_60F26A1CCB44B5BD* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F523CB5C537A8A_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F523CB5C537A8A_2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F523CB5C537A8A_2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47F523CB5C537A8A_2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
