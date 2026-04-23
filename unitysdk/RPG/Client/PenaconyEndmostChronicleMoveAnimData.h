#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEMOVEANIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x165BED90)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleMoveAnimData_TypeDefinitionIndex = 60868;

	class PenaconyEndmostChronicleMoveAnimData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single Time; // 0x14
		::UnityEngine::Vector2 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEMOVEANIMDATA__CTOR_OFFSET))(this);
		}
	};
}
