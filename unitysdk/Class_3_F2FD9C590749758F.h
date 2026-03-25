#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetAssetPreloadState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2FD9C590749758F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A63760)
#define CLASS_3_F2FD9C590749758F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A637A0)
#define CLASS_3_F2FD9C590749758F__CTOR_OFFSET UNITYSDK_OFFSET(0x10A63730)
#define CLASS_3_F2FD9C590749758F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A63D30)

inline static constexpr unsigned int Class_3_F2FD9C590749758F_TypeDefinitionIndex = 44508;

class Class_3_F2FD9C590749758F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetAssetPreloadState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
