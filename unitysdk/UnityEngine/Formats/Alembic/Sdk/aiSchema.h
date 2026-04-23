#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_GET_ISDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x22E6BF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x18BF7F70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x18BFC070)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x18C09D20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x18BFF960)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x18BF8FD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x18C0A160)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18C065E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_UPDATESAMPLE_OFFSET UNITYSDK_OFFSET(0x22E6CE0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSchema_TypeDefinitionIndex = 40819;

	struct alignas(8) aiSchema
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_IMPLICIT_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiXform op_Explicit(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXform(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCamera op_Explicit_1(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCamera(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh op_Explicit_2(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_2_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSubD op_Explicit_3(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSubD(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_3_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPoints op_Explicit_4(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPoints(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_4_OFFSET))(v);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCurves op_Explicit_5(::UnityEngine::Formats::Alembic::Sdk::aiSchema v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurves(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_5_OFFSET))(v);
		}
		*/

		::System::Boolean get_isDataUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_GET_ISDATAUPDATED_OFFSET))(this);
		}

		/*
		::System::Void UpdateSample(::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector& ss)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_UPDATESAMPLE_OFFSET))(this, ss);
		}
		*/
	};
}
