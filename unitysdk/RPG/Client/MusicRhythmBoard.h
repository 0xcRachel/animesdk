#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicRhythmBoard_Struct_2_E829EAB92082DE6E.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5713C98DC6CE30C7;
class Class_1_C27C170A2F991DAF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmGameConfig; }
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace RPG::GameCore { class MusicRhythmLevelRow; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x98FA380)
#define RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98F8040)
#define RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x98F9730)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET UNITYSDK_OFFSET(0x98F9F60)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET UNITYSDK_OFFSET(0x98F97F0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x98FA490)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x98FA3D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x98FA3F0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x98FA410)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x98FA530)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x98FA510)
#define RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x98F66A0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0x98F87D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_0565C92E9C2B314B_OFFSET UNITYSDK_OFFSET(0x98F9610)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x98F6D40)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0x98F8D10)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_802D2A6E195347E8_OFFSET UNITYSDK_OFFSET(0x98F7E20)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x98F6C50)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0x98F8C60)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_2_OFFSET UNITYSDK_OFFSET(0x98F8E60)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_3_OFFSET UNITYSDK_OFFSET(0x98F8F80)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_4_OFFSET UNITYSDK_OFFSET(0x98F9080)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_5_OFFSET UNITYSDK_OFFSET(0x98F9280)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_6_OFFSET UNITYSDK_OFFSET(0x98F9480)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_7_OFFSET UNITYSDK_OFFSET(0x98F9560)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x98F89C0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9871B2ED609502A4_1_OFFSET UNITYSDK_OFFSET(0x98F9130)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9871B2ED609502A4_OFFSET UNITYSDK_OFFSET(0x98F8AE0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_CA3B19E0577A7621_OFFSET UNITYSDK_OFFSET(0x98F9930)
#define RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_EE33E0531969166F_OFFSET UNITYSDK_OFFSET(0x98F9330)
#define RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x98F7B80)
#define RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET UNITYSDK_OFFSET(0x98FA050)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET UNITYSDK_OFFSET(0x98F7EC0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x98FA4D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x98FA3E0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x98FA400)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x98FA450)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x98FA540)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x98FA520)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET UNITYSDK_OFFSET(0x98F8830)
#define RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET UNITYSDK_OFFSET(0x98F7A20)
#define RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x98F96D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x98FA550)
#define RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98FA680)
#define RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x98FA670)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmBoard_TypeDefinitionIndex = 47657;

	class MusicRhythmBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::RPG::GameCore::MusicRhythmLevelRow** StaticGet__LevelRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmLevelRow**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x32D50);
		}
		static ::RPG::GameCore::MusicRhythmGameConfig** StaticGet_MusicRhythmConfig()
		{
			return (::RPG::GameCore::MusicRhythmGameConfig**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x32D58);
		}
		static ::RPG::GameCore::MusicRhythmGroupRow** StaticGet__GroupRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmGroupRow**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmBoard_TypeDefinitionIndex)->GetStaticField(0x32D60);
		}
		::System::Boolean _IsDisposed_k__BackingField; // 0x48
		::Class_1_C27C170A2F991DAF* Field_6_1; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MusicRhythmBoard_Struct_2_E829EAB92082DE6E>* Field_6_2; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_6_3; // 0x60
		::RPG::GameCore::GameEntity* Field_6_4; // 0x68
		::System::Single Field_6_5; // 0x70
		::Class_1_5713C98DC6CE30C7* GunManager; // 0x78
		::System::UInt32 _LevelId_k__BackingField; // 0x80
		::System::Int32 _TutorialFailTimes_k__BackingField; // 0x84
		::System::Boolean _SkipTutorial_k__BackingField; // 0x88
		::System::Int32 TutorialTotalTime; // 0x8C
		::System::String* Field_6_14; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartMusicRhythm(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET))(this, a1);
		}

		::System::Void PlayTimeline(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetAdjustMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsTimelineFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET))(this);
		}

		::System::Void ShowPlayerHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET))(this);
		}

		::System::Void Method_6_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_6_9871B2ED609502A4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9871B2ED609502A4_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_6AF8CC03883E6064(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_6AF8CC03883E6064_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_2_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_3_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_4_OFFSET))(this, a1);
		}

		::System::Void Method_6_9871B2ED609502A4_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9871B2ED609502A4_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_5_OFFSET))(this, a1);
		}

		::System::Void Method_6_EE33E0531969166F(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_EE33E0531969166F_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_6_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000_7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_96BDC4B57CCFE000_7_OFFSET))(this, a1);
		}

		::System::Void Method_6_0565C92E9C2B314B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_0565C92E9C2B314B_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmTimelineConfig* Method_6_802D2A6E195347E8(::System::String* a1)
		{
			return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_802D2A6E195347E8_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPoint(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void Method_6_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_2566AD459572DFC3_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_CA3B19E0577A7621(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_CA3B19E0577A7621_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::GameEntity* GetEntity(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET))(this, a1);
		}

		::System::Void ResetAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET))(this);
		}

		::System::Void AddTutorialFailTimes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET))(this, value);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET))(this, value);
		}

		static ::RPG::GameCore::MusicRhythmLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::MusicRhythmLevelRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET))();
		}

		static ::System::Void set_LevelRow(::RPG::GameCore::MusicRhythmLevelRow* value)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET))(value);
		}

		static ::RPG::GameCore::MusicRhythmGroupRow* get_GroupRow()
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET))();
		}

		static ::System::Void set_GroupRow(::RPG::GameCore::MusicRhythmGroupRow* value)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET))(value);
		}

		::System::Int32 get_TutorialFailTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Void set_TutorialFailTimes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET))(this, value);
		}

		::System::Boolean get_SkipTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET))(this);
		}

		::System::Void set_SkipTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
