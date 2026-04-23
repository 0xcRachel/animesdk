#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }

#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103417A0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_INIT_OFFSET UNITYSDK_OFFSET(0x1033DD50)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0x10341930)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x103419A0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10341870)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x1033E560)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1033E480)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0x103417F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1033E3F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10333560)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InteractPuzzleItemBase_TypeDefinitionIndex = 72113;

	class InteractPuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::PuzzleBoardBase* Board; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* board)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_INIT_OFFSET))(this, board);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECT_OFFSET))(this);
		}

		::System::Void OnSelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONSELECTUP_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVER_OFFSET))(this, isJoyStickSelect);
		}

		::System::Void OnDrag(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAG_OFFSET))(this, mousePosition, hitPosition);
		}

		::System::Void OnDragBegin(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGBEGIN_OFFSET))(this, mousePosition, hitPosition);
		}

		::System::Void OnDragEnd(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONDRAGEND_OFFSET))(this, mousePosition, hitPosition);
		}

		::System::Void OnHoverExit(::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEITEMBASE_ONHOVEREXIT_OFFSET))(this, isJoyStickSelect);
		}
	};
}
