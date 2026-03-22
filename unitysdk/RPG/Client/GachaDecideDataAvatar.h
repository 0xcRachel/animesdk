#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaDecideData.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class GachaNewsRow; }
namespace RPG::GameCore { class ItemRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x92E6E40)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x92E7280)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x92E7300)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0x92E7E50)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET UNITYSDK_OFFSET(0x92E7390)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET UNITYSDK_OFFSET(0x92E7D20)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET UNITYSDK_OFFSET(0x92E6D30)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET UNITYSDK_OFFSET(0x92E7B60)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x92E7870)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET UNITYSDK_OFFSET(0x92E6DA0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET UNITYSDK_OFFSET(0x92E7E60)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET UNITYSDK_OFFSET(0x92E6EC0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x92E6BA0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x92E6BB0)
#define RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x92E7E70)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideDataAvatar_TypeDefinitionIndex = 51070;

	class GachaDecideDataAvatar : public ::RPG::Client::BaseGachaDecideData
	{
	public:
		::RPG::GameCore::GachaNewsRow* _NewestNewsRow_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__ONSYNCDECIDEDATA_OFFSET))(this);
		}

		::System::Boolean IsShowNews()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSHOWNEWS_OFFSET))(this);
		}

		::System::Void MarkNewstNewsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKNEWSTNEWSSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAvailableDecideAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETAVAILABLEDECIDEAVATARDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetDecidedAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETDECIDEDAVATARDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetNotDecidedAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GETNOTDECIDEDAVATARDATAS_OFFSET))(this);
		}

		::System::Boolean HasNewMaxRankAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_HASNEWMAXRANKAVATAR_OFFSET))(this);
		}

		::System::Void MarkAllMaxRankAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_MARKALLMAXRANKAVATARSEEN_OFFSET))(this);
		}

		::System::Boolean IsStandardAvatar(::System::UInt32 avatarRealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISSTANDARDAVATAR_OFFSET))(this, avatarRealID);
		}

		::System::Boolean IsAvatarShowRedDotNew(::System::UInt32 avatarRealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_ISAVATARSHOWREDDOTNEW_OFFSET))(this, avatarRealID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _ConvertToAvatars(::System::Collections::Generic::List_1<::RPG::GameCore::ItemRow*>* itemRows)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR__CONVERTTOAVATARS_OFFSET))(this, itemRows);
		}

		::RPG::GameCore::GachaNewsRow* get_NewestNewsRow()
		{
			return ((::RPG::GameCore::GachaNewsRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_GET_NEWESTNEWSROW_OFFSET))(this);
		}

		::System::Void set_NewestNewsRow(::RPG::GameCore::GachaNewsRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaNewsRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR_SET_NEWESTNEWSROW_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEDATAAVATAR___IFIXBASEPROXY__ONSYNCDECIDEDATA_OFFSET))(this);
		}
	};
}
