#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityPanelSingleRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1536C580)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1536C7E0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x1536C840)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x1536C2D0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1536C090)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1536C350)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1536C8A0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1536BFC0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x1536BFD0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1536C990)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1536CA00)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1536C930)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleQuestActivityData_TypeDefinitionIndex = 56866;

	class SingleQuestActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__Empty()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SingleQuestActivityData_TypeDefinitionIndex)->GetStaticField(0x3AFD0);
		}
		::RPG::GameCore::ActivityPanelSingleRewardRow* _SingleRewardRow; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CCTOR_OFFSET))();
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuestList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY__ONINIT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}
	};
}
