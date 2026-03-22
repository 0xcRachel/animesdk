#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ABCAPI_AEWAITMAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x17F8BF50)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AbcAPI_TypeDefinitionIndex = 34023;

	class AbcAPI : public ::System::Object
	{
	public:
		static ::System::Void aeWaitMaxDeltaTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ABCAPI_AEWAITMAXDELTATIME_OFFSET))();
		}
	};
}
