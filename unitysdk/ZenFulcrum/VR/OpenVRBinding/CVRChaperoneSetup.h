#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRChaperoneSetup.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_COMMITWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1849A6F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_EXPORTLIVETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1849EFC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1849BE30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1849E040)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVEPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1849EA60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1849D690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1849B8E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREARECT_OFFSET UNITYSDK_OFFSET(0x1849B420)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1849AF30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1849C380)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1849C840)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_IMPORTFROMBUFFERTOWORKING_OFFSET UNITYSDK_OFFSET(0x1849F810)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_RELOADFROMDISK_OFFSET UNITYSDK_OFFSET(0x1849D250)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_REVERTWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1849AB40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1849CD20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1849DB50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1849E570)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1849CD00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1849D210)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1849D230)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1849A600)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRChaperoneSetup_TypeDefinitionIndex = 29367;

	class CVRChaperoneSetup : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP__CTOR_OFFSET))(this, pInterface);
		}

		::System::Boolean CommitWorkingCopy(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_COMMITWORKINGCOPY_OFFSET))(this, configFile);
		}

		::System::Void RevertWorkingCopy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_REVERTWORKINGCOPY_OFFSET))(this);
		}

		::System::Boolean GetWorkingPlayAreaSize(::System::Single& pSizeX, ::System::Single& pSizeZ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREASIZE_OFFSET))(this, pSizeX, pSizeZ);
		}

		::System::Boolean GetWorkingPlayAreaRect(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& rect)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREARECT_OFFSET))(this, rect);
		}

		::System::Boolean GetWorkingCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& pQuadsBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGCOLLISIONBOUNDSINFO_OFFSET))(this, pQuadsBuffer);
		}

		::System::Boolean GetLiveCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& pQuadsBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSINFO_OFFSET))(this, pQuadsBuffer);
		}

		::System::Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose);
		}

		::System::Boolean GetWorkingStandingZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, pmatStandingZeroPoseToRawTrackingPose);
		}

		::System::Void SetWorkingPlayAreaSize(::System::Single sizeX, ::System::Single sizeZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPLAYAREASIZE_OFFSET))(this, sizeX, sizeZ);
		}

		::System::Void SetWorkingCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSINFO_OFFSET))(this, pQuadsBuffer);
		}

		::System::Void SetWorkingSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, pMatSeatedZeroPoseToRawTrackingPose);
		}

		::System::Void SetWorkingStandingZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, pMatStandingZeroPoseToRawTrackingPose);
		}

		::System::Void ReloadFromDisk(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile configFile)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_RELOADFROMDISK_OFFSET))(this, configFile);
		}

		::System::Boolean GetLiveSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, pmatSeatedZeroPoseToRawTrackingPose);
		}

		::System::Void SetWorkingCollisionBoundsTagsInfo(::Il2CppArray<::System::Byte>* pTagsBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSTAGSINFO_OFFSET))(this, pTagsBuffer);
		}

		::System::Boolean GetLiveCollisionBoundsTagsInfo(::Il2CppArray<::System::Byte>*& pTagsBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSTAGSINFO_OFFSET))(this, pTagsBuffer);
		}

		::System::Boolean SetWorkingPhysicalBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPHYSICALBOUNDSINFO_OFFSET))(this, pQuadsBuffer);
		}

		::System::Boolean GetLivePhysicalBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& pQuadsBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVEPHYSICALBOUNDSINFO_OFFSET))(this, pQuadsBuffer);
		}

		::System::Boolean ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ::System::UInt32& pnBufferLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_EXPORTLIVETOBUFFER_OFFSET))(this, pBuffer, pnBufferLength);
		}

		::System::Boolean ImportFromBufferToWorking(::System::String* pBuffer, ::System::UInt32 nImportFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_IMPORTFROMBUFFERTOWORKING_OFFSET))(this, pBuffer, nImportFlags);
		}
	};
}
