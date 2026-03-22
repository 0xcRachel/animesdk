#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_1_151B93D9C4BBDCA4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameLevelVarChange; }
namespace System { class String; }

#define CLASS_3_7743AE554898413C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11033B90)
#define CLASS_3_7743AE554898413C__CTOR_OFFSET UNITYSDK_OFFSET(0x11033A30)
#define CLASS_3_7743AE554898413C__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x11033BF0)
#define CLASS_3_7743AE554898413C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11033CF0)
#define CLASS_3_7743AE554898413C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11033E90)
#define CLASS_3_7743AE554898413C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11034040)
#define CLASS_3_7743AE554898413C___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x110340A0)
#define CLASS_3_7743AE554898413C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110340B0)
#define CLASS_3_7743AE554898413C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110340C0)

inline static constexpr unsigned int Class_3_7743AE554898413C_TypeDefinitionIndex = 41815;

class Class_3_7743AE554898413C : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameLevelVarChange*>
{
public:
	::Class_1_151B93D9C4BBDCA4* Field_3_0; // 0x68
	::System::String* Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7743AE554898413C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
