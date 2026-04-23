#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x192CEB00)
#define AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x192CC460)
#define AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x192AD630)
#define AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x192CED00)
#define AKGAMEOBJMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x192CEC60)
#define AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x192CC830)
#define AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x192AD910)
#define AKGAMEOBJMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x192CED60)
#define AKGAMEOBJMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192CF090)
#define AKGAMEOBJMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x192CEC00)

inline static constexpr unsigned int AkGameObjManager_TypeDefinitionIndex = 40400;

class AkGameObjManager : public ::System::Object
{
public:
	static ::AkGameObjManager** StaticGet_m_Instance()
	{
		return (::AkGameObjManager**)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0x55F60);
	}
	static ::System::Int32* StaticGet__MaxProcessCountPerFrame()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0xF040);
	}
	::System::Collections::Generic::List_1<::AkGameObj*>* m_GameObjs; // 0x10
	::System::Collections::Generic::List_1<::AkGameObj*>* m_ListenerGameObjs; // 0x18
	::System::Int32 index; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_INIT_OFFSET))();
	}

	static ::System::Void Terminate()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_TERMINATE_OFFSET))();
	}

	static ::System::Void RegisterGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void UnregisterGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void RegisterListenerGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void UnregisterListenerGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void SetMaxProcessCountPerFrame(::System::Int32 maxProcessCountPerFrame)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(maxProcessCountPerFrame);
	}

	static ::System::Void Update()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UPDATE_OFFSET))();
	}
};
