#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_125B67C2F2D7C6EE;
class Class_1_7F4048AB74B0A21D;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170AE520)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET UNITYSDK_OFFSET(0x170AF4F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x170B0610)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x170AECB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0x170AEDC0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x170AFF00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x170B0E90)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x170B0B30)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x170B0CB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x170B0950)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET UNITYSDK_OFFSET(0x170AFDA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET UNITYSDK_OFFSET(0x170AFE50)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170B1330)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x170AFAA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x170B0D10)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_1_OFFSET UNITYSDK_OFFSET(0x170AFB10)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x170B1D90)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_627E340394129EB2_OFFSET UNITYSDK_OFFSET(0x170B0860)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0x170B0690)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET UNITYSDK_OFFSET(0x170AFF50)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0x170B18B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x170AF460)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x170B0730)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x170B1B40)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x170AEA70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x170AF860)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x170AE8C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C2964BCE35522351_OFFSET UNITYSDK_OFFSET(0x170B1DF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x170B1420)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x170AE7E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E8EF1B35FF0F80BD_OFFSET UNITYSDK_OFFSET(0x170B14A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0x170B0410)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x170B0A00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x170B1830)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x170AFB70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x170AFFA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x170AF110)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x170AFC70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B2100)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x170B2050)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170B2140)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x170B2150)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x170B22A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x170B2330)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x170B21E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x170B2240)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard_TypeDefinitionIndex = 73031;

	class CommandRobotPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x141B0);
		}
		static ::System::UInt32* StaticGet_Field_7_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x7AD0);
		}
		// static const ::System::String* Field_7_2; // 0x0
		// static const ::System::Single Field_7_3; // 0x0
		::System::UInt32 MaxStep; // 0x68
		::System::Single BlockTime; // 0x6C
		::System::UInt32 Field_7_6; // 0x70
		::System::UInt32 Field_7_7; // 0x74
		::System::UInt32 Field_7_8; // 0x78
		::System::UInt32 Field_7_9; // 0x7C
		::System::UInt32 Field_7_10; // 0x80
		::System::UInt32 Field_7_11; // 0x84
		::System::UInt32 Field_7_12; // 0x88
		::System::UInt32 Field_7_13; // 0x8C
		::System::UInt32 Field_7_14; // 0x90
		::System::UInt32 NPCGroupID; // 0x94
		::System::UInt32 NPCEntityID; // 0x98
		::System::Int32 Field_7_17; // 0x9C
		::System::Int32 Field_7_18; // 0xA0
		::System::UInt32 Field_7_19; // 0xA4
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* Field_7_20; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::CommandRobotPuzzleBlock*>* Field_7_21; // 0xB0
		::Class_1_7F4048AB74B0A21D* Field_7_22; // 0xB8
		::System::UInt32 Field_7_23; // 0xC0
		::RPG::GameCore::GameEntity* Field_7_24; // 0xC8
		::System::Int32 Field_7_25; // 0xD0
		::UnityEngine::Vector2Int Field_7_26; // 0xD4
		::UnityEngine::Quaternion Field_7_27; // 0xDC
		::RPG::Client::Prop::CommandRobotPuzzleState Field_7_28; // 0xEC
		::UnityEngine::Vector2Int Field_7_29; // 0xF0
		::Class_1_125B67C2F2D7C6EE* Field_7_30; // 0xF8
		::System::Boolean Field_7_31; // 0x100
		::UnityEngine::Coroutine* Field_7_32; // 0x108
		::UnityEngine::Coroutine* Field_7_33; // 0x110
		::UnityEngine::Vector3 Field_7_34; // 0x118
		::RPG::Client::Billboard::BillboardNotifyParam* Field_7_35; // 0x128
		::RPG::GameCore::PlayNPCBubbleTalk* Field_7_36; // 0x130
		::System::Boolean Field_7_37; // 0x138
		::System::Boolean Field_7_38; // 0x139
		::System::UInt32 Field_7_39; // 0x13C
		::UnityEngine::GameObject* Field_7_40; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET))(this);
		}

		::System::Void GetNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_7_37D641371E4C8F58(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_37D641371E4C8F58_OFFSET))(this, a1);
		}

		::System::Void Method_7_7A272934369463F2(::RPG::Client::Prop::CommandRobotPuzzleState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET))(this, a1);
		}

		::System::Void Method_7_635445A7258F7A25(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_635445A7258F7A25_OFFSET))(this, a1);
		}

		::System::Void Method_7_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_7_627E340394129EB2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_627E340394129EB2_OFFSET))(this, a1);
		}

		::System::Void Method_7_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_7_BBA49FAB086F388D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_BBA49FAB086F388D_OFFSET))(this);
		}

		::System::Void Method_7_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_7_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_7_08BBACE844405300()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_08BBACE844405300_OFFSET))(this);
		}

		::System::Void Method_7_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C706B1EC6D2E1C64_OFFSET))(this);
		}

		::System::Void Method_7_285439556D776CA2(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET))(this, a1);
		}

		::System::Void Method_7_285439556D776CA2_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET))(this, a1);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_7_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_7_7C3BCB023B0D3F9C(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7C3BCB023B0D3F9C_OFFSET))(this, a1);
		}

		::System::Void Method_7_974A70E8019154E7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET))(this, a1);
		}

		::System::Void Method_7_57D5ED2C4C06D908()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_57D5ED2C4C06D908_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_1_OFFSET))(this);
		}

		::System::Void Method_7_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void Method_7_E8EF1B35FF0F80BD(::System::UInt32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E8EF1B35FF0F80BD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* Method_7_C2964BCE35522351(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C2964BCE35522351_OFFSET))(this, a1);
		}

		::System::Void Method_7_F624506052E4790C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET))(this, a1);
		}

		::System::Void Method_7_EFF275E2C18C04F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET))(this);
		}

		::System::Void Method_7_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_7_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}
	};
}
