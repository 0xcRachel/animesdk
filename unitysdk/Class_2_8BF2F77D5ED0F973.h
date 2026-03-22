#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropCurveReadMoveRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8BF2F77D5ED0F973_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8406B20)
#define CLASS_2_8BF2F77D5ED0F973_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8406B70)
#define CLASS_2_8BF2F77D5ED0F973_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8406EE0)
#define CLASS_2_8BF2F77D5ED0F973_TICK_OFFSET UNITYSDK_OFFSET(0x8406BC0)
#define CLASS_2_8BF2F77D5ED0F973__CTOR_OFFSET UNITYSDK_OFFSET(0x8406B10)

inline static constexpr unsigned int Class_2_8BF2F77D5ED0F973_TypeDefinitionIndex = 45985;

class Class_2_8BF2F77D5ED0F973 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropCurveReadMoveRatio* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + CLASS_2_8BF2F77D5ED0F973__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BF2F77D5ED0F973_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BF2F77D5ED0F973_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BF2F77D5ED0F973_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BF2F77D5ED0F973_ONTASKRESET_OFFSET))(this);
	}
};
