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

class Class_0_16E4307DCC419505_347;
class Class_1_32044B0173B87B04_2;
class Class_1_3DE734113B1E313B_1;
class Class_1_4A527E96BC15AA5A_1;
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

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ACTIVATEBULLET_OFFSET UNITYSDK_OFFSET(0x9CFEAB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ARCHIVE_OFFSET UNITYSDK_OFFSET(0x9D00470)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_BOOMPROPHITTARGETS_OFFSET UNITYSDK_OFFSET(0x9CFF480)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CFF720)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ENABLETELEPORTTIMING_OFFSET UNITYSDK_OFFSET(0x9D01510)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0x9D04AA0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D06200)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISBULLETACTIVATED_OFFSET UNITYSDK_OFFSET(0x9D04A50)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x9D04A30)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_GET_ISMINISTATE_OFFSET UNITYSDK_OFFSET(0x9D04A40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_HITTARGETS_OFFSET UNITYSDK_OFFSET(0x9CFF120)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9CFDA70)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_INTERRUPTEDPLAYERPROJECTILES_OFFSET UNITYSDK_OFFSET(0x9D013E0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9CFFBB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x9D033F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_1_OFFSET UNITYSDK_OFFSET(0x9D047F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0x9D04440)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_1_OFFSET UNITYSDK_OFFSET(0x9D04150)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x9D04050)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_119DF0CE89C21899_OFFSET UNITYSDK_OFFSET(0x9CFFC90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_1CCAD9E0606BF12D_OFFSET UNITYSDK_OFFSET(0x9D019A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_28BB8707B4CC88A2_OFFSET UNITYSDK_OFFSET(0x9D05F10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2B630A56F9D369CF_OFFSET UNITYSDK_OFFSET(0x9CFE420)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2FAC9ED1B8FB93BF_OFFSET UNITYSDK_OFFSET(0x9CFFDA0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3059C0D95D3E3E77_OFFSET UNITYSDK_OFFSET(0x9D039A0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3A103EA5D528A631_OFFSET UNITYSDK_OFFSET(0x9D02160)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x9D03E60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9CFE5C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x9D00730)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_566048917FF28665_OFFSET UNITYSDK_OFFSET(0x9CFF500)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_5F1A93F1BF7BAC2B_OFFSET UNITYSDK_OFFSET(0x9CFEB10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_602BF28DABA35AB5_OFFSET UNITYSDK_OFFSET(0x9D03C40)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_648CCB08284C0A69_OFFSET UNITYSDK_OFFSET(0x9D01B00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_73C583976350BB58_OFFSET UNITYSDK_OFFSET(0x9D02FE0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET UNITYSDK_OFFSET(0x9D01DB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_1_OFFSET UNITYSDK_OFFSET(0x9CFE4F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_2_OFFSET UNITYSDK_OFFSET(0x9D01310)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x9D02090)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0x9D022D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET UNITYSDK_OFFSET(0x9D004D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET UNITYSDK_OFFSET(0x9D04990)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x9D02F50)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x9CFE7C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x9CFE110)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B5C3166189D9374C_OFFSET UNITYSDK_OFFSET(0x9CFEFF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_1_OFFSET UNITYSDK_OFFSET(0x9CFFA10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x9D01BD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C75E7A4CF4958719_OFFSET UNITYSDK_OFFSET(0x9CFFA60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x9D02F00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D02229B3478BB464_OFFSET UNITYSDK_OFFSET(0x9CFF1C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D49D4C04CB5F23A5_OFFSET UNITYSDK_OFFSET(0x9CFFEF0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET UNITYSDK_OFFSET(0x9D02DD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D85A69A177ED1ECC_OFFSET UNITYSDK_OFFSET(0x9D03FB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x9D02880)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x9D028F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x9D02700)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_E4FAD5C67AACF046_OFFSET UNITYSDK_OFFSET(0x9D04C10)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x9CFEC60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F0C0A09DEADFA368_OFFSET UNITYSDK_OFFSET(0x9D016D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x9D04AC0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x9D04560)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_FB0CC4A7FCE4A5BA_OFFSET UNITYSDK_OFFSET(0x9D03110)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_PICKUPBULLET_OFFSET UNITYSDK_OFFSET(0x9CFED90)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERALERT_OFFSET UNITYSDK_OFFSET(0x9D045F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTMONSTERCHASE_OFFSET UNITYSDK_OFFSET(0x9D04240)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIDE_OFFSET UNITYSDK_OFFSET(0x9D05AD0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHHIT_OFFSET UNITYSDK_OFFSET(0x9D05940)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHLOOK_OFFSET UNITYSDK_OFFSET(0x9D057B0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROPHIT_OFFSET UNITYSDK_OFFSET(0x9D01C20)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHPROP_OFFSET UNITYSDK_OFFSET(0x9D05530)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_REPORTPUSHTV_OFFSET UNITYSDK_OFFSET(0x9D05C60)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETACHIEVEMENTCHASE_OFFSET UNITYSDK_OFFSET(0x9D01290)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9CFE840)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_RESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x9D00670)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_CACHEDCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0x9D04AB0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D06230)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_SHUTDOWNPUZZLE_OFFSET UNITYSDK_OFFSET(0x9CFE940)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9CFDE50)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9CFFC00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x9D00410)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_UNWAITSTARTUP_OFFSET UNITYSDK_OFFSET(0x9D00320)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_USEBULLET_OFFSET UNITYSDK_OFFSET(0x9CFEC00)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITRESTOREARCHIVE_OFFSET UNITYSDK_OFFSET(0x9D00380)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_WAITSTARTUP_OFFSET UNITYSDK_OFFSET(0x9D00240)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D06570)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9D06270)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D066C0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D065F0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9D066D0)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D06660)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D06600)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9D06770)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_TypeDefinitionIndex = 61952;

	class WolfBroPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_31()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8440);
		}
		static ::RPG::Client::Prop::WolfBroPuzzleBoard** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Prop::WolfBroPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8448);
		}
		static ::System::String** StaticGet_Field_6_33()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8450);
		}
		static ::System::String** StaticGet_Field_6_27()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8458);
		}
		static ::System::String** StaticGet_Field_6_28()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8460);
		}
		static ::System::String** StaticGet_Field_6_32()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8468);
		}
		static ::System::String** StaticGet_Field_6_30()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8470);
		}
		static ::System::String** StaticGet_Field_6_29()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8478);
		}
		static ::System::UInt32* StaticGet_Field_6_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2AE0);
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

		::System::Void Method_6_D49D4C04CB5F23A5(::Class_0_16E4307DCC419505_347* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D49D4C04CB5F23A5_OFFSET))(this, a1);
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

		::System::Void Method_6_1CCAD9E0606BF12D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_1CCAD9E0606BF12D_OFFSET))(this, a1);
		}

		::System::Void Method_6_648CCB08284C0A69(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_648CCB08284C0A69_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_2B630A56F9D369CF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2B630A56F9D369CF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B5C3166189D9374C(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_B5C3166189D9374C_OFFSET))(this, a1);
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

		::System::Void Method_6_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_6_8D61BE16C9463302_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_1_OFFSET))(this);
		}

		::System::Void Method_6_9AD47D8DC12F1689(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9AD47D8DC12F1689_OFFSET))(this, a1);
		}

		::System::Void Method_6_8D61BE16C9463302_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_8D61BE16C9463302_2_OFFSET))(this);
		}

		::System::Void Method_6_5F1A93F1BF7BAC2B(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_5F1A93F1BF7BAC2B_OFFSET))(this, a1, a2);
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

		::System::Void Method_6_9036CFAD14566A8D(::Class_1_4A527E96BC15AA5A_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A527E96BC15AA5A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9036CFAD14566A8D_OFFSET))(this, a1);
		}

		::System::Void Method_6_2FAC9ED1B8FB93BF(::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WolfBroPuzzleBoard_CustomGameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_2FAC9ED1B8FB93BF_OFFSET))(this, a1);
		}

		::System::Void Method_6_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_EC2B405D0723571D_OFFSET))(this);
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

		static ::Class_1_3DE734113B1E313B_1* Method_6_854CB545243705CE(::Struct_2_1C9EA53B06A21796& a1)
		{
			return ((::Class_1_3DE734113B1E313B_1*(*)(::Struct_2_1C9EA53B06A21796&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_854CB545243705CE_OFFSET))(a1);
		}

		static ::Class_1_32044B0173B87B04_2* Method_6_9EBD28FD8FFC1A2A(::UnityEngine::Vector3 a1)
		{
			return ((::Class_1_32044B0173B87B04_2*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_9EBD28FD8FFC1A2A_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_6_D7B51E636B36E189(::Class_1_3DE734113B1E313B_1* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::Class_1_3DE734113B1E313B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD_METHOD_6_D7B51E636B36E189_OFFSET))(a1);
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
