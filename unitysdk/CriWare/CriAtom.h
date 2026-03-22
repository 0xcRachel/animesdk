#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/CriWare/CriAtomExSequencer_CriAtomExSequenceEventInfo.h"
#include "unitysdk/CriWare/CriAtomEx_CueLinkInfo.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomExBeatSync_CbFunc; }
namespace CriWare { class CriAtomExSequencer_EventCallback; }
namespace CriWare { class CriAtomExSequencer_EventCbFunc; }
namespace CriWare { class CriAtomEx_CueLinkCbFunc; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CRIWARE_CRIATOM_ADDCUESHEETASYNC_1_OFFSET UNITYSDK_OFFSET(0x11281F00)
#define CRIWARE_CRIATOM_ADDCUESHEETASYNC_OFFSET UNITYSDK_OFFSET(0x11281AE0)
#define CRIWARE_CRIATOM_ADDCUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x11281860)
#define CRIWARE_CRIATOM_ADDCUESHEET_1_OFFSET UNITYSDK_OFFSET(0x11281CF0)
#define CRIWARE_CRIATOM_ADDCUESHEET_OFFSET UNITYSDK_OFFSET(0x11281780)
#define CRIWARE_CRIATOM_ADD_BEATSYNCUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x11280690)
#define CRIWARE_CRIATOM_ADD_CUELINKUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x11280B80)
#define CRIWARE_CRIATOM_ADD_ONBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x112807F0)
#define CRIWARE_CRIATOM_ADD_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x11280CE0)
#define CRIWARE_CRIATOM_ADD_ONEVENTSEQUENCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x11280380)
#define CRIWARE_CRIATOM_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x112810F0)
#define CRIWARE_CRIATOM_AWAKE_OFFSET UNITYSDK_OFFSET(0x112840A0)
#define CRIWARE_CRIATOM_BEATSYNCCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x112802C0)
#define CRIWARE_CRIATOM_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112849D0)
#define CRIWARE_CRIATOM_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x112849C0)
#define CRIWARE_CRIATOM_CUELINKCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x11280320)
#define CRIWARE_CRIATOM_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x11281440)
#define CRIWARE_CRIATOM_GETACB_OFFSET UNITYSDK_OFFSET(0x11282430)
#define CRIWARE_CRIATOM_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x11283700)
#define CRIWARE_CRIATOM_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x11283490)
#define CRIWARE_CRIATOM_GETCATEGORYVOLUME_1_OFFSET UNITYSDK_OFFSET(0x11282A10)
#define CRIWARE_CRIATOM_GETCATEGORYVOLUME_OFFSET UNITYSDK_OFFSET(0x112828B0)
#define CRIWARE_CRIATOM_GETCUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x11281690)
#define CRIWARE_CRIATOM_GETCUESHEET_OFFSET UNITYSDK_OFFSET(0x11281550)
#define CRIWARE_CRIATOM_GET_CUESHEETSARELOADING_OFFSET UNITYSDK_OFFSET(0x11282380)
#define CRIWARE_CRIATOM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x11281070)
#define CRIWARE_CRIATOM_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x11282050)
#define CRIWARE_CRIATOM_LOADACBDATACOROUTINE_OFFSET UNITYSDK_OFFSET(0x11285010)
#define CRIWARE_CRIATOM_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x11281E60)
#define CRIWARE_CRIATOM_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x11281C40)
#define CRIWARE_CRIATOM_LOADACBFILECOROUTINE_OFFSET UNITYSDK_OFFSET(0x11284F80)
#define CRIWARE_CRIATOM_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x112819E0)
#define CRIWARE_CRIATOM_MARGECUESHEET_OFFSET UNITYSDK_OFFSET(0x112843B0)
#define CRIWARE_CRIATOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11284760)
#define CRIWARE_CRIATOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x112846C0)
#define CRIWARE_CRIATOM_REGISTERBEATSYNCCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280800)
#define CRIWARE_CRIATOM_REGISTERCUELINKCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280CF0)
#define CRIWARE_CRIATOM_REGISTEREVENTCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280390)
#define CRIWARE_CRIATOM_REMOVECUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x11282150)
#define CRIWARE_CRIATOM_REMOVECUESHEET_OFFSET UNITYSDK_OFFSET(0x112820E0)
#define CRIWARE_CRIATOM_REMOVE_BEATSYNCUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x11280740)
#define CRIWARE_CRIATOM_REMOVE_CUELINKUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x11280C30)
#define CRIWARE_CRIATOM_REMOVE_ONBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x112809F0)
#define CRIWARE_CRIATOM_REMOVE_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x11280EE0)
#define CRIWARE_CRIATOM_REMOVE_ONEVENTSEQUENCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x11280550)
#define CRIWARE_CRIATOM_SEQUENCECALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x11280260)
#define CRIWARE_CRIATOM_SEQUENCEEVENTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x11280200)
#define CRIWARE_CRIATOM_SETBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x11285B70)
#define CRIWARE_CRIATOM_SETBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x11282D80)
#define CRIWARE_CRIATOM_SETBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x11282B10)
#define CRIWARE_CRIATOM_SETCATEGORYVOLUME_1_OFFSET UNITYSDK_OFFSET(0x11282790)
#define CRIWARE_CRIATOM_SETCATEGORYVOLUME_OFFSET UNITYSDK_OFFSET(0x11282630)
#define CRIWARE_CRIATOM_SETEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x112859E0)
#define CRIWARE_CRIATOM_SETUP_OFFSET UNITYSDK_OFFSET(0x11283950)
#define CRIWARE_CRIATOM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x112810B0)
#define CRIWARE_CRIATOM_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x11283CF0)
#define CRIWARE_CRIATOM_UNREGISTERBEATSYNCCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280A00)
#define CRIWARE_CRIATOM_UNREGISTERCUELINKCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280EF0)
#define CRIWARE_CRIATOM_UNREGISTEREVENTCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x11280560)
#define CRIWARE_CRIATOM__CTOR_OFFSET UNITYSDK_OFFSET(0x11285CD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom_TypeDefinitionIndex = 30084;

	class CriAtom : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomEx_CueLinkCbFunc** StaticGet_cueLinkUserCbFunc()
		{
			return (::CriWare::CriAtomEx_CueLinkCbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43250);
		}
		static ::CriWare::CriAtomExBeatSync_CbFunc** StaticGet_obsoleteBeatSyncFunc()
		{
			return (::CriWare::CriAtomExBeatSync_CbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43258);
		}
		static ::CriWare::CriAtomExBeatSync_CbFunc** StaticGet_beatsyncUserCbFunc()
		{
			return (::CriWare::CriAtomExBeatSync_CbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43260);
		}
		static ::CriWare::CriAtomExSequencer_EventCallback** StaticGet_eventUserCallback()
		{
			return (::CriWare::CriAtomExSequencer_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43268);
		}
		static ::CriWare::CriAtom** StaticGet__instance_k__BackingField()
		{
			return (::CriWare::CriAtom**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43270);
		}
		static ::CriWare::CriAtomExSequencer_EventCbFunc** StaticGet_eventUserCbFunc()
		{
			return (::CriWare::CriAtomExSequencer_EventCbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x43278);
		}
		::System::String* acfFile; // 0x28
		::System::Boolean acfIsLoading; // 0x30
		::Il2CppArray<::CriWare::CriAtomCueSheet*>* cueSheets; // 0x38
		::System::String* dspBusSetting; // 0x40
		::System::Boolean dontDestroyOnLoad; // 0x48
		::System::Runtime::InteropServices::GCHandle acfRegisterGCHandle; // 0x4C
		::System::Boolean dontRemoveExistsCueSheet; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEventSequencerCallback(::CriWare::CriAtomExSequencer_EventCallback* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONEVENTSEQUENCERCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnEventSequencerCallback(::CriWare::CriAtomExSequencer_EventCallback* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONEVENTSEQUENCERCALLBACK_OFFSET))(value);
		}

		static ::System::Void add_beatsyncUserCbFunc(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_BEATSYNCUSERCBFUNC_OFFSET))(value);
		}

		static ::System::Void remove_beatsyncUserCbFunc(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_BEATSYNCUSERCBFUNC_OFFSET))(value);
		}

		static ::System::Void add_OnBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONBEATSYNCCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONBEATSYNCCALLBACK_OFFSET))(value);
		}

		static ::System::Void add_cueLinkUserCbFunc(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_CUELINKUSERCBFUNC_OFFSET))(value);
		}

		static ::System::Void remove_cueLinkUserCbFunc(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_CUELINKUSERCBFUNC_OFFSET))(value);
		}

		static ::System::Void add_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONCUELINKCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONCUELINKCALLBACK_OFFSET))(value);
		}

		static ::CriWare::CriAtom* get_instance()
		{
			return ((::CriWare::CriAtom*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::CriWare::CriAtom* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtom*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::Void AttachDspBusSetting(::System::String* settingName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ATTACHDSPBUSSETTING_OFFSET))(settingName);
		}

		static ::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::CriWare::CriAtomCueSheet* GetCueSheet(::System::String* name)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCUESHEET_OFFSET))(name);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheet(::System::String* name, ::System::String* acbFile, ::System::String* awbFile, ::CriWare::CriFsBinder* binder)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEET_OFFSET))(name, acbFile, awbFile, binder);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheetAsync(::System::String* name, ::System::String* acbFile, ::System::String* awbFile, ::CriWare::CriFsBinder* binder, ::System::Boolean loadAwbOnMemory)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETASYNC_OFFSET))(name, acbFile, awbFile, binder, loadAwbOnMemory);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheet_1(::System::String* name, ::Il2CppArray<::System::Byte>* acbData, ::System::String* awbFile, ::CriWare::CriFsBinder* awbBinder)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEET_1_OFFSET))(name, acbData, awbFile, awbBinder);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheetAsync_1(::System::String* name, ::Il2CppArray<::System::Byte>* acbData, ::System::String* awbFile, ::CriWare::CriFsBinder* awbBinder, ::System::Boolean loadAwbOnMemory)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::CriWare::CriFsBinder*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETASYNC_1_OFFSET))(name, acbData, awbFile, awbBinder, loadAwbOnMemory);
		}

		static ::System::Void RemoveCueSheet(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVECUESHEET_OFFSET))(name);
		}

		static ::System::Boolean get_CueSheetsAreLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GET_CUESHEETSARELOADING_OFFSET))();
		}

		static ::CriWare::CriAtomExAcb* GetAcb(::System::String* cueSheetName)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETACB_OFFSET))(cueSheetName);
		}

		static ::System::Void SetCategoryVolume(::System::String* name, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETCATEGORYVOLUME_OFFSET))(name, volume);
		}

		static ::System::Void SetCategoryVolume_1(::System::Int32 id, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETCATEGORYVOLUME_1_OFFSET))(id, volume);
		}

		static ::System::Single GetCategoryVolume(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCATEGORYVOLUME_OFFSET))(name);
		}

		static ::System::Single GetCategoryVolume_1(::System::Int32 id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCATEGORYVOLUME_1_OFFSET))(id);
		}

		static ::System::Void SetBusAnalyzer(::System::String* busName, ::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBUSANALYZER_OFFSET))(busName, sw);
		}

		static ::System::Void SetBusAnalyzer_1(::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBUSANALYZER_1_OFFSET))(sw);
		}

		static ::CriWare::CriAtomExAsr_BusAnalyzerInfo GetBusAnalyzerInfo(::System::String* busName)
		{
			return ((::CriWare::CriAtomExAsr_BusAnalyzerInfo(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETBUSANALYZERINFO_OFFSET))(busName);
		}

		static ::CriWare::CriAtomExAsr_BusAnalyzerInfo GetBusAnalyzerInfo_1(::System::Int32 busId)
		{
			return ((::CriWare::CriAtomExAsr_BusAnalyzerInfo(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETBUSANALYZERINFO_1_OFFSET))(busId);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETUP_OFFSET))(this);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::CriWare::CriAtomCueSheet* GetCueSheetInternal(::System::String* name)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCUESHEETINTERNAL_OFFSET))(this, name);
		}

		::CriWare::CriAtomCueSheet* AddCueSheetInternal(::System::String* name, ::System::String* acbFile, ::System::String* awbFile, ::CriWare::CriFsBinder* binder)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETINTERNAL_OFFSET))(this, name, acbFile, awbFile, binder);
		}

		::System::Void RemoveCueSheetInternal(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVECUESHEETINTERNAL_OFFSET))(this, name);
		}

		::System::Void MargeCueSheet(::Il2CppArray<::CriWare::CriAtomCueSheet*>* newCueSheets, ::System::Boolean newDontRemoveExistsCueSheet)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CriWare::CriAtomCueSheet*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_MARGECUESHEET_OFFSET))(this, newCueSheets, newDontRemoveExistsCueSheet);
		}

		::CriWare::CriAtomExAcb* LoadAcbFile(::CriWare::CriFsBinder* binder, ::System::String* acbFile, ::System::String* awbFile)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILE_OFFSET))(this, binder, acbFile, awbFile);
		}

		::CriWare::CriAtomExAcb* LoadAcbData(::Il2CppArray<::System::Byte>* acbData, ::CriWare::CriFsBinder* binder, ::System::String* awbFile)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATA_OFFSET))(this, acbData, binder, awbFile);
		}

		::System::Void LoadAcbFileAsync(::CriWare::CriAtomCueSheet* cueSheet, ::CriWare::CriFsBinder* binder, ::System::String* acbFile, ::System::String* awbFile, ::System::Boolean loadAwbOnMemory)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILEASYNC_OFFSET))(this, cueSheet, binder, acbFile, awbFile, loadAwbOnMemory);
		}

		::System::Collections::IEnumerator* LoadAcbFileCoroutine(::CriWare::CriAtomCueSheet* cueSheet, ::CriWare::CriFsBinder* binder, ::System::String* acbPath, ::System::String* awbPath, ::System::Boolean loadAwbOnMemory)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILECOROUTINE_OFFSET))(this, cueSheet, binder, acbPath, awbPath, loadAwbOnMemory);
		}

		::System::Void LoadAcbDataAsync(::CriWare::CriAtomCueSheet* cueSheet, ::Il2CppArray<::System::Byte>* acbData, ::CriWare::CriFsBinder* awbBinder, ::System::String* awbFile, ::System::Boolean loadAwbOnMemory)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATAASYNC_OFFSET))(this, cueSheet, acbData, awbBinder, awbFile, loadAwbOnMemory);
		}

		::System::Collections::IEnumerator* LoadAcbDataCoroutine(::CriWare::CriAtomCueSheet* cueSheet, ::Il2CppArray<::System::Byte>* acbData, ::CriWare::CriFsBinder* awbBinder, ::System::String* awbPath, ::System::Boolean loadAwbOnMemory)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATACOROUTINE_OFFSET))(this, cueSheet, acbData, awbBinder, awbPath, loadAwbOnMemory);
		}

		static ::System::Void SequenceEventCallbackFromNative(::System::String* eventString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SEQUENCEEVENTCALLBACKFROMNATIVE_OFFSET))(eventString);
		}

		static ::System::Void SequenceCallbackFromNative(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& criAtomExSequenceInfo)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SEQUENCECALLBACKFROMNATIVE_OFFSET))(criAtomExSequenceInfo);
		}

		static ::System::Void BeatSyncCallbackFromNative(::CriWare::CriAtomExBeatSync_Info& info)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_BEATSYNCCALLBACKFROMNATIVE_OFFSET))(info);
		}

		static ::System::Void CueLinkCallbackFromNative(::CriWare::CriAtomEx_CueLinkInfo& info)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CUELINKCALLBACKFROMNATIVE_OFFSET))(info);
		}

		static ::System::Void SetEventCallback(::CriWare::CriAtomExSequencer_EventCbFunc* func, ::System::String* separator)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCbFunc*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETEVENTCALLBACK_OFFSET))(func, separator);
		}

		static ::System::Void RegisterEventCallbackChain(::CriWare::CriAtomExSequencer_EventCallback* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTEREVENTCALLBACKCHAIN_OFFSET))(func);
		}

		static ::System::Void UnregisterEventCallbackChain(::CriWare::CriAtomExSequencer_EventCallback* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTEREVENTCALLBACKCHAIN_OFFSET))(func);
		}

		static ::System::Void SetBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBEATSYNCCALLBACK_OFFSET))(func);
		}

		static ::System::Void RegisterBeatSyncCallbackChain(::CriWare::CriAtomExBeatSync_CbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTERBEATSYNCCALLBACKCHAIN_OFFSET))(func);
		}

		static ::System::Void UnregisterBeatSyncCallbackChain(::CriWare::CriAtomExBeatSync_CbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTERBEATSYNCCALLBACKCHAIN_OFFSET))(func);
		}

		static ::System::Void RegisterCueLinkCallbackChain(::CriWare::CriAtomEx_CueLinkCbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTERCUELINKCALLBACKCHAIN_OFFSET))(func);
		}

		static ::System::Void UnregisterCueLinkCallbackChain(::CriWare::CriAtomEx_CueLinkCbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTERCUELINKCALLBACKCHAIN_OFFSET))(func);
		}
	};
}
