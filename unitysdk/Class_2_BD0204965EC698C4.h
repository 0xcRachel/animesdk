#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTrackingMission; }
namespace System { class Object; }

#define CLASS_2_BD0204965EC698C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9F2C80)
#define CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA9F2FF0)
#define CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9F2E30)
#define CLASS_2_BD0204965EC698C4_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA9F2ED0)
#define CLASS_2_BD0204965EC698C4_METHOD_2_BFC42181680DB9D3_OFFSET UNITYSDK_OFFSET(0xA9F2D20)
#define CLASS_2_BD0204965EC698C4_METHOD_2_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0xA9F30F0)
#define CLASS_2_BD0204965EC698C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9F2CC0)
#define CLASS_2_BD0204965EC698C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9F2FA0)
#define CLASS_2_BD0204965EC698C4_TICK_OFFSET UNITYSDK_OFFSET(0xA9F3090)
#define CLASS_2_BD0204965EC698C4__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F2C70)

inline static constexpr unsigned int Class_2_BD0204965EC698C4_TypeDefinitionIndex = 43327;

class Class_2_BD0204965EC698C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTrackingMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::System::Boolean Field_2_2; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTrackingMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_BFC42181680DB9D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_BFC42181680DB9D3_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_CD762BD492FAC131_OFFSET))(this, a1);
	}
};
