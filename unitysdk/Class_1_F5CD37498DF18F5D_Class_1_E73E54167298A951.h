#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_1_F5CD37498DF18F5D_CLASS_1_E73E54167298A951__CTOR_OFFSET UNITYSDK_OFFSET(0x8F68610)

inline static constexpr unsigned int Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951_TypeDefinitionIndex = 48059;

class Class_1_F5CD37498DF18F5D_Class_1_E73E54167298A951 : public ::System::Object
{
public:
	::Cinemachine::CinemachineCRPVirtualCamera* Field_1_1; // 0x10
	::UnityEngine::Rendering::CRPVirtualCamera* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CD37498DF18F5D_CLASS_1_E73E54167298A951__CTOR_OFFSET))(this);
	}
};
