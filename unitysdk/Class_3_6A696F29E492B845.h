#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_0_16E4307DCC419505_905;
class Class_1_04D81B4D0E8D8457;
class Class_1_0EE68920FE366BFF_2;
class Class_1_24C2E7EF22229C6A;
class Class_1_94593112D09D383F;
class Class_1_B41D72BA28E43E86;
class Class_1_D0B740BBA7D5755D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6A696F29E492B845_ADD_OFFSET UNITYSDK_OFFSET(0xFE140B0)
#define CLASS_3_6A696F29E492B845_METHOD_3_816E6D8FC1A47842_OFFSET UNITYSDK_OFFSET(0xFE14860)
#define CLASS_3_6A696F29E492B845_METHOD_3_995C92D7FCC403F4_OFFSET UNITYSDK_OFFSET(0xFE145A0)
#define CLASS_3_6A696F29E492B845_METHOD_3_B18EB6934D94DA71_OFFSET UNITYSDK_OFFSET(0xFE13C80)
#define CLASS_3_6A696F29E492B845_METHOD_3_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0xFE14900)
#define CLASS_3_6A696F29E492B845_METHOD_3_F4BACB8E9D45997B_OFFSET UNITYSDK_OFFSET(0xFE14190)
#define CLASS_3_6A696F29E492B845__CTOR_OFFSET UNITYSDK_OFFSET(0xFE14AA0)
#define CLASS_3_6A696F29E492B845___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0xFE14B80)

inline static constexpr unsigned int Class_3_6A696F29E492B845_TypeDefinitionIndex = 60639;

class Class_3_6A696F29E492B845 : public ::Class_2_1792A4214A514F27
{
public:
	::Class_1_04D81B4D0E8D8457* Field_3_0; // 0x30
	::Class_1_B41D72BA28E43E86* Field_3_3; // 0x38
	::Class_1_94593112D09D383F* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_905*>* Field_3_5; // 0x48
	::Class_1_0EE68920FE366BFF_2* Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x58
	::Class_1_D0B740BBA7D5755D* Field_3_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B18EB6934D94DA71(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_METHOD_3_B18EB6934D94DA71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_METHOD_3_C796A0B42720FBD3_OFFSET))(this);
	}

	::Entitas::Systems* Add(::Entitas::ISystem* a1)
	{
		return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_ADD_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4BACB8E9D45997B(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_METHOD_3_F4BACB8E9D45997B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_816E6D8FC1A47842(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_METHOD_3_816E6D8FC1A47842_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_995C92D7FCC403F4(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845_METHOD_3_995C92D7FCC403F4_OFFSET))(this, a1, a2, a3);
	}

	::Entitas::Systems* __iFixBaseProxy_Add(::Entitas::ISystem* P0)
	{
		return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_3_6A696F29E492B845___IFIXBASEPROXY_ADD_OFFSET))(this, P0);
	}
};
