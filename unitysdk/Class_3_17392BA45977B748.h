#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_A5679504C4BE0B4F;
class Class_2_A5679504C4BE0B4F_Class_1_576EDE73A60ED4D1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SO_FaceTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_17392BA45977B748_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D2E510)
#define CLASS_3_17392BA45977B748_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10D2DF90)
#define CLASS_3_17392BA45977B748_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10D2E560)
#define CLASS_3_17392BA45977B748_TICK_OFFSET UNITYSDK_OFFSET(0x10D2E430)
#define CLASS_3_17392BA45977B748__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D2E5F0)
#define CLASS_3_17392BA45977B748__CTOR_OFFSET UNITYSDK_OFFSET(0x10D2DEC0)
#define CLASS_3_17392BA45977B748___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10D2E600)

inline static constexpr unsigned int Class_3_17392BA45977B748_TypeDefinitionIndex = 41098;

class Class_3_17392BA45977B748 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_FaceTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_17392BA45977B748_TypeDefinitionIndex)->GetStaticField(0x5E40);
	}
	::RPG::GameCore::GameEntity* Field_3_1; // 0x40
	::Class_2_A5679504C4BE0B4F* Field_3_0; // 0x48
	::Class_2_A5679504C4BE0B4F_Class_1_576EDE73A60ED4D1* Field_3_2; // 0x50
	::System::UInt32 Field_3_3; // 0x58
	::System::Single Field_3_4; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_FaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_17392BA45977B748___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
