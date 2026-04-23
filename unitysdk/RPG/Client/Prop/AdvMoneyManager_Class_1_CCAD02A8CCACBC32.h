#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class AdvMoneyManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_75F73579000E1351_OFFSET UNITYSDK_OFFSET(0x127593E0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_96B2A5592949B95A_OFFSET UNITYSDK_OFFSET(0x12757F10)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_E87D9A6BEA8E99C9_OFFSET UNITYSDK_OFFSET(0x1275BB30)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32__CTOR_OFFSET UNITYSDK_OFFSET(0x12757850)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_Class_1_CCAD02A8CCACBC32_TypeDefinitionIndex = 71689;

	class AdvMoneyManager_Class_1_CCAD02A8CCACBC32 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AdvMoneyManager*>* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_96B2A5592949B95A(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_96B2A5592949B95A_OFFSET))(this, a1);
		}

		::System::Void Method_1_75F73579000E1351(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_75F73579000E1351_OFFSET))(this, a1);
		}

		::System::Void Method_1_E87D9A6BEA8E99C9(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_CCAD02A8CCACBC32_METHOD_1_E87D9A6BEA8E99C9_OFFSET))(this, a1);
		}
	};
}
