#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_354;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2DCEB7D2C399774_METHOD_1_BBE326368BAA09B2_OFFSET UNITYSDK_OFFSET(0x14C321C0)
#define CLASS_1_F2DCEB7D2C399774_METHOD_1_BC3DC4F0CC25EA0A_OFFSET UNITYSDK_OFFSET(0x14C32050)
#define CLASS_1_F2DCEB7D2C399774__CTOR_OFFSET UNITYSDK_OFFSET(0x14C32250)

inline static constexpr unsigned int Class_1_F2DCEB7D2C399774_TypeDefinitionIndex = 71145;

class Class_1_F2DCEB7D2C399774 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_354*>* Field_1_1; // 0x18
	::System::Func_3<::System::UInt32, ::System::Boolean, ::Class_0_16E4307DCC419505_354*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_354*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC3DC4F0CC25EA0A(::Class_0_16E4307DCC419505_354* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_354*))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774_METHOD_1_BC3DC4F0CC25EA0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBE326368BAA09B2(::System::Boolean a1, ::Class_0_16E4307DCC419505_354* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_0_16E4307DCC419505_354*))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774_METHOD_1_BBE326368BAA09B2_OFFSET))(this, a1, a2);
	}
};
