#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class Book; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookSeries; }
namespace RPG::GameCore { class BookSeriesWorldConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOVELMODULE_CREATEBOOKBYID_OFFSET UNITYSDK_OFFSET(0x143E7890)
#define RPG_CLIENT_NOVELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143E6ED0)
#define RPG_CLIENT_NOVELMODULE_GETALLBOOKSERIES_OFFSET UNITYSDK_OFFSET(0x143E7610)
#define RPG_CLIENT_NOVELMODULE_GETBOOKSERIESBYWORLD_OFFSET UNITYSDK_OFFSET(0x143E7460)
#define RPG_CLIENT_NOVELMODULE_GETUNLOCKWORLDCONFIGS_OFFSET UNITYSDK_OFFSET(0x143E7140)
#define RPG_CLIENT_NOVELMODULE_GETWORLDTABS_OFFSET UNITYSDK_OFFSET(0x143E6F90)
#define RPG_CLIENT_NOVELMODULE_INITBOOKSERIESANDBOOKCONFIG_OFFSET UNITYSDK_OFFSET(0x143E69F0)
#define RPG_CLIENT_NOVELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x143E6E40)
#define RPG_CLIENT_NOVELMODULE_ISBOOKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x143E77B0)
#define RPG_CLIENT_NOVELMODULE_LOADBOOKCONTENT_OFFSET UNITYSDK_OFFSET(0x143E78F0)
#define RPG_CLIENT_NOVELMODULE_UNLOCKBOOK_OFFSET UNITYSDK_OFFSET(0x143E7FC0)
#define RPG_CLIENT_NOVELMODULE__ADDBOOKSERIES_OFFSET UNITYSDK_OFFSET(0x143E6BF0)
#define RPG_CLIENT_NOVELMODULE__ADDBOOK_OFFSET UNITYSDK_OFFSET(0x143E6CF0)
#define RPG_CLIENT_NOVELMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x143E82D0)
#define RPG_CLIENT_NOVELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x143E8310)
#define RPG_CLIENT_NOVELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x143E6940)
#define RPG_CLIENT_NOVELMODULE__GETWORLDCONFIGS_OFFSET UNITYSDK_OFFSET(0x143E7310)
#define RPG_CLIENT_NOVELMODULE__UNLOCKBOOK_OFFSET UNITYSDK_OFFSET(0x143E8010)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143E83E0)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x143E8350)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x143E83F0)
#define RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x143E8450)

namespace RPG::Client
{
	inline static constexpr unsigned int NovelModule_TypeDefinitionIndex = 61147;

	class NovelModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BookSeries*>* _bookSeries; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockWorldID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__CTOR_OFFSET))(this);
		}

		::System::Void InitBookSeriesAndBookConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_INITBOOKSERIESANDBOOKCONFIG_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* GetWorldTabs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETWORLDTABS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>* GetUnlockWorldConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETUNLOCKWORLDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>* GetBookSeriesByWorld(::System::UInt32 bookSeriesWorld)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETBOOKSERIESBYWORLD_OFFSET))(this, bookSeriesWorld);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>* GetAllBookSeries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookSeries*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_GETALLBOOKSERIES_OFFSET))(this);
		}

		::System::Boolean IsBookAvailable(::System::UInt32 boolSeriesID, ::System::UInt32 bookID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_ISBOOKAVAILABLE_OFFSET))(this, boolSeriesID, bookID);
		}

		static ::RPG::Client::Book* CreateBookByID(::System::UInt32 bookID)
		{
			return ((::RPG::Client::Book*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_CREATEBOOKBYID_OFFSET))(bookID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BookContentData*>* LoadBookContent(::System::UInt32 bookID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BookContentData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_LOADBOOKCONTENT_OFFSET))(bookID);
		}

		::System::Void UnLockBook(::System::UInt32 bookConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE_UNLOCKBOOK_OFFSET))(this, bookConfigID);
		}

		::System::Void _AddBookSeries(::RPG::Client::BookSeries* bookSeries)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookSeries*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDBOOKSERIES_OFFSET))(this, bookSeries);
		}

		::System::Void _AddBook(::RPG::Client::Book* book)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDBOOK_OFFSET))(this, book);
		}

		::System::Void _UnLockBook(::System::UInt32 bookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__UNLOCKBOOK_OFFSET))(this, bookID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>* _GetWorldConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__GETWORLDCONFIGS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
