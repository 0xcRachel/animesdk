#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_467;
class Class_1_69FF5DE516C87A66;
class Class_1_B407606E338E5818;
class Class_1_BAD2D343EF0045A3;
namespace RPG::Client { class TutorialGuideConfigWrapper; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E8CC455767D9F5C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AE7C30)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_0AB236E3B5B91774_OFFSET UNITYSDK_OFFSET(0x10AE8160)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x10AE8AE0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_41F6DC01B08A4539_OFFSET UNITYSDK_OFFSET(0x10AE8080)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_5F562E77E2FF7144_OFFSET UNITYSDK_OFFSET(0x10AE94D0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_6175EA815E05954C_1_OFFSET UNITYSDK_OFFSET(0x10AE98A0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_6175EA815E05954C_OFFSET UNITYSDK_OFFSET(0x10AE9CF0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_639C0939469E0CB6_OFFSET UNITYSDK_OFFSET(0x10AE9AD0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x10AE7DA0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_68A6005A5B7867EA_OFFSET UNITYSDK_OFFSET(0x10AE96E0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x10AE9F20)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_8E4ED9FA27613068_OFFSET UNITYSDK_OFFSET(0x10AEA7C0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_A957F695E7113877_OFFSET UNITYSDK_OFFSET(0x10AEA250)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_B00628BE1D84FEF8_OFFSET UNITYSDK_OFFSET(0x10AEA3E0)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_BF8EB4D2FA94E326_OFFSET UNITYSDK_OFFSET(0x10AEA560)
#define CLASS_2_E8CC455767D9F5C7_METHOD_2_DB363EF7E0980811_OFFSET UNITYSDK_OFFSET(0x10AE9350)
#define CLASS_2_E8CC455767D9F5C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AE7DF0)
#define CLASS_2_E8CC455767D9F5C7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AE8720)
#define CLASS_2_E8CC455767D9F5C7_TICK_OFFSET UNITYSDK_OFFSET(0x10AE87C0)
#define CLASS_2_E8CC455767D9F5C7__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE7C20)

inline static constexpr unsigned int Class_2_E8CC455767D9F5C7_TypeDefinitionIndex = 47343;

class Class_2_E8CC455767D9F5C7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_69FF5DE516C87A66* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_0_16E4307DCC419505_467* Field_2_4; // 0x28
	::System::Collections::Generic::IList_1<::System::String*>* Field_2_7; // 0x30
	::Class_1_B407606E338E5818* Field_2_3; // 0x38
	::RPG::GameCore::ShowGuideHintWithText* Field_2_0; // 0x40
	::Class_1_BAD2D343EF0045A3* Field_2_2; // 0x48
	::System::Single Field_2_6; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_2_DB363EF7E0980811(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_DB363EF7E0980811_OFFSET))(this, a1);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_2_68A6005A5B7867EA(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_68A6005A5B7867EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6175EA815E05954C(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_6175EA815E05954C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6175EA815E05954C_1(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_6175EA815E05954C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F562E77E2FF7144(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_5F562E77E2FF7144_OFFSET))(this, a1);
	}

	::System::Void Method_2_639C0939469E0CB6(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_639C0939469E0CB6_OFFSET))(this, a1);
	}

	::System::String* Method_2_A957F695E7113877()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_A957F695E7113877_OFFSET))(this);
	}

	::System::String* Method_2_BF8EB4D2FA94E326()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_BF8EB4D2FA94E326_OFFSET))(this);
	}

	::System::Void Method_2_B00628BE1D84FEF8(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_B00628BE1D84FEF8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::String*>* Method_2_0AB236E3B5B91774(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_0AB236E3B5B91774_OFFSET))(this, a1);
	}

	::RPG::Client::TutorialBlockType Method_2_41F6DC01B08A4539()
	{
		return ((::RPG::Client::TutorialBlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_41F6DC01B08A4539_OFFSET))(this);
	}

	::System::Void Method_2_8E4ED9FA27613068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8CC455767D9F5C7_METHOD_2_8E4ED9FA27613068_OFFSET))(this);
	}
};
