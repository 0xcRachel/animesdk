#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightShowRightCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_159126F366D6C6EF_METHOD_3_DDAD90A8A79C1612_OFFSET UNITYSDK_OFFSET(0xBEF81F0)
#define CLASS_3_159126F366D6C6EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEF7E20)
#define CLASS_3_159126F366D6C6EF__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF7DF0)

inline static constexpr unsigned int Class_3_159126F366D6C6EF_TypeDefinitionIndex = 45850;

class Class_3_159126F366D6C6EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GridFightShowRightCutIn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + CLASS_3_159126F366D6C6EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_159126F366D6C6EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_DDAD90A8A79C1612(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_159126F366D6C6EF_METHOD_3_DDAD90A8A79C1612_OFFSET))(this, a1);
	}
};
