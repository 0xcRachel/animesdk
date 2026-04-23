#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_026085117E885C83;
namespace System { class String; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16963270)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_ISOFFICIAL_OFFSET UNITYSDK_OFFSET(0x16968140)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_ISVAILD_OFFSET UNITYSDK_OFFSET(0x16967E20)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERICON_OFFSET UNITYSDK_OFFSET(0x16967EE0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x16967E00)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x16967FF0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x16967E10)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16967DF0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA__GETUSERROW_OFFSET UNITYSDK_OFFSET(0x16967E80)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsUserData_TypeDefinitionIndex = 68531;

	class LimaoNewsUserData : public ::System::Object
	{
	public:
		::System::UInt32 _UserID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsUserData* Create(::System::UInt32 userID)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsUserData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_CREATE_OFFSET))(userID);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_SET_USERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_ISVAILD_OFFSET))(this);
		}

		::System::String* get_UserIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_UserName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_USERNAME_OFFSET))(this);
		}

		::System::Boolean get_IsOfficial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA_GET_ISOFFICIAL_OFFSET))(this);
		}

		::Class_1_026085117E885C83* _GetUserRow()
		{
			return ((::Class_1_026085117E885C83*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSUSERDATA__GETUSERROW_OFFSET))(this);
		}
	};
}
