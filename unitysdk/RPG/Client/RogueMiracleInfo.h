#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_2886F3D0C1CF5D4B_1;
class Class_1_C3C5C0E033C47270_13;
class Class_1_E7C4009BCC22497A_71;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMiracleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0x9E234B0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E04AB0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETALLHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0x9E23940)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E23BC0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLESBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x9E23A80)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETROGUEMIRACLEDATA_OFFSET UNITYSDK_OFFSET(0x9E237C0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0x9E23D70)
#define RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0x9E23D10)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET UNITYSDK_OFFSET(0x9E053B0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET UNITYSDK_OFFSET(0x9E040F0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0x9E232A0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0x9E23720)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0x9E23630)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0x9E23870)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0x9E23D80)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0x9E23240)
#define RPG_CLIENT_ROGUEMIRACLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E03A80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo_TypeDefinitionIndex = 53460;

	class RogueMiracleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* _AchivedMiracles_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedMiracle(::Class_1_C3C5C0E033C47270_13* gameMiracleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET))(this, gameMiracleInfo);
		}

		::System::Void RefreshAchivedMiracle(::Class_1_E7C4009BCC22497A_71* miracleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_71*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET))(this, miracleInfo);
		}

		::System::Void RefreshAchivedMiracle_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2886F3D0C1CF5D4B_1*>* miracleList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2886F3D0C1CF5D4B_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET))(this, miracleList);
		}

		::System::Void RefreshAchivedMiracle_2(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* miracleList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET))(this, miracleList);
		}

		::System::Void AddMiracleItem(::Class_1_2886F3D0C1CF5D4B_1* miracleProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, miracleProto);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, miracleID);
		}

		::System::Void RefreshMiracleItem(::Class_1_2886F3D0C1CF5D4B_1* miralceProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, miralceProto);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 oldMiracleID, ::Class_1_2886F3D0C1CF5D4B_1* newMiracle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_2886F3D0C1CF5D4B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, oldMiracleID, newMiracle);
		}

		::RPG::Client::RogueMiracleData* GetRogueMiracleData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETROGUEMIRACLEDATA_OFFSET))(this, miracleID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* GetAllHexMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETALLHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* GetMiraclesByCategory(::RPG::GameCore::RogueMiracleCategory category, ::System::Boolean isBrokenFirst)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLESBYCATEGORY_OFFSET))(this, category, isBrokenFirst);
		}

		::RPG::Client::RogueMiracleData* GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, miracleID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

		::System::Void set_AchivedMiracles(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET))(this, value);
		}
	};
}
