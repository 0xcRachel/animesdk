#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_37EFAA10D0728EB1;
class Class_1_F22B920916A3710A_Class_1_A606585D772B55F0;
namespace System { class String; }

#define CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x11354400)
#define CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET UNITYSDK_OFFSET(0x11354490)
#define CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D__CTOR_OFFSET UNITYSDK_OFFSET(0x11354510)

inline static constexpr unsigned int Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D_TypeDefinitionIndex = 52587;

class Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D : public ::System::Object
{
public:
	::Class_1_F22B920916A3710A_Class_1_A606585D772B55F0* FinalRoles; // 0x10
	::System::String* Description; // 0x18
	::Class_1_F22B920916A3710A_Class_1_37EFAA10D0728EB1* MiddleRoles; // 0x20
	::System::String* Author; // 0x28
	::System::String* Lang; // 0x30
	::System::String* ShareCode; // 0x38
	::Il2CppArray<::System::UInt32>* Portals; // 0x40
	::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x48
	::Il2CppArray<::System::String*>* Tags; // 0x50
	::Il2CppArray<::System::UInt32>* CoreEquips; // 0x58
	::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x60
	::System::String* Title; // 0x68
	::Il2CppArray<::System::UInt32>* BasicEquips; // 0x70
	::Class_1_F22B920916A3710A_Class_1_37EFAA10D0728EB1* EarlyRoles; // 0x78
	::System::UInt32 RecentFavourCnt; // 0x80
	::System::UInt32 FavourCnt; // 0x84
	::System::UInt32 SeasonID; // 0x88
	::System::UInt32 TimeStamp; // 0x8C
	::RPG::Client::MongoObjectId Field_1_0; // 0x90
	::System::UInt32 RecentUseCnt; // 0x9C
	::System::UInt32 RecentLikeCnt; // 0xA0
	::System::Int32 level; // 0xA4
	::System::UInt32 LikeCountForSort; // 0xA8
	::System::Boolean IsFavour; // 0xAC
	::System::Boolean IsSupportHard; // 0xAD
	::System::Boolean IsLike; // 0xAE
	::System::UInt32 GameVersion; // 0xB0
	::System::UInt32 SubSeasonID; // 0xB4
	::System::Single Weight; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7857B385C2B6C0EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D_METHOD_1_7857B385C2B6C0EB_OFFSET))(this);
	}

	::System::Void Method_1_A9D189DE4B42FF23(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_93CDA5C33880619D_METHOD_1_A9D189DE4B42FF23_OFFSET))(this, value);
	}
};
