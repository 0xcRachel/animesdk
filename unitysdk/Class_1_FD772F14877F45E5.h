#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/Enum_3_63D176C405CC7947.h"
#include "unitysdk/System/Object.h"

class Class_1_D975FC0407AA8C9D;
class Class_1_FA4F4A67B1C04320;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD772F14877F45E5__CTOR_OFFSET UNITYSDK_OFFSET(0x162D3ED0)

inline static constexpr unsigned int Class_1_FD772F14877F45E5_TypeDefinitionIndex = 32217;

class Class_1_FD772F14877F45E5 : public ::System::Object
{
public:
	::Class_1_D975FC0407AA8C9D* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320*>* Field_1_17; // 0x18
	::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320*>* Field_1_16; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::Enum_3_0A3761FE34514D6C_32 Field_1_8; // 0x2C
	::System::Int32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34
	::System::UInt32 Field_1_0; // 0x38
	::System::Boolean Field_1_3; // 0x3C
	::System::Boolean Field_1_12; // 0x3D
	::System::Boolean Field_1_10; // 0x3E
	::System::Boolean Field_1_13; // 0x3F
	::System::UInt32 Field_1_9; // 0x40
	::System::UInt32 Field_1_5; // 0x44
	::System::Boolean Field_1_4; // 0x48
	::System::Boolean Field_1_2; // 0x49
	::System::Int32 Field_1_11; // 0x4C
	::Enum_3_63D176C405CC7947 Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD772F14877F45E5__CTOR_OFFSET))(this);
	}
};
