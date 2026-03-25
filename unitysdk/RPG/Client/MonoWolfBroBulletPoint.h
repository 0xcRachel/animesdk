#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOWOLFBROBULLETPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5C480)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroBulletPoint_TypeDefinitionIndex = 56118;

	class MonoWolfBroBulletPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETPOINT__CTOR_OFFSET))(this);
		}
	};
}
