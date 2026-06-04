#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_568;
class Class_1_53F0644B4D7513CF;
class Class_1_B407606E338E5818;
class Class_1_F3391C70DC37088D;
namespace RPG::Client { class TutorialGuideConfigWrapper; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E26DEA74DE18DB63_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1604E240)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x16050540)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0x16050E70)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_5F562E77E2FF7144_OFFSET UNITYSDK_OFFSET(0x1604FAF0)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x1604E3B0)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_68A6005A5B7867EA_OFFSET UNITYSDK_OFFSET(0x1604FD00)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_92305E9AE4A347EA_OFFSET UNITYSDK_OFFSET(0x16050A10)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_A957F695E7113877_OFFSET UNITYSDK_OFFSET(0x16050880)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_AF17EFF0227C3930_OFFSET UNITYSDK_OFFSET(0x16050C10)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_B85DEA4F5EB0F12F_OFFSET UNITYSDK_OFFSET(0x1604F960)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_DD62DFBF7F57337D_OFFSET UNITYSDK_OFFSET(0x1604E780)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_E5FB76C2AFA3092D_OFFSET UNITYSDK_OFFSET(0x1604E680)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x1604F070)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_F1DF4E805CDFCBA9_1_OFFSET UNITYSDK_OFFSET(0x1604FEC0)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_F1DF4E805CDFCBA9_OFFSET UNITYSDK_OFFSET(0x16050310)
#define CLASS_2_E26DEA74DE18DB63_METHOD_2_F47E666AE443C437_OFFSET UNITYSDK_OFFSET(0x160500F0)
#define CLASS_2_E26DEA74DE18DB63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1604E400)
#define CLASS_2_E26DEA74DE18DB63_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1604ECD0)
#define CLASS_2_E26DEA74DE18DB63_TICK_OFFSET UNITYSDK_OFFSET(0x1604ED70)
#define CLASS_2_E26DEA74DE18DB63__CTOR_OFFSET UNITYSDK_OFFSET(0x1604E230)

inline static constexpr unsigned int Class_2_E26DEA74DE18DB63_TypeDefinitionIndex = 54803;

class Class_2_E26DEA74DE18DB63 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_53F0644B4D7513CF* Field_2_0; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_1; // 0x20
	::Class_0_16E4307DCC419505_568* Field_2_2; // 0x28
	::System::Collections::Generic::IList_1<::System::String*>* Field_2_3; // 0x30
	::RPG::GameCore::ShowGuideHintWithText* Field_2_4; // 0x38
	::Class_1_B407606E338E5818* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Void Method_2_B85DEA4F5EB0F12F(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_B85DEA4F5EB0F12F_OFFSET))(this, a1);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_68A6005A5B7867EA(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_68A6005A5B7867EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F1DF4E805CDFCBA9(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_F1DF4E805CDFCBA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F1DF4E805CDFCBA9_1(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_F1DF4E805CDFCBA9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F562E77E2FF7144(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_5F562E77E2FF7144_OFFSET))(this, a1);
	}

	::System::Void Method_2_F47E666AE443C437(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_F47E666AE443C437_OFFSET))(this, a1);
	}

	::System::String* Method_2_A957F695E7113877()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_A957F695E7113877_OFFSET))(this);
	}

	::System::String* Method_2_AF17EFF0227C3930()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_AF17EFF0227C3930_OFFSET))(this);
	}

	::System::Void Method_2_92305E9AE4A347EA(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_92305E9AE4A347EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::String*>* Method_2_DD62DFBF7F57337D(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_DD62DFBF7F57337D_OFFSET))(this, a1);
	}

	::RPG::Client::TutorialBlockType Method_2_E5FB76C2AFA3092D()
	{
		return ((::RPG::Client::TutorialBlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_E5FB76C2AFA3092D_OFFSET))(this);
	}

	::System::Void Method_2_3C37862761792B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26DEA74DE18DB63_METHOD_2_3C37862761792B91_OFFSET))(this);
	}
};
