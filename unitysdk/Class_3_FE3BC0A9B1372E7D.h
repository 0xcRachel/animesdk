#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_3D5E1B76CAB976F5_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145D60A0)
#define CLASS_3_FE3BC0A9B1372E7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145D5C00)
#define CLASS_3_FE3BC0A9B1372E7D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145D6050)
#define CLASS_3_FE3BC0A9B1372E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x145D5B80)
#define CLASS_3_FE3BC0A9B1372E7D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145D6130)
#define CLASS_3_FE3BC0A9B1372E7D___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145D60E0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_TypeDefinitionIndex = 49243;

class Class_3_FE3BC0A9B1372E7D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3D5E1B76CAB976F5_2*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3D5E1B76CAB976F5_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3D5E1B76CAB976F5_2*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
