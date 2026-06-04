#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_CE23F1128F2D76B2;

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18848470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18848460)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18848440)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18848480)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x188483D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18848450)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x18848340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18848240)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemData_TypeDefinitionIndex = 73945;

	class ChenLingFesItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_CE23F1128F2D76B2* _Config_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x20
		::System::UInt32 _Count; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::Class_1_CE23F1128F2D76B2* get_Config()
		{
			return ((::Class_1_CE23F1128F2D76B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::Class_1_CE23F1128F2D76B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE23F1128F2D76B2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_CONFIG_OFFSET))(this, a1);
		}
	};
}
