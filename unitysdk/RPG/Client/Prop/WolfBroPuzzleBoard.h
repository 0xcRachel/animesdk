#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_CustomGameData.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_EPuzzlePhase.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7.h"
#include "unitysdk/RPG/Client/Prop/WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605.h"
#include "unitysdk/Struct_2_1C9EA53B06A21796.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_382;
class Class_1_20D743894CDF214D_1;
class Class_1_21DCD4640D389503_42;
class Class_1_76FC7D9EAE4C806C;
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET UNITYSDK_OFFSET(0xEDF4850)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET UNITYSDK_OFFSET(0xEDF6270)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET UNITYSDK_OFFSET(0xEDF5250)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEDF54F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET UNITYSDK_OFFSET(0xEDF7340)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xEDFAA10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEDFC170)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET UNITYSDK_OFFSET(0xEDFA9C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xEDFA9A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET UNITYSDK_OFFSET(0xEDFA9B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET UNITYSDK_OFFSET(0xEDF4EF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDF3830)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET UNITYSDK_OFFSET(0xEDF71E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xEDF5980)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0xEDF5CC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0xEDF9360)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_1_OFFSET UNITYSDK_OFFSET(0xEDFA760)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xEDFA3B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_1_OFFSET UNITYSDK_OFFSET(0xEDFA0C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xEDF9FC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_119DF0CE89C21899_OFFSET UNITYSDK_OFFSET(0xEDF5A60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_28BB8707B4CC88A2_OFFSET UNITYSDK_OFFSET(0xEDFBE80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2B630A56F9D369CF_OFFSET UNITYSDK_OFFSET(0xEDF41E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2FAC9ED1B8FB93BF_OFFSET UNITYSDK_OFFSET(0xEDF5B70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3059C0D95D3E3E77_OFFSET UNITYSDK_OFFSET(0xEDF9910)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3A103EA5D528A631_OFFSET UNITYSDK_OFFSET(0xEDF80B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0xEDF9DD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xEDF4380)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xEDF6530)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_566048917FF28665_OFFSET UNITYSDK_OFFSET(0xEDF52D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_602BF28DABA35AB5_OFFSET UNITYSDK_OFFSET(0xEDF9BB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_609506B9DE731615_OFFSET UNITYSDK_OFFSET(0xEDF4DC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_648CCB08284C0A69_OFFSET UNITYSDK_OFFSET(0xEDF7A10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0xEDF77D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_73C583976350BB58_OFFSET UNITYSDK_OFFSET(0xEDF8F50)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET UNITYSDK_OFFSET(0xEDF7CC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0xEDF8220)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_954DFE111A908774_OFFSET UNITYSDK_OFFSET(0xEDF48B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0xEDF62D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET UNITYSDK_OFFSET(0xEDFA900)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xEDF8EC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xEDF4570)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xEDF3ED0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_1_OFFSET UNITYSDK_OFFSET(0xEDF57E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xEDF7AE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C75E7A4CF4958719_OFFSET UNITYSDK_OFFSET(0xEDF5830)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0xEDF8E70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D02229B3478BB464_OFFSET UNITYSDK_OFFSET(0xEDF4F90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET UNITYSDK_OFFSET(0xEDF8D30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D85A69A177ED1ECC_OFFSET UNITYSDK_OFFSET(0xEDF9F20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0xEDF87E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0xEDF8850)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0xEDF8660)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_E4FAD5C67AACF046_OFFSET UNITYSDK_OFFSET(0xEDFAB80)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_1_OFFSET UNITYSDK_OFFSET(0xEDF42B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_2_OFFSET UNITYSDK_OFFSET(0xEDF7110)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_3_OFFSET UNITYSDK_OFFSET(0xEDF4A00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xEDF7FE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F0C0A09DEADFA368_OFFSET UNITYSDK_OFFSET(0xEDF7500)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0xEDFAA30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xEDFA4D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_FB0CC4A7FCE4A5BA_OFFSET UNITYSDK_OFFSET(0xEDF9080)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET UNITYSDK_OFFSET(0xEDF4B60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET UNITYSDK_OFFSET(0xEDFA560)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET UNITYSDK_OFFSET(0xEDFA1B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET UNITYSDK_OFFSET(0xEDFBA40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET UNITYSDK_OFFSET(0xEDFB8B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET UNITYSDK_OFFSET(0xEDFB720)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET UNITYSDK_OFFSET(0xEDF7B30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET UNITYSDK_OFFSET(0xEDFB4A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET UNITYSDK_OFFSET(0xEDFBBD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET UNITYSDK_OFFSET(0xEDF7090)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDF45F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xEDF6470)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xEDFAA20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEDFC1A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDF46F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDF3C10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDF59D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xEDF6210)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET UNITYSDK_OFFSET(0xEDF6120)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET UNITYSDK_OFFSET(0xEDF49A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0xEDF6180)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET UNITYSDK_OFFSET(0xEDF6040)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xEDFC4E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xEDFC1E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEDFC630)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDFC560)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xEDFC640)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDFC5D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDFC570)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDFC6E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_TypeDefinitionIndex = 72186;

	class WolfBroPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_31()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12840);
		}
		static ::System::String** StaticGet_Field_6_27()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12848);
		}
		static ::System::String** StaticGet_Field_6_32()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12850);
		}
		static ::System::String** StaticGet_Field_6_29()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12858);
		}
		static ::System::String** StaticGet_Field_6_28()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::String** StaticGet_Field_6_33()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12868);
		}
		static ::RPG::Client::Prop::WolfBroPuzzleBoard** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Prop::WolfBroPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::System::String** StaticGet_Field_6_30()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::System::UInt32* StaticGet_Field_6_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x5990);
		}
		// static const ::System::Int32 MiniState = 0x2; // 0x0
		// static const ::System::UInt32 BulletPropID = 0x1929D; // 0x0
		// static const ::System::UInt32 ChaseQuestID = 0x3DB10C; // 0x0
		// static const ::System::UInt32 TeleportQuestID = 0x3DB10B; // 0x0
		::System::UInt32 id; // 0x48
		::System::Boolean showBulletButton; // 0x4C
		::UnityEngine::Transform* initAnchor; // 0x50
		::UnityEngine::Vector2 _CachedCameraAxis_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_9; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_10; // 0x68
		::RPG::Client::RuntimeGroupManager* Field_6_11; // 0x70
		::RPG::GameCore::PropComponent* Field_6_12; // 0x78
		::System::UInt32 Field_6_13; // 0x80
		::System::UInt32 Field_6_14; // 0x84
		::System::Boolean Field_6_15; // 0x88
		::System::Boolean Field_6_16; // 0x89
		::RPG::Client::Prop::WolfBroPuzzleBoard_EPuzzlePhase Field_6_17; // 0x8C
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::RPG::Client::RspHandler*>* Field_6_18; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7>* Field_6_19; // 0x98
		::System::Boolean Field_6_20; // 0xA0
		::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData Field_6_21; // 0xA8
		::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605> Field_6_22; // 0xC0
		::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605> Field_6_23; // 0xD8
		::System::Boolean Field_6_24; // 0xF0
		::System::Collections::Generic::List_1<::System::UInt32>* Field_6_25; // 0xF8
		::System::Single Field_6_26; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void ShutdownPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET))(this);
		}

		::System::Void ActivateBullet(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET))(this, a1, a2);
		}

		::System::Void UseBullet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET))(this);
		}

		::System::Void PickupBullet(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET))(this, a1);
		}

		::System::Void HitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void BoomPropHitTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_B235E757922104A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B235E757922104A8_OFFSET))(this);
		}

		::System::Void Method_6_119DF0CE89C21899(::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605>& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::Prop::WolfBroPuzzleBoard_Struct_2_C8AA17EC07891605>&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_119DF0CE89C21899_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_02B490C9189918DC(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_02B490C9189918DC_OFFSET))(this, a1);
		}

		::System::Void WaitStartup(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitStartup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET))(this);
		}

		::System::Void WaitRestoreArchive(::System::Single a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET))(this, a1, a2);
		}

		::System::Void UnWaitRestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void Archive(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET))(this, a1);
		}

		::System::Void RestoreArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET))(this);
		}

		::System::Void ResetAchievementChase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET))(this);
		}

		::System::Void InterruptedPlayerProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET))(this);
		}

		::System::Void EnableTeleportTiming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET))(this, a1);
		}

		::System::Void Method_6_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_6_F0C0A09DEADFA368(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F0C0A09DEADFA368_OFFSET))(this, a1);
		}

		::System::Void Method_6_70595BBE3E0E4F2A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_70595BBE3E0E4F2A_OFFSET))(this, a1);
		}

		::System::Void Method_6_648CCB08284C0A69(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_648CCB08284C0A69_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_2B630A56F9D369CF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2B630A56F9D369CF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_609506B9DE731615(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_609506B9DE731615_OFFSET))(this, a1);
		}

		::System::Void Method_6_D02229B3478BB464(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D02229B3478BB464_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_566048917FF28665(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_566048917FF28665_OFFSET))(this, a1);
		}

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_6_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_OFFSET))(this);
		}

		::System::Void Method_6_EC2B405D0723571D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_1_OFFSET))(this);
		}

		::System::Void Method_6_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET))(this, a1);
		}

		::System::Void Method_6_EC2B405D0723571D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_2_OFFSET))(this);
		}

		::System::Void Method_6_954DFE111A908774(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_954DFE111A908774_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C75E7A4CF4958719()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C75E7A4CF4958719_OFFSET))(this);
		}

		::System::Void Method_6_3A103EA5D528A631(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3A103EA5D528A631_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_BADDA70ED68283AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_OFFSET))(this);
		}

		::System::Void Method_6_BADDA70ED68283AE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_1_OFFSET))(this);
		}

		::System::Void Method_6_9036CFAD14566A8D(::Class_1_21DCD4640D389503_42* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9036CFAD14566A8D_OFFSET))(this, a1);
		}

		::System::Void Method_6_2FAC9ED1B8FB93BF(::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2FAC9ED1B8FB93BF_OFFSET))(this, a1);
		}

		::System::Void Method_6_EC2B405D0723571D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_3_OFFSET))(this);
		}

		::System::Void Method_6_07BB45288DFF8852()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_07BB45288DFF8852_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_3059C0D95D3E3E77(::UnityEngine::Vector3Int& a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Vector3Int&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3059C0D95D3E3E77_OFFSET))(this, a1);
		}

		::System::Void Method_6_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3C111959D3BB5616_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_602BF28DABA35AB5(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_602BF28DABA35AB5_OFFSET))(this, a1);
		}

		::System::Void Method_6_0D64F99BAAA7B5C4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_OFFSET))(this, a1);
		}

		::System::Void Method_6_0D64F99BAAA7B5C4_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_09AB8FC0B8BA1B6E(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
		}

		::System::Void Method_6_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_6_09AB8FC0B8BA1B6E_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_1_OFFSET))(this, a1);
		}

		static ::Class_1_20D743894CDF214D_1* Method_6_854CB545243705CE(::Struct_2_1C9EA53B06A21796& a1)
		{
			return ((::Class_1_20D743894CDF214D_1*(*)(::Struct_2_1C9EA53B06A21796&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET))(a1);
		}

		static ::Class_1_76FC7D9EAE4C806C* Method_6_9EBD28FD8FFC1A2A(::UnityEngine::Vector3 a1)
		{
			return ((::Class_1_76FC7D9EAE4C806C*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_6_D7B51E636B36E189(::Class_1_20D743894CDF214D_1* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 Method_6_D85A69A177ED1ECC(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D85A69A177ED1ECC_OFFSET))(a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void Method_6_73C583976350BB58(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_73C583976350BB58_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMiniState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET))(this);
		}

		::System::Void Method_6_FB0CC4A7FCE4A5BA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_FB0CC4A7FCE4A5BA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBulletActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CachedCameraAxis()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET))(this);
		}

		::System::Void set_CachedCameraAxis(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET))(this, value);
		}

		::System::Void ReportMonsterAlert(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET))(this, a1);
		}

		::System::Void ReportMonsterChase(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET))(this, a1);
		}

		::System::Void ReportPushProp(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET))(this, a1, a2);
		}

		::System::Void ReportPushLook(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET))(this, a1);
		}

		::System::Void ReportPushHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET))(this, a1);
		}

		::System::Void ReportPushHide(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET))(this, a1);
		}

		::System::Void ReportPushTV(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET))(this, a1);
		}

		::System::Void ReportPushPropHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_F1BB718E73080948()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F1BB718E73080948_OFFSET))(this);
		}

		::System::String* Method_6_E4FAD5C67AACF046(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_E4FAD5C67AACF046_OFFSET))(this, a1);
		}

		::System::String* Method_6_28BB8707B4CC88A2(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_28BB8707B4CC88A2_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::WolfBroPuzzleBoard* get_Instance()
		{
			return ((::RPG::Client::Prop::WolfBroPuzzleBoard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::Prop::WolfBroPuzzleBoard* value)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::WolfBroPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
