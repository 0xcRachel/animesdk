#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A0D924C14430663_2;
namespace RPG::Client { class DrinkMakerBartender_Cup; }
namespace RPG::Client { class DrinkMakerGlobalConfig; }
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xA8EA770)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET UNITYSDK_OFFSET(0xA8ECA70)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xA8EBB50)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET UNITYSDK_OFFSET(0xA8EBD20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xA8EA060)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA8EC9C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xA8ECA20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA8EC920)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xA8EA530)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET UNITYSDK_OFFSET(0xA8E9FF0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xA8E9FB0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xA8E9FD0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET UNITYSDK_OFFSET(0xA8EA000)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET UNITYSDK_OFFSET(0xA8EB070)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xA8ECB70)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xA8E9EE0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET UNITYSDK_OFFSET(0xA8EA1C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET UNITYSDK_OFFSET(0xA8EA9F0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xA8E9FC0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xA8E9FE0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET UNITYSDK_OFFSET(0xA8EA6B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET UNITYSDK_OFFSET(0xA8EA5F0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA8EC760)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET UNITYSDK_OFFSET(0xA8EBD60)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8ECC80)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E9E20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET UNITYSDK_OFFSET(0xA8EC880)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET UNITYSDK_OFFSET(0xA8EC8D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET UNITYSDK_OFFSET(0xA8EC6C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET UNITYSDK_OFFSET(0xA8EB1C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA8EB620)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET UNITYSDK_OFFSET(0xA8EA580)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xA8EB9E0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xA8EBC10)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xA8EC2F0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET UNITYSDK_OFFSET(0xA8EBE00)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET UNITYSDK_OFFSET(0xA8EC3E0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET UNITYSDK_OFFSET(0xA8EC080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDrinkState_TypeDefinitionIndex = 42688;

	class DrinkMakerDrinkState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer3()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Mix()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F48);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F50);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet__SP_Liquid()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F58);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F60);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer4()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F68);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer5()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x47F70);
		}
		static ::System::Int32* StaticGet__SP_Layer3_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BC0);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MaxHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BC4);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BC8);
		}
		static ::System::Int32* StaticGet__SP_Mix_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BCC);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BD0);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BD4);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BD8);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BDC);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BE0);
		}
		static ::System::Int32* StaticGet__SP_Liquid_HeightFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BE4);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BE8);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BEC);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BF0);
		}
		static ::System::Int32* StaticGet__SP_Mix_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BF4);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BF8);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12BFC);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C00);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MinHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C04);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C08);
		}
		static ::System::Int32* StaticGet__SP_Layer2_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C0C);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C10);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C14);
		}
		static ::System::Int32* StaticGet__SP_Layer4_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C18);
		}
		static ::System::Int32* StaticGet__SP_Mix_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C1C);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C20);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C24);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C28);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C2C);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_AddLiquid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C30);
		}
		static ::System::Int32* StaticGet__SP_Layer5_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C34);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C38);
		}
		static ::System::Int32* StaticGet__SP_Layer1_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C3C);
		}
		static ::System::Int32* StaticGet__SP_Mix_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C40);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C44);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x12C48);
		}
		::System::Collections::Generic::List_1<::Class_1_8A0D924C14430663_2*>* _MixFactor; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientList_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerCupRow* _CurrentCupRow; // 0x20
		::UnityEngine::Material* _CurrentLiquidMaterial; // 0x28
		::UnityEngine::Transform* _IceSimParentNode; // 0x30
		::RPG::Client::DrinkMakerGlobalConfig* _GlobalConfig; // 0x38
		::UnityEngine::GameObject* _CurrentCupModel; // 0x40
		::System::Int32 _SurfaceDistribedState; // 0x48
		::System::Single _LastLayerHeight; // 0x4C
		::System::Single _SurfaceDistribedStateTimer; // 0x50
		::System::Single _LiquidMeshHighestPoint; // 0x54
		::System::Single _TotalLiquidHeightRatio; // 0x58
		::System::Single _LiquidMeshLowestPoint; // 0x5C
		::System::Single _MixTime; // 0x60
		::System::Single _AddIngredientTime; // 0x64
		::System::Single LastMixTime; // 0x68
		::System::Int32 _MixLayer_k__BackingField; // 0x6C
		::System::Boolean _AddingIngredient; // 0x70
		::System::Boolean _Mixing; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_IngredientList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::Void set_IngredientList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET))(this, value);
		}

		::System::Int32 get_MixLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET))(this);
		}

		::System::Void set_MixLayer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_AddingIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET))(this);
		}

		::System::Boolean get__Operating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerGlobalConfig* GetDrinkMakerGlobalConfig()
		{
			return ((::RPG::Client::DrinkMakerGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET))(this);
		}

		::System::Void SelectCup(::UnityEngine::GameObject* model, ::RPG::Client::DrinkMakerBartender_Cup* cup)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::DrinkMakerBartender_Cup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET))(this, model, cup);
		}

		::System::Void SwitchIce(::System::UInt32 ice)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET))(this, ice);
		}

		::System::Void SwitchDecoration(::System::UInt32 decoration)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET))(this, decoration);
		}

		::System::Void AddIngredient(::System::UInt32 ingredient)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET))(this, ingredient);
		}

		::System::Void SetMeasuringCupEff(::System::UInt32 ingredient, ::UnityEngine::GameObject* measuringCup, ::UnityEngine::GameObject* surfaceEff)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET))(this, ingredient, measuringCup, surfaceEff);
		}

		::System::Void Mix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET))(this);
		}

		::System::Void _RefreshLiquidColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET))(this);
		}

		::System::Void _RefreshLiquidHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET))(this);
		}

		::System::Void _RefreshMixFactor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET))(this);
		}

		::System::Void _RefreshLiquid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET))(this);
		}

		::System::Int32 GetMaxCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET))(this);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void _ResetMixFactor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCurrentCupModel()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET))(this);
		}

		::System::Void TickAnimation(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET))(this, dt);
		}

		::System::Void _PreviewTickAnimation(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET))(this, dt);
		}

		::System::Void _TickDefaultMixing(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET))(this, dt);
		}

		::System::Void _TickSurfaceDistribedState(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET))(this, dt);
		}

		::System::Void TickAddIngredientHeight(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET))(this, dt);
		}

		::System::Void _TickAddIngredient(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET))(this, dt);
		}

		::System::Void _OnAddIngredientEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET))(this);
		}

		::System::Void _TickMixing(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET))(this, dt);
		}

		::System::Void _OnMixEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET))(this);
		}

		::System::Single GetLiquidWorldHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET))(this);
		}

		::System::Single GetLiquidLocalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET))(this);
		}

		::System::Single GetLiquidTotalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET))(this);
		}

		::System::Void BindPhyIce(::UnityEngine::GameObject* phyIce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET))(this, phyIce);
		}

		::System::Void Preview(::System::UInt32 cup_id, ::System::UInt32 ice_id, ::System::Collections::Generic::List_1<::System::UInt32>* ingredients, ::System::Int32 mixLayer, ::System::UInt32 deco_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET))(this, cup_id, ice_id, ingredients, mixLayer, deco_id);
		}
	};
}
