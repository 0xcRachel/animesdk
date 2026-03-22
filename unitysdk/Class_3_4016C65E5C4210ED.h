#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4016C65E5C4210ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B64190)
#define CLASS_3_4016C65E5C4210ED_METHOD_3_7DEE8D23D3500382_OFFSET UNITYSDK_OFFSET(0x10B644B0)
#define CLASS_3_4016C65E5C4210ED_METHOD_3_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x10B64670)
#define CLASS_3_4016C65E5C4210ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B641E0)
#define CLASS_3_4016C65E5C4210ED__CTOR_OFFSET UNITYSDK_OFFSET(0x10B64160)
#define CLASS_3_4016C65E5C4210ED___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B646B0)

inline static constexpr unsigned int Class_3_4016C65E5C4210ED_TypeDefinitionIndex = 45763;

class Class_3_4016C65E5C4210ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateProp*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_7DEE8D23D3500382(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED_METHOD_3_7DEE8D23D3500382_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityClassifyType Method_3_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED_METHOD_3_9DA0D46365FF3B6A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4016C65E5C4210ED___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
