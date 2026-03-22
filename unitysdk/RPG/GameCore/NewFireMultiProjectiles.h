#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectiles.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileDataList; }

#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_26BA7C0803E4FFA4_OFFSET UNITYSDK_OFFSET(0x16CFF7F0)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_4D824E7070FE6859_OFFSET UNITYSDK_OFFSET(0x16CFF770)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFF7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireMultiProjectiles_TypeDefinitionIndex = 20226;

	class NewFireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectiles
	{
	public:
		::Il2CppArray<::RPG::GameCore::NewProjectileDataList*>* NewProjectileConfigList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D824E7070FE6859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_4D824E7070FE6859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26BA7C0803E4FFA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_26BA7C0803E4FFA4_OFFSET))(a1, a2);
		}
	};
}
