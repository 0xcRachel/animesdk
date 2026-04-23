#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class ShowFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE611DE0)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xE611E30)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xE612400)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE611E90)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_D2EE4B89376BEC3B_OFFSET UNITYSDK_OFFSET(0xE6120C0)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xE612590)
#define CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE611F40)
#define CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE6124C0)
#define CLASS_2_2DE9210B5B7767DF_TICK_OFFSET UNITYSDK_OFFSET(0xE612510)
#define CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET UNITYSDK_OFFSET(0xE611DD0)

inline static constexpr unsigned int Class_2_2DE9210B5B7767DF_TypeDefinitionIndex = 49122;

class Class_2_2DE9210B5B7767DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowFuncBtn* Field_2_0; // 0x20
	::RPG::GameCore::NotifyShowFuncBtnParam* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_2_D2EE4B89376BEC3B()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_D2EE4B89376BEC3B_OFFSET))(this);
	}
};
