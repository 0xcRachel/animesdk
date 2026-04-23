#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x10ADFF80)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ADFEB0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x10ADFE40)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATECANPROMOTEREDDOT_OFFSET UNITYSDK_OFFSET(0x10ADFC50)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x10ADFA80)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE0300)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x10AE0200)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATECANPROMOTEREDDOT_OFFSET UNITYSDK_OFFSET(0x10AE02B0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x10AE0260)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x10AE04A0)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AE0420)
#define RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10AE03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSpiritRedDotFilter_TypeDefinitionIndex = 61534;

	class AetherSpiritRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IsNewSpiritIdList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CanPromoteSpiritIdList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET))(this);
		}

		::System::Void UpdateCanPromoteRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_UPDATECANPROMOTEREDDOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateAllRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET))(this, arg);
		}

		::System::Void _OnUpdateIsNewRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET))(this, arg);
		}

		::System::Void _OnUpdateCanPromoteRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER__ONUPDATECANPROMOTEREDDOT_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSPIRITREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
