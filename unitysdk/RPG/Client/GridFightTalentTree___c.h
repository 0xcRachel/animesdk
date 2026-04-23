#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTalentNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B95960)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B959A0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET UNITYSDK_OFFSET(0x17B959B0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET UNITYSDK_OFFSET(0x17B95A00)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET UNITYSDK_OFFSET(0x17B95BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentTree___c_TypeDefinitionIndex = 60089;

	class GridFightTalentTree___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x33990);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x33998);
		}
		static ::RPG::Client::GridFightTalentTree___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTalentTree___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x339A0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTalentNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTalentTree___c_TypeDefinitionIndex)->GetStaticField(0x339A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FirstArrivedNode_b__17_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_FIRSTARRIVEDNODE_B__17_0_OFFSET))(this, node);
		}

		::System::Boolean _get_HasTalentCanUnlock_b__19_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_HASTALENTCANUNLOCK_B__19_0_OFFSET))(this, node);
		}

		::System::Boolean _get_UnlockCnt_b__21_0(::RPG::Client::GridFightTalentNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTalentNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE___C__GET_UNLOCKCNT_B__21_0_OFFSET))(this, node);
		}
	};
}
