#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_616;

#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x8D749C0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET UNITYSDK_OFFSET(0x8D749E0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0x8D74B80)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET UNITYSDK_OFFSET(0x8D74AE0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0x8D74B30)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x8D749D0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8D74BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGrowthGuideItem_TypeDefinitionIndex = 52085;

	class BaseGrowthGuideItem : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_616* _GrowthCommand; // 0x10
		::System::Boolean _IsGrowable_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Void set_IsGrowable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET))(this, value);
		}

		::System::Void GoGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET))(this);
		}

		::System::Void SetGrowable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET))(this, value);
		}

		::System::Void SetGrowthCommand(::Class_0_16E4307DCC419505_616* command)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_616*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET))(this, command);
		}

		::System::Boolean HasGrowthCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET))(this);
		}
	};
}
