#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_B43CEE13549C9F1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161B1390)
#define CLASS_2_B43CEE13549C9F1F_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x161B1460)
#define CLASS_2_B43CEE13549C9F1F_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x161B1EE0)
#define CLASS_2_B43CEE13549C9F1F_METHOD_2_A913C7AA4DDC5C98_OFFSET UNITYSDK_OFFSET(0x161B1B70)
#define CLASS_2_B43CEE13549C9F1F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161B1EA0)
#define CLASS_2_B43CEE13549C9F1F__CTOR_OFFSET UNITYSDK_OFFSET(0x161B1380)
#define CLASS_2_B43CEE13549C9F1F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161B1E60)

inline static constexpr unsigned int Class_2_B43CEE13549C9F1F_TypeDefinitionIndex = 32031;

class Class_2_B43CEE13549C9F1F : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_E1DC3D0DDD796244* Field_2_2; // 0x18
	::System::Single Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void Method_2_A913C7AA4DDC5C98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F_METHOD_2_A913C7AA4DDC5C98_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B43CEE13549C9F1F_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
