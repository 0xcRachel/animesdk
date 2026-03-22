#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseSpineComponentController.h"

namespace RPG::Client { class SpineActionInfo; }
namespace Spine { class AnimationState; }
namespace Spine { class Skeleton; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_ACTIONLUT_OFFSET UNITYSDK_OFFSET(0x93113C0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x9311280)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x93112E0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x9311360)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x9311300)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x93108C0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9310DD0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x9310F30)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_SET_ACTIONLUT_OFFSET UNITYSDK_OFFSET(0x93113D0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_SET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x93112F0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x93113E0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__LOADACTIONLUT_OFFSET UNITYSDK_OFFSET(0x93109D0)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__SETTRACKSWITCHMIX_OFFSET UNITYSDK_OFFSET(0x9310B50)
#define RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__UNLOADACTIONLUT_OFFSET UNITYSDK_OFFSET(0x9310E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GraphicSpineMultiTrackController_TypeDefinitionIndex = 54823;

	class GraphicSpineMultiTrackController : public ::RPG::Client::BaseSpineComponentController
	{
	public:
		::System::String* DefaultSkinName; // 0x20
		::Il2CppArray<::RPG::Client::SpineActionInfo*>* ActionInfos; // 0x28
		::Spine::Unity::SkeletonGraphic* _Graphic_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SpineActionInfo*>* _ActionLUT_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PlayAction(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_PLAYACTION_OFFSET))(this, name);
		}

		::System::Void _LoadActionLUT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__LOADACTIONLUT_OFFSET))(this);
		}

		::System::Void _UnloadActionLUT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__UNLOADACTIONLUT_OFFSET))(this);
		}

		::System::Void _SetTrackSwitchMix(::System::Int32 trackID, ::System::Single mix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER__SETTRACKSWITCHMIX_OFFSET))(this, trackID, mix);
		}

		::Spine::Unity::SkeletonGraphic* get_Graphic()
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void set_Graphic(::Spine::Unity::SkeletonGraphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_SET_GRAPHIC_OFFSET))(this, value);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_SKELETON_OFFSET))(this);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SpineActionInfo*>* get_ActionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SpineActionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_GET_ACTIONLUT_OFFSET))(this);
		}

		::System::Void set_ActionLUT(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SpineActionInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SpineActionInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSPINEMULTITRACKCONTROLLER_SET_ACTIONLUT_OFFSET))(this, value);
		}
	};
}
