#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_34.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_1_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0xA6CF5E0)
#define CLASS_3_FFB4D2A14D2C9AAF_1_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA6CF6F0)
#define CLASS_3_FFB4D2A14D2C9AAF_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA6CF670)
#define CLASS_3_FFB4D2A14D2C9AAF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CF760)
#define CLASS_3_FFB4D2A14D2C9AAF_1___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA6CF7D0)
#define CLASS_3_FFB4D2A14D2C9AAF_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA6CF770)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_1_TypeDefinitionIndex = 61444;

class Class_3_FFB4D2A14D2C9AAF_1 : public ::Class_2_A48F3719AA1CF200_34
{
public:
	::System::String* Field_3_1; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1__CTOR_OFFSET))(this);
	}

	static ::Class_3_FFB4D2A14D2C9AAF_1* Method_3_11B65C8014633802(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
	{
		return ((::Class_3_FFB4D2A14D2C9AAF_1*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_METHOD_3_11B65C8014633802_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
