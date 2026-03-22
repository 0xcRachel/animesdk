#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerConfig.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x11282DA0)
#define CRIWARE_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x11282C40)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1129AE10)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_ATTACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1129AEB0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZERBYNAME_OFFSET UNITYSDK_OFFSET(0x1129AF30)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x1129AFD0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1129B050)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x1129B6F0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1129C820)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1129C4B0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1129C600)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIXBYNAME_OFFSET UNITYSDK_OFFSET(0x1129BD60)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1129BEB0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x1129BAC0)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1129BC20)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1129B820)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1129B960)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1129C010)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1129C250)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1129C700)
#define CRIWARE_CRIATOMEXASR_CRIATOMEXASR_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1129C320)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x11283130)
#define CRIWARE_CRIATOMEXASR_DETACHBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x11282CE0)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x11283740)
#define CRIWARE_CRIATOMEXASR_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x112834D0)
#define CRIWARE_CRIATOMEXASR_GETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1129C780)
#define CRIWARE_CRIATOMEXASR_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1129C3E0)
#define CRIWARE_CRIATOMEXASR_GETNUMBUFFEREDPCMOUTPUTSAMPLES_OFFSET UNITYSDK_OFFSET(0x1129C8D0)
#define CRIWARE_CRIATOMEXASR_GETPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1129C8C0)
#define CRIWARE_CRIATOMEXASR_REGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1129C580)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1129BE10)
#define CRIWARE_CRIATOMEXASR_SETBUSMATRIX_OFFSET UNITYSDK_OFFSET(0x1129BCB0)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1129BB90)
#define CRIWARE_CRIATOMEXASR_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1129B9F0)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1129B8D0)
#define CRIWARE_CRIATOMEXASR_SETBUSVOLUME_OFFSET UNITYSDK_OFFSET(0x1129B770)
#define CRIWARE_CRIATOMEXASR_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x1129BF50)
#define CRIWARE_CRIATOMEXASR_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1129C0D0)
#define CRIWARE_CRIATOMEXASR_SETPCMBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1129C8E0)
#define CRIWARE_CRIATOMEXASR_UNREGISTEREFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1129C680)
#define CRIWARE_CRIATOMEXASR__CTOR_OFFSET UNITYSDK_OFFSET(0x1129C8F0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_TypeDefinitionIndex = 30153;

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
