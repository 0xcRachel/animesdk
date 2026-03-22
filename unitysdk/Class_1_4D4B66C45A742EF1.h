#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/SimulateInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D4B66C45A742EF1_CLEAR_OFFSET UNITYSDK_OFFSET(0x162341F0)
#define CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_1_OFFSET UNITYSDK_OFFSET(0x16234340)
#define CLASS_1_4D4B66C45A742EF1_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x162342C0)
#define CLASS_1_4D4B66C45A742EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x162343C0)

inline static constexpr unsigned int Class_1_4D4B66C45A742EF1_TypeDefinitionIndex = 32203;

class Class_1_4D4B66C45A742EF1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_14; // 0x10
	::Class_1_9ADD1D872350330F* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_13; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt32 Field_1_9; // 0x30
	::System::UInt32 Field_1_15; // 0x34
	::System::UInt32 Field_1_8; // 0x38
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_6; // 0x3C
	::RPG::Client::LittleGame::Match3::SimulateInputType Field_1_0; // 0x44
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_3; // 0x48
	::System::UInt32 Field_1_7; // 0x50
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_2; // 0x54
	::System::UInt32 Field_1_12; // 0x5C
	::System::Boolean Field_1_4; // 0x60
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_5; // 0x64

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
