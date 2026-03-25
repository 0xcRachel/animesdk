#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AADD70)
#define RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x20EEA10)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AADD50)
#define RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET UNITYSDK_OFFSET(0x20EEA00)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AADD30)
#define RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET UNITYSDK_OFFSET(0x20EE9F0)
#define RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET UNITYSDK_OFFSET(0x29130)
#define RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET UNITYSDK_OFFSET(0x151EA90)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET UNITYSDK_OFFSET(0x16AADD00)
#define RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x20EE9D0)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29130)
#define RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x151EA90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FlagMask_TypeDefinitionIndex = 29485;

	struct alignas(4) FlagMask
	{
		::System::UInt32 _Flag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK__CTOR_1_OFFSET))(this, f);
		}

		::System::Void SetFlag(::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_OFFSET))(this, f, enable);
		}

		::System::Boolean HasFlag(::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_OFFSET))(this, f);
		}

		::System::Boolean HasAllFlag(::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_OFFSET))(this, f);
		}

		::System::Void AddFlag(::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_OFFSET))(this, f, enable);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESET_OFFSET))(this);
		}

		::System::Void ResetFlag(::System::UInt32 f)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_RESETFLAG_OFFSET))(this, f);
		}

		static ::System::Void SetFlag_1(::System::UInt32& srcFlag, ::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_SETFLAG_1_OFFSET))(srcFlag, f, enable);
		}

		static ::System::Void AddFlag_1(::System::UInt32& srcFlag, ::System::UInt32 f, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_ADDFLAG_1_OFFSET))(srcFlag, f, enable);
		}

		static ::System::Boolean HasFlag_1(::System::UInt32 srcFlag, ::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASFLAG_1_OFFSET))(srcFlag, f);
		}

		static ::System::Boolean HasAllFlag_1(::System::UInt32 srcFlag, ::System::UInt32 f)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FLAGMASK_HASALLFLAG_1_OFFSET))(srcFlag, f);
		}
	};
}
