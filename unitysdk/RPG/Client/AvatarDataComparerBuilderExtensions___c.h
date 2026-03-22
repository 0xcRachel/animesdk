#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CCDF60)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCDF90)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__ORDERBYDAMAGETYPEANDID_B__3_0_OFFSET UNITYSDK_OFFSET(0x8CCDFA0)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__ORDERBYDAMAGETYPEANDID_B__3_1_OFFSET UNITYSDK_OFFSET(0x8CCDFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilderExtensions___c_TypeDefinitionIndex = 49662;

	class AvatarDataComparerBuilderExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarDataComparerBuilderExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarDataComparerBuilderExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataComparerBuilderExtensions___c_TypeDefinitionIndex)->GetStaticField(0x30D20);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataComparerBuilderExtensions___c_TypeDefinitionIndex)->GetStaticField(0x30D28);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataComparerBuilderExtensions___c_TypeDefinitionIndex)->GetStaticField(0x30D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OrderByDamageTypeAndID_b__3_0(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__ORDERBYDAMAGETYPEANDID_B__3_0_OFFSET))(this, avatarData);
		}

		::System::Int32 _OrderByDamageTypeAndID_b__3_1(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDEREXTENSIONS___C__ORDERBYDAMAGETYPEANDID_B__3_1_OFFSET))(this, avatarData);
		}
	};
}
