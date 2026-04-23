#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_GameVariableInfo.h"
#include "unitysdk/CriWare/CriAtomEx_PerformanceInfo.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerAngles6ch.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerAngles8ch.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerSystem.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomEx_CueLinkCbFunc; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CRIWARE_CRIATOMEX_ADD_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x18266AE0)
#define CRIWARE_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18267160)
#define CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x18260810)
#define CRIWARE_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET UNITYSDK_OFFSET(0x182669C0)
#define CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET UNITYSDK_OFFSET(0x182680C0)
#define CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYNAME_OFFSET UNITYSDK_OFFSET(0x18268220)
#define CRIWARE_CRIATOMEX_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18267220)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x18267030)
#define CRIWARE_CRIATOMEX_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET UNITYSDK_OFFSET(0x18266A60)
#define CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x182670E0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET UNITYSDK_OFFSET(0x18268D60)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x18266FB0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x18267800)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYNAME_OFFSET UNITYSDK_OFFSET(0x18267950)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET UNITYSDK_OFFSET(0x18267610)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x18267360)
#define CRIWARE_CRIATOMEX_CRIATOMEX_LOCK_OFFSET UNITYSDK_OFFSET(0x18268380)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_1_OFFSET UNITYSDK_OFFSET(0x18266DC0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_OFFSET UNITYSDK_OFFSET(0x18266C60)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET UNITYSDK_OFFSET(0x18266B00)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x18267AB0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYNAME_OFFSET UNITYSDK_OFFSET(0x18267C10)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x18267D60)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_1_OFFSET UNITYSDK_OFFSET(0x18266700)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x182665E0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_1_OFFSET UNITYSDK_OFFSET(0x18266940)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x18266820)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNLOCK_OFFSET UNITYSDK_OFFSET(0x182684A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x18266E60)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICEID_PC_OFFSET UNITYSDK_OFFSET(0x18268B80)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICENAME_PC_OFFSET UNITYSDK_OFFSET(0x182689E0)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETNUMAUDIODEVICES_PC_OFFSET UNITYSDK_OFFSET(0x18268890)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_LOADAUDIODEVICELIST_PC_OFFSET UNITYSDK_OFFSET(0x18268770)
#define CRIWARE_CRIATOMEX_CRIATOM_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x18267FA0)
#define CRIWARE_CRIATOMEX_CRIATOM_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x18267E80)
#define CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_1_OFFSET UNITYSDK_OFFSET(0x18268C00)
#define CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_OFFSET UNITYSDK_OFFSET(0x18268640)
#define CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x182608D0)
#define CRIWARE_CRIATOMEX_ENABLEAUDIOSESSIONRESTORATION_IOS_OFFSET UNITYSDK_OFFSET(0x18268CB0)
#define CRIWARE_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET UNITYSDK_OFFSET(0x18268CC0)
#define CRIWARE_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x18266EE0)
#define CRIWARE_CRIATOMEX_GETAUDIODEVICENAME_PC_OFFSET UNITYSDK_OFFSET(0x18268910)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET UNITYSDK_OFFSET(0x182673E0)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x18267880)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLE_OFFSET UNITYSDK_OFFSET(0x18267760)
#define CRIWARE_CRIATOMEX_GETNUMAUDIODEVICES_PC_OFFSET UNITYSDK_OFFSET(0x182687F0)
#define CRIWARE_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x182672C0)
#define CRIWARE_CRIATOMEX_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x18267F00)
#define CRIWARE_CRIATOMEX_ISBGMPORTACQUIRED_VITA_OFFSET UNITYSDK_OFFSET(0x18268C90)
#define CRIWARE_CRIATOMEX_ISSOUNDSTOPPED_IOS_OFFSET UNITYSDK_OFFSET(0x18268CA0)
#define CRIWARE_CRIATOMEX_LOADAUDIODEVICELIST_PC_OFFSET UNITYSDK_OFFSET(0x182686D0)
#define CRIWARE_CRIATOMEX_LOCK_OFFSET UNITYSDK_OFFSET(0x182682E0)
#define CRIWARE_CRIATOMEX_REGISTERACF_1_OFFSET UNITYSDK_OFFSET(0x18266BB0)
#define CRIWARE_CRIATOMEX_REGISTERACF_2_OFFSET UNITYSDK_OFFSET(0x18266CF0)
#define CRIWARE_CRIATOMEX_REGISTERACF_OFFSET UNITYSDK_OFFSET(0x18263460)
#define CRIWARE_CRIATOMEX_REMOVE_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x18266AF0)
#define CRIWARE_CRIATOMEX_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x18267DE0)
#define CRIWARE_CRIATOMEX_SETGAMEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x18267B40)
#define CRIWARE_CRIATOMEX_SETGAMEVARIABLE_OFFSET UNITYSDK_OFFSET(0x18267A00)
#define CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET UNITYSDK_OFFSET(0x18268020)
#define CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYNAME_OFFSET UNITYSDK_OFFSET(0x18268140)
#define CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_1_OFFSET UNITYSDK_OFFSET(0x18268A60)
#define CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_OFFSET UNITYSDK_OFFSET(0x18268520)
#define CRIWARE_CRIATOMEX_SETOUTPUTVOLUME_VITA_OFFSET UNITYSDK_OFFSET(0x18268C80)
#define CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x18267CC0)
#define CRIWARE_CRIATOMEX_SETSPEAKERANGLE_1_OFFSET UNITYSDK_OFFSET(0x18266660)
#define CRIWARE_CRIATOMEX_SETSPEAKERANGLE_OFFSET UNITYSDK_OFFSET(0x18266540)
#define CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_1_OFFSET UNITYSDK_OFFSET(0x182668A0)
#define CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_OFFSET UNITYSDK_OFFSET(0x18266780)
#define CRIWARE_CRIATOMEX_UNLOCK_OFFSET UNITYSDK_OFFSET(0x18268400)
#define CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x182633C0)
#define CRIWARE_CRIATOMEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x18268DE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_TypeDefinitionIndex = 36697;

	class CriAtomEx : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>** StaticGet_randomize3dParamTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomEx_TypeDefinitionIndex)->GetStaticField(0xBB10);
		}
		// static const ::System::UInt32 InvalidAisacControlId = 0xFFFFFFFF; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX__CCTOR_OFFSET))();
		}

		static ::System::Void SetSpeakerAngle(::CriWare::CriAtomEx_SpeakerAngles6ch speakerAngle)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles6ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETSPEAKERANGLE_OFFSET))(speakerAngle);
		}

		static ::System::Void SetSpeakerAngle_1(::CriWare::CriAtomEx_SpeakerAngles8ch speakerAngle)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles8ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETSPEAKERANGLE_1_OFFSET))(speakerAngle);
		}

		static ::System::Void SetVirtualSpeakerAngle(::CriWare::CriAtomEx_SpeakerAngles6ch speakerAngle)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles6ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_OFFSET))(speakerAngle);
		}

		static ::System::Void SetVirtualSpeakerAngle_1(::CriWare::CriAtomEx_SpeakerAngles8ch speakerAngle)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles8ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_1_OFFSET))(speakerAngle);
		}

		static ::System::Void ControlVirtualSpeakerSetting(::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET))(sw);
		}

		static ::System::Void add_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ADD_ONCUELINKCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REMOVE_ONCUELINKCALLBACK_OFFSET))(value);
		}

		static ::System::Void RegisterAcf(::CriWare::CriFsBinder* binder, ::System::String* acfPath)
		{
			return ((::System::Void(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_OFFSET))(binder, acfPath);
		}

		static ::System::Void RegisterAcf_1(::System::IntPtr acfData, ::System::Int32 dataSize)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_1_OFFSET))(acfData, dataSize);
		}

		static ::System::Void RegisterAcf_2(::Il2CppArray<::System::Byte>* acfData)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_2_OFFSET))(acfData);
		}

		static ::System::Void UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::String* GetAppliedDspBusSnapshotName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))();
		}

		static ::System::Void AttachDspBusSetting(::System::String* settingName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(settingName);
		}

		static ::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void ApplyDspBusSnapshot(::System::String* snapshot_name, ::System::Int32 time_ms)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET))(snapshot_name, time_ms);
		}

		static ::System::Int32 GetNumGameVariables()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET))();
		}

		static ::System::Boolean GetGameVariableInfo(::System::UInt16 index, ::CriWare::CriAtomEx_GameVariableInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomEx_GameVariableInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET))(index, info);
		}

		static ::System::Single GetGameVariable(::System::UInt32 game_variable_id)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLE_OFFSET))(game_variable_id);
		}

		static ::System::Single GetGameVariable_1(::System::String* game_variable_name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLE_1_OFFSET))(game_variable_name);
		}

		static ::System::Void SetGameVariable(::System::UInt32 game_variable_id, ::System::Single game_variable_value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGAMEVARIABLE_OFFSET))(game_variable_id, game_variable_value);
		}

		static ::System::Void SetGameVariable_1(::System::String* game_variable_name, ::System::Single game_variable_value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGAMEVARIABLE_1_OFFSET))(game_variable_name, game_variable_value);
		}

		static ::System::Void SetRandomSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET))(seed);
		}

		static ::System::Void ResetPerformanceMonitor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RESETPERFORMANCEMONITOR_OFFSET))();
		}

		static ::System::Void GetPerformanceInfo(::CriWare::CriAtomEx_PerformanceInfo& info)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETPERFORMANCEINFO_OFFSET))(info);
		}

		static ::System::Void SetGlobalLabelToSelectorByIndex(::System::UInt16 selector_index, ::System::UInt16 label_index)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET))(selector_index, label_index);
		}

		static ::System::Void SetGlobalLabelToSelectorByName(::System::String* selector_name, ::System::String* label_name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYNAME_OFFSET))(selector_name, label_name);
		}

		static ::System::Void Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_LOCK_OFFSET))();
		}

		static ::System::Void Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_UNLOCK_OFFSET))();
		}

		static ::System::Void SetOutputAudioDevice_PC(::System::String* deviceId)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_OFFSET))(deviceId);
		}

		static ::System::Boolean LoadAudioDeviceList_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_LOADAUDIODEVICELIST_PC_OFFSET))();
		}

		static ::System::Int32 GetNumAudioDevices_PC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETNUMAUDIODEVICES_PC_OFFSET))();
		}

		static ::System::String* GetAudioDeviceName_PC(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETAUDIODEVICENAME_PC_OFFSET))(index);
		}

		static ::System::Void SetOutputAudioDevice_PC_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_1_OFFSET))(index);
		}

		static ::System::Void SetOutputVolume_VITA(::System::Single volume)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTVOLUME_VITA_OFFSET))(volume);
		}

		static ::System::Boolean IsBgmPortAcquired_VITA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ISBGMPORTACQUIRED_VITA_OFFSET))();
		}

		static ::System::Boolean IsSoundStopped_IOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ISSOUNDSTOPPED_IOS_OFFSET))();
		}

		static ::System::Void EnableAudioSessionRestoration_IOS(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ENABLEAUDIOSESSIONRESTORATION_IOS_OFFSET))(flag);
		}

		static ::System::Void EnableBusSendOffsetWhenLevelNotExist(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET))(enable);
		}

		static ::System::Boolean criAtomEx_RegisterAcfFile(::System::IntPtr binder, ::System::String* path, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET))(binder, path, work, workSize);
		}

		static ::System::Void criAtomEx_RegisterAcfData(::System::IntPtr acfData, ::System::Int32 acfDataSize, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_OFFSET))(acfData, acfDataSize, work, workSize);
		}

		static ::System::Void criAtomEx_RegisterAcfData_1(::Il2CppArray<::System::Byte>* acfData, ::System::Int32 acfDataSize, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_1_OFFSET))(acfData, acfDataSize, work, workSize);
		}

		static ::System::Void criAtomEx_UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::Void criAtomEx_AttachDspBusSetting(::System::String* settingName, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(settingName, work, workSize);
		}

		static ::System::Void criAtomEx_DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void criAtomEx_ApplyDspBusSnapshot(::System::String* snapshot_name, ::System::Int32 time_ms)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET))(snapshot_name, time_ms);
		}

		static ::System::IntPtr criAtomEx_GetAppliedDspBusSnapshotName()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))();
		}

		static ::System::Int32 criAtomEx_GetNumGameVariables()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET))();
		}

		static ::System::Boolean criAtomEx_GetGameVariableInfo(::System::UInt16 index, ::System::IntPtr game_variable_info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET))(index, game_variable_info);
		}

		static ::System::Single criAtomEx_GetGameVariableById(::System::UInt32 game_variable_id)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYID_OFFSET))(game_variable_id);
		}

		static ::System::Single criAtomEx_GetGameVariableByName(::System::String* game_variable_name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYNAME_OFFSET))(game_variable_name);
		}

		static ::System::Void criAtomEx_SetGameVariableById(::System::UInt32 game_variable_id, ::System::Single game_variable_value)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYID_OFFSET))(game_variable_id, game_variable_value);
		}

		static ::System::Void criAtomEx_SetGameVariableByName(::System::String* game_variable_name, ::System::Single game_variable_value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYNAME_OFFSET))(game_variable_name, game_variable_value);
		}

		static ::System::Void criAtomEx_SetRandomSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET))(seed);
		}

		static ::System::Void criAtomEx_Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_LOCK_OFFSET))();
		}

		static ::System::Void criAtomEx_Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_UNLOCK_OFFSET))();
		}

		static ::System::Void criAtom_ResetPerformanceMonitor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_RESETPERFORMANCEMONITOR_OFFSET))();
		}

		static ::System::Void criAtom_GetPerformanceInfo(::CriWare::CriAtomEx_PerformanceInfo& info)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_GETPERFORMANCEINFO_OFFSET))(info);
		}

		static ::System::Void criAtomExAcf_SetGlobalLabelToSelectorByIndex(::System::UInt16 selector_index, ::System::UInt16 label_index)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET))(selector_index, label_index);
		}

		static ::System::Void criAtomExAcf_SetGlobalLabelToSelectorByName(::System::String* selector_name, ::System::String* label_name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYNAME_OFFSET))(selector_name, label_name);
		}

		static ::System::Void criAtomEx_SetSpeakerAngleArray(::CriWare::CriAtomEx_SpeakerSystem speaker_system, ::CriWare::CriAtomEx_SpeakerAngles6ch& angle_array)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles6ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_OFFSET))(speaker_system, angle_array);
		}

		static ::System::Void criAtomEx_SetSpeakerAngleArray_1(::CriWare::CriAtomEx_SpeakerSystem speaker_system, ::CriWare::CriAtomEx_SpeakerAngles8ch& angle_array)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles8ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_1_OFFSET))(speaker_system, angle_array);
		}

		static ::System::Void criAtomEx_SetVirtualSpeakerAngleArray(::CriWare::CriAtomEx_SpeakerSystem speaker_system, ::CriWare::CriAtomEx_SpeakerAngles6ch& angle_array)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles6ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_OFFSET))(speaker_system, angle_array);
		}

		static ::System::Void criAtomEx_SetVirtualSpeakerAngleArray_1(::CriWare::CriAtomEx_SpeakerSystem speaker_system, ::CriWare::CriAtomEx_SpeakerAngles8ch& angle_array)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles8ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_1_OFFSET))(speaker_system, angle_array);
		}

		static ::System::Void criAtomEx_ControlVirtualSpeakerSetting(::System::Boolean sw)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET))(sw);
		}

		static ::System::Void criAtomEx_EnableBusSendOffsetWhenLevelNotExist(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET))(enable);
		}

		static ::System::Void criAtom_SetDeviceId_WASAPI(::CriWare::CriAtomEx_SoundRendererType soundRendererType, ::System::String* deviceId)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SoundRendererType, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_OFFSET))(soundRendererType, deviceId);
		}

		static ::System::Void criAtom_SetDeviceId_WASAPI_1(::CriWare::CriAtomEx_SoundRendererType type, ::System::IntPtr deviceId)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SoundRendererType, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_1_OFFSET))(type, deviceId);
		}

		static ::System::Boolean criAtomUnity_LoadAudioDeviceList_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_LOADAUDIODEVICELIST_PC_OFFSET))();
		}

		static ::System::Int32 criAtomUnity_GetNumAudioDevices_PC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETNUMAUDIODEVICES_PC_OFFSET))();
		}

		static ::System::IntPtr criAtomUnity_GetAudioDeviceName_PC(::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICENAME_PC_OFFSET))(index);
		}

		static ::System::IntPtr criAtomUnity_GetAudioDeviceId_PC(::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICEID_PC_OFFSET))(index);
		}
	};
}
