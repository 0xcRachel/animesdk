#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_35;
class Class_1_48570DED401BD199;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x15E93A60)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET UNITYSDK_OFFSET(0x15E9D420)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET UNITYSDK_OFFSET(0x15E9C240)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x15E956B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET UNITYSDK_OFFSET(0x15E9BD00)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x15E9C310)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E95750)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x15E92300)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET UNITYSDK_OFFSET(0x15E9C380)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x15E9B7D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x15E9B9B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x15E9C1F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x15E9B8A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x15E9B810)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x15E9B930)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x15E9B990)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x15E9B870)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x15E9B970)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x15E9B830)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x15E9B890)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x15E9B950)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET UNITYSDK_OFFSET(0x15E9BCB0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x15E9BC10)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x15E9BB70)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x15E9B9F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x15E9BA70)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x15E9BAC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET UNITYSDK_OFFSET(0x15E9C1A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x15E9BBC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x15E9BB20)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET UNITYSDK_OFFSET(0x15E958C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x15E9C6A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET UNITYSDK_OFFSET(0x15E61640)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15E7AAC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15E9DC70)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x15E9C290)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x15E9D4B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x15E90DE0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET UNITYSDK_OFFSET(0x15E95700)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x15E9B8E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x15E9B820)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x15E9B940)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x15E9B9A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x15E9B880)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x15E9B980)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x15E9B960)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15E9DCC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E99980)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x15E9D120)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15E9E050)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 31255;

	class AssetLoader : public ::System::Object
	{
	public:
		::Class_1_48570DED401BD199* BundleLoader; // 0x10
		::System::String* _AssetName_k__BackingField; // 0x18
		::RPG::PoolHashSet_1<::RPG::Client::AssetSystem::AssetObjectOptProxy*>* _ProxyList; // 0x20
		::System::Object* _UserParam; // 0x28
		::UnityEngine::Object* AssetObject; // 0x30
		::System::Type* _AssetType_k__BackingField; // 0x38
		::UnityEngine::AssetBundleRequest* AssetRequest; // 0x40
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0x48
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnRequestHandleHandler; // 0x50
		::System::Int32 _RefCount; // 0xC0
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xC4
		::RPG::Client::OpType _OpType_k__BackingField; // 0xC8
		::RPG::Client::AssetState _AssetState; // 0xCC
		::System::Boolean _IsInAsyncLoadingDispose; // 0xD0
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xD4
		::System::UInt64 AssetNameHash; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET))(this, value);
		}

		::System::String* get_LoaderType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET))(this, value);
		}

		::System::UInt64 get_NameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET))(this, userParam);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET))(this, value);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET))(this, value);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET))(this, value);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET))(this, value);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsNotLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET))(this);
		}

		::System::Boolean IsAsyncLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET))(this);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET))(this);
		}

		::System::Boolean IsNoRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET))(this);
		}

		::System::Int32 GetRefNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET))(this);
		}

		::System::Void AddRef(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET))(this, value);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void ClearLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchLoadedEvent(::Class_0_16E4307DCC419505_35* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET))(this, assetOpt);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET))(this);
		}

		::System::String* GetAssetLongName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET))(this);
		}

		::System::Boolean OnBundleAsyncLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET))(this);
		}

		::System::Void OnAssetRequestHandle(::UnityEngine::AsyncOperation* asyncOperation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET))(this, asyncOperation);
		}

		::System::Void _OnAssetRequestHandleImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void SetInDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET))(this);
		}

		::System::Void AddProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET))(this, proxy);
		}

		::System::Void RemoveProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET))(this, proxy);
		}

		::System::Void MergeWith(::RPG::Client::AssetSystem::AssetLoader* removeLoader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET))(this, removeLoader);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
