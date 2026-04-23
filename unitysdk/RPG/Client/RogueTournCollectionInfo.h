#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_54;
class Class_1_668FE281FA72D3E8_25;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournCollectionBoothData; }
namespace RPG::Client { class RogueTournCollectionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x16F13D60)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0x16F13C80)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F12D60)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x16F13E20)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x16F14380)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0x16F14190)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET UNITYSDK_OFFSET(0x16F13FC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET UNITYSDK_OFFSET(0x16F15140)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0x16F14790)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0x16F154A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x16F154B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET UNITYSDK_OFFSET(0x16F15490)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x16F153A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x16F15500)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x16F127F0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET UNITYSDK_OFFSET(0x16F14D90)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET UNITYSDK_OFFSET(0x16F14B60)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET UNITYSDK_OFFSET(0x16F14A20)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x16F13A80)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0x16F13320)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x16F12EF0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0x16F13BE0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F125D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET UNITYSDK_OFFSET(0x16F14120)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionInfo_TypeDefinitionIndex = 62273;

	class RogueTournCollectionInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptyCollectionID = 0x0; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections_ReadOnly; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Collection; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths_ReadOnly; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths; // 0x30
		::System::Boolean _IsEditing; // 0x38
		::System::Boolean _IsInPreview; // 0x39
		::System::UInt32 _PreviewCollectionID; // 0x3C
		::System::UInt32 _PreviewBoothID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncCollections(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_54*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_54*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET))(this, proto);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_25*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET))(this, proto);
		}

		::System::Void SetPreviewBoothCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET))(this, booth, collection);
		}

		::System::Boolean TryGetPreviewCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData*& collection)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET))(this, booth, collection);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothCollection(::RPG::Client::RogueTournCollectionBoothData* booth, ::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET))(this, booth, collection);
		}

		::RPG::Client::RogueTournCollectionData* GetDisplayedCollectionEdited(::RPG::Client::RogueTournCollectionBoothData* booth)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET))(this, booth);
		}

		::RPG::Client::RogueTournCollectionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::RPG::Client::RogueTournCollectionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, collection);
		}

		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenCollectionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET))(this);
		}

		::System::Void SetCollectionSeen(::RPG::Client::RogueTournCollectionData* collection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET))(this, collection);
		}

		::System::Void SetAllUnlockedCollectionsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET))(this);
		}

		::System::Boolean IsAnyCollectionNotDisplayedEdited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNotDisplayingCollectionBoothIDsEdited()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET))(this);
		}

		::RPG::Client::RogueTournCollectionData* _GetCollection(::System::UInt32 collectionID)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET))(this, collectionID);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* get_Collections()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* get_Booths()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET))(this);
		}

		::System::UInt32 get_CollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET))(this);
		}
	};
}
