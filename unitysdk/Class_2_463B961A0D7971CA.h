#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_689;
class Class_1_F155723455666643;
namespace RPG::Client { template <typename T> class Pref_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_463B961A0D7971CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB9950)
#define CLASS_2_463B961A0D7971CA_GET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x10CBAA30)
#define CLASS_2_463B961A0D7971CA_INIT_OFFSET UNITYSDK_OFFSET(0x10CB94A0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10CB95F0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10CBA0C0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_2E71D5AC3AF30784_OFFSET UNITYSDK_OFFSET(0x10CB9DB0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x10CBA970)
#define CLASS_2_463B961A0D7971CA_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x10CBA4C0)
#define CLASS_2_463B961A0D7971CA_METHOD_2_6E544AD3890B7EF8_OFFSET UNITYSDK_OFFSET(0x10CBA780)
#define CLASS_2_463B961A0D7971CA_METHOD_2_70595BBE3E0E4F2A_OFFSET UNITYSDK_OFFSET(0x10CBA920)
#define CLASS_2_463B961A0D7971CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10CBA730)
#define CLASS_2_463B961A0D7971CA_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x10CB9D20)
#define CLASS_2_463B961A0D7971CA_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x10CB9A90)
#define CLASS_2_463B961A0D7971CA_SET_ISALLDATALOADED_OFFSET UNITYSDK_OFFSET(0x10CBAA40)
#define CLASS_2_463B961A0D7971CA__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x10CB9B50)
#define CLASS_2_463B961A0D7971CA__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x10CB9C00)
#define CLASS_2_463B961A0D7971CA__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB9360)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CBAAE0)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10CBAA50)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x10CBAAF0)
#define CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x10CBAB50)

inline static constexpr unsigned int Class_2_463B961A0D7971CA_TypeDefinitionIndex = 53859;

class Class_2_463B961A0D7971CA : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_F155723455666643*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_689*>* Field_2_3; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean _IsAllDataLoaded_k__BackingField; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E71D5AC3AF30784(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_2E71D5AC3AF30784_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_F155723455666643* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F155723455666643*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6E544AD3890B7EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_6E544AD3890B7EF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_70595BBE3E0E4F2A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_70595BBE3E0E4F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_689* Method_2_30BE3523CF9B739E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_689*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_METHOD_2_30BE3523CF9B739E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAllDataLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_GET_ISALLDATALOADED_OFFSET))(this);
	}

	::System::Void set_IsAllDataLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA_SET_ISALLDATALOADED_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463B961A0D7971CA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
