#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_3;

#define RPG_CLIENT_ROGUENOUSVALUEINFO_CLEARINLEVELDATA_OFFSET UNITYSDK_OFFSET(0x163626C0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16362710)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GETAREALIMIT_OFFSET UNITYSDK_OFFSET(0x16362800)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_CURNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628A0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMAXNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x16362900)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMINNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628E0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_LASTNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628C0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x16362510)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_CURNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628B0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMAXNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x16362910)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMINNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628F0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_LASTNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x163628D0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x16362790)
#define RPG_CLIENT_ROGUENOUSVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16362500)
#define RPG_CLIENT_ROGUENOUSVALUEINFO__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x16362580)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousValueInfo_TypeDefinitionIndex = 62191;

	class RogueNousValueInfo : public ::System::Object
	{
	public:
		::System::Int32 _LastNousValue_k__BackingField; // 0x10
		::System::Int32 _GlobMinNousValue_k__BackingField; // 0x14
		::System::Int32 _GlobMaxNousValue_k__BackingField; // 0x18
		::System::Int32 _CurNousValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearInLevelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_CLEARINLEVELDATA_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EA5A5E4D07C4CF2B_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Void GetAreaLimit(::System::UInt32 areaID, ::System::Int32& minNousValue, ::System::Int32& maxNousValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GETAREALIMIT_OFFSET))(this, areaID, minNousValue, maxNousValue);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Int32 get_CurNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_CURNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_CurNousValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_CURNOUSVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_LastNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_LASTNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_LastNousValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_LASTNOUSVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_GlobMinNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMINNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_GlobMinNousValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMINNOUSVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_GlobMaxNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMAXNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_GlobMaxNousValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMAXNOUSVALUE_OFFSET))(this, value);
		}
	};
}
