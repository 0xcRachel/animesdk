#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_ADDEQUIP_OFFSET UNITYSDK_OFFSET(0x18D1C620)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_ADD_ONEQUIPCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18D1BF10)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_CLEAREQUIP_OFFSET UNITYSDK_OFFSET(0x18D1C7A0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x18D1C1C0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x18D1C120)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x18D1BFE0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x18D1C080)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET__EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x18D1BFD0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_HASEQUIP_OFFSET UNITYSDK_OFFSET(0x18D1CA90)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0x18D1C7F0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REMOVE_ONEQUIPCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x18D1BF70)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REPLACEEQUIP_OFFSET UNITYSDK_OFFSET(0x18D1C850)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_RPG_CLIENT_IGRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x18D1C250)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x18D1C130)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x18D1BFF0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0x18D1C090)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1C2E0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONROLE__ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x18D1CB90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationRole_TypeDefinitionIndex = 60468;

	class GridFightFormationRole : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnEquipCollectionChanged; // 0x18
		::Sofa::Core::ObservableList_1<::System::UInt32>* __EquipIDs_k__BackingField; // 0x20
		::System::UInt32 _Star; // 0x28
		::System::UInt32 _PosIndex; // 0x2C
		::System::UInt32 _RoleID; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnEquipCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_ADD_ONEQUIPCOLLECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEquipCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REMOVE_ONEQUIPCOLLECTIONCHANGED_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::System::UInt32>* get__EquipIDs()
		{
			return ((::Sofa::Core::ObservableList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET__EQUIPIDS_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_ROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_SET_POSINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_GET_EQUIPIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* RPG_Client_IGridFightRefTraitLayerRoleInput_get_EquipIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_RPG_CLIENT_IGRIDFIGHTREFTRAITLAYERROLEINPUT_GET_EQUIPIDS_OFFSET))(this);
		}

		::System::Void AddEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_ADDEQUIP_OFFSET))(this, a1);
		}

		::System::Void ClearEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_CLEAREQUIP_OFFSET))(this);
		}

		::System::Void RemoveEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REMOVEEQUIP_OFFSET))(this, a1);
		}

		::System::Void ReplaceEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_REPLACEEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE_HASEQUIP_OFFSET))(this, a1);
		}

		::System::Void _OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONROLE__ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}
	};
}
