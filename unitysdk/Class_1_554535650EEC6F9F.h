#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightGameFormation; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define CLASS_1_554535650EEC6F9F_ADD_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x154764D0)
#define CLASS_1_554535650EEC6F9F_ADD_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x154763D0)
#define CLASS_1_554535650EEC6F9F_GET__ITEMS_OFFSET UNITYSDK_OFFSET(0x154767A0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_0BDD1217ECB3CEA4_OFFSET UNITYSDK_OFFSET(0x15476FA0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_0D838987DE717DE3_OFFSET UNITYSDK_OFFSET(0x15477B20)
#define CLASS_1_554535650EEC6F9F_METHOD_1_1088DB2C3685103F_OFFSET UNITYSDK_OFFSET(0x154766A0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15476780)
#define CLASS_1_554535650EEC6F9F_METHOD_1_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x15476C50)
#define CLASS_1_554535650EEC6F9F_METHOD_1_1CDF14DD30271B41_OFFSET UNITYSDK_OFFSET(0x15477D50)
#define CLASS_1_554535650EEC6F9F_METHOD_1_23868C4F4B4610C9_OFFSET UNITYSDK_OFFSET(0x15476D10)
#define CLASS_1_554535650EEC6F9F_METHOD_1_262BDF1728257C71_OFFSET UNITYSDK_OFFSET(0x154766C0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15476590)
#define CLASS_1_554535650EEC6F9F_METHOD_1_3E3A9561557377CB_OFFSET UNITYSDK_OFFSET(0x15477890)
#define CLASS_1_554535650EEC6F9F_METHOD_1_43B11A4C9214A4F0_OFFSET UNITYSDK_OFFSET(0x15476E00)
#define CLASS_1_554535650EEC6F9F_METHOD_1_5CA2D599560DD48C_OFFSET UNITYSDK_OFFSET(0x15476620)
#define CLASS_1_554535650EEC6F9F_METHOD_1_5ED193DA02F7AFF9_OFFSET UNITYSDK_OFFSET(0x15476930)
#define CLASS_1_554535650EEC6F9F_METHOD_1_8EDD86785C3E184A_OFFSET UNITYSDK_OFFSET(0x15477C40)
#define CLASS_1_554535650EEC6F9F_METHOD_1_90B7ADA4910E558E_OFFSET UNITYSDK_OFFSET(0x15476AE0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_A6DF288A56F93066_OFFSET UNITYSDK_OFFSET(0x154779B0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_C8631348977A26D6_OFFSET UNITYSDK_OFFSET(0x15477400)
#define CLASS_1_554535650EEC6F9F_METHOD_1_CC474528D01CF2C3_OFFSET UNITYSDK_OFFSET(0x15477240)
#define CLASS_1_554535650EEC6F9F_METHOD_1_D137D6968F1F29B5_OFFSET UNITYSDK_OFFSET(0x154777B0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x15477CD0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_DF59343C750CF97F_OFFSET UNITYSDK_OFFSET(0x15477DD0)
#define CLASS_1_554535650EEC6F9F_METHOD_1_E9853137D58A3625_OFFSET UNITYSDK_OFFSET(0x15476840)
#define CLASS_1_554535650EEC6F9F_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x15476530)
#define CLASS_1_554535650EEC6F9F_REMOVE_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x15476450)
#define CLASS_1_554535650EEC6F9F__CTOR_OFFSET UNITYSDK_OFFSET(0x154767B0)

inline static constexpr unsigned int Class_1_554535650EEC6F9F_TypeDefinitionIndex = 60469;

class Class_1_554535650EEC6F9F : public ::System::Object
{
public:
	::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* __Items_k__BackingField; // 0x10
	::RPG::Client::GridFightGameFormation* Field_1_1; // 0x18
	::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnRoleCollectionChanged; // 0x20
	::System::ComponentModel::PropertyChangedEventHandler* OnRolePropertyChanged; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_ADD_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_REMOVE_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_ADD_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>* Method_1_5CA2D599560DD48C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_5CA2D599560DD48C_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_1088DB2C3685103F_OFFSET))(this);
	}

	::System::Void Method_1_262BDF1728257C71(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_262BDF1728257C71_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* get__Items()
	{
		return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_GET__ITEMS_OFFSET))(this);
	}

	::RPG::Client::GridFightFormationRole* Method_1_E9853137D58A3625(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_E9853137D58A3625_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_5ED193DA02F7AFF9(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_5ED193DA02F7AFF9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightFormationRole* Method_1_90B7ADA4910E558E(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_90B7ADA4910E558E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_23868C4F4B4610C9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_23868C4F4B4610C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_43B11A4C9214A4F0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_43B11A4C9214A4F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDD1217ECB3CEA4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_0BDD1217ECB3CEA4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC474528D01CF2C3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_CC474528D01CF2C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8631348977A26D6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_C8631348977A26D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D137D6968F1F29B5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_D137D6968F1F29B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E3A9561557377CB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_3E3A9561557377CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6DF288A56F93066(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_A6DF288A56F93066_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0D838987DE717DE3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_0D838987DE717DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8EDD86785C3E184A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_8EDD86785C3E184A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_1CDF14DD30271B41(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_1CDF14DD30271B41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF59343C750CF97F(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F_METHOD_1_DF59343C750CF97F_OFFSET))(this, a1, a2);
	}
};
