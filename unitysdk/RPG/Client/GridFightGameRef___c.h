#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9377990)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93779D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__23_0_OFFSET UNITYSDK_OFFSET(0x93779E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__64_0_OFFSET UNITYSDK_OFFSET(0x9377A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__68_0_OFFSET UNITYSDK_OFFSET(0x9377BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__68_1_OFFSET UNITYSDK_OFFSET(0x9377CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__67_0_OFFSET UNITYSDK_OFFSET(0x9377AD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__67_1_OFFSET UNITYSDK_OFFSET(0x9377BB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__54_0_OFFSET UNITYSDK_OFFSET(0x9377A10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c_TypeDefinitionIndex = 51384;

	class GridFightGameRef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__67_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B40);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__68_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B48);
		}
		static ::RPG::Client::GridFightGameRef___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRef___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B50);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__67_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B58);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B60);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__68_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B68);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B70);
		}
		static ::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x44B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_FavourSortedRefs_b__23_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__23_0_OFFSET))(this, x);
		}

		::System::Boolean __ReadNecessaryData_b__54_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__54_0_OFFSET))(this, x);
		}

		::System::String* _ReportAppliedGameRef_b__64_0(::RPG::Client::MongoObjectId x)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__64_0_OFFSET))(this, x);
		}

		::System::Int32 __GetAllRecommendData_b__67_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__67_0_OFFSET))(this, x);
		}

		::System::Single __GetAllRecommendData_b__67_1(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__67_1_OFFSET))(this, x);
		}

		::System::Int32 __GetAllPortalRecommendData_b__68_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__68_0_OFFSET))(this, x);
		}

		::System::Single __GetAllPortalRecommendData_b__68_1(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__68_1_OFFSET))(this, x);
		}
	};
}
