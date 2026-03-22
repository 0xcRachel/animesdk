#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_A5679504C4BE0B4F;
class Class_2_A5679504C4BE0B4F_Class_1_576EDE73A60ED4D1;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_003CF77BF1B9FCF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC543E30)
#define CLASS_3_003CF77BF1B9FCF6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC5442D0)
#define CLASS_3_003CF77BF1B9FCF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC543EC0)
#define CLASS_3_003CF77BF1B9FCF6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC544230)
#define CLASS_3_003CF77BF1B9FCF6__CTOR_OFFSET UNITYSDK_OFFSET(0xC543D70)
#define CLASS_3_003CF77BF1B9FCF6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC544320)

inline static constexpr unsigned int Class_3_003CF77BF1B9FCF6_TypeDefinitionIndex = 41102;

class Class_3_003CF77BF1B9FCF6 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayInteractOnPoint*>
{
public:
	::Class_2_A5679504C4BE0B4F_Class_1_576EDE73A60ED4D1* Field_3_1; // 0x40
	::Class_2_A5679504C4BE0B4F* Field_3_0; // 0x48
	::System::Boolean Field_3_2; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
