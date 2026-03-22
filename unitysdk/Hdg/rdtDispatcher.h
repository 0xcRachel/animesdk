#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define HDG_RDTDISPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0x809DFD0)
#define HDG_RDTDISPATCHER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x80A6F80)
#define HDG_RDTDISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x809EE20)
#define HDG_RDTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x809F360)

namespace Hdg
{
	inline static constexpr unsigned int rdtDispatcher_TypeDefinitionIndex = 36949;

	class rdtDispatcher : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Action*>* m_callbacks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_CLEAR_OFFSET))(this);
		}

		::System::Void Enqueue(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_ENQUEUE_OFFSET))(this, action);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_UPDATE_OFFSET))(this);
		}
	};
}
