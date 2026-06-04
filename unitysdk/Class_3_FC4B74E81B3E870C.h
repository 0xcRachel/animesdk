#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_RtMain_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FC4B74E81B3E870C_METHOD_3_248CA75B308C3BEF_OFFSET UNITYSDK_OFFSET(0x16388010)
#define CLASS_3_FC4B74E81B3E870C_METHOD_3_3B1090D0BB944132_OFFSET UNITYSDK_OFFSET(0x16388110)
#define CLASS_3_FC4B74E81B3E870C_METHOD_3_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x16387E00)
#define CLASS_3_FC4B74E81B3E870C_METHOD_3_5154A6FBC15DD492_OFFSET UNITYSDK_OFFSET(0x163881C0)
#define CLASS_3_FC4B74E81B3E870C_METHOD_3_614BB8476CB63987_OFFSET UNITYSDK_OFFSET(0x16387FA0)
#define CLASS_3_FC4B74E81B3E870C_METHOD_3_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x16388000)
#define CLASS_3_FC4B74E81B3E870C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163879B0)
#define CLASS_3_FC4B74E81B3E870C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16387CB0)
#define CLASS_3_FC4B74E81B3E870C_TICK_OFFSET UNITYSDK_OFFSET(0x16387B40)
#define CLASS_3_FC4B74E81B3E870C__CTOR_OFFSET UNITYSDK_OFFSET(0x16387980)
#define CLASS_3_FC4B74E81B3E870C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x163883B0)

inline static constexpr unsigned int Class_3_FC4B74E81B3E870C_TypeDefinitionIndex = 50593;

class Class_3_FC4B74E81B3E870C : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtMain_MoveToTarget*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void Method_3_614BB8476CB63987(::RPG::GameCore::RtMoveStopReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_614BB8476CB63987_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::IVec2 Method_3_248CA75B308C3BEF()
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_248CA75B308C3BEF_OFFSET))(this);
	}

	::RPG::GameCore::FixVec3 Method_3_3B1090D0BB944132()
	{
		return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_3B1090D0BB944132_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_5154A6FBC15DD492()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C_METHOD_3_5154A6FBC15DD492_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FC4B74E81B3E870C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
