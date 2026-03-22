#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_06AF4F2D74642704_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x10A583D0)
#define CLASS_3_06AF4F2D74642704_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x10A58550)
#define CLASS_3_06AF4F2D74642704_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A58450)
#define CLASS_3_06AF4F2D74642704__CTOR_OFFSET UNITYSDK_OFFSET(0x10A585A0)
#define CLASS_3_06AF4F2D74642704___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A585B0)

inline static constexpr unsigned int Class_3_06AF4F2D74642704_TypeDefinitionIndex = 52351;

class Class_3_06AF4F2D74642704 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_0; // 0x28
	::RPG::GameCore::Match3::BombType Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704__CTOR_OFFSET))(this);
	}

	static ::Class_3_06AF4F2D74642704* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_06AF4F2D74642704*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
