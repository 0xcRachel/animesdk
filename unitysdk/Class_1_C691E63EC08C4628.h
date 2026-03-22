#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_477DBC7B6CD0F332;
class Class_1_E7C4009BCC22497A_6;
class Class_1_E7C4009BCC22497A_70;
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C691E63EC08C4628_DISPOSE_OFFSET UNITYSDK_OFFSET(0x899B7B0)
#define CLASS_1_C691E63EC08C4628_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x899BF20)
#define CLASS_1_C691E63EC08C4628_METHOD_1_0AB1794A10DB2B7D_OFFSET UNITYSDK_OFFSET(0x899BE50)
#define CLASS_1_C691E63EC08C4628_METHOD_1_5CCCEEABA4778486_1_OFFSET UNITYSDK_OFFSET(0x899BBA0)
#define CLASS_1_C691E63EC08C4628_METHOD_1_5CCCEEABA4778486_OFFSET UNITYSDK_OFFSET(0x899B8F0)
#define CLASS_1_C691E63EC08C4628_SET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x899BF30)
#define CLASS_1_C691E63EC08C4628__CTOR_OFFSET UNITYSDK_OFFSET(0x899B790)

inline static constexpr unsigned int Class_1_C691E63EC08C4628_TypeDefinitionIndex = 53397;

class Class_1_C691E63EC08C4628 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueBuffEnhanceItem*>* Field_1_1; // 0x10
	::Class_1_477DBC7B6CD0F332* _AchivedBuffs_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5CCCEEABA4778486(::Class_1_E7C4009BCC22497A_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_70*))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_METHOD_1_5CCCEEABA4778486_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CCCEEABA4778486_1(::Class_1_E7C4009BCC22497A_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_6*))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_METHOD_1_5CCCEEABA4778486_1_OFFSET))(this, a1);
	}

	::RPG::Client::RogueBuffEnhanceItem* Method_1_0AB1794A10DB2B7D(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_METHOD_1_0AB1794A10DB2B7D_OFFSET))(this, a1);
	}

	::Class_1_477DBC7B6CD0F332* get_AchivedBuffs()
	{
		return ((::Class_1_477DBC7B6CD0F332*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_GET_ACHIVEDBUFFS_OFFSET))(this);
	}

	::System::Void set_AchivedBuffs(::Class_1_477DBC7B6CD0F332* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_477DBC7B6CD0F332*))((::PBYTE)hIl2Cpp + CLASS_1_C691E63EC08C4628_SET_ACHIVEDBUFFS_OFFSET))(this, value);
	}
};
