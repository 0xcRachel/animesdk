#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2258160)
#define RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2258110)
#define RPG_CLIENT_AVATARROLETYPE_GETAVATARIDINBOX_OFFSET UNITYSDK_OFFSET(0x22580B0)
#define RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2258170)
#define RPG_CLIENT_AVATARROLETYPE_GET_MARCH7TH_OFFSET UNITYSDK_OFFSET(0x15E447C0)
#define RPG_CLIENT_AVATARROLETYPE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x15E44730)
#define RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15E449A0)
#define RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15E44A20)
#define RPG_CLIENT_AVATARROLETYPE_TOBASEID_OFFSET UNITYSDK_OFFSET(0x22580C0)
#define RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x2258050)
#define RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22581C0)
#define RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2258220)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRoleType_TypeDefinitionIndex = 57646;

	struct alignas(4) AvatarRoleType
	{
		::System::UInt32 _RoleID; // 0x10

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE__CTOR_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetAvatarIDInBox()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GETAVATARIDINBOX_OFFSET))(this);
		}

		::System::UInt32 ToBaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_TOBASEID_OFFSET))(this);
		}

		static ::RPG::Client::AvatarRoleType get_Player()
		{
			return ((::RPG::Client::AvatarRoleType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GET_PLAYER_OFFSET))();
		}

		static ::RPG::Client::AvatarRoleType get_March7th()
		{
			return ((::RPG::Client::AvatarRoleType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GET_MARCH7TH_OFFSET))();
		}

		::System::Boolean Equals(::RPG::Client::AvatarRoleType other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::AvatarRoleType left, ::RPG::Client::AvatarRoleType right)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::AvatarRoleType left, ::RPG::Client::AvatarRoleType right)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarRoleType, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROLETYPE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
