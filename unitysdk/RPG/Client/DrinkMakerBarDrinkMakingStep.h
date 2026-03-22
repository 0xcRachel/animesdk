#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETINGREDIENTROW_OFFSET UNITYSDK_OFFSET(0x905C180)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSTEPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x905B6C0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSUBSTEPFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x905BFC0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_HASSUBSTEP_OFFSET UNITYSDK_OFFSET(0x905C640)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISCURSUCCESS_OFFSET UNITYSDK_OFFSET(0x905C600)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0x905C620)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_MATERIALIDS_OFFSET UNITYSDK_OFFSET(0x905C5C0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_PROCEDURE_OFFSET UNITYSDK_OFFSET(0x905C5A0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_SUBSTEPMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x905C5E0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_RESETSTEP_OFFSET UNITYSDK_OFFSET(0x9059870)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_HASSUBSTEP_OFFSET UNITYSDK_OFFSET(0x905C650)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISCURSUCCESS_OFFSET UNITYSDK_OFFSET(0x905C610)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0x905C630)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_MATERIALIDS_OFFSET UNITYSDK_OFFSET(0x905C5D0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_PROCEDURE_OFFSET UNITYSDK_OFFSET(0x905C5B0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_SUBSTEPMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x905C5F0)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_VERIFY_OFFSET UNITYSDK_OFFSET(0x9059420)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CHECKSUBSTEP_OFFSET UNITYSDK_OFFSET(0x905C220)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x905AD50)
#define RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__RESETUNCHECKEDMATID_OFFSET UNITYSDK_OFFSET(0x905C320)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarDrinkMakingStep_TypeDefinitionIndex = 50504;

	class DrinkMakerBarDrinkMakingStep : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _UncheckedSubStepMatIDs; // 0x10
		::Il2CppArray<::System::UInt32>* _MaterialIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SubStepMaterialIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UncheckedMatIDs; // 0x28
		::System::Boolean _HasSubStep_k__BackingField; // 0x30
		::System::Boolean _IsCurSuccess_k__BackingField; // 0x31
		::System::Boolean _IsStepFinished_k__BackingField; // 0x32
		::RPG::Client::DrinkMakerBartendProcedure _Procedure_k__BackingField; // 0x34
		::System::Boolean _IsExclusiveSelection; // 0x38
		::System::Boolean CanPlayFinishEff; // 0x39

		::System::Void _ctor(::RPG::Client::DrinkMakerBartendProcedure procedure, ::Il2CppArray<::System::UInt32>* matIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CTOR_OFFSET))(this, procedure, matIDs);
		}

		::System::String* GetStepDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSTEPDESCRIPTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* GetSubStepFinishState()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETSUBSTEPFINISHSTATE_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* GetIngredientRow(::System::UInt32 ingredientID)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GETINGREDIENTROW_OFFSET))(this, ingredientID);
		}

		::System::Void Verify(::RPG::Client::DrinkMakerBartendProcedure procedure, ::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_VERIFY_OFFSET))(this, procedure, matID);
		}

		::System::Void ResetStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_RESETSTEP_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartendProcedure get_Procedure()
		{
			return ((::RPG::Client::DrinkMakerBartendProcedure(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_PROCEDURE_OFFSET))(this);
		}

		::System::Void set_Procedure(::RPG::Client::DrinkMakerBartendProcedure value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_PROCEDURE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_MaterialIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_MATERIALIDS_OFFSET))(this);
		}

		::System::Void set_MaterialIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_MATERIALIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_SubStepMaterialIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_SUBSTEPMATERIALIDS_OFFSET))(this);
		}

		::System::Void set_SubStepMaterialIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_SUBSTEPMATERIALIDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISCURSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsCurSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISCURSUCCESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsStepFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_ISSTEPFINISHED_OFFSET))(this);
		}

		::System::Void set_IsStepFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_ISSTEPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasSubStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_GET_HASSUBSTEP_OFFSET))(this);
		}

		::System::Void set_HasSubStep(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP_SET_HASSUBSTEP_OFFSET))(this, value);
		}

		::System::Void _ResetUncheckedMatID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__RESETUNCHECKEDMATID_OFFSET))(this);
		}

		::System::Void _CheckSubStep(::System::UInt32 matID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARDRINKMAKINGSTEP__CHECKSUBSTEP_OFFSET))(this, matID);
		}
	};
}
