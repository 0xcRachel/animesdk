#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B3CC70)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 8950;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F10);
		}
		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F18);
		}
		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F20);
		}
		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F28);
		}
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F30);
		}
		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F38);
		}
		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F48);
		}
		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F50);
		}
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F58);
		}
		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F60);
		}
		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F68);
		}
		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F70);
		}
		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F78);
		}
		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}
		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F88);
		}
		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2520);
		}
		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2524);
		}
		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2528);
		}
		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x252C);
		}
		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2530);
		}
		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2534);
		}
		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2538);
		}
		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x253C);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2540);
		}
		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2544);
		}
		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2548);
		}
		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x254C);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2550);
		}
		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2554);
		}
		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2558);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x255C);
		}
		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2560);
		}
		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2564);
		}
		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2568);
		}
		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x256C);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2570);
		}
		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2574);
		}
		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2578);
		}
		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x257C);
		}
		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2580);
		}
		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2584);
		}
		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2588);
		}
		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x258C);
		}
		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2590);
		}
		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2594);
		}
		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x2598);
		}
		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x259C);
		}
		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25A0);
		}
		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25A4);
		}
		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25A8);
		}
		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25AC);
		}
		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25B0);
		}
		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25B4);
		}
		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25B8);
		}
		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25BC);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25C0);
		}
		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25C4);
		}
		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25C8);
		}
		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25CC);
		}
		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25D0);
		}
		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25D4);
		}
		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LayerUtils_TypeDefinitionIndex)->GetStaticField(0x25D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS__CCTOR_OFFSET))();
		}
	};
}
