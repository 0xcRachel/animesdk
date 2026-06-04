#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967E780)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1967E7B0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__GETORDEREDMASTER_B__6_0_OFFSET UNITYSDK_OFFSET(0x1967E880)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1967E7C0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x1967E840)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_2_OFFSET UNITYSDK_OFFSET(0x1967E850)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterInfo___c_TypeDefinitionIndex = 59312;

	class ChimeraDuelMasterInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelMasterInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelMasterInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x68A10);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraDuelMasterData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraDuelMasterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x68A18);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x68A20);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::UInt32>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x68A28);
		}
		static ::System::Func_2<::RPG::GameCore::ChimeraDuelMasterRow*, ::RPG::Client::ChimeraDuelMasterData*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::GameCore::ChimeraDuelMasterRow*, ::RPG::Client::ChimeraDuelMasterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x68A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* __ctor_b__3_0(::RPG::GameCore::ChimeraDuelMasterRow* a1)
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__3_1(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__3_2(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_2_OFFSET))(this, a1);
		}

		::System::Int32 _GetOrderedMaster_b__6_0(::RPG::Client::ChimeraDuelMasterData* a1, ::RPG::Client::ChimeraDuelMasterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__GETORDEREDMASTER_B__6_0_OFFSET))(this, a1, a2);
		}
	};
}
