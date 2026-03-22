#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class QuestData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8BBA1E0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8BBA210)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8BB9A30)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB83E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_QuestCheckerFunc_TypeDefinitionIndex = 48970;

	class ActivityRewardUtils_QuestCheckerFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::QuestData* questData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_INVOKE_OFFSET))(this, questData);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::QuestData* questData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::QuestData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_BEGININVOKE_OFFSET))(this, questData, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
