#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133AF860)
#define RPG_CLIENT_ITEMREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x133AEC70)
#define RPG_CLIENT_ITEMREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x133AE3E0)
#define RPG_CLIENT_ITEMREDDOTFILTER__CLEARTABDICTSTATE_OFFSET UNITYSDK_OFFSET(0x133AE690)
#define RPG_CLIENT_ITEMREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x133AFA30)
#define RPG_CLIENT_ITEMREDDOTFILTER__INITITEMTYPE2TABDIC_OFFSET UNITYSDK_OFFSET(0x133AEF20)
#define RPG_CLIENT_ITEMREDDOTFILTER__INITTABDICT_OFFSET UNITYSDK_OFFSET(0x133AED00)
#define RPG_CLIENT_ITEMREDDOTFILTER__UPDATEREDDOTTABKEYS_OFFSET UNITYSDK_OFFSET(0x133AEAC0)
#define RPG_CLIENT_ITEMREDDOTFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x133AE7D0)
#define RPG_CLIENT_ITEMREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133AFB30)
#define RPG_CLIENT_ITEMREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x133AFAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemRedDotFilter_TypeDefinitionIndex = 61552;

	class ItemRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TabIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemSubType, ::Il2CppArray<::System::UInt32>*>* _SubType2TabDic; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* RedDotItemKeys; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotTabKeys; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _TabDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitTabDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__INITTABDICT_OFFSET))(this);
		}

		::System::Void _InitItemType2TabDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__INITITEMTYPE2TABDIC_OFFSET))(this);
		}

		::System::Void _ClearTabDictState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__CLEARTABDICTSTATE_OFFSET))(this);
		}

		::System::Void _UpdateRedDotTabKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__UPDATEREDDOTTABKEYS_OFFSET))(this);
		}

		::System::Void _UpdateRedDot(::RPG::Client::ItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER__UPDATEREDDOT_OFFSET))(this, itemData);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
