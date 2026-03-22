#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17F98750)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17F98780)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x17F981E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17F98730)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorderSettings_GetTargetBranch_TypeDefinitionIndex = 33989;

	class AlembicRecorderSettings_GetTargetBranch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::GameObject* Invoke()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
