#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_INDEX_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x156AC7E0)

namespace System
{
	inline static constexpr unsigned int Index_ThrowHelper_TypeDefinitionIndex = 9854;

	class Index_ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowValueArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_INDEX_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}
	};
}
