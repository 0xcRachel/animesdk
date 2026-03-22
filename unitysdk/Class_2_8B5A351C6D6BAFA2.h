#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseModifierInstance.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ChessModifierEvent.h"

class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_2_8B5A351C6D6BAFA2_Class_4_7667F072E5B7101F;
class Class_2_94CFB48CA2D04DBC;
class Class_2_9578C231AE3EB57A;
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class ChessModifierConfig; }
namespace RPG::GameCore { class GameComponentBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8B5A351C6D6BAFA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D07090)
#define CLASS_2_8B5A351C6D6BAFA2_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D077E0)
#define CLASS_2_8B5A351C6D6BAFA2_GET_ADDTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x10D078D0)
#define CLASS_2_8B5A351C6D6BAFA2_GET_CUREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x10D07910)
#define CLASS_2_8B5A351C6D6BAFA2_GET_RENEWTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x10D078F0)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x10D075B0)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10D07380)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_6EFE459E10EB1D5E_OFFSET UNITYSDK_OFFSET(0x10D074E0)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_7DDE67A206CF4ECC_OFFSET UNITYSDK_OFFSET(0x10D071D0)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_B8901FF181A22875_OFFSET UNITYSDK_OFFSET(0x10D07880)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_C81FA0FD0D507FD5_OFFSET UNITYSDK_OFFSET(0x10D076E0)
#define CLASS_2_8B5A351C6D6BAFA2_METHOD_2_D61CEE6BBC528083_OFFSET UNITYSDK_OFFSET(0x10D07680)
#define CLASS_2_8B5A351C6D6BAFA2_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x10D07150)
#define CLASS_2_8B5A351C6D6BAFA2_ONADDED_OFFSET UNITYSDK_OFFSET(0x10D072C0)
#define CLASS_2_8B5A351C6D6BAFA2_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0x10D07300)
#define CLASS_2_8B5A351C6D6BAFA2_ONSTACK_OFFSET UNITYSDK_OFFSET(0x10D07280)
#define CLASS_2_8B5A351C6D6BAFA2_SET_ADDTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x10D078E0)
#define CLASS_2_8B5A351C6D6BAFA2_SET_CUREVENTTYPE_OFFSET UNITYSDK_OFFSET(0x10D07920)
#define CLASS_2_8B5A351C6D6BAFA2_SET_RENEWTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x10D07900)
#define CLASS_2_8B5A351C6D6BAFA2_UNSTACK_OFFSET UNITYSDK_OFFSET(0x10D07340)
#define CLASS_2_8B5A351C6D6BAFA2__CTOR_OFFSET UNITYSDK_OFFSET(0x10D06FB0)
#define CLASS_2_8B5A351C6D6BAFA2__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0x10D07830)
#define CLASS_2_8B5A351C6D6BAFA2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D07930)

inline static constexpr unsigned int Class_2_8B5A351C6D6BAFA2_TypeDefinitionIndex = 44124;

class Class_2_8B5A351C6D6BAFA2 : public ::RPG::GameCore::BaseModifierInstance
{
public:
	::Il2CppArray<::Class_2_8B5A351C6D6BAFA2_Class_4_7667F072E5B7101F*>* Field_2_10; // 0xA0
	::RPG::GameCore::ChessModifierConfig* Field_2_7; // 0xA8
	::Class_2_94CFB48CA2D04DBC* Field_2_6; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_8B5A351C6D6BAFA2*>* Field_2_8; // 0xB8
	::RPG::GameCore::ChessModifierEvent _CurEventType_k__BackingField; // 0xC0
	::System::Int32 _AddTurnCount_k__BackingField; // 0xC4
	::System::Int32 Field_2_1; // 0xC8
	::System::Int32 Field_2_2; // 0xCC
	::System::Int32 _RenewTurnCount_k__BackingField; // 0xD0
	::System::Int32 Field_2_0; // 0xD4
	::System::Int32 Field_2_3; // 0xD8

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ChessModifierConfig* a2, ::Class_2_94CFB48CA2D04DBC* a3, ::Class_1_A2D8E5AB4B623162* a4, ::Class_2_9578C231AE3EB57A* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChessModifierConfig*, ::Class_2_94CFB48CA2D04DBC*, ::Class_1_A2D8E5AB4B623162*, ::Class_2_9578C231AE3EB57A*))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnActivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_ONACTIVATE_OFFSET))(this);
	}

	::System::Void OnAdded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_ONADDED_OFFSET))(this);
	}

	::System::Void OnModifierCasterChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_ONMODIFIERCASTERCHANGED_OFFSET))(this);
	}

	::System::Void OnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_ONSTACK_OFFSET))(this);
	}

	::System::Void UnStack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_UNSTACK_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7DDE67A206CF4ECC(::RPG::GameCore::ChessModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_7DDE67A206CF4ECC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6EFE459E10EB1D5E(::Class_2_8B5A351C6D6BAFA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5A351C6D6BAFA2*))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_6EFE459E10EB1D5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_323DCA18419DFB89(::Class_2_8B5A351C6D6BAFA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5A351C6D6BAFA2*))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D61CEE6BBC528083(::RPG::GameCore::ChessModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChessModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_D61CEE6BBC528083_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C81FA0FD0D507FD5(::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_C81FA0FD0D507FD5_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
	{
		return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_GETOWNERABILITYCOMPONENT_OFFSET))(this);
	}

	::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChessModifierConfig* Method_2_B8901FF181A22875()
	{
		return ((::RPG::GameCore::ChessModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_METHOD_2_B8901FF181A22875_OFFSET))(this);
	}

	::System::Int32 get_AddTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_GET_ADDTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_AddTurnCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_SET_ADDTURNCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_RenewTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_GET_RENEWTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_RenewTurnCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_SET_RENEWTURNCOUNT_OFFSET))(this, value);
	}

	::RPG::GameCore::ChessModifierEvent get_CurEventType()
	{
		return ((::RPG::GameCore::ChessModifierEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_GET_CUREVENTTYPE_OFFSET))(this);
	}

	::System::Void set_CurEventType(::RPG::GameCore::ChessModifierEvent value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessModifierEvent))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2_SET_CUREVENTTYPE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5A351C6D6BAFA2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
