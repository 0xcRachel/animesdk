#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_588001F5465E05ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D19F00)
#define CLASS_1_588001F5465E05ED_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x8D19FB0)
#define CLASS_1_588001F5465E05ED_METHOD_1_D61798C757FF01BD_OFFSET UNITYSDK_OFFSET(0x8D1A110)
#define CLASS_1_588001F5465E05ED__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1A1F0)

inline static constexpr unsigned int Class_1_588001F5465E05ED_TypeDefinitionIndex = 50482;

class Class_1_588001F5465E05ED : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_ED790DAC948A65A9_13>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588001F5465E05ED__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588001F5465E05ED_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_35B19D34B208E77E_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B19D34B208E77E_13*))((::PBYTE)hIl2Cpp + CLASS_1_588001F5465E05ED_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_13 Method_1_D61798C757FF01BD(::System::UInt32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_13(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_588001F5465E05ED_METHOD_1_D61798C757FF01BD_OFFSET))(this, a1);
	}
};
