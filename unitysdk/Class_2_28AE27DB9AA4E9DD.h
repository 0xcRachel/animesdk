#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_28AE27DB9AA4E9DD_LuaDataInvokeType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_33CC5447741F7959;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaFunction; }

#define CLASS_2_28AE27DB9AA4E9DD_GET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x99F5770)
#define CLASS_2_28AE27DB9AA4E9DD_INIT_OFFSET UNITYSDK_OFFSET(0x99F3F60)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x99F5760)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_1A6CD0346FC5F99D_OFFSET UNITYSDK_OFFSET(0x99F5220)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_3A04F694896F0AC1_OFFSET UNITYSDK_OFFSET(0x99F55E0)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_5396021F46DB7C28_OFFSET UNITYSDK_OFFSET(0x99F4A90)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_8506E6586B040BAA_OFFSET UNITYSDK_OFFSET(0x99F5680)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0x99F4110)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99F5640)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x99F4260)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x99F5470)
#define CLASS_2_28AE27DB9AA4E9DD_METHOD_2_DD271902C4314EB8_OFFSET UNITYSDK_OFFSET(0x99F4090)
#define CLASS_2_28AE27DB9AA4E9DD_SET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x99F5780)
#define CLASS_2_28AE27DB9AA4E9DD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F3FE0)
#define CLASS_2_28AE27DB9AA4E9DD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F4020)
#define CLASS_2_28AE27DB9AA4E9DD__CTOR_OFFSET UNITYSDK_OFFSET(0x99F3EC0)
#define CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x99F5790)
#define CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F5820)
#define CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F5880)

inline static constexpr unsigned int Class_2_28AE27DB9AA4E9DD_TypeDefinitionIndex = 53423;

class Class_2_28AE27DB9AA4E9DD : public ::RPG::Client::BaseModule
{
public:
	::XLua::LuaFunction* Field_2_5; // 0x10
	::Il2CppArray<::System::Byte>* Field_2_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_2_28AE27DB9AA4E9DD_LuaDataInvokeType, ::XLua::LuaFunction*>* Field_2_4; // 0x20
	::System::Boolean _IsLuaRunEnable_k__BackingField; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::System::Single Field_2_1; // 0x30
	::System::UInt32 Field_2_2; // 0x34
	::System::Single Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DD271902C4314EB8(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_DD271902C4314EB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_2_979F687A22CC9A41(::Class_1_33CC5447741F7959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33CC5447741F7959*))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A6CD0346FC5F99D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_1A6CD0346FC5F99D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_3A04F694896F0AC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_3A04F694896F0AC1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_5396021F46DB7C28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_5396021F46DB7C28_OFFSET))(this);
	}

	::System::Void Method_2_8506E6586B040BAA(::Class_2_28AE27DB9AA4E9DD_LuaDataInvokeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_28AE27DB9AA4E9DD_LuaDataInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_8506E6586B040BAA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean get_IsLuaRunEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_GET_ISLUARUNENABLE_OFFSET))(this);
	}

	::System::Void set_IsLuaRunEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD_SET_ISLUARUNENABLE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28AE27DB9AA4E9DD___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
