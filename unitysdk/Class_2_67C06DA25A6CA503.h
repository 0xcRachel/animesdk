#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_67C06DA25A6CA503_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180DAC30)
#define CLASS_2_67C06DA25A6CA503_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x180DB6E0)
#define CLASS_2_67C06DA25A6CA503_METHOD_2_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x180DAD30)
#define CLASS_2_67C06DA25A6CA503_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x180DB400)
#define CLASS_2_67C06DA25A6CA503_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180DB6A0)
#define CLASS_2_67C06DA25A6CA503__CTOR_OFFSET UNITYSDK_OFFSET(0x180DAC10)
#define CLASS_2_67C06DA25A6CA503___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180DB620)

inline static constexpr unsigned int Class_2_67C06DA25A6CA503_TypeDefinitionIndex = 39499;

class Class_2_67C06DA25A6CA503 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503_METHOD_2_367A5F1ECD1BC1A2_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C06DA25A6CA503_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
