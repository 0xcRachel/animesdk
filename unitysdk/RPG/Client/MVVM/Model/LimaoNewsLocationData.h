#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_10B8ADEDF306609C;

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x95AEF00)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95AEE40)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x95AEF80)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_GET_LOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x95AEFA0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x95AEF90)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_SET_LOCATIONNAME_OFFSET UNITYSDK_OFFSET(0x95AEFB0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95AEF70)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsLocationData_TypeDefinitionIndex = 59306;

	class LimaoNewsLocationData : public ::System::Object
	{
	public:
		::System::UInt32 _LocationID_k__BackingField; // 0x10
		::RPG::Client::TextID _LocationName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsLocationData* Create(::System::UInt32 locationID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLocationData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_CREATE_OFFSET))(locationID);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsLocationData* Create_1(::Class_1_10B8ADEDF306609C* row)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsLocationData*(*)(::Class_1_10B8ADEDF306609C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_CREATE_1_OFFSET))(row);
		}

		::System::UInt32 get_LocationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_GET_LOCATIONID_OFFSET))(this);
		}

		::System::Void set_LocationID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_SET_LOCATIONID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_LocationName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_GET_LOCATIONNAME_OFFSET))(this);
		}

		::System::Void set_LocationName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSLOCATIONDATA_SET_LOCATIONNAME_OFFSET))(this, value);
		}
	};
}
