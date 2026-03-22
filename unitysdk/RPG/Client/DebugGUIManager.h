#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_703;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET UNITYSDK_OFFSET(0x8FFA060)
#define RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8FF9CD0)
#define RPG_CLIENT_DEBUGGUIMANAGER_HASGUI_OFFSET UNITYSDK_OFFSET(0x8FFA160)
#define RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET UNITYSDK_OFFSET(0x8FF9D20)
#define RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET UNITYSDK_OFFSET(0x8FFA200)
#define RPG_CLIENT_DEBUGGUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8FFA350)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGUIManager_TypeDefinitionIndex = 54217;

	class DebugGUIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::DebugGUIManager** StaticGet_Field_5_1()
		{
			return (::RPG::Client::DebugGUIManager**)Il2CppClass::FromTypeDefinitionIndex(DebugGUIManager_TypeDefinitionIndex)->GetStaticField(0x43870);
		}
		::System::Boolean EnableGUI; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_703*>* Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET))(this);
		}

		static ::System::Void AddGUI(::Class_0_16E4307DCC419505_703* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET))(a1);
		}

		static ::System::Boolean HasGUI(::Class_0_16E4307DCC419505_703* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_HASGUI_OFFSET))(a1);
		}

		static ::System::Void RemoveGUI(::Class_0_16E4307DCC419505_703* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET))(a1);
		}
	};
}
