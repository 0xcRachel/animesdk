#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_0A42979F9E75188B_OFFSET UNITYSDK_OFFSET(0x95A03F0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x95A08B0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x95A0920)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x95A0860)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x95A0E40)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_LoopTowerSlide_TypeDefinitionIndex = 56506;

	class LoopTowerAnimBehavior_LoopTowerSlide : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetGo; // 0x10
		::UnityEngine::Bounds RendererBounds; // 0x18
		::System::Single Weight; // 0x30
		::System::Single Height; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
		}

		::System::Void Method_1_0A42979F9E75188B(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_LOOPTOWERSLIDE_METHOD_1_0A42979F9E75188B_OFFSET))(this, a1, a2);
		}
	};
}
