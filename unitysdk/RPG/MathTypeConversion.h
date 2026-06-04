#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_MATHTYPECONVERSION_GAMECOREQUATERNIONTOUNITY_OFFSET UNITYSDK_OFFSET(0x1B4E2590)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR2TOUNITY_OFFSET UNITYSDK_OFFSET(0x1B4E23C0)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR3TOUNITY_OFFSET UNITYSDK_OFFSET(0x1B4E23F0)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR4TOUNITY_OFFSET UNITYSDK_OFFSET(0x1B4E2570)
#define RPG_MATHTYPECONVERSION_TO0Y0_OFFSET UNITYSDK_OFFSET(0x1B4E24D0)
#define RPG_MATHTYPECONVERSION_TOGAMECOREREF_OFFSET UNITYSDK_OFFSET(0x1B4E2610)
#define RPG_MATHTYPECONVERSION_TOGAMECOREV2X0Z_OFFSET UNITYSDK_OFFSET(0x1B4E2690)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_1_OFFSET UNITYSDK_OFFSET(0x1B4E25D0)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_2_OFFSET UNITYSDK_OFFSET(0x1B4E2630)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_3_OFFSET UNITYSDK_OFFSET(0x1B4E2660)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x1B4E25B0)
#define RPG_MATHTYPECONVERSION_TOUNITYX0Z_OFFSET UNITYSDK_OFFSET(0x1B4E2670)
#define RPG_MATHTYPECONVERSION_TOUNITY_1_OFFSET UNITYSDK_OFFSET(0x1B4E23B0)
#define RPG_MATHTYPECONVERSION_TOUNITY_2_OFFSET UNITYSDK_OFFSET(0x1B4E23D0)
#define RPG_MATHTYPECONVERSION_TOUNITY_3_OFFSET UNITYSDK_OFFSET(0x1B4E2560)
#define RPG_MATHTYPECONVERSION_TOUNITY_4_OFFSET UNITYSDK_OFFSET(0x1B4E2580)
#define RPG_MATHTYPECONVERSION_TOUNITY_5_OFFSET UNITYSDK_OFFSET(0x1B4E25A0)
#define RPG_MATHTYPECONVERSION_TOUNITY_OFFSET UNITYSDK_OFFSET(0x1B4E23A0)
#define RPG_MATHTYPECONVERSION_TOX0ZNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1B4E2430)
#define RPG_MATHTYPECONVERSION_TOX0Z_OFFSET UNITYSDK_OFFSET(0x1B4E2410)
#define RPG_MATHTYPECONVERSION_TOXY0_OFFSET UNITYSDK_OFFSET(0x1B4E24F0)
#define RPG_MATHTYPECONVERSION_UNITYQUATERNIONTOGAMECORE_OFFSET UNITYSDK_OFFSET(0x1B4E2640)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR2TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x1B4E25C0)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR3TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x1B4E25F0)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR4TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x1B4E2650)
#define RPG_MATHTYPECONVERSION_XZMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B4E2530)
#define RPG_MATHTYPECONVERSION_XZSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1B4E2510)

namespace RPG
{
	inline static constexpr unsigned int MathTypeConversion_TypeDefinitionIndex = 6768;

	class MathTypeConversion : public ::System::Object
	{
	public:
		static ::UnityEngine::Color ToUnity(::RPG::MColor a1)
		{
			return ((::UnityEngine::Color(*)(::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 ToUnity_1(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToUnity_2(::RPG::MVector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_2_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToX0Z(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOX0Z_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToX0ZNormalized(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOX0ZNORMALIZED_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 To0Y0(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TO0Y0_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToXY0(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOXY0_OFFSET))(a1);
		}

		static ::System::Single XZSqrMagnitude(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_XZSQRMAGNITUDE_OFFSET))(a1);
		}

		static ::System::Single XZMagnitude(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_XZMAGNITUDE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 ToUnity_3(::Struct_2_331ACDD60B60D2E3 a1)
		{
			return ((::UnityEngine::Vector4(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_3_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion ToUnity_4(::RPG::MQuaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_4_OFFSET))(a1);
		}

		static ::UnityEngine::Rect ToUnity_5(::RPG::MRect a1)
		{
			return ((::UnityEngine::Rect(*)(::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_5_OFFSET))(a1);
		}

		static ::RPG::MVector2 ToGameCore(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_OFFSET))(a1);
		}

		static ::RPG::MVector3 ToGameCore_1(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_1_OFFSET))(a1);
		}

		static ::System::Void ToGameCoreRef(::UnityEngine::Vector3 a1, ::RPG::MVector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECOREREF_OFFSET))(a1, a2);
		}

		static ::RPG::MQuaternion ToGameCore_2(::UnityEngine::Quaternion a1)
		{
			return ((::RPG::MQuaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_2_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GameCoreVector2ToUnity(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR2TOUNITY_OFFSET))(a1);
		}

		static ::RPG::MVector2 UnityVector2ToGameCore(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR2TOGAMECORE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GameCoreVector3ToUnity(::RPG::MVector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR3TOUNITY_OFFSET))(a1);
		}

		static ::RPG::MVector3 UnityVector3ToGameCore(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR3TOGAMECORE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GameCoreVector4ToUnity(::Struct_2_331ACDD60B60D2E3 a1)
		{
			return ((::UnityEngine::Vector4(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR4TOUNITY_OFFSET))(a1);
		}

		static ::Struct_2_331ACDD60B60D2E3 UnityVector4ToGameCore(::UnityEngine::Vector4 a1)
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR4TOGAMECORE_OFFSET))(a1);
		}

		static ::RPG::MQuaternion UnityQuaternionToGameCore(::UnityEngine::Quaternion a1)
		{
			return ((::RPG::MQuaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYQUATERNIONTOGAMECORE_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GameCoreQuaternionToUnity(::RPG::MQuaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREQUATERNIONTOUNITY_OFFSET))(a1);
		}

		static ::RPG::MColor ToGameCore_3(::UnityEngine::Color a1)
		{
			return ((::RPG::MColor(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_3_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ToUnityX0Z(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITYX0Z_OFFSET))(a1);
		}

		static ::RPG::MVector2 ToGameCoreV2X0Z(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECOREV2X0Z_OFFSET))(a1);
		}
	};
}
