#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;

#define CLASS_1_63D18ECF87218619_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8936440)
#define CLASS_1_63D18ECF87218619_1_ENTER_OFFSET UNITYSDK_OFFSET(0x8936480)
#define CLASS_1_63D18ECF87218619_1_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x8936700)
#define CLASS_1_63D18ECF87218619_1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8936620)
#define CLASS_1_63D18ECF87218619_1_LEAVE_OFFSET UNITYSDK_OFFSET(0x8936680)
#define CLASS_1_63D18ECF87218619_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8936580)
#define CLASS_1_63D18ECF87218619_1_TICK_OFFSET UNITYSDK_OFFSET(0x89365C0)
#define CLASS_1_63D18ECF87218619_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8936430)

inline static constexpr unsigned int Class_1_63D18ECF87218619_1_TypeDefinitionIndex = 48451;

class Class_1_63D18ECF87218619_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
