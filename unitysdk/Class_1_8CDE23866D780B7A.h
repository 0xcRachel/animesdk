#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatSkillPreviewLogicInvokeType.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_D5AD64F6FB3109AB;
class Class_2_DFB79F7EE671BF59;
class Class_4_D581BED103406713;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }
namespace RPG::LittleGameShare::DiceCombatCore { class DiceCombatPreviewInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8CDE23866D780B7A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1603BF30)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_25D68CB1EADDC335_OFFSET UNITYSDK_OFFSET(0x1603CE50)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_28817E74624C5070_OFFSET UNITYSDK_OFFSET(0x1603D7D0)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_416CA756A303C223_OFFSET UNITYSDK_OFFSET(0x1603CC30)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_4C6BA47A6A1104A3_OFFSET UNITYSDK_OFFSET(0x1603E310)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_4D20EB05AE9E9AFF_1_OFFSET UNITYSDK_OFFSET(0x1603C6F0)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_4D20EB05AE9E9AFF_OFFSET UNITYSDK_OFFSET(0x1603C600)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_4F05E797C4FDF953_OFFSET UNITYSDK_OFFSET(0x1603D650)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_866D0979717F6B36_OFFSET UNITYSDK_OFFSET(0x1603C150)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_8DC8E616C6BA4CC3_OFFSET UNITYSDK_OFFSET(0x1603E5B0)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_9B023E4C2066F459_OFFSET UNITYSDK_OFFSET(0x1603C7E0)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_A3411C5452275A03_OFFSET UNITYSDK_OFFSET(0x1603D370)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_BAAD41EC7185428D_OFFSET UNITYSDK_OFFSET(0x1603E930)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x1603EB20)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_D09F00F6BF80A657_OFFSET UNITYSDK_OFFSET(0x1603C880)
#define CLASS_1_8CDE23866D780B7A_METHOD_1_E00C83861731822E_OFFSET UNITYSDK_OFFSET(0x1603E0C0)
#define CLASS_1_8CDE23866D780B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1603BE40)

inline static constexpr unsigned int Class_1_8CDE23866D780B7A_TypeDefinitionIndex = 27830;

class Class_1_8CDE23866D780B7A : public ::System::Object
{
public:
	::Class_2_DFB79F7EE671BF59* Field_1_1; // 0x10
	::Class_4_D581BED103406713* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* Field_1_2; // 0x28

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_866D0979717F6B36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_866D0979717F6B36_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4D20EB05AE9E9AFF(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_4D20EB05AE9E9AFF_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4D20EB05AE9E9AFF_1(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_4D20EB05AE9E9AFF_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_9B023E4C2066F459(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_9B023E4C2066F459_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D09F00F6BF80A657(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType a2, ::Class_2_D5AD64F6FB3109AB* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_D09F00F6BF80A657_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo* Method_1_28817E74624C5070(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_28817E74624C5070_OFFSET))(this, a1);
	}

	::System::Void Method_1_416CA756A303C223(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_416CA756A303C223_OFFSET))(this, a1);
	}

	::System::Void Method_1_25D68CB1EADDC335(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_25D68CB1EADDC335_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A3411C5452275A03(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_A3411C5452275A03_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4F05E797C4FDF953(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_4F05E797C4FDF953_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E00C83861731822E(::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Class_2_D5AD64F6FB3109AB* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_E00C83861731822E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4C6BA47A6A1104A3(::Class_2_D5AD64F6FB3109AB* a1, ::RPG::GameCore::DiceCombatValueOperation a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::RPG::GameCore::DiceCombatValueOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_4C6BA47A6A1104A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8DC8E616C6BA4CC3(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_8DC8E616C6BA4CC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BAAD41EC7185428D(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_BAAD41EC7185428D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_8CDE23866D780B7A_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}
};
