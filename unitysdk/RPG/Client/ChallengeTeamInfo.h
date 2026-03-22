#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C4AA3840DCF3F0A;
class Class_1_52AE8D741A62A8F4;
class Class_1_FA4F4A67B1C04320_144;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET UNITYSDK_OFFSET(0x8E9FD80)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x8E9FCA0)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x8E9FF20)
#define RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x8E9F860)
#define RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9F820)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTeamInfo_TypeDefinitionIndex = 50094;

	class ChallengeTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1C4AA3840DCF3F0A*>* AvatarList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarList, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_144*>* equipmentMap, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>* relicMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_144*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET))(this, avatarList, equipmentMap, relicMap);
		}

		::RPG::Client::AvatarData* GetAvatarDataByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::AvatarData* GetAvatarDataByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET))(this);
		}
	};
}
