#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class RandomSelector; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE45D61F22D3DE5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD5D8D0)
#define CLASS_2_EE45D61F22D3DE5A_METHOD_2_AAD4BA400DBF0191_OFFSET UNITYSDK_OFFSET(0xFD5DF60)
#define CLASS_2_EE45D61F22D3DE5A_METHOD_2_EB887F1F62C8321B_OFFSET UNITYSDK_OFFSET(0xFD5DBF0)
#define CLASS_2_EE45D61F22D3DE5A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFD5DB80)
#define CLASS_2_EE45D61F22D3DE5A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFD5E0F0)
#define CLASS_2_EE45D61F22D3DE5A_TICK_OFFSET UNITYSDK_OFFSET(0xFD5D980)
#define CLASS_2_EE45D61F22D3DE5A__CTOR_OFFSET UNITYSDK_OFFSET(0xFD5D8C0)

inline static constexpr unsigned int Class_2_EE45D61F22D3DE5A_TypeDefinitionIndex = 42016;

class Class_2_EE45D61F22D3DE5A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x18
	::RPG::GameCore::RandomSelector* Field_2_1; // 0x48
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x50
	::RPG::GameCore::TaskContext* Field_2_0; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_AAD4BA400DBF0191(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_METHOD_2_AAD4BA400DBF0191_OFFSET))(this, a1);
	}

	::RPG::GameCore::RandomSelectorCase* Method_2_EB887F1F62C8321B()
	{
		return ((::RPG::GameCore::RandomSelectorCase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_METHOD_2_EB887F1F62C8321B_OFFSET))(this);
	}
};
