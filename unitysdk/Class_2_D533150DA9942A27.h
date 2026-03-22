#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Guid.h"

class Class_0_16E4307DCC419505_347;
class Class_1_2544F28605D9B855;
class Class_1_36264895A759B0FF;
class Class_1_3CE489337C8C379C;
class Class_1_947F5BB3E2AFC4CE;
class Class_1_DC7CAF0A5A38BD05;
class Class_2_EDBFEE9656CDD763;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace RPG::GameCore { class CutSceneSFXConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PlayTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace RPGTools::Timeline { class BindingData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_D533150DA9942A27_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F5B9A0)
#define CLASS_2_D533150DA9942A27_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x8F55E80)
#define CLASS_2_D533150DA9942A27_METHOD_2_00E8D4584E39B171_OFFSET UNITYSDK_OFFSET(0x8F59C20)
#define CLASS_2_D533150DA9942A27_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x8F5DAB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x8F58290)
#define CLASS_2_D533150DA9942A27_METHOD_2_07F3C9BBB17201F9_OFFSET UNITYSDK_OFFSET(0x8F58840)
#define CLASS_2_D533150DA9942A27_METHOD_2_0F3EBBFE62BDFF9D_OFFSET UNITYSDK_OFFSET(0x8F57C20)
#define CLASS_2_D533150DA9942A27_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8F5CFD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_16A9A42E2CDA943E_OFFSET UNITYSDK_OFFSET(0x8F58DC0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x8F5CCC0)
#define CLASS_2_D533150DA9942A27_METHOD_2_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x8F5D5D0)
#define CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET UNITYSDK_OFFSET(0x8F57520)
#define CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x8F581F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x8F5B150)
#define CLASS_2_D533150DA9942A27_METHOD_2_50BF1B0904E78DBA_OFFSET UNITYSDK_OFFSET(0x8F587E0)
#define CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x8F5AD50)
#define CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8F5C730)
#define CLASS_2_D533150DA9942A27_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x8F5DD00)
#define CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x8F5A6C0)
#define CLASS_2_D533150DA9942A27_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x8F5C590)
#define CLASS_2_D533150DA9942A27_METHOD_2_726354DCE97130D8_OFFSET UNITYSDK_OFFSET(0x8F5AC70)
#define CLASS_2_D533150DA9942A27_METHOD_2_7599C2232709D642_OFFSET UNITYSDK_OFFSET(0x8F58D00)
#define CLASS_2_D533150DA9942A27_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x8F5D820)
#define CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x8F5BED0)
#define CLASS_2_D533150DA9942A27_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x8F5C030)
#define CLASS_2_D533150DA9942A27_METHOD_2_9F035AB66324ED79_OFFSET UNITYSDK_OFFSET(0x8F595A0)
#define CLASS_2_D533150DA9942A27_METHOD_2_A35036E315EC562E_OFFSET UNITYSDK_OFFSET(0x8F571C0)
#define CLASS_2_D533150DA9942A27_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x8F5DDE0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x8F5AE40)
#define CLASS_2_D533150DA9942A27_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x8F5C7F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B7E7D354F8A3A915_OFFSET UNITYSDK_OFFSET(0x8F5AAB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x8F57FB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET UNITYSDK_OFFSET(0x8F57130)
#define CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET UNITYSDK_OFFSET(0x8F59450)
#define CLASS_2_D533150DA9942A27_METHOD_2_BD50D311A56B5E90_OFFSET UNITYSDK_OFFSET(0x8F585F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8F5DEB0)
#define CLASS_2_D533150DA9942A27_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x8F5C0F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F570F0)
#define CLASS_2_D533150DA9942A27_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x8F5BAD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_D34CCDE97BEADB0C_OFFSET UNITYSDK_OFFSET(0x8F5D2C0)
#define CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_1_OFFSET UNITYSDK_OFFSET(0x8F5D450)
#define CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_OFFSET UNITYSDK_OFFSET(0x8F5CAD0)
#define CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x8F5CA50)
#define CLASS_2_D533150DA9942A27_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x8F5BC20)
#define CLASS_2_D533150DA9942A27_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x8F55DA0)
#define CLASS_2_D533150DA9942A27_METHOD_2_F5AA48DF093DA896_OFFSET UNITYSDK_OFFSET(0x8F5DE30)
#define CLASS_2_D533150DA9942A27_METHOD_2_F7BA13C72A6B3F58_1_OFFSET UNITYSDK_OFFSET(0x8F5D250)
#define CLASS_2_D533150DA9942A27_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x8F5CC50)
#define CLASS_2_D533150DA9942A27_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x8F5B0A0)
#define CLASS_2_D533150DA9942A27_ONSKIP_OFFSET UNITYSDK_OFFSET(0x8F5ACF0)
#define CLASS_2_D533150DA9942A27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F55F00)
#define CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F5A530)
#define CLASS_2_D533150DA9942A27_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x8F55E90)
#define CLASS_2_D533150DA9942A27_TICK_OFFSET UNITYSDK_OFFSET(0x8F5A590)
#define CLASS_2_D533150DA9942A27__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F5DEC0)
#define CLASS_2_D533150DA9942A27__CTOR_OFFSET UNITYSDK_OFFSET(0x8F55D40)
#define CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__29_1_OFFSET UNITYSDK_OFFSET(0x8F5DEE0)

inline static constexpr unsigned int Class_2_D533150DA9942A27_TypeDefinitionIndex = 44254;

class Class_2_D533150DA9942A27 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_30()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x3DA20);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_29()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27_TypeDefinitionIndex)->GetStaticField(0x3DA28);
	}
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0xC8; // 0x0
	::RPG::GameCore::PlayTimeline* Field_2_4; // 0x18
	::RPG::GameCore::CutSceneSFXConfig* Field_2_25; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* Field_2_17; // 0x28
	::RPG::GameCore::TaskContext* Field_2_5; // 0x30
	::RPG::GameCore::GameWorld* Field_2_6; // 0x38
	::RPG::GameCore::CutSceneConfigRow* Field_2_16; // 0x40
	::Class_2_EDBFEE9656CDD763* Field_2_7; // 0x48
	::UnityEngine::Playables::PlayableDirector* Field_2_9; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x58
	::RPG::GameCore::VideoCaptionConfig* Field_2_22; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x68
	::Class_1_36264895A759B0FF* Field_2_10; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_15; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_14; // 0x80
	::System::Single Field_2_23; // 0x88
	::System::Guid Field_2_11; // 0x8C
	::System::Int32 Field_2_26; // 0x9C
	::System::Int32 Field_2_8; // 0xA0
	::System::UInt32 Field_2_19; // 0xA4
	::System::Single Field_2_12; // 0xA8
	::System::Double Field_2_28; // 0xB0
	::System::Boolean Field_2_3; // 0xB8
	::System::Boolean Field_2_21; // 0xB9
	::System::Boolean Field_2_24; // 0xBA
	::System::Boolean Field_2_20; // 0xBB
	::System::UInt32 Field_2_18; // 0xBC
	::System::Single Field_2_27; // 0xC0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27__CCTOR_OFFSET))();
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_GET_FORCESKIP_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_50BF1B0904E78DBA(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_50BF1B0904E78DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_07F3C9BBB17201F9(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_07F3C9BBB17201F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_7599C2232709D642(::UnityEngine::Timeline::TimelineAsset* a1, ::RPGTools::Timeline::BindingData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::RPGTools::Timeline::BindingData*&))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7599C2232709D642_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_A35036E315EC562E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_A35036E315EC562E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_16A9A42E2CDA943E(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_16A9A42E2CDA943E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Method_2_9F035AB66324ED79(::UnityEngine::Timeline::TimelineAsset* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>*(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_9F035AB66324ED79_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7E7D354F8A3A915(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B7E7D354F8A3A915_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_3AD0AC9143B20894(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_3AD0AC9143B20894_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_0F3EBBFE62BDFF9D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_0F3EBBFE62BDFF9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F7BA13C72A6B3F58_1_OFFSET))(this);
	}

	::System::Void Method_2_D34CCDE97BEADB0C(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D34CCDE97BEADB0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00E8D4584E39B171(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_00E8D4584E39B171_OFFSET))(this, a1);
	}

	::Class_1_DC7CAF0A5A38BD05* Method_2_D576072A5004A133()
	{
		return ((::Class_1_DC7CAF0A5A38BD05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_OFFSET))(this);
	}

	::Class_1_3CE489337C8C379C* Method_2_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_3CE489337C8C379C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B95A2EA2A8345A6E(::RPG::GameCore::TimelineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_B95A2EA2A8345A6E_OFFSET))(this, a1);
	}

	::Class_1_2544F28605D9B855* Method_2_D576072A5004A133_1()
	{
		return ((::Class_1_2544F28605D9B855*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_D576072A5004A133_1_OFFSET))(this);
	}

	::System::Void Method_2_BD50D311A56B5E90(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BD50D311A56B5E90_OFFSET))(this, a1);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_BB5C538354FD3393(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_BB5C538354FD3393_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_726354DCE97130D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_726354DCE97130D8_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_F5AA48DF093DA896(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_F5AA48DF093DA896_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__29_1(::System::UInt32 eventID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___CUTSCENEAUDIOBEGIN_B__29_1_OFFSET))(this, eventID);
	}
};
