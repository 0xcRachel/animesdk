#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleChangeAvatar_Begin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C3E4044A0CBFD22_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C12910)
#define CLASS_3_7C3E4044A0CBFD22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C12950)
#define CLASS_3_7C3E4044A0CBFD22__CTOR_OFFSET UNITYSDK_OFFSET(0x9C128E0)
#define CLASS_3_7C3E4044A0CBFD22___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C12A80)

inline static constexpr unsigned int Class_3_7C3E4044A0CBFD22_TypeDefinitionIndex = 42864;

class Class_3_7C3E4044A0CBFD22 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BattleChangeAvatar_Begin*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + CLASS_3_7C3E4044A0CBFD22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3E4044A0CBFD22_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3E4044A0CBFD22_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C3E4044A0CBFD22___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
