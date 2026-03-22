#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_004034A1FAAF468A;
class Class_1_D27BF54F25500E5F;
class Class_2_BD898AE9C0E88E25;
namespace RPG::Client { class Effect_OracleOutlineMonoPlugin; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class OraclePuzzleCommonConfig; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x9C7EF30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x9C79EE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET UNITYSDK_OFFSET(0x9C7A530)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C79F70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x9C7EE60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C7E540)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9C76510)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET UNITYSDK_OFFSET(0x9C7F620)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET UNITYSDK_OFFSET(0x9C76650)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET UNITYSDK_OFFSET(0x9C7F560)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET UNITYSDK_OFFSET(0x9C7EDC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET UNITYSDK_OFFSET(0x9C7F5C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET UNITYSDK_OFFSET(0x9C7E4E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET UNITYSDK_OFFSET(0x9C7EE10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9C769F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C7F500)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0x9C7E3F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET UNITYSDK_OFFSET(0x9C76450)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET UNITYSDK_OFFSET(0x9C764B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C77F60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9C79F20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C79A10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET UNITYSDK_OFFSET(0x9C7AD60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET UNITYSDK_OFFSET(0x9C7DE80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x9C7D390)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x9C7C3B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9C7C420)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x9C7C4C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C7C480)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x9C7C500)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0x9C77D00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0x9C775B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0x9C77E30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9C799C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x9C77320)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x9C7F1F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0x9C7EF90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0x9C798B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x9C77860)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x9C7CBD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x9C78050)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x9C79660)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET UNITYSDK_OFFSET(0x9C7C540)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET UNITYSDK_OFFSET(0x9C7CDA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C79150)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET UNITYSDK_OFFSET(0x9C7EAA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9C77980)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9C76F40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9C77490)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9C77500)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x9C7B650)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C7F710)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x9C7C2F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7F690)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET UNITYSDK_OFFSET(0x9C7D520)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET UNITYSDK_OFFSET(0x9C7DBD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x9C7F3C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET UNITYSDK_OFFSET(0x9C7DA40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET UNITYSDK_OFFSET(0x9C79900)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0x9C7BFF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C7DB50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET UNITYSDK_OFFSET(0x9C7C190)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0x9C7C2A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9C7C070)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET UNITYSDK_OFFSET(0x9C795A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x9C79350)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x9C7AA30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET UNITYSDK_OFFSET(0x9C7C9A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x9C7A3E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x9C7F8D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0x9C7B7A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x9C7BCC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0x9C7E580)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0x9C7C8C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x9C7EC60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0x9C7BB10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x9C7BD20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET UNITYSDK_OFFSET(0x9C7EB90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET UNITYSDK_OFFSET(0x9C79DB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET UNITYSDK_OFFSET(0x9C7C700)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x9C7F450)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x9C7B480)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x9C7FC50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C7FD40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C7FB40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9C7FCD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C7FBB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x9C800C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x9C7FD50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x9C7FD60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x9C7FE50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C7FDD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x9C7FEB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0x9C80130)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0x9C80210)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0x9C802F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9C7FBA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x9C7FF10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONQUIT_OFFSET UNITYSDK_OFFSET(0x9C7FB90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x9C80010)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x9C7FF80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9C7FB50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__21_0_OFFSET UNITYSDK_OFFSET(0x9C7F910)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__21_1_OFFSET UNITYSDK_OFFSET(0x9C7FAE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__23_0_OFFSET UNITYSDK_OFFSET(0x9C7FAF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard_TypeDefinitionIndex = 61986;

	class OraclePuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::RPG::Client::Prop::OraclePuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::OraclePuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x28980);
		}
		static ::RPG::Client::OraclePuzzleCommonConfig** StaticGet_OracleConfig()
		{
			return (::RPG::Client::OraclePuzzleCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x28988);
		}
		static ::System::String** StaticGet_Oracle_Event_Pick()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x28990);
		}
		static ::System::String** StaticGet_Oracle_StateExit_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x28998);
		}
		static ::System::String** StaticGet_Oracle_StateEnter_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289A0);
		}
		static ::System::String** StaticGet_Oracle_StateGroup_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289A8);
		}
		static ::System::String** StaticGet__OraclePuzzleInitGroupEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289B0);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289B8);
		}
		static ::System::String** StaticGet__GroupEventStartLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289C0);
		}
		static ::System::String** StaticGet__GroupEventEndLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289C8);
		}
		static ::System::String** StaticGet_ORACLE_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289D0);
		}
		static ::System::String** StaticGet_Oracle_Event_Drop()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289D8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet__AttachedPropIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289E0);
		}
		static ::System::String** StaticGet_Oracle_GroupProperty_PuzzleStateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289E8);
		}
		static ::System::String** StaticGet_Oracle_Event_Finish()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289F0);
		}
		static ::System::String** StaticGet__CurrentPuzzleIndexDynamicValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x289F8);
		}
		static ::System::Single* StaticGet_PinZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B40);
		}
		static ::System::Single* StaticGet_GridRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B44);
		}
		static ::System::Int32* StaticGet_MainColorPropertID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B48);
		}
		static ::System::Int32* StaticGet_DitherAlphaPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B4C);
		}
		static ::System::Int32* StaticGet_PerformGridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B50);
		}
		static ::System::Int32* StaticGet_GridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B54);
		}
		static ::System::Single* StaticGet_HoverZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B58);
		}
		static ::System::Int32* StaticGet_DitherOnpRropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8B5C);
		}
		::System::Boolean _IsInInteraction; // 0xB0
		::System::Boolean _IsGameStart; // 0xB1
		::System::Boolean _IsReportStart; // 0xB2
		::System::UInt32 _SerializeNumber; // 0xB4
		::System::Single _ContinueTime; // 0xB8
		::System::Int32 _ResetCount; // 0xBC
		::System::Int32 _HelperCount; // 0xC0
		::UnityEngine::Transform* PuzzleRoot; // 0xC8
		::System::Single PreviewScale; // 0xD0
		::System::Single BoardScale; // 0xD4
		::UnityEngine::GameObject* ItemPrefab; // 0xD8
		::UnityEngine::Vector2 ValidRegionCenter; // 0xE0
		::System::Single PreviewValidRegionRadius; // 0xE8
		::System::Single ValidRegionRadius; // 0xEC
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzlePanel*>* OraclePanels; // 0xF0
		::System::Single FadeDuration; // 0xF8
		::System::Boolean IsHelperSelectMode; // 0xFC
		::System::UInt32 _GroupID; // 0x100
		::System::UInt32 _InstacneID; // 0x104
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x108
		::RPG::GameCore::PropComponent* _PropCompt; // 0x110
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x118
		::Class_2_BD898AE9C0E88E25* _MapGroupDef; // 0x120
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x128
		::RPG::Client::MonoEffectManager* _MonoEffectManagerRef; // 0x130
		::RPG::Client::Prop::OraclePuzzlePanel* _CurActivePanel; // 0x138
		::System::Int32 _CurPanelIndex; // 0x140
		::RPG::Client::Prop::OraclePuzzleItem* _CurHoverItem; // 0x148
		::RPG::Client::Prop::OraclePuzzleItem* _CurDragItem; // 0x150
		::RPG::Client::Prop::OraclePuzzleItem* _CurSelectItem; // 0x158
		::Class_1_004034A1FAAF468A* _ItemOutlinePrefab; // 0x160
		::RPG::Client::Effect_OracleOutlineMonoPlugin* _OutlinePlugin; // 0x168
		::UnityEngine::Animator* _OutlineAnimator; // 0x170
		::Class_1_D27BF54F25500E5F* _TransmitFade; // 0x178
		::UnityEngine::Transform* _BoardRootHintPic; // 0x180
		::System::Boolean _IsPuzzleUnlock; // 0x188
		::UnityEngine::Color _HintInitColor; // 0x18C
		::System::Boolean _IsGameFinish; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Boolean HasHoverItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET))(this);
		}

		::System::Boolean HasSelectItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetBoardCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Single GetBoardScreenRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetSelectItemCenterScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET))(this);
		}

		::System::Void TryHoverItemByVirtualCursor(::UnityEngine::Vector2 cursorPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET))(this, cursorPos);
		}

		::System::Void TrySelectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryUnselectItemByVirtualCursor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Void TryDragItemByVirtualCursor(::UnityEngine::Vector2 cursorPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET))(this, cursorPos);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void _OnStartInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET))(this);
		}

		::System::Void _OnEndInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void RuntimeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _StartFadeinPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET))(this);
		}

		::System::Void _TransitionBoardRoot(::System::Single rate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET))(this, rate);
		}

		::System::Void _StartFadeoutPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET))(this);
		}

		::System::Void _SetBoardRootHintPicActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET))(this, active);
		}

		::System::Void _UpdateBoardRootHintPicActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET))(this);
		}

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_347* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnOwnerEntityVisibleChangeEvent(::Class_0_16E4307DCC419505_347* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnGPChange(::System::UInt32 groupID, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET))(this, groupID, propertyName);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, obj);
		}

		::System::Void OnControllerJoystickInput(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, x, y);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Void _TransitItemToTop(::UnityEngine::Transform* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET))(this, to);
		}

		::System::Void _SetMoveableItemOrder2Top(::RPG::Client::Prop::OraclePuzzleItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET))(this, item);
		}

		::System::Void _RefreshMoveItemsColliderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET))(this);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, item);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, item);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void _OnCheckFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoard(::RPG::Client::Prop::OraclePuzzleItem* oracleItem)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET))(this, oracleItem);
		}

		::UnityEngine::Vector3 _GetClippedPosInBoardV2(::RPG::Client::Prop::OraclePuzzleItem* oracleItem)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET))(this, oracleItem);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void FinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _OnFinishPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET))(this);
		}

		::System::Void _SetFinishPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET))(this);
		}

		::System::Void SwitchPuzzlePanel(::System::Boolean isNext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET))(this, isNext);
		}

		::System::Int32 GetCurrentPanelIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET))(this);
		}

		::System::Int32 GetPuzzlePanelsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET))(this);
		}

		::System::Void ExecuteCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void CancelCurrentPuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void SetTargetOnHover(::RPG::Client::Prop::OraclePuzzleItem* target, ::System::Boolean isHover)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET))(this, target, isHover);
		}

		::System::Void SetTargetOnSelect(::RPG::Client::Prop::OraclePuzzleItem* target, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET))(this, target, isSelect);
		}

		::System::Void ClearOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET))(this);
		}

		::System::Void OnNotifyClickReset(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, obj);
		}

		::System::Void OnNotifyClickExit(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, obj);
		}

		::System::Void _OnBackBtnClick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET))(this, obj);
		}

		::System::Void _ClearCurrentInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* sEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET))(this, sEvent);
		}

		::System::Void _SetPropFloatValue(::System::String* key, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET))(this, key, val);
		}

		::System::Void _StartPuzzlePanelTransition(::System::Int32 nextPanelIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET))(this, nextPanelIndex);
		}

		::System::Void _OraclePuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _OraclePuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		::System::Void _AddIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _RemoveIgnoreAttachedEraEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET))(this);
		}

		::System::Void _SetAttachedEraEntityVisible(::System::Boolean isEraVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET))(this, isEraVisible);
		}

		::System::Boolean get_IsHelperAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET))(this);
		}

		static ::System::Void LoadOracleConfigIfNot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET))();
		}

		static ::System::Single GetPerformCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET))();
		}

		static ::System::Single GetCellSize()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET))();
		}

		static ::System::Single GetDynamicRadtio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET))();
		}

		static ::UnityEngine::Vector2 GetBoardOrigin()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET))();
		}

		static ::UnityEngine::Vector2Int LocalPos2GridPos(::UnityEngine::Vector2 localPos)
		{
			return ((::UnityEngine::Vector2Int(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET))(localPos);
		}

		static ::UnityEngine::Vector2 GridPos2LocalPos(::UnityEngine::Vector2Int gridPos)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET))(gridPos);
		}

		::System::Void _RuntimeInit_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__19_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__21_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__21_1_OFFSET))(this);
		}

		::System::Void __StartFadeoutPerform_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__23_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONQUIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET))(this, P0, P1, P2);
		}
	};
}
