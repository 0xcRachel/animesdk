#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_3A4E69AD540D9124;
class Class_1_6D9D538D12A53453;
class Class_2_099B78418029B3B1_2;
class Class_2_0F2A3888FE30E133;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceGameSyncConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE52962B248D7EB4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167417E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_016C8341F6A3521E_OFFSET UNITYSDK_OFFSET(0x167428E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_0ACFB078D9CC930D_OFFSET UNITYSDK_OFFSET(0x16741C10)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_0F5169BAB8BFB47D_OFFSET UNITYSDK_OFFSET(0x16741DF0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_1227D0813AECC5A9_OFFSET UNITYSDK_OFFSET(0x16741AF0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_191191178459B2D0_OFFSET UNITYSDK_OFFSET(0x16743960)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_1B546AA63D79D147_OFFSET UNITYSDK_OFFSET(0x167423F0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_1CEACB3CAD4790BD_OFFSET UNITYSDK_OFFSET(0x16743370)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_236A6F0E9A65C24A_OFFSET UNITYSDK_OFFSET(0x16741A60)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_275C76C19EE90E74_OFFSET UNITYSDK_OFFSET(0x167443E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_3ADD46D9ADB61BD5_OFFSET UNITYSDK_OFFSET(0x16743720)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_3CE906F64B126D57_OFFSET UNITYSDK_OFFSET(0x16742E80)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x16733740)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_2_OFFSET UNITYSDK_OFFSET(0x16744220)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_3_OFFSET UNITYSDK_OFFSET(0x167442E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_4_OFFSET UNITYSDK_OFFSET(0x16744400)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_5_OFFSET UNITYSDK_OFFSET(0x167444C0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_6_OFFSET UNITYSDK_OFFSET(0x16744580)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_7_OFFSET UNITYSDK_OFFSET(0x16744640)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x16744160)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_478953ED064B84C3_OFFSET UNITYSDK_OFFSET(0x16743BB0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4B946EF6B489CD16_1_OFFSET UNITYSDK_OFFSET(0x16743600)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_4B946EF6B489CD16_OFFSET UNITYSDK_OFFSET(0x16742850)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x16744760)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_5AD5D3D5B7B05039_OFFSET UNITYSDK_OFFSET(0x167431E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_61D11D6A0E7A8B30_OFFSET UNITYSDK_OFFSET(0x16743840)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_6407377CEE55E379_OFFSET UNITYSDK_OFFSET(0x16742F30)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_65694E73B35268A1_OFFSET UNITYSDK_OFFSET(0x167419D0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_7223531E1AACAD4F_OFFSET UNITYSDK_OFFSET(0x16743A60)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_1_OFFSET UNITYSDK_OFFSET(0x16743690)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_2_OFFSET UNITYSDK_OFFSET(0x167437B0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_OFFSET UNITYSDK_OFFSET(0x16743570)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_7CA3ABAF710A321B_OFFSET UNITYSDK_OFFSET(0x16743AC0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_87D6A79585B9BECC_OFFSET UNITYSDK_OFFSET(0x16742BD0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_900C7FBA7EEFB224_OFFSET UNITYSDK_OFFSET(0x16743C90)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_9461C7BAF67389D4_OFFSET UNITYSDK_OFFSET(0x16741E80)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_98E111A6CAFCF09E_OFFSET UNITYSDK_OFFSET(0x16743270)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_9F1BCD6402CAF113_OFFSET UNITYSDK_OFFSET(0x167433E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_1_OFFSET UNITYSDK_OFFSET(0x16743E80)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_2_OFFSET UNITYSDK_OFFSET(0x16743FF0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x16743D10)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16744700)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_AD6EF472E86761E6_OFFSET UNITYSDK_OFFSET(0x16741940)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_B5D13728B8EE7308_OFFSET UNITYSDK_OFFSET(0x16742360)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_B8C88D133FA9D5E3_OFFSET UNITYSDK_OFFSET(0x167438D0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_C2382E4A072D3866_OFFSET UNITYSDK_OFFSET(0x16742970)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_CEC2FEE35109CF45_OFFSET UNITYSDK_OFFSET(0x167429D0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_D1A75F20C712697E_OFFSET UNITYSDK_OFFSET(0x167434E0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_D3111B30880258AA_OFFSET UNITYSDK_OFFSET(0x167443C0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x167443A0)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_DA0B76B121545E61_OFFSET UNITYSDK_OFFSET(0x16741B80)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_E9BB5907BDBB6800_OFFSET UNITYSDK_OFFSET(0x16743B20)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_EAE55254CD92C547_OFFSET UNITYSDK_OFFSET(0x16742A60)
#define CLASS_1_DE52962B248D7EB4_METHOD_1_EF787103E3A25CDA_OFFSET UNITYSDK_OFFSET(0x167418B0)
#define CLASS_1_DE52962B248D7EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x167417D0)

inline static constexpr unsigned int Class_1_DE52962B248D7EB4_TypeDefinitionIndex = 28945;

class Class_1_DE52962B248D7EB4 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_1; // 0x18
	::Class_2_0F2A3888FE30E133* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1_2* a2, ::Class_2_0F2A3888FE30E133* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1_2*, ::Class_2_0F2A3888FE30E133*))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::ConstValueLittleGameRow* Method_1_EF787103E3A25CDA(::System::String* a1)
	{
		return ((::RPG::GameCore::ConstValueLittleGameRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_EF787103E3A25CDA_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceFieldRow* Method_1_AD6EF472E86761E6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceFieldRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_AD6EF472E86761E6_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceEffectRow* Method_1_65694E73B35268A1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_65694E73B35268A1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceFieldScoreRow* Method_1_236A6F0E9A65C24A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceFieldScoreRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_236A6F0E9A65C24A_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceSectionRow* Method_1_1227D0813AECC5A9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceSectionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_1227D0813AECC5A9_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_DA0B76B121545E61(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_DA0B76B121545E61_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_0ACFB078D9CC930D(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_0ACFB078D9CC930D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::CakeRaceMessageRow* Method_1_9461C7BAF67389D4(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_9461C7BAF67389D4_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::CakeRaceEmojiRow* Method_1_B5D13728B8EE7308(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_B5D13728B8EE7308_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceEmojiRow* Method_1_1B546AA63D79D147(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_1B546AA63D79D147_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::CakeRaceNPCRow* Method_1_0F5169BAB8BFB47D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceNPCRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_0F5169BAB8BFB47D_OFFSET))(this, a1);
	}

	::RPG::GameCore::AIConfig* Method_1_4B946EF6B489CD16(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4B946EF6B489CD16_OFFSET))(this, a1);
	}

	::Class_1_6D9D538D12A53453* Method_1_016C8341F6A3521E(::System::UInt32 a1)
	{
		return ((::Class_1_6D9D538D12A53453*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_016C8341F6A3521E_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceRegionConfig* Method_1_C2382E4A072D3866(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_C2382E4A072D3866_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_CEC2FEE35109CF45(::RPG::GameCore::CakeRaceRegionTag a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_CEC2FEE35109CF45_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EAE55254CD92C547(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_EAE55254CD92C547_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_87D6A79585B9BECC(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_87D6A79585B9BECC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3CE906F64B126D57(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_3CE906F64B126D57_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_6407377CEE55E379(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_6407377CEE55E379_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* Method_1_5AD5D3D5B7B05039(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_5AD5D3D5B7B05039_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCellConfig* Method_1_98E111A6CAFCF09E(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_98E111A6CAFCF09E_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCatAIConfig* Method_1_9F1BCD6402CAF113(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceCatAIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_9F1BCD6402CAF113_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCatRow* Method_1_D1A75F20C712697E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceCatRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_D1A75F20C712697E_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_7BE68273D9E719AB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_OFFSET))(this, a1);
	}

	::RPG::GameCore::AIConfig* Method_1_4B946EF6B489CD16_1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4B946EF6B489CD16_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_7BE68273D9E719AB_1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceBattleItemRow* Method_1_3ADD46D9ADB61BD5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceBattleItemRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_3ADD46D9ADB61BD5_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAbilityConfig* Method_1_7BE68273D9E719AB_2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_7BE68273D9E719AB_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMoveStateConfig* Method_1_61D11D6A0E7A8B30(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_61D11D6A0E7A8B30_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceTrapCellConfig* Method_1_B8C88D133FA9D5E3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceTrapCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_B8C88D133FA9D5E3_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRacePickupItemConfig* Method_1_191191178459B2D0(::RPG::GameCore::CakeRacePickupItemType a1)
	{
		return ((::RPG::GameCore::CakeRacePickupItemConfig*(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_191191178459B2D0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7223531E1AACAD4F(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_7223531E1AACAD4F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7CA3ABAF710A321B(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_7CA3ABAF710A321B_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceHitConfig* Method_1_E9BB5907BDBB6800(::RPG::GameCore::CakeRaceHitType a1)
	{
		return ((::RPG::GameCore::CakeRaceHitConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceHitType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_E9BB5907BDBB6800_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_478953ED064B84C3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_478953ED064B84C3_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceGameConfig* Method_1_1CEACB3CAD4790BD()
	{
		return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_1CEACB3CAD4790BD_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceGameSyncConfig* Method_1_900C7FBA7EEFB224()
	{
		return ((::RPG::GameCore::CakeRaceGameSyncConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_900C7FBA7EEFB224_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_1_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_9F86FD0988591376_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_D3111B30880258AA()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_D3111B30880258AA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* Method_1_275C76C19EE90E74()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_275C76C19EE90E74_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_4484591CA1060976_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_4484591CA1060976_7_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::Class_1_3A4E69AD540D9124* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_3A4E69AD540D9124*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE52962B248D7EB4_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}
};
