#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_CLEAR_OFFSET UNITYSDK_OFFSET(0x10B79290)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10B77760)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_METHOD_1_62A1DA6B642935A4_OFFSET UNITYSDK_OFFSET(0x10B77F00)
#define CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10B77E60)

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_Class_1_4EEA23509C9211E7_TypeDefinitionIndex = 47999;

class Class_2_B105BEE67D1C2502_Class_1_4EEA23509C9211E7 : public ::System::Object
{
public:
	::RPG::Client::MapNpcDef* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F>* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::RPG::Client::MapRotation::EffectType Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_62A1DA6B642935A4()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_METHOD_1_62A1DA6B642935A4_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_CLASS_1_4EEA23509C9211E7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
