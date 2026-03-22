#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_5D0420C2BC146F68;
class Class_1_6F1A105107B2BC27;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_68BAC2DE3854F5AF_METHOD_1_169AEE44E296B520_OFFSET UNITYSDK_OFFSET(0x85FF1D0)
#define CLASS_1_68BAC2DE3854F5AF_METHOD_1_1FCEF61B0C46C5F1_OFFSET UNITYSDK_OFFSET(0x85FF470)
#define CLASS_1_68BAC2DE3854F5AF_METHOD_1_4F896BCBEDD0E38F_OFFSET UNITYSDK_OFFSET(0x85FF7F0)
#define CLASS_1_68BAC2DE3854F5AF_METHOD_1_DE77E4F77718686A_OFFSET UNITYSDK_OFFSET(0x85FF920)
#define CLASS_1_68BAC2DE3854F5AF_METHOD_1_E73D7EF32BC70C84_OFFSET UNITYSDK_OFFSET(0x85FF270)

inline static constexpr unsigned int Class_1_68BAC2DE3854F5AF_TypeDefinitionIndex = 49690;

class Class_1_68BAC2DE3854F5AF : public ::System::Object
{
public:
	static ::RPG::Client::AvatarOutfitUnit* Method_1_169AEE44E296B520(::RPG::GameCore::PlayerOutfitBaseRow* a1, ::RPG::Client::AvatarOutfitSlot* a2)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::RPG::GameCore::PlayerOutfitBaseRow*, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + CLASS_1_68BAC2DE3854F5AF_METHOD_1_169AEE44E296B520_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>* Method_1_1FCEF61B0C46C5F1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68BAC2DE3854F5AF_METHOD_1_1FCEF61B0C46C5F1_OFFSET))(a1, a2);
	}

	static ::Class_1_6F1A105107B2BC27* Method_1_4F896BCBEDD0E38F(::RPG::GameCore::PlayerOutfitDetailRow* a1, ::RPG::GameCore::ItemRow* a2, ::Class_1_5D0420C2BC146F68* a3)
	{
		return ((::Class_1_6F1A105107B2BC27*(*)(::RPG::GameCore::PlayerOutfitDetailRow*, ::RPG::GameCore::ItemRow*, ::Class_1_5D0420C2BC146F68*))((::PBYTE)hIl2Cpp + CLASS_1_68BAC2DE3854F5AF_METHOD_1_4F896BCBEDD0E38F_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>* Method_1_E73D7EF32BC70C84(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_6F1A105107B2BC27*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_68BAC2DE3854F5AF_METHOD_1_E73D7EF32BC70C84_OFFSET))(a1);
	}

	static ::Class_1_6F1A105107B2BC27* Method_1_DE77E4F77718686A(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
	{
		return ((::Class_1_6F1A105107B2BC27*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + CLASS_1_68BAC2DE3854F5AF_METHOD_1_DE77E4F77718686A_OFFSET))(a1, a2);
	}
};
