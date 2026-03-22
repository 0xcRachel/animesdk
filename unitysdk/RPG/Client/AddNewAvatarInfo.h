#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8BDCBF0)
#define RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BDCF10)

namespace RPG::Client
{
	inline static constexpr unsigned int AddNewAvatarInfo_TypeDefinitionIndex = 49611;

	class AddNewAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ConvertItemList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* AdditionalItemList; // 0x18
		::RPG::Client::AvatarData* NewAvatarData; // 0x20
		::System::Boolean IsNew; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AddNewAvatarInfo* CreateAddNewAvatarInfo(::RPG::Client::AvatarData* avatarData, ::Proto::ItemList* convertItemList, ::Proto::ItemList* additionalItemList, ::System::Boolean isFirstGet)
		{
			return ((::RPG::Client::AddNewAvatarInfo*(*)(::RPG::Client::AvatarData*, ::Proto::ItemList*, ::Proto::ItemList*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDNEWAVATARINFO_CREATEADDNEWAVATARINFO_OFFSET))(avatarData, convertItemList, additionalItemList, isFirstGet);
		}
	};
}
