#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleCameraController; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleItem; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleProjectionBoard; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_COORD2INDEX_OFFSET UNITYSDK_OFFSET(0x12763840)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1275F860)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_FINDNEIGHBORBLOCKS_OFFSET UNITYSDK_OFFSET(0x12764850)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x12761A80)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GOBACKONEOPERATION_OFFSET UNITYSDK_OFFSET(0x127631E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1275E5C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1275F810)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0x12763140)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x12761800)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x12762050)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x127623D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x127620B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x127629E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0x127629A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x12761EC0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x127647A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0x12764500)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET UNITYSDK_OFFSET(0x127645A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0x1275F7A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x12762F80)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x127630B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESETOPERATION_OFFSET UNITYSDK_OFFSET(0x127634D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0x1275F400)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x1275F600)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCK2PROJECTIONCOORD_OFFSET UNITYSDK_OFFSET(0x12768750)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x1275F1B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x12760360)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CANCELSELECTBLOCKPREVIEWPERFORM_OFFSET UNITYSDK_OFFSET(0x12762480)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x127692C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CHECKTUTORIALGUIDREPORT_OFFSET UNITYSDK_OFFSET(0x127613F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CLEARCURRENTITEM_OFFSET UNITYSDK_OFFSET(0x1275FE20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x12769140)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FILLAVAILIABLEBLOCK_OFFSET UNITYSDK_OFFSET(0x12763E90)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEMJOYSTICK_OFFSET UNITYSDK_OFFSET(0x127614F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEM_OFFSET UNITYSDK_OFFSET(0x127641E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULT_OFFSET UNITYSDK_OFFSET(0x12764160)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETPROJECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x12765570)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETUNFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x12768FA0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__HIDENPCANDMONSTER_OFFSET UNITYSDK_OFFSET(0x127606A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ISCOORDVALID_OFFSET UNITYSDK_OFFSET(0x127654F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x12764710)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONEVENT_OFFSET UNITYSDK_OFFSET(0x12761670)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONGAMEFINISHPERFORM_OFFSET UNITYSDK_OFFSET(0x12768130)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0x127616F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__PLAYPROJECTIONBOARDSSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0x12767E20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEAVAILABLEITEMS_OFFSET UNITYSDK_OFFSET(0x12764310)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x127627E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHUIINFO_OFFSET UNITYSDK_OFFSET(0x12761330)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTBLOCKPREVIEWPERFORM_OFFSET UNITYSDK_OFFSET(0x12763880)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTITEM_OFFSET UNITYSDK_OFFSET(0x12762130)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLALLOPERATIONBLOCKS_OFFSET UNITYSDK_OFFSET(0x12763600)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLONEOPERATIONBLOCK_OFFSET UNITYSDK_OFFSET(0x12763330)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x12764040)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATELOOKUPBLOCKS_OFFSET UNITYSDK_OFFSET(0x12760AB0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEPROJECTIONBOARDS_OFFSET UNITYSDK_OFFSET(0x12761210)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12769690)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x12769AE0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x127695D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x127695F0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0x12769A70)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x127696A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0x127696B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x127697A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x12769720)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0x12769860)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0x12769800)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0x127698C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0x127695E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0x12769930)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x127699E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___ONGAMEFINISHPERFORM_B__39_0_OFFSET UNITYSDK_OFFSET(0x12769390)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___SELECTITEM_B__24_0_OFFSET UNITYSDK_OFFSET(0x12769380)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleBoard_TypeDefinitionIndex = 71707;

	class BlockProjectionPuzzleBoard : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_BLOCK_ITEM_DISSOLVE_EFFECT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0D0);
		}
		static ::System::String** StaticGet_EvBlockItemNewFillEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0D8);
		}
		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0E0);
		}
		static ::System::String** StaticGet_EvProjectionBoardAllMatchEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0E8);
		}
		static ::System::String** StaticGet_EvProjectionBoardAllMatchEndEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0F0);
		}
		static ::System::String** StaticGet_BLOCK_ITEM_AVAILIABLE_CORE_EFFECT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A0F8);
		}
		static ::System::String** StaticGet_BLOCK_USE_UP_TOST_TEXTID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A100);
		}
		static ::System::String** StaticGet_EvBlockItemNewUnFillEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A108);
		}
		static ::System::String** StaticGet_EvBlockItemSelectEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A110);
		}
		static ::RPG::Client::Prop::BlockProjectionPuzzleBoard** StaticGet_CurrentActivePuzzleBoard()
		{
			return (::RPG::Client::Prop::BlockProjectionPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6A118);
		}
		::System::Boolean ShowPreviewArrow; // 0xB0
		::System::Single BlockSize; // 0xB4
		::System::Single BlockPadding; // 0xB8
		::System::Int32 MaxBlockNum; // 0xBC
		::System::Single CompleteEffectDuration; // 0xC0
		::UnityEngine::Transform* BoardRoot; // 0xC8
		::UnityEngine::Transform* ProjectionBoardRoot; // 0xD0
		::UnityEngine::Transform* CameraRoot; // 0xD8
		::UnityEngine::GameObject* ItemPrefab; // 0xE0
		::System::Single JoyStickDirectionWeight; // 0xE8
		::System::Single JoyStickDistanceWeight; // 0xEC
		::System::Single JoyStickVerticalHorizontalDistanceWeight; // 0xF0
		::System::Single JoyStickYPitchAngle; // 0xF4
		::System::UInt32 _GroupID; // 0xF8
		::System::UInt32 _InstacneID; // 0xFC
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x100
		::RPG::GameCore::PropComponent* _PropCompt; // 0x108
		::RPG::GameCore::GameEntity* _GroupEntityRef; // 0x110
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x118
		::RPG::Client::MonoEffectManager* _MonoEffectManagerRef; // 0x120
		::RPG::Client::Prop::BlockProjectionPuzzleItem* _CurHoverItem; // 0x128
		::System::Boolean _IsJoyStickSelectedState; // 0x130
		::System::Boolean _IsGameFinish; // 0x131
		::System::UInt32 _SerializeNumber; // 0x134
		::System::Boolean _IsReportStart; // 0x138
		::System::Int32 _ResetCount; // 0x13C
		::System::Int32 _BackCount; // 0x140
		::System::Single _ContinueTime; // 0x144
		::System::Int32 _AvailiableBlcokNum; // 0x148
		::RPG::Client::Prop::BlockProjectionPuzzleItem* _SelectBlockItem; // 0x150
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _AllItems; // 0x158
		::System::Collections::Generic::Stack_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _FillOperationBlockStack; // 0x160
		::Il2CppArray<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _LookUpItems; // 0x168
		::RPG::Client::Prop::BlockProjectionPuzzleCameraController* _CameraController; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleProjectionBoard*>* _ProjectionBoards; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* _SelectableBlockItems; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* _SelectableAvailiableItems; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* _TempItems; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONPUZZLEINTERACTUPDATE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _HideNPCAndMonster(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__HIDENPCANDMONSTER_OFFSET))(this, isHide);
		}

		::System::Void _CheckTutorialGuidReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CHECKTUTORIALGUIDREPORT_OFFSET))(this);
		}

		::System::Void _OnEvent(::Class_0_16E4307DCC419505_382* pEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONEVENT_OFFSET))(this, pEvent);
		}

		::System::Void _OnNotifySwitchToJoyStick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, obj);
		}

		::System::Void OnControllerJoystickInput(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, x, y);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEMUP_OFFSET))(this, item);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONSELECTITEM_OFFSET))(this, item);
		}

		::System::Void OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* centerItem, ::UnityEngine::Vector3 dir)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GETNEXTITEMBYDIRECTION_OFFSET))(this, centerItem, dir);
		}

		::System::Void GoBackOneOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_GOBACKONEOPERATION_OFFSET))(this);
		}

		::System::Void ResetOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_RESETOPERATION_OFFSET))(this);
		}

		static ::System::Int32 Coord2Index(::System::Int32 coord)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_COORD2INDEX_OFFSET))(coord);
		}

		::System::Void _SelectItem(::RPG::Client::Prop::BlockProjectionPuzzleItem* selectItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTITEM_OFFSET))(this, selectItem);
		}

		::System::Void _FocusDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULT_OFFSET))(this);
		}

		::System::Void _FocusDefaultItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEM_OFFSET))(this);
		}

		::System::Void _FocusDefaultItemJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FOCUSDEFAULTITEMJOYSTICK_OFFSET))(this);
		}

		::System::Void OnNotifyClickReset(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, obj);
		}

		::System::Void OnNotifyClickUndo(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET))(this, obj);
		}

		::System::Void _OnBackBtnClick(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONBACKBTNCLICK_OFFSET))(this, obj);
		}

		::System::Void OnNotifyClickExit(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, obj);
		}

		::System::Void _RefreshUIInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHUIINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>* FindNeighborBlocks(::RPG::Client::Prop::BlockProjectionPuzzleItem* centerBlock)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleItem*>*(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD_FINDNEIGHBORBLOCKS_OFFSET))(this, centerBlock);
		}

		::System::Boolean _IsCoordValid(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ISCOORDVALID_OFFSET))(this, x, y, z);
		}

		::System::Void _UpdateLookupBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATELOOKUPBLOCKS_OFFSET))(this);
		}

		::System::Void _UpdateProjectionBoards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEPROJECTIONBOARDS_OFFSET))(this);
		}

		::System::Void _PlayProjectionBoardsSuccessPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__PLAYPROJECTIONBOARDSSUCCESSPERFORM_OFFSET))(this);
		}

		::System::Void _UpdateIsPuzzleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UPDATEISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void _OnGameFinishPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__ONGAMEFINISHPERFORM_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* _GetProjectionState(::RPG::Client::Prop::RubikCubeFrameFace face)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::Prop::RubikCubeFrameFace))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETPROJECTIONSTATE_OFFSET))(this, face);
		}

		::System::Void _CancelSelectBlockPreviewPerform(::RPG::Client::Prop::BlockProjectionPuzzleItem* block)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CANCELSELECTBLOCKPREVIEWPERFORM_OFFSET))(this, block);
		}

		::System::Boolean _SelectBlockPreviewPerform(::RPG::Client::Prop::BlockProjectionPuzzleItem* block)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__SELECTBLOCKPREVIEWPERFORM_OFFSET))(this, block);
		}

		::System::Void _FillAvailiableBlock(::RPG::Client::Prop::BlockProjectionPuzzleItem* block)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BlockProjectionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__FILLAVAILIABLEBLOCK_OFFSET))(this, block);
		}

		::System::Boolean _UnFillOneOperationBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLONEOPERATIONBLOCK_OFFSET))(this);
		}

		::System::Void _UnFillAllOperationBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__UNFILLALLOPERATIONBLOCKS_OFFSET))(this);
		}

		::System::Void _RefreshSelectableBlockItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEBLOCKITEMS_OFFSET))(this);
		}

		::System::Void _RefreshSelectableAvailableItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__REFRESHSELECTABLEAVAILABLEITEMS_OFFSET))(this);
		}

		::System::Void _ClearCurrentItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__CLEARCURRENTITEM_OFFSET))(this);
		}

		::Struct_2_2F8FC043285F98CD_1 _Block2ProjectionCoord(::RPG::Client::Prop::RubikCubeFrameFace face, ::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::Struct_2_2F8FC043285F98CD_1(*)(::PVOID, ::RPG::Client::Prop::RubikCubeFrameFace, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCK2PROJECTIONCOORD_OFFSET))(this, face, x, y, z);
		}

		::System::Int32 _GetUnFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__GETUNFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void _BlockProjectionPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _BlockProjectionPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD__BLOCKPROJECTIONPUZZLEENDDATAREPORT_OFFSET))(this);
		}

		::System::Void __SelectItem_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___SELECTITEM_B__24_0_OFFSET))(this);
		}

		::System::Void __OnGameFinishPerform_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___ONGAMEFINISHPERFORM_B__39_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPuzzleInteractUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONPUZZLEINTERACTUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickInput(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEMUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONSELECTITEM_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* __iFixBaseProxy_GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::UnityEngine::Vector3 P1)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEBOARD___IFIXBASEPROXY_GETNEXTITEMBYDIRECTION_OFFSET))(this, P0, P1);
		}
	};
}
