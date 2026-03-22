#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_BD3679861BD0C676;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_53498D03ABDA5B92_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10C82D30)
#define CLASS_2_53498D03ABDA5B92_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10C83140)
#define CLASS_2_53498D03ABDA5B92_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C831A0)
#define CLASS_2_53498D03ABDA5B92_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x10C82F80)
#define CLASS_2_53498D03ABDA5B92_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10C83010)
#define CLASS_2_53498D03ABDA5B92_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10C82D80)
#define CLASS_2_53498D03ABDA5B92__CTOR_OFFSET UNITYSDK_OFFSET(0x10C831F0)
#define CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10C83200)
#define CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x10C832E0)
#define CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10C83350)
#define CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10C83270)

inline static constexpr unsigned int Class_2_53498D03ABDA5B92_TypeDefinitionIndex = 51795;

class Class_2_53498D03ABDA5B92 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightRole* Field_2_1; // 0x10
	::RPG::Client::GridFightRole* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_BD3679861BD0C676* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_BD3679861BD0C676* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_53498D03ABDA5B92___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
