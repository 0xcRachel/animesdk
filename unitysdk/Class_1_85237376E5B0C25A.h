#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace System { class String; }

#define CLASS_1_85237376E5B0C25A_METHOD_1_37490A1DBF34A304_OFFSET UNITYSDK_OFFSET(0xEE189C0)
#define CLASS_1_85237376E5B0C25A_METHOD_1_88F5413BB6942538_OFFSET UNITYSDK_OFFSET(0xEE1A710)
#define CLASS_1_85237376E5B0C25A_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xEE1A870)
#define CLASS_1_85237376E5B0C25A_METHOD_1_B3BD374EE2590121_OFFSET UNITYSDK_OFFSET(0xEE1F6E0)
#define CLASS_1_85237376E5B0C25A_METHOD_1_BFDE17936CCF5EE6_OFFSET UNITYSDK_OFFSET(0xEE245D0)
#define CLASS_1_85237376E5B0C25A_METHOD_1_CA587B46D18AE97D_OFFSET UNITYSDK_OFFSET(0xEE1F7D0)

inline static constexpr unsigned int Class_1_85237376E5B0C25A_TypeDefinitionIndex = 69184;

class Class_1_85237376E5B0C25A : public ::System::Object
{
public:
	static ::System::Void Method_1_37490A1DBF34A304(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_37490A1DBF34A304_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_88F5413BB6942538(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_88F5413BB6942538_OFFSET))(a1);
	}

	static ::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_A2172401030892FD_OFFSET))();
	}

	static ::System::Void Method_1_B3BD374EE2590121(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_B3BD374EE2590121_OFFSET))(a1);
	}

	static ::System::String* Method_1_CA587B46D18AE97D()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_CA587B46D18AE97D_OFFSET))();
	}

	static ::System::String* Method_1_BFDE17936CCF5EE6(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::String*(*)(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_85237376E5B0C25A_METHOD_1_BFDE17936CCF5EE6_OFFSET))(a1, a2);
	}
};
