#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerConfig.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x182622D0)
#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x18262170)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1827A070)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1827A110)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1827A190)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1827A230)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1827A2B0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x1827A950)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1827BA80)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1827B710)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1827B860)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIXBYNAME_OFFSET UNITYSDK_OFFSET(0x1827AFC0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1827B110)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x1827AD20)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1827AE80)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1827AA80)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1827ABC0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1827B270)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1827B4B0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1827B960)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1827B580)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x18262660)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x18262210)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x18262C70)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x18262A00)
#define CRIWARE_CRIATOMEXASR_GETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1827B9E0)
#define CRIWARE_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1827B640)
#define CRIWARE_CRIATOMEXASR_GETNUMBUFFEREDPCMOUTPUTSAMPLES_OFFSET UNITYSDK_OFFSET(0x1827BB30)
#define CRIWARE_CRIATOMEXASR_GETPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1827BB20)
#define CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1827B7E0)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1827B070)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1827AF10)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1827ADF0)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1827AC50)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1827AB30)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1827A9D0)
#define CRIWARE_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1827B1B0)
#define CRIWARE_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1827B330)
#define CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1827BB40)
#define CRIWARE_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1827B8E0)
#define CRIWARE_CRIATOMEXASR__CTOR_OFFSET UNITYSDK_OFFSET(0x1827BB50)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_TypeDefinitionIndex = 36748;

	class CriAtomExAsr : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR__CTOR_OFFSET))(this);
		}

		static ::System::Void AttachBusAnalyzer(::System::String* busName, ::System::Int32 interval, ::System::Int32 peakHoldTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(busName, interval, peakHoldTime);
		}

		static ::System::Void AttachBusAnalyzer_1(::System::Int32 interval, ::System::Int32 peakHoldTime)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET))(interval, peakHoldTime);
		}

		static ::System::Void DetachBusAnalyzer(::System::String* busName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(busName);
		}

		static ::System::Void DetachBusAnalyzer_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET))();
		}

		static ::System::Void GetBusAnalyzerInfo(::System::String* busName, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& info)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(busName, info);
		}

		static ::System::Void GetBusAnalyzerInfo_1(::System::Int32 busId, ::CriWare::CriAtomExAsr_BusAnalyzerInfo& info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET))(busId, info);
		}

		static ::System::Void SetBusVolume(::System::String* busName, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSVOLUME_OFFSET))(busName, volume);
		}

		static ::System::Void SetBusVolume_1(::System::Int32 busId, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSVOLUME_1_OFFSET))(busId, volume);
		}

		static ::System::Void SetBusSendLevel(::System::String* busName, ::System::String* sendTo, ::System::Single level)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET))(busName, sendTo, level);
		}

		static ::System::Void SetBusSendLevel_1(::System::Int32 busId, ::System::Int32 sendTo, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_1_OFFSET))(busId, sendTo, level);
		}

		static ::System::Void SetBusMatrix(::System::String* busName, ::System::Int32 inputChannels, ::System::Int32 outputChannels, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSMATRIX_OFFSET))(busName, inputChannels, outputChannels, matrix);
		}

		static ::System::Void SetBusMatrix_1(::System::Int32 busId, ::System::Int32 inputChannels, ::System::Int32 outputChannels, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETBUSMATRIX_1_OFFSET))(busId, inputChannels, outputChannels, matrix);
		}

		static ::System::Void SetEffectBypass(::System::String* busName, ::System::String* effectName, ::System::Boolean bypass)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET))(busName, effectName, bypass);
		}

		static ::System::Void SetEffectParameter(::System::String* busName, ::System::String* effectName, ::System::UInt32 parameterIndex, ::System::Single parameterValue)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET))(busName, effectName, parameterIndex, parameterValue);
		}

		static ::System::Single GetEffectParameter(::System::String* busName, ::System::String* effectName, ::System::UInt32 parameterIndex)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET))(busName, effectName, parameterIndex);
		}

		static ::System::Boolean RegisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Void UnregisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Void GetBusVolume(::System::String* busName, ::System::Single& volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETBUSVOLUME_OFFSET))(busName, volume);
		}

		static ::System::Int32 GetPcmOutput(::System::Int32 outputChannels, ::System::Int32 outputSamples, ::Il2CppArray<::Il2CppArray<::System::Single>*>* buffer)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETPCMOUTPUT_OFFSET))(outputChannels, outputSamples, buffer);
		}

		static ::System::Int32 GetNumBufferedPcmOutputSamples()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_GETNUMBUFFEREDPCMOUTPUTSAMPLES_OFFSET))();
		}

		static ::System::Void SetPcmBufferSize(::System::Int32 numSamples)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET))(numSamples);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzerByName(::System::String* busName, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& config)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET))(busName, config);
		}

		static ::System::Void criAtomExAsr_AttachBusAnalyzer(::System::Int32 busNo, ::CriWare::CriAtomExAsr_BusAnalyzerConfig& config)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtomExAsr_BusAnalyzerConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET))(busNo, config);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzerByName(::System::String* busName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET))(busName);
		}

		static ::System::Void criAtomExAsr_DetachBusAnalyzer(::System::Int32 busNo)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET))(busNo);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfoByName(::System::String* busName, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET))(busName, info);
		}

		static ::System::Void criAtomExAsr_GetBusAnalyzerInfo(::System::Int32 busNo, ::System::IntPtr info)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET))(busNo, info);
		}

		static ::System::Void criAtomExAsr_SetBusVolumeByName(::System::String* busName, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUMEBYNAME_OFFSET))(busName, volume);
		}

		static ::System::Void criAtomExAsr_SetBusVolume(::System::Int32 busNo, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUME_OFFSET))(busNo, volume);
		}

		static ::System::Void criAtomExAsr_SetBusSendLevelByName(::System::String* busName, ::System::String* sendtoName, ::System::Single level)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVELBYNAME_OFFSET))(busName, sendtoName, level);
		}

		static ::System::Void criAtomExAsr_SetBusSendLevel(::System::Int32 busNo, ::System::Int32 sendtoNo, ::System::Single level)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET))(busNo, sendtoNo, level);
		}

		static ::System::Void criAtomExAsr_SetBusMatrixByName(::System::String* busName, ::System::Int32 inputChannels, ::System::Int32 outputChannels, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIXBYNAME_OFFSET))(busName, inputChannels, outputChannels, matrix);
		}

		static ::System::Void criAtomExAsr_SetBusMatrix(::System::Int32 busNo, ::System::Int32 inputChannels, ::System::Int32 outputChannels, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIX_OFFSET))(busNo, inputChannels, outputChannels, matrix);
		}

		static ::System::Void criAtomExAsr_SetEffectBypass(::System::String* busName, ::System::String* effectName, ::System::Boolean bypass)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET))(busName, effectName, bypass);
		}

		static ::System::Void criAtomExAsr_UpdateEffectParameters(::System::String* busName, ::System::String* effectName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UPDATEEFFECTPARAMETERS_OFFSET))(busName, effectName);
		}

		static ::System::Void criAtomExAsr_SetEffectParameter(::System::String* busName, ::System::String* effectName, ::System::UInt32 parameterIndex, ::System::Single parameterValue)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET))(busName, effectName, parameterIndex, parameterValue);
		}

		static ::System::Single criAtomExAsr_GetEffectParameter(::System::String* busName, ::System::String* effectName, ::System::UInt32 parameterIndex)
		{
			return ((::System::Single(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET))(busName, effectName, parameterIndex);
		}

		static ::System::Boolean criAtomExAsr_RegisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Void criAtomExAsr_UnregisterEffectInterface(::System::IntPtr afx_interface)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET))(afx_interface);
		}

		static ::System::Void criAtomExAsr_GetBusVolumeByName(::System::String* busName, ::System::Single& volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSVOLUMEBYNAME_OFFSET))(busName, volume);
		}
	};
}
