#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomAwareObject;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREMANAGER_OBJECTENTEREDROOM_1_OFFSET UNITYSDK_OFFSET(0x1A2868A0)
#define AKROOMAWAREMANAGER_OBJECTENTEREDROOM_OFFSET UNITYSDK_OFFSET(0x1A287230)
#define AKROOMAWAREMANAGER_OBJECTEXITEDROOM_1_OFFSET UNITYSDK_OFFSET(0x1A2881C0)
#define AKROOMAWAREMANAGER_OBJECTEXITEDROOM_OFFSET UNITYSDK_OFFSET(0x1A287340)
#define AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECTFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1A286F30)
#define AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECT_OFFSET UNITYSDK_OFFSET(0x1A287EB0)
#define AKROOMAWAREMANAGER_UNREGISTERROOMAWAREOBJECT_OFFSET UNITYSDK_OFFSET(0x1A287F70)
#define AKROOMAWAREMANAGER_UPDATEROOMAWAREOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A288340)
#define AKROOMAWAREMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2885D0)

inline static constexpr unsigned int AkRoomAwareManager_TypeDefinitionIndex = 41231;

class AkRoomAwareManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>** StaticGet_m_RoomAwareObjectToUpdate()
	{
		return (::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareManager_TypeDefinitionIndex)->GetStaticField(0x5AB20);
	}
	static ::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>** StaticGet_m_RoomAwareObjects()
	{
		return (::System::Collections::Generic::HashSet_1<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareManager_TypeDefinitionIndex)->GetStaticField(0x5AB28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void RegisterRoomAwareObject(::AkRoomAwareObject* a1)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECT_OFFSET))(a1);
	}

	static ::System::Void UnregisterRoomAwareObject(::AkRoomAwareObject* a1)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_UNREGISTERROOMAWAREOBJECT_OFFSET))(a1);
	}

	static ::System::Void RegisterRoomAwareObjectForUpdate(::AkRoomAwareObject* a1)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_REGISTERROOMAWAREOBJECTFORUPDATE_OFFSET))(a1);
	}

	static ::System::Void ObjectEnteredRoom(::UnityEngine::Collider* a1, ::AkRoom* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTENTEREDROOM_OFFSET))(a1, a2);
	}

	static ::System::Void ObjectEnteredRoom_1(::AkRoomAwareObject* a1, ::AkRoom* a2)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTENTEREDROOM_1_OFFSET))(a1, a2);
	}

	static ::System::Void ObjectExitedRoom(::UnityEngine::Collider* a1, ::AkRoom* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTEXITEDROOM_OFFSET))(a1, a2);
	}

	static ::System::Void ObjectExitedRoom_1(::AkRoomAwareObject* a1, ::AkRoom* a2)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_OBJECTEXITEDROOM_1_OFFSET))(a1, a2);
	}

	static ::System::Void UpdateRoomAwareObjects()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREMANAGER_UPDATEROOMAWAREOBJECTS_OFFSET))();
	}
};
