#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_B9C702BA1E12DFA3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_898DC1EA1181F3B8_METHOD_2_2D430E2F47DBA3C4_OFFSET UNITYSDK_OFFSET(0x14386870)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14389A90)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x14388580)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x14388450)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14389470)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x14386960)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_C26C5619A2449105_OFFSET UNITYSDK_OFFSET(0x14389B70)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_CB7D3E84357B1D80_OFFSET UNITYSDK_OFFSET(0x14388CC0)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x14389C20)
#define CLASS_2_898DC1EA1181F3B8_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x14388780)
#define CLASS_2_898DC1EA1181F3B8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14386800)
#define CLASS_2_898DC1EA1181F3B8__CTOR_OFFSET UNITYSDK_OFFSET(0x143867E0)

inline static constexpr unsigned int Class_2_898DC1EA1181F3B8_TypeDefinitionIndex = 65088;

class Class_2_898DC1EA1181F3B8 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Class_1_B9C702BA1E12DFA3* Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::ICameraFightState*>* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::CameraFightStateCommonConfig*>* Field_2_2; // 0x48
	::Cinemachine::CinemachineBlendDefinition_Style Field_2_3; // 0x50
	::System::Single Field_2_4; // 0x54
	::RPG::GameCore::VCameraState Field_2_5; // 0x58
	::System::Single Field_2_6; // 0x5C
	::System::Single Field_2_7; // 0x60
	::System::Int32 Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2D430E2F47DBA3C4(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_2D430E2F47DBA3C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CB7D3E84357B1D80(::RPG::Client::CameraNormalConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_CB7D3E84357B1D80_OFFSET))(this, a1);
	}

	::RPG::Client::ICameraFightState* Method_2_C26C5619A2449105(::RPG::GameCore::VCameraState a1)
	{
		return ((::RPG::Client::ICameraFightState*(*)(::PVOID, ::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_C26C5619A2449105_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_898DC1EA1181F3B8_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
