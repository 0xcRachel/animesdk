#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET UNITYSDK_OFFSET(0x177A77B0)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_METHOD_5_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x177A6E10)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET UNITYSDK_OFFSET(0x177A6C40)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x177A7810)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattlePuzzleArea_TypeDefinitionIndex = 63308;

	class ChimeraBattlePuzzleArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Index; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_1; // 0x20
		::UnityEngine::Transform* TeamAnchorRoot; // 0x28
		::UnityEngine::Transform* LeaderAnchor; // 0x30
		::UnityEngine::Transform* WorkAnchor; // 0x38
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET))(this);
		}

		::System::Void Method_5_51BBA01F511E6107()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_METHOD_5_51BBA01F511E6107_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_TeamMemberAnchors()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET))(this);
		}
	};
}
