#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_DoSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_33147DFF57772FF1_METHOD_3_73C23613314BF1A1_1_OFFSET UNITYSDK_OFFSET(0xB0873A0)
#define CLASS_3_33147DFF57772FF1_METHOD_3_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0xB0872D0)
#define CLASS_3_33147DFF57772FF1_METHOD_3_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0xB087100)
#define CLASS_3_33147DFF57772FF1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB086AE0)
#define CLASS_3_33147DFF57772FF1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0871F0)
#define CLASS_3_33147DFF57772FF1__CTOR_OFFSET UNITYSDK_OFFSET(0xB086A30)

inline static constexpr unsigned int Class_3_33147DFF57772FF1_TypeDefinitionIndex = 48192;

class Class_3_33147DFF57772FF1 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_DoSkill*>
{
public:
	::System::Int32 Field_3_0; // 0x28
	::System::Single Field_3_2; // 0x2C
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1_METHOD_3_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_3_73C23613314BF1A1_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1_METHOD_3_73C23613314BF1A1_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33147DFF57772FF1_METHOD_3_9C72894CB5D45A5A_OFFSET))(this);
	}
};
