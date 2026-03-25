#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_768;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET UNITYSDK_OFFSET(0x94558E0)
#define RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9455550)
#define RPG_CLIENT_DEBUGGUIMANAGER_HASGUI_OFFSET UNITYSDK_OFFSET(0x94559E0)
#define RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET UNITYSDK_OFFSET(0x94555A0)
#define RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET UNITYSDK_OFFSET(0x9455A80)
#define RPG_CLIENT_DEBUGGUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9455BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGUIManager_TypeDefinitionIndex = 55775;

	class DebugGUIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::DebugGUIManager** StaticGet_Field_5_1()
		{
			return (::RPG::Client::DebugGUIManager**)Il2CppClass::FromTypeDefinitionIndex(DebugGUIManager_TypeDefinitionIndex)->GetStaticField(0x48380);
		}
		::System::Boolean EnableGUI; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_768*>* Field_5_2; // 0x20

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

		static ::System::Void AddGUI(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET))(a1);
		}

		static ::System::Boolean HasGUI(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_HASGUI_OFFSET))(a1);
		}

		static ::System::Void RemoveGUI(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET))(a1);
		}
	};
}
