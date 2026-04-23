#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTalentNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1812FCC0)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1812FD00)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__GET_ISARRIVED_B__20_0_OFFSET UNITYSDK_OFFSET(0x1812FD10)
#define RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__GET_ISARRIVED_B__20_1_OFFSET UNITYSDK_OFFSET(0x1812FD40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTalentNode___c_TypeDefinitionIndex = 60083;

	class GridFightSeasonTalentNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTalentNode___c_TypeDefinitionIndex)->GetStaticField(0x31EF0);
		}
		static ::RPG::Client::GridFightSeasonTalentNode___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeasonTalentNode___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTalentNode___c_TypeDefinitionIndex)->GetStaticField(0x31EF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__20_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTalentNode___c_TypeDefinitionIndex)->GetStaticField(0x31F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsArrived_b__20_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__GET_ISARRIVED_B__20_0_OFFSET))(this, node);
		}

		::System::Boolean _get_IsArrived_b__20_1(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTALENTNODE___C__GET_ISARRIVED_B__20_1_OFFSET))(this, node);
		}
	};
}
