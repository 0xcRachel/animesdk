#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BAGraphLayerTemplate; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONGRAPH_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x1523E850)
#define BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET UNITYSDK_OFFSET(0x1523F2C0)
#define BATCHANIMATIONGRAPH_BABINIT_OFFSET UNITYSDK_OFFSET(0x1523E660)
#define BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET UNITYSDK_OFFSET(0x1523E6E0)
#define BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET UNITYSDK_OFFSET(0x1523F3F0)
#define BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1523EA00)
#define BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x1523FA30)
#define BATCHANIMATIONGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x1523E120)
#define BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET UNITYSDK_OFFSET(0x1523F260)
#define BATCHANIMATIONGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x1523E2F0)
#define BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET UNITYSDK_OFFSET(0x1523E7F0)
#define BATCHANIMATIONGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0x1523E760)
#define BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET UNITYSDK_OFFSET(0x1523EA20)
#define BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1523ED20)
#define BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET UNITYSDK_OFFSET(0x1523F450)
#define BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET UNITYSDK_OFFSET(0x1523E780)
#define BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET UNITYSDK_OFFSET(0x1523F8C0)
#define BATCHANIMATIONGRAPH_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1523E190)
#define BATCHANIMATIONGRAPH_RESET_OFFSET UNITYSDK_OFFSET(0x1523E1F0)
#define BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1523E900)
#define BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET UNITYSDK_OFFSET(0x1523FD30)
#define BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x1523F930)
#define BATCHANIMATIONGRAPH_TOSTOP_OFFSET UNITYSDK_OFFSET(0x1523FC30)
#define BATCHANIMATIONGRAPH_TOWALK_OFFSET UNITYSDK_OFFSET(0x1523FB30)
#define BATCHANIMATIONGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15240060)

inline static constexpr unsigned int BatchAnimationGraph_TypeDefinitionIndex = 34848;

class BatchAnimationGraph : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::BAGraphLayerTemplate** StaticGet__graphTemplate()
	{
		return (::UnityEngine::Rendering::BAGraphLayerTemplate**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0x5D780);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _clipIndex; // 0x10
	::UnityEngine::Rendering::BatchAnimation* _baCache; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _maskIndex; // 0x20
	::System::UInt32 _LayerMask; // 0x28
	::System::Int32 _CurrentMaskState; // 0x2C
	::System::Int32 _CurrentPlayState; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH__CTOR_OFFSET))(this);
	}

	static ::BatchAnimationGraph* Get()
	{
		return ((::BatchAnimationGraph*(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GET_OFFSET))();
	}

	static ::System::Void Recycle(::BatchAnimationGraph* baGraph)
	{
		return ((::System::Void(*)(::BatchAnimationGraph*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RECYCLE_OFFSET))(baGraph);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RESET_OFFSET))(this);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_INIT_OFFSET))();
	}

	::System::Void BABInit(::UnityEngine::Rendering::BatchAnimation* ba, ::System::UInt32 layermask)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_BABINIT_OFFSET))(this, ba, layermask);
	}

	::System::Void EnableLayer(::System::Int32 layer, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET))(this, layer, enable);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISVALID_OFFSET))(this);
	}

	::System::Boolean PlayLayer(::System::Boolean play, ::System::Int32 layer)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET))(this, play, layer);
	}

	::System::Boolean IsAnimValid(::System::Int32 count)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET))(this, count);
	}

	::System::Int32 AddClip(::System::String* name, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::System::Int32 fadeFrame)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDCLIP_OFFSET))(this, name, clip, fadeFrame);
	}

	::System::Void SetClipFadeIn(::System::String* name, ::System::Int32 fadeFrame)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET))(this, name, fadeFrame);
	}

	::System::Int32 GetClipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET))(this);
	}

	::System::Void PlayClips(::System::String* name, ::System::Single speed, ::System::Int32 playState)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET))(this, name, speed, playState);
	}

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::String* name, ::System::Single speed, ::System::Int32 playState)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET))(this, instance, name, speed, playState);
	}

	::System::Boolean HasMaskClip(::System::String* name)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET))(this, name);
	}

	::System::Void AddMaskClip(::System::String* name, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::UnityEngine::Rendering::BatchAnimationBoneMask* mask, ::System::Single weight)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET))(this, name, clip, mask, weight);
	}

	::System::Void EnableMaskLayer(::System::Boolean play)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET))(this, play);
	}

	::System::Void PlayLayerClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::String* name, ::System::Boolean play, ::System::Int32 layer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET))(this, instance, name, play, layer);
	}

	::System::Void PlayWalkStop(::System::Boolean play)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET))(this, play);
	}

	::System::Void StartWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET))(this, instance, state);
	}

	::System::Int32 GetWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET))(this, instance);
	}

	::System::Void ToWalk(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOWALK_OFFSET))(this, instance);
	}

	::System::Void ToStop(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOSTOP_OFFSET))(this, instance);
	}

	::System::Void SetStateClip(::System::String* name, ::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET))(this, name, state);
	}
};
