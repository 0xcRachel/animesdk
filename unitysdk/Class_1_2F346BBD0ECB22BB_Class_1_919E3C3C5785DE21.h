#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F346BBD0ECB22BB_Class_1_A22632D0D8170869;
namespace System { class String; }

#define CLASS_1_2F346BBD0ECB22BB_CLASS_1_919E3C3C5785DE21__CTOR_OFFSET UNITYSDK_OFFSET(0x10B48460)

inline static constexpr unsigned int Class_1_2F346BBD0ECB22BB_Class_1_919E3C3C5785DE21_TypeDefinitionIndex = 55283;

class Class_1_2F346BBD0ECB22BB_Class_1_919E3C3C5785DE21 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* OptionalFormulaIDs; // 0x10
	::Il2CppArray<::System::UInt32>* OptionalHexMiracleIDs; // 0x18
	::System::String* Language; // 0x20
	::Il2CppArray<::Il2CppArray<::Class_1_2F346BBD0ECB22BB_Class_1_A22632D0D8170869*>*>* Teams; // 0x28
	::Il2CppArray<::System::UInt32>* EssentialFormulaIDs; // 0x30
	::System::String* Title; // 0x38
	::System::String* BuildRefID; // 0x40
	::System::String* Author; // 0x48
	::Il2CppArray<::System::UInt32>* EssentialHexMiracleIDs; // 0x50
	::System::UInt64 LikeCountForSort; // 0x58
	::System::UInt64 AppliedCountForSort; // 0x60
	::System::UInt64 FavoriteCountForSort; // 0x68
	::System::Double WeightForSort; // 0x70
	::System::UInt32 GameVersion; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F346BBD0ECB22BB_CLASS_1_919E3C3C5785DE21__CTOR_OFFSET))(this);
	}
};
