#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }

#define CLASS_2_3BB1E4112B54AF0F_METHOD_2_68AC62F249F8561A_OFFSET UNITYSDK_OFFSET(0x1509F5E0)
#define CLASS_2_3BB1E4112B54AF0F_METHOD_2_EB45FB3C158A0779_OFFSET UNITYSDK_OFFSET(0x1509F490)
#define CLASS_2_3BB1E4112B54AF0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1509F5D0)

inline static constexpr unsigned int Class_2_3BB1E4112B54AF0F_TypeDefinitionIndex = 53536;

class Class_2_3BB1E4112B54AF0F : public ::Class_1_38A71F76592AF3BC
{
public:
	::RPG::GameCore::AnchorInfo* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BB1E4112B54AF0F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_EB45FB3C158A0779(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3BB1E4112B54AF0F_METHOD_2_EB45FB3C158A0779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68AC62F249F8561A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_3BB1E4112B54AF0F_METHOD_2_68AC62F249F8561A_OFFSET))(this, a1);
	}
};
