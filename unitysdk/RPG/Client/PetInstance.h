#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PetConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PETINSTANCE_CREATE_OFFSET UNITYSDK_OFFSET(0x9A6CFE0)
#define RPG_CLIENT_PETINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A6D060)
#define RPG_CLIENT_PETINSTANCE_GET_ISPETENTITYALIVE_OFFSET UNITYSDK_OFFSET(0x9A6D400)
#define RPG_CLIENT_PETINSTANCE_GET_PETENTITY_OFFSET UNITYSDK_OFFSET(0x9A6D8E0)
#define RPG_CLIENT_PETINSTANCE_GET_PETID_OFFSET UNITYSDK_OFFSET(0x9A6DA50)
#define RPG_CLIENT_PETINSTANCE_GET_PETITEMID_OFFSET UNITYSDK_OFFSET(0x9A6DB70)
#define RPG_CLIENT_PETINSTANCE_GET_PETSUMMONID_OFFSET UNITYSDK_OFFSET(0x9A6DAD0)
#define RPG_CLIENT_PETINSTANCE_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9A6DA70)
#define RPG_CLIENT_PETINSTANCE_REGISTERPETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9A6D0A0)
#define RPG_CLIENT_PETINSTANCE_SETPETVISIBLE_OFFSET UNITYSDK_OFFSET(0x9A6D840)
#define RPG_CLIENT_PETINSTANCE_SET_PETID_OFFSET UNITYSDK_OFFSET(0x9A6DA60)
#define RPG_CLIENT_PETINSTANCE_TRYCREATEPETENTITY_OFFSET UNITYSDK_OFFSET(0x9A6D460)
#define RPG_CLIENT_PETINSTANCE_TRYDESTROYPETENTITY_OFFSET UNITYSDK_OFFSET(0x9A6D0F0)
#define RPG_CLIENT_PETINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6D040)

namespace RPG::Client
{
	inline static constexpr unsigned int PetInstance_TypeDefinitionIndex = 52909;

	class PetInstance : public ::System::Object
	{
	public:
		::System::String* _PetRecallLevelGraphPath; // 0x10
		::RPG::GameCore::GameEntity* _RecallEntity; // 0x18
		::System::String* _UniqueName; // 0x20
		::RPG::GameCore::GameEntity* _SummonEntity; // 0x28
		::System::String* _PetSummonLevelGraphPath; // 0x30
		::System::UInt32 _PetID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetInstance* Create(::System::UInt32 petID)
		{
			return ((::RPG::Client::PetInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_CREATE_OFFSET))(petID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void RegisterPetUniqueName(::System::String* uniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_REGISTERPETUNIQUENAME_OFFSET))(this, uniqueName);
		}

		::System::Void TryDestroyPetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_TRYDESTROYPETENTITY_OFFSET))(this);
		}

		::System::Void TryCreatePetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_TRYCREATEPETENTITY_OFFSET))(this);
		}

		::System::Void SetPetVisible(::System::Boolean isVisible, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_SETPETVISIBLE_OFFSET))(this, isVisible, reason);
		}

		::RPG::GameCore::GameEntity* get_PetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET_PETENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsPetEntityAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET_ISPETENTITYALIVE_OFFSET))(this);
		}

		::System::UInt32 get_PetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET_PETID_OFFSET))(this);
		}

		::System::Void set_PetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_SET_PETID_OFFSET))(this, value);
		}

		::RPG::GameCore::PetConfigRow* get__Row()
		{
			return ((::RPG::GameCore::PetConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_PetSummonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET_PETSUMMONID_OFFSET))(this);
		}

		::System::UInt32 get_PetItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE_GET_PETITEMID_OFFSET))(this);
		}
	};
}
