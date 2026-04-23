#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightGameFormation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define CLASS_1_3CCCD675D7774146_ADD_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xECD05C0)
#define CLASS_1_3CCCD675D7774146_ADD_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xECD0500)
#define CLASS_1_3CCCD675D7774146_GET__ITEMS_OFFSET UNITYSDK_OFFSET(0xECD0920)
#define CLASS_1_3CCCD675D7774146_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xECD06C0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_0EEAC7D7F4204A9A_OFFSET UNITYSDK_OFFSET(0xECD1D50)
#define CLASS_1_3CCCD675D7774146_METHOD_1_1088DB2C3685103F_OFFSET UNITYSDK_OFFSET(0xECD0820)
#define CLASS_1_3CCCD675D7774146_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xECD0900)
#define CLASS_1_3CCCD675D7774146_METHOD_1_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0xECD0E00)
#define CLASS_1_3CCCD675D7774146_METHOD_1_262BDF1728257C71_OFFSET UNITYSDK_OFFSET(0xECD0840)
#define CLASS_1_3CCCD675D7774146_METHOD_1_3FD121E637FAC302_OFFSET UNITYSDK_OFFSET(0xECD1A40)
#define CLASS_1_3CCCD675D7774146_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xECD1F40)
#define CLASS_1_3CCCD675D7774146_METHOD_1_52B2BEC4DAA57BD2_OFFSET UNITYSDK_OFFSET(0xECD0EF0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_5D4342EAC788B6F1_OFFSET UNITYSDK_OFFSET(0xECD1FC0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_6B79D25FA6D1A380_OFFSET UNITYSDK_OFFSET(0xECD0FD0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_6FE708D1913BE105_OFFSET UNITYSDK_OFFSET(0xECD0C60)
#define CLASS_1_3CCCD675D7774146_METHOD_1_8E282D24D0C25368_OFFSET UNITYSDK_OFFSET(0xECD0770)
#define CLASS_1_3CCCD675D7774146_METHOD_1_93F639576DE98AEE_OFFSET UNITYSDK_OFFSET(0xECD0A80)
#define CLASS_1_3CCCD675D7774146_METHOD_1_A02E9BB552BEF6F7_OFFSET UNITYSDK_OFFSET(0xECD09D0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_A6DF288A56F93066_OFFSET UNITYSDK_OFFSET(0xECD1BA0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_B2175B44BA5C033B_OFFSET UNITYSDK_OFFSET(0xECD2030)
#define CLASS_1_3CCCD675D7774146_METHOD_1_B73C4590979F2F2D_OFFSET UNITYSDK_OFFSET(0xECD11B0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_C0D0A83DEFAA5D9C_OFFSET UNITYSDK_OFFSET(0xECD1EB0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_C8631348977A26D6_OFFSET UNITYSDK_OFFSET(0xECD15B0)
#define CLASS_1_3CCCD675D7774146_METHOD_1_D137D6968F1F29B5_OFFSET UNITYSDK_OFFSET(0xECD1960)
#define CLASS_1_3CCCD675D7774146_METHOD_1_F49FB72206920B59_OFFSET UNITYSDK_OFFSET(0xECD1440)
#define CLASS_1_3CCCD675D7774146_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xECD0640)
#define CLASS_1_3CCCD675D7774146_REMOVE_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xECD0560)
#define CLASS_1_3CCCD675D7774146__CTOR_OFFSET UNITYSDK_OFFSET(0xECD0930)

inline static constexpr unsigned int Class_1_3CCCD675D7774146_TypeDefinitionIndex = 59534;

class Class_1_3CCCD675D7774146 : public ::System::Object
{
public:
	::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnRoleCollectionChanged; // 0x10
	::RPG::Client::GridFightGameFormation* Field_1_3; // 0x18
	::Class_1_38F81D6A5D792EE0<::System::UInt32, ::Class_2_181F61C600ECA68B*>* __Items_k__BackingField; // 0x20
	::System::ComponentModel::PropertyChangedEventHandler* OnRolePropertyChanged; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_ADD_ONROLEPROPERTYCHANGED_OFFSET))(this, value);
	}

	::System::Void remove_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_REMOVE_ONROLEPROPERTYCHANGED_OFFSET))(this, value);
	}

	::System::Void add_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_ADD_ONROLECOLLECTIONCHANGED_OFFSET))(this, value);
	}

	::System::Void remove_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET))(this, value);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_181F61C600ECA68B*>* Method_1_8E282D24D0C25368()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_181F61C600ECA68B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_8E282D24D0C25368_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_1088DB2C3685103F_OFFSET))(this);
	}

	::System::Void Method_1_262BDF1728257C71(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_262BDF1728257C71_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Class_1_38F81D6A5D792EE0<::System::UInt32, ::Class_2_181F61C600ECA68B*>* get__Items()
	{
		return ((::Class_1_38F81D6A5D792EE0<::System::UInt32, ::Class_2_181F61C600ECA68B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_GET__ITEMS_OFFSET))(this);
	}

	::Class_2_181F61C600ECA68B* Method_1_A02E9BB552BEF6F7(::System::UInt32 a1)
	{
		return ((::Class_2_181F61C600ECA68B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_A02E9BB552BEF6F7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_93F639576DE98AEE(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_93F639576DE98AEE_OFFSET))(this, a1);
	}

	::Class_2_181F61C600ECA68B* Method_1_6FE708D1913BE105(::System::UInt32 a1)
	{
		return ((::Class_2_181F61C600ECA68B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_6FE708D1913BE105_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_1FF0B87A9F818945_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_52B2BEC4DAA57BD2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_52B2BEC4DAA57BD2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B79D25FA6D1A380(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_6B79D25FA6D1A380_OFFSET))(this, a1);
	}

	::System::Void Method_1_B73C4590979F2F2D(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_B73C4590979F2F2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F49FB72206920B59(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_F49FB72206920B59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8631348977A26D6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_C8631348977A26D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D137D6968F1F29B5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_D137D6968F1F29B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3FD121E637FAC302(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_3FD121E637FAC302_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6DF288A56F93066(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_A6DF288A56F93066_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0EEAC7D7F4204A9A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_0EEAC7D7F4204A9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C0D0A83DEFAA5D9C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_C0D0A83DEFAA5D9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_5D4342EAC788B6F1(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_5D4342EAC788B6F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2175B44BA5C033B(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146_METHOD_1_B2175B44BA5C033B_OFFSET))(this, a1, a2);
	}
};
