#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TutorialNode_NodePlatform.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_258;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define TUTORIALNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xA72CFB0)
#define TUTORIALNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA72D170)
#define TUTORIALNODE_COPYTO_OFFSET UNITYSDK_OFFSET(0xA72C4E0)
#define TUTORIALNODE_FORCEREGISTER_OFFSET UNITYSDK_OFFSET(0xA72CCF0)
#define TUTORIALNODE_GETSHOWREGISTERID_OFFSET UNITYSDK_OFFSET(0xA72C560)
#define TUTORIALNODE_ITUTORIALNODE_CANBEREPLACEDBY_OFFSET UNITYSDK_OFFSET(0xA72C5A0)
#define TUTORIALNODE_ITUTORIALNODE_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA72C8F0)
#define TUTORIALNODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA72D340)
#define TUTORIALNODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA72D4F0)
#define TUTORIALNODE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xA72D540)
#define TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA72D5D0)
#define TUTORIALNODE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA72D590)
#define TUTORIALNODE_SETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xA72D080)
#define TUTORIALNODE_SHOWREGISTERID_OFFSET UNITYSDK_OFFSET(0xA72C370)
#define TUTORIALNODE_START_OFFSET UNITYSDK_OFFSET(0xA72D1C0)
#define TUTORIALNODE_TRYREGISTER_OFFSET UNITYSDK_OFFSET(0xA72C940)
#define TUTORIALNODE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xA72CE70)
#define TUTORIALNODE__CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0xA72D620)
#define TUTORIALNODE__CONSTRUCTID_OFFSET UNITYSDK_OFFSET(0xA72C440)
#define TUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA72D6B0)
#define TUTORIALNODE__ISVALID_OFFSET UNITYSDK_OFFSET(0xA72C7E0)
#define TUTORIALNODE__SHOULDREGISTER_OFFSET UNITYSDK_OFFSET(0xA72CAD0)

inline static constexpr unsigned int TutorialNode_TypeDefinitionIndex = 37183;

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

	::System::Boolean ITutorialNode_CanbeReplacedBy(::Class_0_16E4307DCC419505_258* other)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_258*))((::PBYTE)hIl2Cpp + TUTORIALNODE_ITUTORIALNODE_CANBEREPLACEDBY_OFFSET))(this, other);
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
