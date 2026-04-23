#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_999AE0B49D951C72;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace RPG::GameCore { class AvatarOutfitPartConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_Pendant; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_Renderer; }
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_APPLY_OFFSET UNITYSDK_OFFSET(0x949C0B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CONTAINSPART_OFFSET UNITYSDK_OFFSET(0x949FF50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATEPENDANTOUTFITPART_OFFSET UNITYSDK_OFFSET(0x94A1EE0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATERENDEREROUTFITPART_OFFSET UNITYSDK_OFFSET(0x94A1DB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x949C030)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETATTACHPOINTINST_OFFSET UNITYSDK_OFFSET(0x94A1FF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETSHADERPROPERTYTRANSITION_OFFSET UNITYSDK_OFFSET(0x94A2120)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GET_CURRENTOUTFITPARTS_OFFSET UNITYSDK_OFFSET(0x94A25C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADPENDANTPART_OFFSET UNITYSDK_OFFSET(0x94A1B60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADRENDERERPART_OFFSET UNITYSDK_OFFSET(0x94A17E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOAD_OFFSET UNITYSDK_OFFSET(0x949C910)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_OVERRIDEREPLACEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x94A25D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0x949C290)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVEOVERRIDEREPLACEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x94A27D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x949C4A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0x949F230)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0x949F3F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x949C740)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x94A1400)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x949BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_CharacterOutfitInstance_TypeDefinitionIndex = 52729;

	class CharacterOutfitComponent_CharacterOutfitInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::UnityEngine::Renderer*>, ::Il2CppArray<::UnityEngine::Material*>*>* _ReplaceRendererMaterialDatas; // 0x10
		::RPG::Client::AttachPointMapping* _AttachPointMapping; // 0x18
		::RPG::GameCore::JsonConfig* _EntityJsonConfig; // 0x20
		::RPG::GameCore::CharacterOutfitComponent* _Component; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _ReplaceMaterialKeys; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>* _CurrentOutfitParts; // 0x38

		::System::Void _ctor(::RPG::GameCore::CharacterOutfitComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_OFFSET))(this, component);
		}

		::System::Void _ctor_1(::RPG::Client::AttachPointMapping* attachPointMapping, ::RPG::GameCore::JsonConfig* entityJsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_1_OFFSET))(this, attachPointMapping, entityJsonConfig);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::GameObject* model)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_APPLY_OFFSET))(this, model);
		}

		::System::Void PostApply(::UnityEngine::GameObject* model)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_POSTAPPLY_OFFSET))(this, model);
		}

		::System::Void Remove(::UnityEngine::GameObject* model)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVE_OFFSET))(this, model);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_UNLOAD_OFFSET))(this);
		}

		::System::Void ResetSpringBone(::System::Boolean resetAllData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_RESETSPRINGBONE_OFFSET))(this, resetAllData);
		}

		::System::Void SetAnimatorSpeed(::System::Single fAnimSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_SETANIMATORSPEED_OFFSET))(this, fAnimSpeed);
		}

		::System::Boolean ContainsPart(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CONTAINSPART_OFFSET))(this, id);
		}

		::System::Void Load(::System::Collections::Generic::IReadOnlyList_1<::Class_1_999AE0B49D951C72*>* avatarOutfits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOAD_OFFSET))(this, avatarOutfits);
		}

		::System::Void LoadRendererPart(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitPartConfig*>* configs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitPartConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADRENDERERPART_OFFSET))(this, configs);
		}

		::System::Void LoadPendantPart(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>* configs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADPENDANTPART_OFFSET))(this, configs);
		}

		::UnityEngine::Transform* GetAttachPointInst(::System::String* attachPointName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETATTACHPOINTINST_OFFSET))(this, attachPointName);
		}

		::RPG::Client::BaseShaderPropertyTransition* GetShaderPropertyTransition()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETSHADERPROPERTYTRANSITION_OFFSET))(this);
		}

		::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Renderer* CreateRendererOutfitPart(::System::Boolean isStatic, ::System::String* configPath, ::System::String* materialKey)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Renderer*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATERENDEREROUTFITPART_OFFSET))(this, isStatic, configPath, materialKey);
		}

		::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant* CreatePendantOutfitPart(::System::String* configPath)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATEPENDANTOUTFITPART_OFFSET))(this, configPath);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>* get_CurrentOutfitParts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GET_CURRENTOUTFITPARTS_OFFSET))(this);
		}

		::System::Void OverrideReplaceMaterialKey(::UnityEngine::GameObject* modelObject, ::System::String* materialKey)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_OVERRIDEREPLACEMATERIALKEY_OFFSET))(this, modelObject, materialKey);
		}

		::System::Void RemoveOverrideReplaceMaterialKey(::UnityEngine::GameObject* modelObject, ::System::String* materialKey)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVEOVERRIDEREPLACEMATERIALKEY_OFFSET))(this, modelObject, materialKey);
		}
	};
}
