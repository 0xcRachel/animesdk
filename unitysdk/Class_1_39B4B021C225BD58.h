#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_39B4B021C225BD58_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9BD52B0)
#define CLASS_1_39B4B021C225BD58_METHOD_1_7DF075E665CB5282_OFFSET UNITYSDK_OFFSET(0x9BD5620)
#define CLASS_1_39B4B021C225BD58_METHOD_1_AE55BB2FF3F5AA3D_OFFSET UNITYSDK_OFFSET(0x9BD5370)
#define CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9BD5330)
#define CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9BD52F0)
#define CLASS_1_39B4B021C225BD58_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x9BD54D0)
#define CLASS_1_39B4B021C225BD58__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD52A0)

inline static constexpr unsigned int Class_1_39B4B021C225BD58_TypeDefinitionIndex = 47889;

class Class_1_39B4B021C225BD58 : public ::System::Object
{
public:
	::RPG::GameCore::TransitionLoadingType Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AE55BB2FF3F5AA3D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_AE55BB2FF3F5AA3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_7DF075E665CB5282(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_7DF075E665CB5282_OFFSET))(this, a1);
	}
};
