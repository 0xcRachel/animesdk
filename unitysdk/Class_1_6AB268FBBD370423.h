#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateLightTeamDollyConfig; }

#define CLASS_1_6AB268FBBD370423_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x109E97D0)
#define CLASS_1_6AB268FBBD370423_INIT_OFFSET UNITYSDK_OFFSET(0x109E9810)
#define CLASS_1_6AB268FBBD370423_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x109E9CE0)
#define CLASS_1_6AB268FBBD370423_REFRESH_OFFSET UNITYSDK_OFFSET(0x109E98B0)
#define CLASS_1_6AB268FBBD370423_RESET_OFFSET UNITYSDK_OFFSET(0x109E9C30)
#define CLASS_1_6AB268FBBD370423__CTOR_OFFSET UNITYSDK_OFFSET(0x109E9FB0)

inline static constexpr unsigned int Class_1_6AB268FBBD370423_TypeDefinitionIndex = 55329;

class Class_1_6AB268FBBD370423 : public ::System::Object
{
public:
	::Class_2_5D178EC982C80153* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateLightTeamDollyConfig* Field_1_2; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423_RESET_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB268FBBD370423_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}
};
