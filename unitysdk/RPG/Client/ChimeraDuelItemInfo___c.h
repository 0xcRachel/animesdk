#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELITEMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93B75B0)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93B75E0)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x93B75F0)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x93B7670)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0x93B7680)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemInfo___c_TypeDefinitionIndex = 51438;

	class ChimeraDuelItemInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x45760);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x45768);
		}
		static ::RPG::Client::ChimeraDuelItemInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelItemInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x45770);
		}
		static ::System::Func_2<::RPG::GameCore::ChimeraDuelItemRow*, ::RPG::Client::ChimeraDuelItemData*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::ChimeraDuelItemRow*, ::RPG::Client::ChimeraDuelItemData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x45778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* __ctor_b__1_0(::RPG::GameCore::ChimeraDuelItemRow* row)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_0_OFFSET))(this, row);
		}

		::System::Boolean __ctor_b__1_1(::RPG::Client::ChimeraDuelItemData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_1_OFFSET))(this, data);
		}

		::System::UInt32 __ctor_b__1_2(::RPG::Client::ChimeraDuelItemData* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_2_OFFSET))(this, data);
		}
	};
}
