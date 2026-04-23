#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/SimulateInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D4B66C45A742EF1_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D64230)
#define CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_1_OFFSET UNITYSDK_OFFSET(0x15D484A0)
#define CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x15D48420)
#define CLASS_1_4D4B66C45A742EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D642F0)

inline static constexpr unsigned int Class_1_4D4B66C45A742EF1_TypeDefinitionIndex = 38903;

class Class_1_4D4B66C45A742EF1 : public ::System::Object
{
public:
	::Class_1_9ADD1D872350330F* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_13; // 0x20
	::System::UInt32 Field_1_15; // 0x28
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_2; // 0x2C
	::System::UInt32 Field_1_7; // 0x34
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_6; // 0x38
	::System::UInt32 Field_1_11; // 0x40
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_5; // 0x44
	::RPG::Client::LittleGame::Match3::SimulateInputType Field_1_0; // 0x4C
	::System::UInt32 Field_1_10; // 0x50
	::System::UInt32 Field_1_8; // 0x54
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_3; // 0x58
	::System::UInt32 Field_1_12; // 0x60
	::System::Boolean Field_1_4; // 0x64
	::System::UInt32 Field_1_9; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B66C45A742EF1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B66C45A742EF1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F697642FBF3BDA7_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_1_OFFSET))(this, a1);
	}
};
