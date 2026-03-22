#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_28;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9341600)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x9341EC0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x93421E0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9341EA0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9342160)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x9341ED0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x9341F30)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0x9342000)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x93421C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x93421F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9341EB0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x93421D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x9341BF0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9341BE0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x9342200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftItemData_TypeDefinitionIndex = 51303;

	class GridFightDraftItemData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipList_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightDraftItemData* Create(::Class_1_735612C94F558EAE_28* info, ::System::Int32 index)
		{
			return ((::RPG::Client::GridFightDraftItemData*(*)(::Class_1_735612C94F558EAE_28*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET))(info, index);
		}

		::System::Boolean _CheckCanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET))(this, value);
		}

		::System::Boolean get_CanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET))(this);
		}

		::System::Void set_EquipList(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET))(this, value);
		}

		::System::Boolean __CheckCanRoleUpdate_b__1_0(::RPG::Client::GridFightDraftItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDraftItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET))(this, x);
		}
	};
}
