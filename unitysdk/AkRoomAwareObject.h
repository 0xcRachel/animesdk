#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;
class AkRoom_PriorityList;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x196FB370)
#define AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET UNITYSDK_OFFSET(0x196FAE50)
#define AKROOMAWAREOBJECT_EXITEDROOM_OFFSET UNITYSDK_OFFSET(0x196F9B90)
#define AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET UNITYSDK_OFFSET(0x196FAD10)
#define AKROOMAWAREOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x196FB9C0)
#define AKROOMAWAREOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196FB650)
#define AKROOMAWAREOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196FB4D0)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET UNITYSDK_OFFSET(0x196FB1B0)
#define AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET UNITYSDK_OFFSET(0x196FB850)
#define AKROOMAWAREOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FBAC0)
#define AKROOMAWAREOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196FBA70)

inline static constexpr unsigned int AkRoomAwareObject_TypeDefinitionIndex = 40501;

class AkRoomAwareObject : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>** StaticGet_ColliderToRoomAwareObjectMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareObject_TypeDefinitionIndex)->GetStaticField(0x56960);
	}
	::UnityEngine::Collider* m_Collider; // 0x18
	::AkRoom_PriorityList* roomPriorityList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CCTOR_OFFSET))();
	}

	static ::AkRoomAwareObject* GetAkRoomAwareObjectFromCollider(::UnityEngine::Collider* collider)
	{
		return ((::AkRoomAwareObject*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_GETAKROOMAWAREOBJECTFROMCOLLIDER_OFFSET))(collider);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ONDESTROY_OFFSET))(this);
	}

	::System::Void SetGameObjectInHighestPriorityActiveAndEnabledRoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET))(this);
	}

	::System::Void SetGameObjectInRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_SETGAMEOBJECTINROOM_OFFSET))(this, room);
	}

	::System::Void EnteredRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_ENTEREDROOM_OFFSET))(this, room);
	}

	::System::Void ExitedRoom(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_EXITEDROOM_OFFSET))(this, room);
	}
};
