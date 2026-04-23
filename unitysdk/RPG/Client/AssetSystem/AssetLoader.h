#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_62;
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

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x16B9C840)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET UNITYSDK_OFFSET(0x16BD0370)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET UNITYSDK_OFFSET(0x16BCEA40)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x16B9E640)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET UNITYSDK_OFFSET(0x16BCE500)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x16BCEB20)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B9E880)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x16B9B0B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET UNITYSDK_OFFSET(0x16BCEB90)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x16BCDFB0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x16BCE1B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x16BCE9F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x16BCE090)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x16BCE000)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x16BCE130)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x16BCE190)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x16BCE060)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x16BCE170)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x16BCE020)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x16BCE080)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x16BCE150)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET UNITYSDK_OFFSET(0x16BCE4B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x16BCE410)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x16BCE370)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x16BCE1F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x16BCE270)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x16BCE2C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET UNITYSDK_OFFSET(0x16BCE9A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x16BCE3C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x16BCE320)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET UNITYSDK_OFFSET(0x16B9E9F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x16BCF5F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET UNITYSDK_OFFSET(0x16BBB840)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16BCEEE0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16BD0BE0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x16BCEA90)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x16BD0400)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x16B99A80)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET UNITYSDK_OFFSET(0x16B9E690)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x16BCE0E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x16BCE010)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x16BCE140)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x16BCE1A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x16BCE070)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x16BCE180)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x16BCE160)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16BD0C30)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCC170)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x16BD0060)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16BD0FC0)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 37850;

	class AssetLoader : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::RPG::Client::AssetSystem::AssetObjectOptProxy*>* _ProxyList; // 0x10
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnRequestHandleHandler; // 0x18
		::UnityEngine::AssetBundleRequest* AssetRequest; // 0x88
		::System::Type* _AssetType_k__BackingField; // 0x90
		::Class_1_48570DED401BD199* BundleLoader; // 0x98
		::System::Object* _UserParam; // 0xA0
		::UnityEngine::Object* AssetObject; // 0xA8
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0xB0
		::System::String* _AssetName_k__BackingField; // 0xB8
		::System::UInt64 AssetNameHash; // 0xC0
		::System::Boolean _IsInAsyncLoadingDispose; // 0xC8
		::RPG::Client::OpType _OpType_k__BackingField; // 0xCC
		::RPG::Client::AssetState _AssetState; // 0xD0
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xD4
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xD8
		::System::Int32 _RefCount; // 0xDC

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

		::System::Void DispatchLoadedEvent(::Class_0_16E4307DCC419505_62* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET))(this, assetOpt);
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
