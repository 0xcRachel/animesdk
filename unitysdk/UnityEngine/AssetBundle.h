#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BuildCompression.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/ThreadPriority.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class Stream; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleInstantiatePrefabRequest; }
namespace UnityEngine { class AssetBundleRecompressOperation; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class BinaryPrefabAsset; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_ASSETBUNDLE_ADDSEARCHPATH_OFFSET UNITYSDK_OFFSET(0x1A74F0B0)
#define UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FB90)
#define UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_OFFSET UNITYSDK_OFFSET(0x1A74FB80)
#define UNITYENGINE_ASSETBUNDLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A74F4D0)
#define UNITYENGINE_ASSETBUNDLE_FILEEXIST_OFFSET UNITYSDK_OFFSET(0x1A74F0D0)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET UNITYSDK_OFFSET(0x1A74F090)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1A74F0A0)
#define UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7503B0)
#define UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1A74FBE0)
#define UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F6E0)
#define UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_OFFSET UNITYSDK_OFFSET(0x1A74F6F0)
#define UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A750570)
#define UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASH_OFFSET UNITYSDK_OFFSET(0x1A750560)
#define UNITYENGINE_ASSETBUNDLE_GETASYNCLOADREPORT_OFFSET UNITYSDK_OFFSET(0x1A7503A0)
#define UNITYENGINE_ASSETBUNDLE_GETINTERNALASSETSINSTANCEIDEND_OFFSET UNITYSDK_OFFSET(0x1A7503D0)
#define UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F6C0)
#define UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_OFFSET UNITYSDK_OFFSET(0x1A74F6D0)
#define UNITYENGINE_ASSETBUNDLE_GET_ISSTREAMEDSCENEASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A74F4C0)
#define UNITYENGINE_ASSETBUNDLE_GET_MAINASSET_OFFSET UNITYSDK_OFFSET(0x1A74F060)
#define UNITYENGINE_ASSETBUNDLE_GET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1A750430)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A750170)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A750160)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_OFFSET UNITYSDK_OFFSET(0x1A750150)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_1_OFFSET UNITYSDK_OFFSET(0x1A7500A0)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A750090)
#define UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0x1A750080)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74FFF0)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x1A74FF40)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_1_OFFSET UNITYSDK_OFFSET(0x1A74FEC0)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x1A74FE10)
#define UNITYENGINE_ASSETBUNDLE_LOADALL_1_OFFSET UNITYSDK_OFFSET(0x1A74F520)
#define UNITYENGINE_ASSETBUNDLE_LOADALL_OFFSET UNITYSDK_OFFSET(0x1A74F510)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F920)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74F840)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A74F750)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A74F890)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F910)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F700)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F690)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNCWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FE00)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74FC40)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A74FD40)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FD30)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x1A74FBF0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FB30)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_1_OFFSET UNITYSDK_OFFSET(0x1A74F980)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_2_OFFSET UNITYSDK_OFFSET(0x1A74FA80)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FA70)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_OFFSET UNITYSDK_OFFSET(0x1A74F930)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1A74F580)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_2_OFFSET UNITYSDK_OFFSET(0x1A74F640)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F630)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1A74F530)
#define UNITYENGINE_ASSETBUNDLE_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F500)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSETASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7502D0)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A750230)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A7502E0)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_OFFSET UNITYSDK_OFFSET(0x1A7502C0)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_1_OFFSET UNITYSDK_OFFSET(0x1A750240)
#define UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_OFFSET UNITYSDK_OFFSET(0x1A750220)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE1_OFFSET UNITYSDK_OFFSET(0x1A74F1C0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE2_OFFSET UNITYSDK_OFFSET(0x1A74F1D0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC1_OFFSET UNITYSDK_OFFSET(0x1A74F0F0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC2_OFFSET UNITYSDK_OFFSET(0x1A74F100)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCEXT_OFFSET UNITYSDK_OFFSET(0x1A74F1A0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74F120)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A74F130)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F0E0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F110)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEEXT_OFFSET UNITYSDK_OFFSET(0x1A74F1E0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC1_OFFSET UNITYSDK_OFFSET(0x1A74F150)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC2_OFFSET UNITYSDK_OFFSET(0x1A74F160)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74F180)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A74F190)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F140)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F170)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1A74F200)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_2_OFFSET UNITYSDK_OFFSET(0x1A74F210)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F1B0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1A74F1F0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74F240)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F220)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F230)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_1_OFFSET UNITYSDK_OFFSET(0x1A74F270)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F250)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_OFFSET UNITYSDK_OFFSET(0x1A74F260)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F3B0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A74F3C0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A74F3F0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x1A74F380)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F450)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1A74F460)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_2_OFFSET UNITYSDK_OFFSET(0x1A74F490)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1A74F420)
#define UNITYENGINE_ASSETBUNDLE_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1A74F4F0)
#define UNITYENGINE_ASSETBUNDLE_LOAD_OFFSET UNITYSDK_OFFSET(0x1A74F4E0)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A750420)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A750410)
#define UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x1A7503E0)
#define UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74F6A0)
#define UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_OFFSET UNITYSDK_OFFSET(0x1A74F6B0)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETSWITHHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FB70)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_1_OFFSET UNITYSDK_OFFSET(0x1A74FB60)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FB50)
#define UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1A74FB40)
#define UNITYENGINE_ASSETBUNDLE_RETURNMAINASSET_OFFSET UNITYSDK_OFFSET(0x1A74F070)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FBB0)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1A74FBA0)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A74FBD0)
#define UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_OFFSET UNITYSDK_OFFSET(0x1A74FBC0)
#define UNITYENGINE_ASSETBUNDLE_SETDEFAULTPATH_OFFSET UNITYSDK_OFFSET(0x1A74F0C0)
#define UNITYENGINE_ASSETBUNDLE_SETINTERNALASSETSINSTANCEIDEND_OFFSET UNITYSDK_OFFSET(0x1A7503C0)
#define UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEMMAX_OFFSET UNITYSDK_OFFSET(0x1A750550)
#define UNITYENGINE_ASSETBUNDLE_SET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1A750470)
#define UNITYENGINE_ASSETBUNDLE_UNLOADALLASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1A74F080)
#define UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1A750390)
#define UNITYENGINE_ASSETBUNDLE_VALIDATELOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1A74F280)
#define UNITYENGINE_ASSETBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74F050)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundle_TypeDefinitionIndex = 5411;

	class AssetBundle : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_mainAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_MAINASSET_OFFSET))(this);
		}

		static ::UnityEngine::Object* returnMainAsset(::UnityEngine::AssetBundle* bundle)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::AssetBundle*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RETURNMAINASSET_OFFSET))(bundle);
		}

		static ::System::Void UnloadAllAssetBundles(::System::Boolean unloadAllObjects)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOADALLASSETBUNDLES_OFFSET))(unloadAllObjects);
		}

		static ::Il2CppArray<::UnityEngine::AssetBundle*>* GetAllLoadedAssetBundles_Native()
		{
			return ((::Il2CppArray<::UnityEngine::AssetBundle*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AssetBundle*>* GetAllLoadedAssetBundles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::AssetBundle*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET))();
		}

		static ::System::Void AddSearchPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_ADDSEARCHPATH_OFFSET))(path);
		}

		static ::System::Void SetDefaultPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETDEFAULTPATH_OFFSET))(path);
		}

		static ::System::Boolean FileExist(::System::Byte* path)
		{
			return ((::System::Boolean(*)(::System::Byte*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_FILEEXIST_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync1(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC1_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync2(::System::Byte* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::Byte*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::System::String* path)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_1(::System::String* path, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_1_OFFSET))(path, crc);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_2(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_Internal(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_INTERNAL_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync1(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC1_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync2(::System::Byte* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::Byte*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync(::System::String* path)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_1(::System::String* path, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_1_OFFSET))(path, crc);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFilePrefetchAsync_2(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEPREFETCHASYNC_2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsyncExt(::System::Byte* path, ::System::UInt32 crc, ::System::UInt64 offset, ::System::Int32 options)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::Byte*, ::System::UInt32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCEXT_OFFSET))(path, crc, offset, options);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_Internal(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile1(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE1_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile2(::System::Byte* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::Byte*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundle* LoadFromFileExt(::System::Byte* path, ::System::UInt32 crc, ::System::UInt64 offset, ::System::Int32 options)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::Byte*, ::System::UInt32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEEXT_OFFSET))(path, crc, offset, options);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile(::System::String* path)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_1(::System::String* path, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET))(path, crc);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_2(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_2_OFFSET))(path, crc, offset);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_Internal(::Il2CppArray<::System::Byte>* binary, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET))(binary, crc);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync(::Il2CppArray<::System::Byte>* binary)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET))(binary);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_1(::Il2CppArray<::System::Byte>* binary, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_1_OFFSET))(binary, crc);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory_Internal(::Il2CppArray<::System::Byte>* binary, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_INTERNAL_OFFSET))(binary, crc);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory(::Il2CppArray<::System::Byte>* binary)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_OFFSET))(binary);
		}

		static ::UnityEngine::AssetBundle* LoadFromMemory_1(::Il2CppArray<::System::Byte>* binary, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundle*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORY_1_OFFSET))(binary, crc);
		}

		static ::System::Void ValidateLoadFromStream(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_VALIDATELOADFROMSTREAM_OFFSET))(stream);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync(::System::IO::Stream* stream, ::System::UInt32 crc, ::System::UInt32 managedReadBufferSize)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_OFFSET))(stream, crc, managedReadBufferSize);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync_1(::System::IO::Stream* stream, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_1_OFFSET))(stream, crc);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsync_2(::System::IO::Stream* stream)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNC_2_OFFSET))(stream);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream(::System::IO::Stream* stream, ::System::UInt32 crc, ::System::UInt32 managedReadBufferSize)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_OFFSET))(stream, crc, managedReadBufferSize);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream_1(::System::IO::Stream* stream, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_1_OFFSET))(stream, crc);
		}

		static ::UnityEngine::AssetBundle* LoadFromStream_2(::System::IO::Stream* stream)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAM_2_OFFSET))(stream);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromStreamAsyncInternal(::System::IO::Stream* stream, ::System::UInt32 crc, ::System::UInt32 managedReadBufferSize)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMASYNCINTERNAL_OFFSET))(stream, crc, managedReadBufferSize);
		}

		static ::UnityEngine::AssetBundle* LoadFromStreamInternal(::System::IO::Stream* stream, ::System::UInt32 crc, ::System::UInt32 managedReadBufferSize)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::IO::Stream*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMSTREAMINTERNAL_OFFSET))(stream, crc, managedReadBufferSize);
		}

		::System::Boolean get_isStreamedSceneAssetBundle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_ISSTREAMEDSCENEASSETBUNDLE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_CONTAINS_OFFSET))(this, name);
		}

		::UnityEngine::Object* Load(::System::String* name)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOAD_OFFSET))(this, name);
		}

		::UnityEngine::Object* Load_1(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOAD_1_OFFSET))(this, name, type);
		}

		::UnityEngine::AssetBundleRequest* LoadAsync(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASYNC_OFFSET))(this, name, type);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAll(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALL_OFFSET))(this, type);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAll_1()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALL_1_OFFSET))(this);
		}

		::UnityEngine::Object* LoadAsset(::System::String* name)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET))(this, name);
		}

		::UnityEngine::Object* LoadAsset_1(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_1_OFFSET))(this, name, type);
		}

		::UnityEngine::Object* LoadAsset_2(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_2_OFFSET))(this, nameHash, type);
		}

		::System::Void ReleasePrefetch_Internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_INTERNAL_OFFSET))(this);
		}

		::System::Void ReleasePrefetch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RELEASEPREFETCH_OFFSET))(this);
		}

		::System::Int32 GetPrefetchSize_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_INTERNAL_OFFSET))(this);
		}

		::System::Int32 GetPrefetchSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETPREFETCHSIZE_OFFSET))(this);
		}

		static ::System::UInt64 GetAllPrefetchSize_Internal()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_INTERNAL_OFFSET))();
		}

		static ::System::UInt64 GetAllPrefetchSize()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLPREFETCHSIZE_OFFSET))();
		}

		::UnityEngine::Object* LoadAsset_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET))(this, name, type);
		}

		::UnityEngine::Object* LoadAssetWithHash_Internal(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHHASH_INTERNAL_OFFSET))(this, nameHash, type);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync(::System::String* name)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET))(this, name);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_1(::System::Int64 nameHash)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_1_OFFSET))(this, nameHash);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_2(::System::String* name, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_2_OFFSET))(this, name, type, oneTime);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_3(::System::Int64 nameHash, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_3_OFFSET))(this, nameHash, type, oneTime);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets(::System::String* name)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_1(::System::String* name, ::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_1_OFFSET))(this, name, type);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_2(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_2_OFFSET))(this, nameHash, type);
		}

		::System::Void RequestToUnloadAssets(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_OFFSET))(this, name, type);
		}

		::System::Void RequestToUnloadAssets_1(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_1_OFFSET))(this, nameHash, type);
		}

		static ::System::Int32 CommitAllUnloadAssetRequests()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_OFFSET))();
		}

		static ::System::Void SetAllowAssetBundleUnloadAssets(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_OFFSET))(enable);
		}

		static ::System::Void SetAllowValidateDependencyOnUnloading(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_OFFSET))(enable);
		}

		static ::System::Boolean GetAllowAssetBundleUnloadAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_OFFSET))();
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::System::String* name)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET))(this, name);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_1(::System::String* name, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_1_OFFSET))(this, name, type, oneTime);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_2(::System::Int64 nameHash, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_2_OFFSET))(this, nameHash, type, oneTime);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets_1(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_1_OFFSET))(this, type);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync()
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET))(this);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync_1(::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_1_OFFSET))(this, type, oneTime);
		}

		::UnityEngine::GameObject* InstantiatePrefab(::System::Int64 nameHash, ::System::Boolean deactive)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_OFFSET))(this, nameHash, deactive);
		}

		::UnityEngine::GameObject* InstantiatePrefab_Internal(::System::String* name, ::System::Boolean deactive)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_INTERNAL_OFFSET))(this, name, deactive);
		}

		::UnityEngine::GameObject* InstantiatePrefab_1(::System::String* name, ::System::Boolean deactive)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFAB_1_OFFSET))(this, name, deactive);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync(::System::Int64 nameHash, ::System::Boolean deactive)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_OFFSET))(this, nameHash, deactive);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync_Internal(::System::String* name, ::System::Boolean deactive)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_INTERNAL_OFFSET))(this, name, deactive);
		}

		::UnityEngine::AssetBundleInstantiatePrefabRequest* InstantiatePrefabAsync_1(::System::String* name, ::System::Boolean deactive)
		{
			return ((::UnityEngine::AssetBundleInstantiatePrefabRequest*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_INSTANTIATEPREFABASYNC_1_OFFSET))(this, name, deactive);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefab(::System::Int64 nameHash)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_OFFSET))(this, nameHash);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefabAsset_Internal(::System::String* name)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSET_INTERNAL_OFFSET))(this, name);
		}

		::UnityEngine::BinaryPrefabAsset* LoadBinaryPrefab_1(::System::String* name)
		{
			return ((::UnityEngine::BinaryPrefabAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFAB_1_OFFSET))(this, name);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAsync(::System::Int64 nameHash)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_OFFSET))(this, nameHash);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAssetAsync_Internal(::System::String* name)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASSETASYNC_INTERNAL_OFFSET))(this, name);
		}

		::UnityEngine::AssetBundleRequest* LoadBinaryPrefabAsync_1(::System::String* name)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADBINARYPREFABASYNC_1_OFFSET))(this, name);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::System::String* name, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET))(this, name, type, oneTime);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsyncWithHash_Internal(::System::Int64 nameHash, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCWITHHASH_INTERNAL_OFFSET))(this, nameHash, type, oneTime);
		}

		::System::Void Unload(::System::Boolean unloadAllLoadedObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET))(this, unloadAllLoadedObjects);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET))(this, name, type);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssetsWithHash_Internal(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSWITHHASH_INTERNAL_OFFSET))(this, nameHash, type);
		}

		::System::Void RequestToUnloadAssets_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETS_INTERNAL_OFFSET))(this, name, type);
		}

		::System::Void RequestToUnloadAssetsWithHash_Internal(::System::Int64 nameHash, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_REQUESTTOUNLOADASSETSWITHHASH_INTERNAL_OFFSET))(this, nameHash, type);
		}

		static ::System::Int32 CommitAllUnloadAssetRequests_Internal()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_COMMITALLUNLOADASSETREQUESTS_INTERNAL_OFFSET))();
		}

		static ::System::String* GetAsyncLoadReport()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASYNCLOADREPORT_OFFSET))();
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::System::String* name, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET))(this, name, type, oneTime);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsyncWithHash_Internal(::System::Int64 nameHash, ::System::Type* type, ::System::Boolean oneTime)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::Int64, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNCWITHHASH_INTERNAL_OFFSET))(this, nameHash, type, oneTime);
		}

		static ::System::Void SetAllowAssetBundleUnloadAssets_Internal(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET))(enable);
		}

		static ::System::Void SetAllowValidateDependencyOnUnloading_Internal(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETALLOWVALIDATEDEPENDENCYONUNLOADING_INTERNAL_OFFSET))(enable);
		}

		static ::System::Boolean GetAllowAssetBundleUnloadAssets_Internal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLOWASSETBUNDLEUNLOADASSETS_INTERNAL_OFFSET))();
		}

		static ::System::Void SetInternalAssetsInstanceIdEnd(::System::Int32 id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETINTERNALASSETSINSTANCEIDEND_OFFSET))(id);
		}

		static ::System::Int32 GetInternalAssetsInstanceIdEnd()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETINTERNALASSETSINSTANCEIDEND_OFFSET))();
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync(::System::String* inputPath, ::System::String* outputPath, ::UnityEngine::BuildCompression method, ::System::UInt32 expectedCRC, ::UnityEngine::ThreadPriority priority)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_OFFSET))(inputPath, outputPath, method, expectedCRC, priority);
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync_Internal(::System::String* inputPath, ::System::String* outputPath, ::UnityEngine::BuildCompression method, ::System::UInt32 expectedCRC, ::UnityEngine::ThreadPriority priority)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_OFFSET))(inputPath, outputPath, method, expectedCRC, priority);
		}

		static ::System::UInt32 get_memoryBudgetKB()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GET_MEMORYBUDGETKB_OFFSET))();
		}

		static ::System::Void set_memoryBudgetKB(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SET_MEMORYBUDGETKB_OFFSET))(value);
		}

		static ::System::Void SetPrefetchMemMax(::System::UInt32 ios, ::System::UInt32 android, ::System::UInt32 win, ::System::UInt32 ps5, ::System::UInt32 other)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SETPREFETCHMEMMAX_OFFSET))(ios, android, win, ps5, other);
		}

		static ::System::Int64 GetAssetBundleHash(::System::String* path)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASH_OFFSET))(path);
		}

		static ::System::Int64 GetAssetBundleHashInternal(::System::String* path)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETASSETBUNDLEHASHINTERNAL_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundleRecompressOperation* RecompressAssetBundleAsync_Internal_Injected(::System::String* inputPath, ::System::String* outputPath, ::UnityEngine::BuildCompression& method, ::System::UInt32 expectedCRC, ::UnityEngine::ThreadPriority priority)
		{
			return ((::UnityEngine::AssetBundleRecompressOperation*(*)(::System::String*, ::System::String*, ::UnityEngine::BuildCompression&, ::System::UInt32, ::UnityEngine::ThreadPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RECOMPRESSASSETBUNDLEASYNC_INTERNAL_INJECTED_OFFSET))(inputPath, outputPath, method, expectedCRC, priority);
		}
	};
}
