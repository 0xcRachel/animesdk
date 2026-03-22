#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F45DE918CFECDFD_Class_1_3734638650ABFF92;
namespace System { class String; }

#define CLASS_1_1F45DE918CFECDFD_CLASS_1_1490BB0B276F3429__CTOR_OFFSET UNITYSDK_OFFSET(0x105B1400)

inline static constexpr unsigned int Class_1_1F45DE918CFECDFD_Class_1_1490BB0B276F3429_TypeDefinitionIndex = 53771;

class Class_1_1F45DE918CFECDFD_Class_1_1490BB0B276F3429 : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::Class_1_1F45DE918CFECDFD_Class_1_3734638650ABFF92*>*>* Teams; // 0x10
	::System::String* Language; // 0x18
	::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x20
	::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x28
	::System::String* Title; // 0x30
	::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x38
	::System::String* Author; // 0x40
	::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x48
	::System::String* BuildRefID; // 0x50
	::System::UInt64 LikeCountForSort; // 0x58
	::System::Double WeightForSort; // 0x60
	::System::UInt64 FavoriteCountForSort; // 0x68
	::System::UInt32 GameVersion; // 0x70
	::System::UInt64 AppliedCountForSort; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F45DE918CFECDFD_CLASS_1_1490BB0B276F3429__CTOR_OFFSET))(this);
	}
};
