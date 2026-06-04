#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER_DISABLEDYNAMICSHADOWTASK_OFFSET UNITYSDK_OFFSET(0x157F3230)
#define RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER_RECOVERDYNAMICSHADOWTASK_OFFSET UNITYSDK_OFFSET(0x157F32C0)
#define RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x157F32D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FDynamicShadowTaskRecover_TypeDefinitionIndex = 35320;

	class FDynamicShadowTaskRecover : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER__CTOR_OFFSET))(this);
		}

		::System::Void DisableDynamicShadowTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER_DISABLEDYNAMICSHADOWTASK_OFFSET))(this);
		}

		::System::Void RecoverDynamicShadowTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FDYNAMICSHADOWTASKRECOVER_RECOVERDYNAMICSHADOWTASK_OFFSET))(this);
		}
	};
}
