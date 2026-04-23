#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockScreenHexPuzzle.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class CablePuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157FE140)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x157FE070)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x15801EF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET UNITYSDK_OFFSET(0x157FEAF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0x157FFCE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0x157FF640)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x157FDDF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x157FE0F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_2B2DEB7686124E7F_OFFSET UNITYSDK_OFFSET(0x15800C00)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_34FDD69D951C8B51_OFFSET UNITYSDK_OFFSET(0x15800340)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_35F56742224D73B6_OFFSET UNITYSDK_OFFSET(0x15800260)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_5333EF19C96FD94F_OFFSET UNITYSDK_OFFSET(0x15800960)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x158011E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_2_OFFSET UNITYSDK_OFFSET(0x15801E60)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x157FF280)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_AEE7F196DE963C06_OFFSET UNITYSDK_OFFSET(0x157FDBA0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_B7252E7FA488DD14_OFFSET UNITYSDK_OFFSET(0x157FF310)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_CAC5CAF45259FE82_OFFSET UNITYSDK_OFFSET(0x15801270)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x15801120)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x157FE7E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x157FED30)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x15800A20)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x157FEDA0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0x157FEEB0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET UNITYSDK_OFFSET(0x157FFF90)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET UNITYSDK_OFFSET(0x15800CD0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0x158010B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x157FD3A0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15802220)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x15801F00)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158023A0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x158022F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x15802300)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x15802410)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x15802420)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0x158024A0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x15802260)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleBoard_TypeDefinitionIndex = 72099;

	class CablePuzzleBoard : public ::RPG::Client::Prop::BlockScreenHexPuzzle
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4930);
		}
		::System::Single RotateSpeed; // 0xF0
		::System::String* ResetTriggerCustomString; // 0xF8
		::UnityEngine::Vector2Int ControllerModeInitHighlightPos; // 0x100
		::System::Single DelayResetTime; // 0x108
		::UnityEngine::AnimationCurve* RotationSpeedCurve; // 0x110
		::UnityEngine::AnimationCurve* InitAnimationCurve; // 0x118
		::UnityEngine::Vector2Int CenterCoord; // 0x120
		::System::Single InitAnimationDuration; // 0x128
		::System::Single CenterItemInitAnimationHeight; // 0x12C
		::System::Single CenterLightDelay; // 0x130
		::System::Single LightDelay; // 0x134
		::System::String* RotateSoundEvent; // 0x138
		::System::String* ConnectSoundEvent; // 0x140
		::System::String* FinishSoundEvent; // 0x148
		::System::Int32 StartTime; // 0x150
		::System::Boolean Field_9_16; // 0x154
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_9_17; // 0x158
		::System::Int32 Field_9_18; // 0x160
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_19; // 0x168
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_20; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_21; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_22; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_23; // 0x188
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* Field_9_24; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_25; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_26; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* Field_9_27; // 0x1A8
		::System::Boolean Field_9_28; // 0x1B0
		::System::Boolean Field_9_29; // 0x1B1
		::RPG::Client::Prop::CablePuzzleItem* Field_9_30; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void InitControllerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET))(this);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_9_B7252E7FA488DD14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_B7252E7FA488DD14_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void RefreshItemsConnectionRelation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET))(this);
		}

		::System::Void ReportStep(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET))(this, a1);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void Method_9_AEE7F196DE963C06(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_AEE7F196DE963C06_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Method_9_CAC5CAF45259FE82(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_CAC5CAF45259FE82_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_9_35F56742224D73B6(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_35F56742224D73B6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_9_34FDD69D951C8B51(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_34FDD69D951C8B51_OFFSET))(this, a1, a2);
		}

		::System::Void Method_9_2B2DEB7686124E7F(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_2B2DEB7686124E7F_OFFSET))(this, a1);
		}

		::System::Void Method_9_5333EF19C96FD94F(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_5333EF19C96FD94F_OFFSET))(this, a1);
		}

		::System::Void Method_9_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_2_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
		}
	};
}
