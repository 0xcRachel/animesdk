#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChessAddModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05B131770DB0F308_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2734E0)
#define CLASS_3_05B131770DB0F308_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB273520)
#define CLASS_3_05B131770DB0F308__CTOR_OFFSET UNITYSDK_OFFSET(0xB2734B0)
#define CLASS_3_05B131770DB0F308___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2737F0)

inline static constexpr unsigned int Class_3_05B131770DB0F308_TypeDefinitionIndex = 45193;

class Class_3_05B131770DB0F308 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessAddModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessAddModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessAddModifier*))((::PBYTE)hIl2Cpp + CLASS_3_05B131770DB0F308__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B131770DB0F308_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B131770DB0F308_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B131770DB0F308___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
