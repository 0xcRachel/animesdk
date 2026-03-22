#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_PARAMCOLLECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD370)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ParamCollectionAttribute_TypeDefinitionIndex = 9867;

	class ParamCollectionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_PARAMCOLLECTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
