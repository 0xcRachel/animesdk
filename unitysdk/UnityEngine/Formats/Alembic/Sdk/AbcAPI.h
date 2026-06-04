#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ABCAPI_AEWAITMAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x19732B90)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AbcAPI_TypeDefinitionIndex = 41611;

	class AbcAPI : public ::System::Object
	{
	public:
		static ::System::Void aeWaitMaxDeltaTime()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ABCAPI_AEWAITMAXDELTATIME_OFFSET))();
		}
	};
}
