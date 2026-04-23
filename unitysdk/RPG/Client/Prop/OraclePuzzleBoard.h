#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
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

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANCELCURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x13A7CBA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1038ED90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_CLEAROUTLINE_OFFSET UNITYSDK_OFFSET(0x13A79910)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1038EE20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_EXECUTECURRENTPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x13A7CAD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_FINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x13A7C1D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1038C5F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDORIGIN_OFFSET UNITYSDK_OFFSET(0x13A7DB80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETBOARDSCREENRADIUS_OFFSET UNITYSDK_OFFSET(0x1038C730)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCELLSIZE_OFFSET UNITYSDK_OFFSET(0x13A7DAC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETCURRENTPANELINDEX_OFFSET UNITYSDK_OFFSET(0x13A7CA30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETDYNAMICRADTIO_OFFSET UNITYSDK_OFFSET(0x13A7DB20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPERFORMCELLSIZE_OFFSET UNITYSDK_OFFSET(0x13A7C040)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETPUZZLEPANELSCOUNT_OFFSET UNITYSDK_OFFSET(0x13A7CA80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GETSELECTITEMCENTERSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1038CAD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GET_ISHELPERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x13A7D970)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_GRIDPOS2LOCALPOS_OFFSET UNITYSDK_OFFSET(0x13A7BF50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASHOVERITEM_OFFSET UNITYSDK_OFFSET(0x1038C530)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_HASSELECTITEM_OFFSET UNITYSDK_OFFSET(0x1038C590)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1038D590)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1038EDD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0x1038EBB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOADORACLECONFIGIFNOT_OFFSET UNITYSDK_OFFSET(0x13A7D9D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_LOCALPOS2GRIDPOS_OFFSET UNITYSDK_OFFSET(0x13A7B9E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x13A7AAC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x13A79610)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x13A79680)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x13A79720)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x13A796E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x13A79760)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0x13A7AB30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0x13A7AC60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0x13A7C0A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1038EB60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x13A797A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x13A7CE60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0x13A7CC00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONQUIT_OFFSET UNITYSDK_OFFSET(0x1038EA50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x13A7A9A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x13A7A160)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x1038D680)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x13A785E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONHOVER_OFFSET UNITYSDK_OFFSET(0x13A79A70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SETTARGETONSELECT_OFFSET UNITYSDK_OFFSET(0x13A7A330)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1038E790)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_SWITCHPUZZLEPANEL_OFFSET UNITYSDK_OFFSET(0x13A7C710)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYDRAGITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1038D1E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYHOVERITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1038CCC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1038D0C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD_TRYUNSELECTITEMBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1038D130)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ADDIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x13A7D6D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A7DC70)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CLEARCURRENTINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x13A79550)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7DBF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARDV2_OFFSET UNITYSDK_OFFSET(0x13A7B030)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__GETCLIPPEDPOSINBOARD_OFFSET UNITYSDK_OFFSET(0x13A7B730)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x13A7D030)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONCHECKFINISH_OFFSET UNITYSDK_OFFSET(0x13A7B550)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONENDINTERACTION_OFFSET UNITYSDK_OFFSET(0x1038EAA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0x13A79090)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONFINISHPUZZLE_OFFSET UNITYSDK_OFFSET(0x13A7B6B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONGPCHANGE_OFFSET UNITYSDK_OFFSET(0x13A793F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0x13A79500)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x13A79110)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONSTARTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1038E990)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x13A7D170)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ORACLEPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x13A7D3A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REFRESHMOVEITEMSCOLLIDERORDER_OFFSET UNITYSDK_OFFSET(0x13A79F30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__REMOVEIGNOREATTACHEDERAENTITY_OFFSET UNITYSDK_OFFSET(0x13A7D820)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET UNITYSDK_OFFSET(0x13A7DE90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETATTACHEDERAENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0x13A79230)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x13A78B80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0x13A7C210)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETMOVEABLEITEMORDER2TOP_OFFSET UNITYSDK_OFFSET(0x13A79E50)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__SETPROPFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x13A7C8D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0x13A789E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x13A78D10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__STARTPUZZLEPANELTRANSITION_OFFSET UNITYSDK_OFFSET(0x13A7C800)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITIONBOARDROOT_OFFSET UNITYSDK_OFFSET(0x13A78BE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRANSITITEMTOTOP_OFFSET UNITYSDK_OFFSET(0x13A79C90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x13A7D0C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__UPDATEBOARDROOTHINTPICACTIVE_OFFSET UNITYSDK_OFFSET(0x13A78FE0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x13A7E250)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A7E3B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x13A7E100)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x13A7E2D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0x13A7E1B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0x13A7E730)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x13A7E3C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x13A7E3D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x13A7E4C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x13A7E440)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x13A7E520)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0x13A7E7A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0x13A7E880)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0x13A7E960)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONFINISH_OFFSET UNITYSDK_OFFSET(0x13A7E1A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x13A7E580)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONQUIT_OFFSET UNITYSDK_OFFSET(0x13A7E190)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x13A7E680)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x13A7E5F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x13A7E110)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET UNITYSDK_OFFSET(0x13A7DED0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET UNITYSDK_OFFSET(0x13A7E0A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET UNITYSDK_OFFSET(0x13A7E0B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard_TypeDefinitionIndex = 72220;

	class OraclePuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::RPG::Client::OraclePuzzleCommonConfig** StaticGet_OracleConfig()
		{
			return (::RPG::Client::OraclePuzzleCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2A0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet__AttachedPropIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2A8);
		}
		static ::System::String** StaticGet__OraclePuzzleInitGroupEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2B0);
		}
		static ::System::String** StaticGet_Oracle_StateEnter_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2B8);
		}
		static ::RPG::Client::Prop::OraclePuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::OraclePuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2C0);
		}
		static ::System::String** StaticGet_Oracle_Event_Pick()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2C8);
		}
		static ::System::String** StaticGet__GroupEventStartLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2D0);
		}
		static ::System::String** StaticGet_Oracle_GroupProperty_PuzzleStateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2D8);
		}
		static ::System::String** StaticGet_Oracle_StateGroup_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2E0);
		}
		static ::System::String** StaticGet__CurrentPuzzleIndexDynamicValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2E8);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2F0);
		}
		static ::System::String** StaticGet_ORACLE_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD2F8);
		}
		static ::System::String** StaticGet_Oracle_Event_Finish()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD300);
		}
		static ::System::String** StaticGet_Oracle_StateExit_Name()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD308);
		}
		static ::System::String** StaticGet_Oracle_Event_Drop()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD310);
		}
		static ::System::String** StaticGet__GroupEventEndLinePerform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xD318);
		}
		static ::System::Single* StaticGet_PinZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DB0);
		}
		static ::System::Int32* StaticGet_DitherAlphaPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DB4);
		}
		static ::System::Single* StaticGet_HoverZGap()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DB8);
		}
		static ::System::Int32* StaticGet_GridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DBC);
		}
		static ::System::Int32* StaticGet_MainColorPropertID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DC0);
		}
		static ::System::Int32* StaticGet__Complete()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DC4);
		}
		static ::System::Int32* StaticGet__ItemState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DC8);
		}
		static ::System::Int32* StaticGet_DitherOnpRropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DCC);
		}
		static ::System::Int32* StaticGet__IsHover()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DD0);
		}
		static ::System::Single* StaticGet_GridRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DD4);
		}
		static ::System::Int32* StaticGet_PerformGridSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OraclePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4DD8);
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

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnOwnerEntityVisibleChangeEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__ONOWNERENTITYVISIBLECHANGEEVENT_OFFSET))(this, pEvent);
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

		::System::Void _RuntimeInit_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD__RUNTIMEINIT_B__22_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_0_OFFSET))(this);
		}

		::System::Void __StartFadeinPerform_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEINPERFORM_B__24_1_OFFSET))(this);
		}

		::System::Void __StartFadeoutPerform_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___STARTFADEOUTPERFORM_B__26_0_OFFSET))(this);
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
