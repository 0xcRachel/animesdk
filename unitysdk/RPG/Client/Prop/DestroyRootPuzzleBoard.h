#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootChessActionType.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBoard_PuzzleTrail.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9EC8019B48917E61;
class Class_1_D5D8B81C5F91714F;
namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class WaitForSeconds; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ACTIVELAUNCHER_OFFSET UNITYSDK_OFFSET(0x9BB71D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x9BB60E0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BB6120)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB4810)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9BB69B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ISREFACTORAIMOTHER_OFFSET UNITYSDK_OFFSET(0x9BB73E0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x9BB5C40)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x9BB7690)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_308ABEB3EBCF889F_OFFSET UNITYSDK_OFFSET(0x9BB5630)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x9BB62F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9BB67F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x9BB4FD0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_8540A595CC3C9878_OFFSET UNITYSDK_OFFSET(0x9BB6E10)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x9BB7350)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_MOVECHESS_OFFSET UNITYSDK_OFFSET(0x9BB6C50)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ONCHESSACTIONEND_OFFSET UNITYSDK_OFFSET(0x9BB7440)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB65B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ROTATECHESS_OFFSET UNITYSDK_OFFSET(0x9BB7100)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_SETCHESSFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x9BB74A0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB6A00)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BB7870)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7710)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0x9BB7950)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BB79C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB7940)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x9BB7A30)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB79D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x9BB7AD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleBoard_TypeDefinitionIndex = 61806;

	class DestroyRootPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_DegreePerDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DestroyRootPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xF180);
		}
		// static const ::System::String* GameKey; // 0x0
		::UnityEngine::Vector2Int PuzzleSize; // 0x48
		::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleBoard_PuzzleTrail>* Trails; // 0x50
		::Il2CppArray<::UnityEngine::GameObject*>* Chesses; // 0x58
		::System::String* RefactorHitEffect; // 0x60
		::System::String* BulletHitEffect; // 0x68
		::System::String* Laser; // 0x70
		::UnityEngine::AnimationCurve* MovingSpeedCurve; // 0x78
		::System::Int32 MoveMaxSpeed; // 0x80
		::System::String* TriggerWinCustomStringWhenLaunch; // 0x88
		::System::String* TriggerLoseCustomStringWhenLaunch; // 0x90
		::System::Single LaunchDelay; // 0x98
		::System::Single ResetDelayAfterLaunch; // 0x9C
		::System::Single LaserConnectDelay; // 0xA0
		::System::String* ActiveLaunchAnimName; // 0xA8
		::System::String* TriggerCustomStringWhenLaunch; // 0xB0
		::System::Single LaserSpeed; // 0xB8
		::System::Single LastLaserLength; // 0xBC
		::System::Int32 ActiveLaunchAnimHash; // 0xC0
		::System::String* ShotSoundEvent; // 0xC8
		::System::String* HitBlockSoundEvent; // 0xD0
		::System::String* HitStageSoundEvent; // 0xD8
		::Class_1_9EC8019B48917E61* _PuzzleLogic; // 0xE0
		::Class_1_D5D8B81C5F91714F* _PuzzleView; // 0xE8
		::UnityEngine::WaitForSeconds* _WaitLaunchDelay; // 0xF0
		::UnityEngine::WaitForSeconds* _WaitResetDelayAfterLaunch; // 0xF8
		::UnityEngine::WaitForSeconds* _WaitLaserConnectDelay; // 0x100
		::UnityEngine::Coroutine* _PerformCoroutine; // 0x108
		::UnityEngine::Coroutine* _LaserPerformCoroutine; // 0x110
		::System::Int32 _ActionCounter; // 0x118
		::System::Int32 _StartTime; // 0x11C
		::System::Boolean _IsPuzzleStart; // 0x120
		::System::Boolean _IsPuzzleFinish; // 0x121
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportDict; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int MoveChess(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_MOVECHESS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::ChessDirection RotateChess(::UnityEngine::Vector2Int a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ROTATECHESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ActiveLauncher(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ACTIVELAUNCHER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsRefactorAimOther(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ISREFACTORAIMOTHER_OFFSET))(this, a1);
		}

		::System::Void OnChessActionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_ONCHESSACTIONEND_OFFSET))(this);
		}

		::System::Void SetChessFinishState(::RPG::Client::Prop::DestroyRootPuzzleChess* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleChess*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_SETCHESSFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Void Method_6_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_652F3820D8B242FF_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_6_E374F6C9CEE8E680(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_E374F6C9CEE8E680_OFFSET))(this, a1);
		}

		::System::Void Method_6_308ABEB3EBCF889F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector2Int a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2Int, ::UnityEngine::Vector3, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_308ABEB3EBCF889F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_8540A595CC3C9878(::System::Int32 a1, ::RPG::Client::Prop::DestroyRootChessActionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::DestroyRootChessActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_8540A595CC3C9878_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_40E03D354D1ACC85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_40E03D354D1ACC85_OFFSET))(this);
		}

		::System::UInt32 Method_6_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void Method_6_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD_METHOD_6_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}
	};
}
