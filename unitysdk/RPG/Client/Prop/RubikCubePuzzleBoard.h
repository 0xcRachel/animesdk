#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"

namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleCubeData; }
namespace RPG::Client::Prop { class RubikCubePuzzleFrameData; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xEDB9A90)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEDB84F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEDB8980)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB5890)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xEDB8DA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_01CB1782418C6F22_OFFSET UNITYSDK_OFFSET(0xEDB8AE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0xEDB8D10)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET UNITYSDK_OFFSET(0xEDB7C00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xEDB9580)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET UNITYSDK_OFFSET(0xEDB7C50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB7E20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET UNITYSDK_OFFSET(0xEDB8DF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET UNITYSDK_OFFSET(0xEDB91F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB7A20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xEDB9810)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xEDB9B30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xEDB9AD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xEDB7DA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xEDB9CF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEDB9C40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB9B70)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xEDB9C50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB9BE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xEDB9B80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBoard_TypeDefinitionIndex = 72314;

	class RubikCubePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x10A70);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCubeData*>* CubeList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleSwitchData*>* SwitchList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleFrameData*>* FrameList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ControlBoards; // 0x60
		::UnityEngine::GameObject* ConditionObjAttachPoint_A1; // 0x68
		::UnityEngine::GameObject* ConditionObjAttachPoint_A2; // 0x70
		::UnityEngine::GameObject* ConditionObjAttachPoint_B1; // 0x78
		::UnityEngine::GameObject* ConditionObjAttachPoint_B2; // 0x80
		::UnityEngine::GameObject* ConditionObjAttachPoint_C1; // 0x88
		::UnityEngine::GameObject* ConditionObjAttachPoint_C2; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* Field_6_10; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPuzzleCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET))(this, a1);
		}

		::System::Void ResetCubeSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_01CB1782418C6F22(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_01CB1782418C6F22_OFFSET))(this, a1);
		}

		::System::Void Method_6_D70C8B847AF08ADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void RotateCube(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SelectCubeGroup(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}
	};
}
