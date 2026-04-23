#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class TeamDataComponent; }

#define CLASS_2_655566E0393C6F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12447560)
#define CLASS_2_655566E0393C6F00_METHOD_2_51000A03727C9FBF_OFFSET UNITYSDK_OFFSET(0x12447670)
#define CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0x12447810)
#define CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x12447780)
#define CLASS_2_655566E0393C6F00__CTOR_OFFSET UNITYSDK_OFFSET(0x124478A0)

inline static constexpr unsigned int Class_2_655566E0393C6F00_TypeDefinitionIndex = 52968;

class Class_2_655566E0393C6F00 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_51000A03727C9FBF(::RPG::GameCore::TeamDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_51000A03727C9FBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}
};
