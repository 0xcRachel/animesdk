#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace UnityEngine { class Material; }

#define CLASS_2_E5E1E76FB2AF0E5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11668230)
#define CLASS_2_E5E1E76FB2AF0E5A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x116681D0)
#define CLASS_2_E5E1E76FB2AF0E5A__CTOR_OFFSET UNITYSDK_OFFSET(0x116682A0)

inline static constexpr unsigned int Class_2_E5E1E76FB2AF0E5A_TypeDefinitionIndex = 60580;

class Class_2_E5E1E76FB2AF0E5A : public ::System::Collections::Generic::List_1<::UnityEngine::Material*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A_DISPOSE_OFFSET))(this);
	}
};
