#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarLinkOrder.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/RPG/Client/ActionDelayVisibleType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
class Class_1_02D30900317D93FD;
class Class_1_2A97E60807F449E7;
class Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B4CDE3278E4B50C2;
class Class_1_CFED1AE9FF4FB990;
class Class_1_D3ADF079E7A3324D;
class Class_1_D7050783C65BD221;
class Class_1_EBFCBA40EDF3DDA5;
class Class_2_356A85032C965661;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0x104DDDC0)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0x104DDEB0)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0x104DE090)
#define CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET UNITYSDK_OFFSET(0x104DE0E0)
#define CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x104DE1B0)
#define CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x104DDDE0)
#define CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0x104DE190)
#define CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET UNITYSDK_OFFSET(0x104DE100)
#define CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0x104DE050)
#define CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0x104DE0C0)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0x104DE150)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0x104DE170)
#define CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0x104DE130)
#define CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0x104DE070)
#define CLASS_1_AB817CB39E494C61_METHOD_1_01EA2063EB5FE1AB_OFFSET UNITYSDK_OFFSET(0x104DB380)
#define CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x104DC2F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x104DEB80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0x104DBB20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET UNITYSDK_OFFSET(0x104DC010)
#define CLASS_1_AB817CB39E494C61_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x104D91A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0x104DDED0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1A627593A9D45756_OFFSET UNITYSDK_OFFSET(0x104DDA90)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET UNITYSDK_OFFSET(0x104DEEB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x104DCAC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x104DE110)
#define CLASS_1_AB817CB39E494C61_METHOD_1_25B0552641F9F54F_OFFSET UNITYSDK_OFFSET(0x104DE1D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET UNITYSDK_OFFSET(0x104DD3B0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x104DAE10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_38BB94D264E871CA_OFFSET UNITYSDK_OFFSET(0x104DE4C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x104DA150)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3A38CBCDE751F02C_OFFSET UNITYSDK_OFFSET(0x104D9F70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET UNITYSDK_OFFSET(0x104DF520)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x104D8850)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4AD40A385BC29831_1_OFFSET UNITYSDK_OFFSET(0x104DF6D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x104DF6C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET UNITYSDK_OFFSET(0x104DAA40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4E5224604B3311A7_OFFSET UNITYSDK_OFFSET(0x104DA680)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x104DE120)
#define CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET UNITYSDK_OFFSET(0x104DA7E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET UNITYSDK_OFFSET(0x104DAAB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET UNITYSDK_OFFSET(0x104DABC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0x104DA930)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x104DA030)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5E6CB7ECF5CFEC7C_OFFSET UNITYSDK_OFFSET(0x104DEA60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET UNITYSDK_OFFSET(0x104DDC60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET UNITYSDK_OFFSET(0x104DDBC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x104D8C40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET UNITYSDK_OFFSET(0x104DA1A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x104D84D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x104DA8A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x104D8E20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET UNITYSDK_OFFSET(0x104DB990)
#define CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x104D82E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_837B832C4CA7C908_OFFSET UNITYSDK_OFFSET(0x104DB1B0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_855C761A88F104B1_OFFSET UNITYSDK_OFFSET(0x104D8230)
#define CLASS_1_AB817CB39E494C61_METHOD_1_87A60B825EA5CBE6_OFFSET UNITYSDK_OFFSET(0x104DE0F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_89933E5A6B97359F_OFFSET UNITYSDK_OFFSET(0x104DF400)
#define CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x104DA310)
#define CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x104D90D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_968346A9A9E3A3F4_OFFSET UNITYSDK_OFFSET(0x104DB5B0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_9935B106AFD57A5B_OFFSET UNITYSDK_OFFSET(0x104DED20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_99F4F951FF1FB275_OFFSET UNITYSDK_OFFSET(0x104DA090)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A14F598FC91279F9_OFFSET UNITYSDK_OFFSET(0x104DC550)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A2A64E814F2E2D40_OFFSET UNITYSDK_OFFSET(0x104D9D40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET UNITYSDK_OFFSET(0x104DC4A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET UNITYSDK_OFFSET(0x104DF620)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x104DE470)
#define CLASS_1_AB817CB39E494C61_METHOD_1_AD3EAB92ED39B65E_OFFSET UNITYSDK_OFFSET(0x104DB840)
#define CLASS_1_AB817CB39E494C61_METHOD_1_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0x104DAEA0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x104D8E70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET UNITYSDK_OFFSET(0x104DD430)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x104D8F50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B99034301EF5FA0D_OFFSET UNITYSDK_OFFSET(0x104DA3E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x104DE9A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x104DBA50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x104DACD0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C49D93067C1D99AE_OFFSET UNITYSDK_OFFSET(0x104DD920)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x104DBB70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C9DE5F3329B6D353_OFFSET UNITYSDK_OFFSET(0x104DBD60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x104DF0C0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x104D9140)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x104D8550)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET UNITYSDK_OFFSET(0x104DD630)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x104DA1F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET UNITYSDK_OFFSET(0x104DA590)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x104DE030)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x104DDD00)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x104DAD50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x104D8B50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_ECEB79F13F46C490_OFFSET UNITYSDK_OFFSET(0x104DF130)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x104D9770)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x104DE0B0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F8C3E46A967D4D17_OFFSET UNITYSDK_OFFSET(0x104D9E10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F9ECE57C20FD66EB_OFFSET UNITYSDK_OFFSET(0x104DD6E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET UNITYSDK_OFFSET(0x104DDE00)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET UNITYSDK_OFFSET(0x104DA840)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0x104DDDD0)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0x104DDEC0)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0x104DE0A0)
#define CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x104DE1C0)
#define CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x104DDDF0)
#define CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0x104DE1A0)
#define CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0x104DE060)
#define CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET UNITYSDK_OFFSET(0x104DE0D0)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0x104DE160)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0x104DE180)
#define CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0x104DE140)
#define CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0x104DE080)
#define CLASS_1_AB817CB39E494C61__CCTOR_OFFSET UNITYSDK_OFFSET(0x104DFB10)
#define CLASS_1_AB817CB39E494C61__CTOR_OFFSET UNITYSDK_OFFSET(0x104DF6E0)

inline static constexpr unsigned int Class_1_AB817CB39E494C61_TypeDefinitionIndex = 56743;

class Class_1_AB817CB39E494C61 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>** StaticGet_Field_1_31()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB817CB39E494C61_TypeDefinitionIndex)->GetStaticField(0x43CA0);
	}
	::System::Collections::Generic::List_1<::RPG::Client::ShowAttackTimeParam*>* Field_1_17; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelEntityActionDelayChanged*>* Field_1_19; // 0x18
	::Class_1_CFED1AE9FF4FB990* Field_1_18; // 0x20
	::RPG::GameCore::LevelUIComponent* Field_1_15; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>*>*>* _CustomEffects_k__BackingField; // 0x30
	::Class_2_356A85032C965661* Field_1_35; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* _SkillPreviewRemoveCache_k__BackingField; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_32; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* _AllPos_k__BackingField; // 0x50
	::RPG::GameCore::EventManager* Field_1_16; // 0x58
	::UnityEngine::RectTransform* _ActionBarRect_k__BackingField; // 0x60
	::Il2CppArray<::RPG::Client::ActionBarItemUIStyle>* Field_1_24; // 0x68
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_22; // 0x70
	::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::Class_1_B4CDE3278E4B50C2*>* Field_1_33; // 0x80
	::System::Collections::Generic::List_1<::Class_1_D3ADF079E7A3324D*>* Field_1_34; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* Field_1_21; // 0x90
	::Class_1_ABFB5B7BFEBBC8F7* _ActionBarMgrRef_k__BackingField; // 0x98
	::System::Int32 _CountDownWarningTime_k__BackingField; // 0xA0
	::System::Int32 Field_1_28; // 0xA4
	::System::Single Field_1_23; // 0xA8
	::RPG::GameCore::TurnState Field_1_40; // 0xAC
	::System::Int32 _ShenJunLevel1Count_k__BackingField; // 0xB0
	::System::Int32 Field_1_39; // 0xB4
	::UnityEngine::Vector3 Field_1_14; // 0xB8
	::System::Int32 Field_1_38; // 0xC4
	::System::Single Field_1_29; // 0xC8
	::System::Boolean _AutoSetTutorialDynamicKey_k__BackingField; // 0xCC
	::System::Boolean _IsAnimNodeActionBarFadeInPlaying_k__BackingField; // 0xCD
	::System::Boolean Field_1_25; // 0xCE
	::System::Boolean _IsTicking_k__BackingField; // 0xCF
	::System::Int32 Field_1_36; // 0xD0
	::RPG::Client::ActionBarUpdateTiming _ActionBarUpdateTimingCache_k__BackingField; // 0xD4
	::System::Single Field_1_30; // 0xD8
	::System::Single Field_1_26; // 0xDC
	::System::Int32 _ShenJunLevel2Count_k__BackingField; // 0xE0
	::System::Int32 Field_1_37; // 0xE4
	::UnityEngine::Vector3 Field_1_20; // 0xE8
	::System::Single Field_1_27; // 0xF4
	::System::Single _TotalHeight_k__BackingField; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CCTOR_OFFSET))();
	}

	::System::Void Method_1_855C761A88F104B1(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_855C761A88F104B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* Method_1_A2A64E814F2E2D40(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A2A64E814F2E2D40_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelEntityActionDelayChanged* Method_1_3A38CBCDE751F02C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3A38CBCDE751F02C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::RPG::Client::ShowAttackTimeParam* Method_1_99F4F951FF1FB275(::System::UInt32 a1)
	{
		return ((::RPG::Client::ShowAttackTimeParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_99F4F951FF1FB275_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_6F7881D70A7B0045(::RPG::Client::ActionDelayVisibleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_02D30900317D93FD* Method_1_F8C3E46A967D4D17(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F8C3E46A967D4D17_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_B99034301EF5FA0D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B99034301EF5FA0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5224604B3311A7(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4E5224604B3311A7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_565706B64B509AA6(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_FE2023B029BCB581(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CB7604B59F367726_OFFSET))(this);
	}

	::System::Void Method_1_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F7E7A0CBFFDFF0D(::Class_1_EBFCBA40EDF3DDA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBFCBA40EDF3DDA5*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFD66A83AEF40D90(::Class_1_EBFCBA40EDF3DDA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBFCBA40EDF3DDA5*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_AFD66A83AEF40D90_OFFSET))(this, a1);
	}

	::System::Void Method_1_837B832C4CA7C908(::Class_1_EBFCBA40EDF3DDA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBFCBA40EDF3DDA5*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_837B832C4CA7C908_OFFSET))(this, a1);
	}

	::System::Void Method_1_01EA2063EB5FE1AB(::Class_1_EBFCBA40EDF3DDA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBFCBA40EDF3DDA5*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_01EA2063EB5FE1AB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_7AA084BCCD5BD789(::Class_1_D7050783C65BD221* a1, ::Class_1_D7050783C65BD221* a2)
	{
		return ((::System::Boolean(*)(::Class_1_D7050783C65BD221*, ::Class_1_D7050783C65BD221*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_968346A9A9E3A3F4(::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>* a1, ::Il2CppArray<::Class_1_D7050783C65BD221*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>*, ::Il2CppArray<::Class_1_D7050783C65BD221*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_968346A9A9E3A3F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AD3EAB92ED39B65E(::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>* a1, ::Il2CppArray<::Class_1_D7050783C65BD221*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>*, ::Il2CppArray<::Class_1_D7050783C65BD221*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_AD3EAB92ED39B65E_OFFSET))(a1, a2);
	}

	::System::Void Method_1_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9DE5F3329B6D353(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C9DE5F3329B6D353_OFFSET))(this, a1);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A535E19C50EAF933(::RPG::GameCore::ActionDelayChangeReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET))(this, a1);
	}

	::System::Void Method_1_A14F598FC91279F9(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A14F598FC91279F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C10B76DCE350A5D(::RPG::Client::ActionDelayVisibleType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Boolean Method_1_146B82294136F2AB(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET))(this, a1);
	}

	::RPG::Client::ActionBarItemAction Method_1_2D2DBBE52259A093(::RPG::Client::ActionBarItemAction a1, ::RPG::Client::ActionBarItemAction a2)
	{
		return ((::RPG::Client::ActionBarItemAction(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_D3260B8F64623BF5(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_B1C3B03E2A683CEC(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_F9ECE57C20FD66EB(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F9ECE57C20FD66EB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_CECBB3A062B4DB69(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890_1(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_C49D93067C1D99AE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C49D93067C1D99AE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_1A627593A9D45756(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1A627593A9D45756_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::Class_1_ABFB5B7BFEBBC8F7* get_ActionBarMgrRef()
	{
		return ((::Class_1_ABFB5B7BFEBBC8F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET))(this);
	}

	::System::Void set_ActionBarMgrRef(::Class_1_ABFB5B7BFEBBC8F7* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ABFB5B7BFEBBC8F7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET))(this, value);
	}

	::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
	{
		return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET))(this);
	}

	::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET))(this, value);
	}

	::System::Void Method_1_FC626B9B626ADBFC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* get_ActionBarRect()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET))(this);
	}

	::System::Void set_ActionBarRect(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean get_IsAnimNodeActionBarFadeInPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this);
	}

	::System::Void set_IsAnimNodeActionBarFadeInPlaying(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this, value);
	}

	::System::Single get_TotalHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET))(this);
	}

	::System::Void set_TotalHeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET))(this, value);
	}

	::RPG::Client::ActionBarUpdateTiming get_ActionBarUpdateTimingCache()
	{
		return ((::RPG::Client::ActionBarUpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this);
	}

	::System::Void set_ActionBarUpdateTimingCache(::RPG::Client::ActionBarUpdateTiming value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_IsTicking()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET))(this);
	}

	::System::Void set_IsTicking(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* get_AllPos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* Method_1_87A60B825EA5CBE6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_87A60B825EA5CBE6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>*>*>* get_CustomEffects()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_D7050783C65BD221*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET))(this);
	}

	::Class_1_CFED1AE9FF4FB990* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CFED1AE9FF4FB990*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* get_SkillPreviewRemoveCache()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET))(this);
	}

	::System::Void set_SkillPreviewRemoveCache(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET))(this, value);
	}

	::System::Int32 get_ShenJunLevel1Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel1Count(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET))(this, value);
	}

	::System::Int32 get_ShenJunLevel2Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel2Count(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET))(this, value);
	}

	::System::Int32 get_CountDownWarningTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET))(this);
	}

	::System::Void set_CountDownWarningTime(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET))(this, value);
	}

	::System::Boolean get_AutoSetTutorialDynamicKey()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this);
	}

	::System::Void set_AutoSetTutorialDynamicKey(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this, value);
	}

	::System::Void Method_1_25B0552641F9F54F(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_25B0552641F9F54F_OFFSET))(this, a1);
	}

	::System::Void Method_1_38BB94D264E871CA(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_38BB94D264E871CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::RPG::Client::ActionBarLinkOrder Method_1_5E6CB7ECF5CFEC7C(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActionBarLinkOrder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5E6CB7ECF5CFEC7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_1_9935B106AFD57A5B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_9935B106AFD57A5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_1_ECEB79F13F46C490(::Class_1_02D30900317D93FD* a1, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_ECEB79F13F46C490_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ActionBarEventAction Method_1_89933E5A6B97359F(::System::Int32 a1, ::System::Boolean a2, ::Class_1_B4CDE3278E4B50C2*& a3)
	{
		return ((::RPG::Client::ActionBarEventAction(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Class_1_B4CDE3278E4B50C2*&))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_89933E5A6B97359F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_3B55ECD4A0DFB7B0(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_A6D76F57494D3A55(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1AF42459E8A3BD99(::Class_1_02D30900317D93FD* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>* Method_1_4AD40A385BC29831_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4AD40A385BC29831_1_OFFSET))(this);
	}
};
