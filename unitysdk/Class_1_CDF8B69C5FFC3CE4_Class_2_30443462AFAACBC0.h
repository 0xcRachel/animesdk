#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBF0F5D0)
#define CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBF0F580)
#define CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0F670)

inline static constexpr unsigned int Class_1_CDF8B69C5FFC3CE4_Class_2_30443462AFAACBC0_TypeDefinitionIndex = 58042;

class Class_1_CDF8B69C5FFC3CE4_Class_2_30443462AFAACBC0 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::CanvasGroup* Field_2_1; // 0x18
	::RPG::Client::LocalizedText* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_CLASS_2_30443462AFAACBC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
