#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_13;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB4CB0)
#define CLASS_3_27518451A20BB161_2_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x10CB4B10)
#define CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CB4AC0)
#define CLASS_3_27518451A20BB161_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB4A90)
#define CLASS_3_27518451A20BB161_2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB4D10)

inline static constexpr unsigned int Class_3_27518451A20BB161_2_TypeDefinitionIndex = 41591;

class Class_3_27518451A20BB161_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_13*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_13*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
