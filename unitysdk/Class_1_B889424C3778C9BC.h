#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x143A5AF0)
#define CLASS_1_B889424C3778C9BC_INIT_OFFSET UNITYSDK_OFFSET(0x143A5B30)
#define CLASS_1_B889424C3778C9BC_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x143A5C90)
#define CLASS_1_B889424C3778C9BC_REFRESH_OFFSET UNITYSDK_OFFSET(0x143A5BA0)
#define CLASS_1_B889424C3778C9BC_RESET_OFFSET UNITYSDK_OFFSET(0x143A5BE0)
#define CLASS_1_B889424C3778C9BC__CTOR_OFFSET UNITYSDK_OFFSET(0x143A5F70)

inline static constexpr unsigned int Class_1_B889424C3778C9BC_TypeDefinitionIndex = 65056;

class Class_1_B889424C3778C9BC : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateCommonConfig* Field_1_1; // 0x18
	::Class_2_898DC1EA1181F3B8* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_REFRESH_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_RESET_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B889424C3778C9BC_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
