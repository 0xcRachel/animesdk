#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_18ABD64242AC299F;
class Class_1_76AEB9F7CCE28B4E_Class_1_1E04AC8D022EECBB;
namespace System { class String; }

#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x10C76390)
#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET UNITYSDK_OFFSET(0x10C76420)
#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D__CTOR_OFFSET UNITYSDK_OFFSET(0x10C764A0)

inline static constexpr unsigned int Class_1_76AEB9F7CCE28B4E_Class_1_93CDA5C33880619D_TypeDefinitionIndex = 51454;

class Class_1_76AEB9F7CCE28B4E_Class_1_93CDA5C33880619D : public ::System::Object
{
public:
	::System::String* ShareCode; // 0x10
	::System::String* Title; // 0x18
	::Il2CppArray<::System::UInt32>* Portals; // 0x20
	::System::String* Description; // 0x28
	::Class_1_76AEB9F7CCE28B4E_Class_1_1E04AC8D022EECBB* EarlyRoles; // 0x30
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x38
	::Il2CppArray<::System::String*>* Tags; // 0x40
	::Class_1_76AEB9F7CCE28B4E_Class_1_18ABD64242AC299F* FinalRoles; // 0x48
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x50
	::Class_1_76AEB9F7CCE28B4E_Class_1_1E04AC8D022EECBB* MiddleRoles; // 0x58
	::System::String* Author; // 0x60
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x68
	::System::String* Lang; // 0x70
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x78
	::System::Single Weight; // 0x80
	::System::UInt32 RecentLikeCnt; // 0x84
	::System::UInt32 GameVersion; // 0x88
	::System::UInt32 FavourCnt; // 0x8C
	::System::UInt32 TimeStamp; // 0x90
	::System::UInt32 SubSeasonID; // 0x94
	::RPG::Client::MongoObjectId Field_1_0; // 0x98
	::System::UInt32 RecentFavourCnt; // 0xA4
	::System::Int32 level; // 0xA8
	::System::Boolean IsFavour; // 0xAC
	::System::Boolean IsLike; // 0xAD
	::System::Boolean IsSupportHard; // 0xAE
	::System::UInt32 RecentUseCnt; // 0xB0
	::System::UInt32 SeasonID; // 0xB4
	::System::UInt32 LikeCountForSort; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7857B385C2B6C0EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET))(this);
	}

	::System::Void Method_1_A9D189DE4B42FF23(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET))(this, value);
	}
};
