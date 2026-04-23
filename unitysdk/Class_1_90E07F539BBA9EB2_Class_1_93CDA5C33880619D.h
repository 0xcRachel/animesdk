#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869;
class Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3;
namespace System { class String; }

#define CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0xF44E410)
#define CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET UNITYSDK_OFFSET(0xF44E4A0)
#define CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D__CTOR_OFFSET UNITYSDK_OFFSET(0xF44E520)

inline static constexpr unsigned int Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D_TypeDefinitionIndex = 59626;

class Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x10
	::System::String* Title; // 0x18
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x20
	::System::String* ShareCode; // 0x28
	::System::String* Author; // 0x30
	::Il2CppArray<::System::String*>* Tags; // 0x38
	::Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3* MiddleRoles; // 0x40
	::Class_1_90E07F539BBA9EB2_Class_1_A8855D16DBFFC869* FinalRoles; // 0x48
	::System::String* Description; // 0x50
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x58
	::System::String* Lang; // 0x60
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x68
	::Class_1_90E07F539BBA9EB2_Class_1_D61246606DA6D5D3* EarlyRoles; // 0x70
	::Il2CppArray<::System::UInt32>* Portals; // 0x78
	::RPG::Client::MongoObjectId Field_1_0; // 0x80
	::System::UInt32 GameVersion; // 0x8C
	::System::UInt32 LikeCountForSort; // 0x90
	::System::UInt32 SubSeasonID; // 0x94
	::System::UInt32 RecentLikeCnt; // 0x98
	::System::UInt32 SeasonID; // 0x9C
	::System::Boolean IsLike; // 0xA0
	::System::Boolean IsFavour; // 0xA1
	::System::Boolean IsSupportHard; // 0xA2
	::System::UInt32 FavourCnt; // 0xA4
	::System::UInt32 RecentFavourCnt; // 0xA8
	::System::Int32 level; // 0xAC
	::System::Single Weight; // 0xB0
	::System::UInt32 RecentUseCnt; // 0xB4
	::System::UInt32 TimeStamp; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7857B385C2B6C0EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET))(this);
	}

	::System::Void Method_1_A9D189DE4B42FF23(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90E07F539BBA9EB2_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET))(this, value);
	}
};
