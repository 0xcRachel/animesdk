#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_2;
class Class_1_F3CA30716D4FAF92_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDEBUGHELPER_ADDFAKETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x15998A50)
#define RPG_CLIENT_AVATARDEBUGHELPER_CLEARAVATARUI3DPAGESHOWINGAVATAR_OFFSET UNITYSDK_OFFSET(0x15998BD0)
#define RPG_CLIENT_AVATARDEBUGHELPER_FAKESYNCOBTAINEDAVATAR_OFFSET UNITYSDK_OFFSET(0x15998AA0)
#define RPG_CLIENT_AVATARDEBUGHELPER_GETAVATARUI3DPAGESHOWINGAVATAR_OFFSET UNITYSDK_OFFSET(0x15998B90)
#define RPG_CLIENT_AVATARDEBUGHELPER_GETFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x15998AF0)
#define RPG_CLIENT_AVATARDEBUGHELPER_SETAVATARUI3DPAGESHOWINGAVATAR_OFFSET UNITYSDK_OFFSET(0x15998B50)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDebugHelper_TypeDefinitionIndex = 58603;

	class AvatarDebugHelper : public ::System::Object
	{
	public:
		static ::System::Void AddFakeTrialAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_ADDFAKETRIALAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Void FakeSyncObtainedAvatar(::Class_1_BB4B99DE4C2501EC_2* a1, ::Class_1_F3CA30716D4FAF92_3* a2)
		{
			return ((::System::Void(*)(::Class_1_BB4B99DE4C2501EC_2*, ::Class_1_F3CA30716D4FAF92_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_FAKESYNCOBTAINEDAVATAR_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetFakeAvatar(::Class_1_BB4B99DE4C2501EC_2* a1, ::Class_1_F3CA30716D4FAF92_3* a2, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a3, ::RPG::Client::EquipmentItemData* a4)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::Class_1_BB4B99DE4C2501EC_2*, ::Class_1_F3CA30716D4FAF92_3*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_GETFAKEAVATAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetAvatarUI3DPageShowingAvatar(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_SETAVATARUI3DPAGESHOWINGAVATAR_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* GetAvatarUI3DPageShowingAvatar()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_GETAVATARUI3DPAGESHOWINGAVATAR_OFFSET))();
		}

		static ::System::Void ClearAvatarUI3DPageShowingAvatar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDEBUGHELPER_CLEARAVATARUI3DPAGESHOWINGAVATAR_OFFSET))();
		}
	};
}
