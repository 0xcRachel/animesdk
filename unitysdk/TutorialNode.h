#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TutorialNode_NodePlatform.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_297;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define TUTORIALNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xE1A3930)
#define TUTORIALNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE1A3AF0)
#define TUTORIALNODE_COPYTO_OFFSET UNITYSDK_OFFSET(0xE1A2EA0)
#define TUTORIALNODE_FORCEREGISTER_OFFSET UNITYSDK_OFFSET(0xE1A36B0)
#define TUTORIALNODE_GETSHOWREGISTERID_OFFSET UNITYSDK_OFFSET(0xE1A2F20)
#define TUTORIALNODE_ITUTORIALNODE_CANBEREPLACEDBY_OFFSET UNITYSDK_OFFSET(0xE1A2F60)
#define TUTORIALNODE_ITUTORIALNODE_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE1A32B0)
#define TUTORIALNODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE1A3CC0)
#define TUTORIALNODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE1A3E70)
#define TUTORIALNODE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xE1A3EC0)
#define TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE1A3F50)
#define TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE1A3F10)
#define TUTORIALNODE_SETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xE1A3A00)
#define TUTORIALNODE_SHOWREGISTERID_OFFSET UNITYSDK_OFFSET(0xE1A2D30)
#define TUTORIALNODE_START_OFFSET UNITYSDK_OFFSET(0xE1A3B40)
#define TUTORIALNODE_TRYREGISTER_OFFSET UNITYSDK_OFFSET(0xE1A3300)
#define TUTORIALNODE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xE1A3830)
#define TUTORIALNODE__CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0xE1A3FA0)
#define TUTORIALNODE__CONSTRUCTID_OFFSET UNITYSDK_OFFSET(0xE1A2E00)
#define TUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A4030)
#define TUTORIALNODE__ISVALID_OFFSET UNITYSDK_OFFSET(0xE1A31A0)
#define TUTORIALNODE__SHOULDREGISTER_OFFSET UNITYSDK_OFFSET(0xE1A3490)

inline static constexpr unsigned int TutorialNode_TypeDefinitionIndex = 44031;

class TutorialNode : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* id; // 0x18
	::System::Boolean IsRegister; // 0x20
	::System::Boolean AppendDynamicKey; // 0x21
	::TutorialNode_NodePlatform TargetPlatform; // 0x24
	::TutorialNode* ParentNode; // 0x28
	::System::String* _RegisterID; // 0x30
	::System::Boolean _CanNotReplaced; // 0x38
	::System::String* _DynamicKey; // 0x40
	::System::Boolean _IsRegisted; // 0x48
	::System::Collections::Generic::List_1<::TutorialNode*>* _Children; // 0x50
	::System::Boolean _IsStarted; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE__CTOR_OFFSET))(this);
	}

	::System::Void ShowRegisterID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_SHOWREGISTERID_OFFSET))(this);
	}

	::System::Void CopyTo(::TutorialNode* other)
	{
		return ((::System::Void(*)(::PVOID, ::TutorialNode*))((::PBYTE)hIl2Cpp + TUTORIALNODE_COPYTO_OFFSET))(this, other);
	}

	::System::String* GetShowRegisterID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_GETSHOWREGISTERID_OFFSET))(this);
	}

	::System::Boolean ITutorialNode_CanbeReplacedBy(::Class_0_16E4307DCC419505_297* other)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_297*))((::PBYTE)hIl2Cpp + TUTORIALNODE_ITUTORIALNODE_CANBEREPLACEDBY_OFFSET))(this, other);
	}

	::UnityEngine::Transform* ITutorialNode_GetTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_ITUTORIALNODE_GETTRANSFORM_OFFSET))(this);
	}

	::System::Void TryRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_TRYREGISTER_OFFSET))(this);
	}

	::System::Void ForceRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_FORCEREGISTER_OFFSET))(this);
	}

	::System::Void Unregister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_UNREGISTER_OFFSET))(this);
	}

	::System::Void AddChild(::TutorialNode* node)
	{
		return ((::System::Void(*)(::PVOID, ::TutorialNode*))((::PBYTE)hIl2Cpp + TUTORIALNODE_ADDCHILD_OFFSET))(this, node);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_CLEAR_OFFSET))(this);
	}

	::System::Void SetDynamicKey(::System::String* key)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TUTORIALNODE_SETDYNAMICKEY_OFFSET))(this, key);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
	}

	::System::Void RPG_Client_IPoolableComponent_Spawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET))(this);
	}

	::System::Void RPG_Client_IPoolableComponent_Despawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET))(this);
	}

	::System::Boolean _ShouldRegister()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE__SHOULDREGISTER_OFFSET))(this);
	}

	::System::Boolean _CheckPlatform()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE__CHECKPLATFORM_OFFSET))(this);
	}

	::System::String* _ConstructID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALNODE__CONSTRUCTID_OFFSET))(this);
	}

	::System::Boolean _IsValid(::UnityEngine::GameObject* go)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TUTORIALNODE__ISVALID_OFFSET))(this, go);
	}
};
