#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_987;
class Class_0_16E4307DCC419505_988;
class Class_0_16E4307DCC419505_989;
class Class_0_16E4307DCC419505_990;
class Class_0_16E4307DCC419505_991;
class Class_0_16E4307DCC419505_992;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET UNITYSDK_OFFSET(0x16D47960)
#define RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x16D45E20)
#define RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET UNITYSDK_OFFSET(0x16D47AF0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x16D46FD0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0x16D472E0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0x16D47460)
#define RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x16D47C30)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET UNITYSDK_OFFSET(0x16D43EE0)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET UNITYSDK_OFFSET(0x16D47C90)
#define RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x16D451E0)
#define RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x16D47890)
#define RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET UNITYSDK_OFFSET(0x16D45690)
#define RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16D45510)
#define RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x16D46E50)
#define RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x16D46E30)
#define RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET UNITYSDK_OFFSET(0x16D46E70)
#define RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x16D449C0)
#define RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET UNITYSDK_OFFSET(0x16D43BA0)
#define RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0x16D46F50)
#define RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET UNITYSDK_OFFSET(0x16D475F0)
#define RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x16D46E60)
#define RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x16D46E40)
#define RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x16D47150)
#define RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x16D47CF0)
#define RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET UNITYSDK_OFFSET(0x16D477C0)
#define RPG_CLIENT_BOOKLETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D45CE0)
#define RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET UNITYSDK_OFFSET(0x16D47680)
#define RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16D47830)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletView_TypeDefinitionIndex = 66698;

	class BookletView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_990*>* _Plugins; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_991*>* _UpdatableList; // 0x20
		::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* _PanelCreator; // 0x28
		::System::Action_1<::System::UInt32>* _PanelDestroyer; // 0x30
		::RPG::Client::UIController* _Owner_k__BackingField; // 0x38
		::RPG::Client::Booklet* _Context_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Owner()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::UIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET))(this, value);
		}

		::RPG::Client::Booklet* get_Context()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::RPG::Client::Booklet* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Booklet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void GotoSection(::System::UInt32 sectionID, ::System::Int32 spreadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET))(this, sectionID, spreadIndex);
		}

		::System::Void AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET))(this);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET))(this);
		}

		::System::Void ForceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET))(this);
		}

		::System::Boolean CheckIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET))(this);
		}

		::System::Boolean CheckIsReplaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* owner, ::RPG::Client::Booklet* context, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* panelCreator, ::System::Action_1<::System::UInt32>* panelDestroyer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET))(this, owner, context, panelCreator, panelDestroyer);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_987* InstantiateElement(::UnityEngine::Transform* root, ::Class_0_16E4307DCC419505_987* parent, ::RPG::GameCore::Booklet::ElementConfig* config)
		{
			return ((::Class_0_16E4307DCC419505_987*(*)(::PVOID, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_987*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET))(this, root, parent, config);
		}

		::System::Void DestroyElement(::Class_0_16E4307DCC419505_987*& element)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_987*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET))(this, element);
		}

		::Class_0_16E4307DCC419505_987* FindElement(::System::UInt32 elementID)
		{
			return ((::Class_0_16E4307DCC419505_987*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET))(this, elementID);
		}

		::System::Void FireEvent(::Class_0_16E4307DCC419505_992* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_992*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET))(this, evt);
		}

		::System::Void AttachPlugin(::Class_0_16E4307DCC419505_990* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_990*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET))(this, plugin);
		}

		::System::Void Accept(::Class_0_16E4307DCC419505_988* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_988*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Void CreatePanel(::RPG::Client::BookletLuaPanelParam* panelParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET))(this, panelParam);
		}

		::System::Void DestroyPanel(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET))(this, panelID);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET))(this);
		}

		::System::String* _GetPrefabPath(::System::UInt32 prefabID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET))(this, prefabID);
		}

		::System::Void _DetachAllPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET))(this);
		}

		::System::Void _ClearUpdatableList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET))(this);
		}
	};
}
