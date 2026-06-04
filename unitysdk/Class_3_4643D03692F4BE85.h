#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class ActiveTrackCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_4643D03692F4BE85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1554DF90)
#define CLASS_3_4643D03692F4BE85_METHOD_3_3D2615D76DF296BA_OFFSET UNITYSDK_OFFSET(0x1554E480)
#define CLASS_3_4643D03692F4BE85_METHOD_3_7BE218703FD6B6D6_OFFSET UNITYSDK_OFFSET(0x1554EB00)
#define CLASS_3_4643D03692F4BE85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1554E130)
#define CLASS_3_4643D03692F4BE85__CTOR_OFFSET UNITYSDK_OFFSET(0x1554DF60)
#define CLASS_3_4643D03692F4BE85___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1554EC60)

inline static constexpr unsigned int Class_3_4643D03692F4BE85_TypeDefinitionIndex = 54058;

class Class_3_4643D03692F4BE85 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveTrackCamera*>
{
public:
	::System::String* Field_3_0; // 0x28
	::System::String* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_7BE218703FD6B6D6(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_7BE218703FD6B6D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D2615D76DF296BA(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85_METHOD_3_3D2615D76DF296BA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4643D03692F4BE85___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
