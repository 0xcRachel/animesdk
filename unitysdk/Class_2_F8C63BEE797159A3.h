#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwitchCase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8C63BEE797159A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9BCF50)
#define CLASS_2_F8C63BEE797159A3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA9BD9A0)
#define CLASS_2_F8C63BEE797159A3_METHOD_2_3FAAA518D3F433CC_1_OFFSET UNITYSDK_OFFSET(0xA9BD7B0)
#define CLASS_2_F8C63BEE797159A3_METHOD_2_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xA9BD110)
#define CLASS_2_F8C63BEE797159A3_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA9BD400)
#define CLASS_2_F8C63BEE797159A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9BD0C0)
#define CLASS_2_F8C63BEE797159A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9BD270)
#define CLASS_2_F8C63BEE797159A3_TICK_OFFSET UNITYSDK_OFFSET(0xA9BD650)
#define CLASS_2_F8C63BEE797159A3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BCD30)

inline static constexpr unsigned int Class_2_F8C63BEE797159A3_TypeDefinitionIndex = 45398;

class Class_2_F8C63BEE797159A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::SwitchCase* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_2_2; // 0x30
	::System::Int32 Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_ONSKIP_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_METHOD_2_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_2_3FAAA518D3F433CC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_METHOD_2_3FAAA518D3F433CC_1_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8C63BEE797159A3_GET_FORCESKIP_OFFSET))(this);
	}
};
