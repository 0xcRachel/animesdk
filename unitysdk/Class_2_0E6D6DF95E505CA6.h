#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0E6D6DF95E505CA6_LuaDataInvokeType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_86AB4C0412B98D67;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaFunction; }

#define CLASS_2_0E6D6DF95E505CA6_GET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x12C6A2D0)
#define CLASS_2_0E6D6DF95E505CA6_INIT_OFFSET UNITYSDK_OFFSET(0x12C68AF0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_00240878C5E7C2ED_OFFSET UNITYSDK_OFFSET(0x12C69DB0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x12C6A2C0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_3A04F694896F0AC1_OFFSET UNITYSDK_OFFSET(0x12C6A140)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_5396021F46DB7C28_OFFSET UNITYSDK_OFFSET(0x12C69620)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_8506E6586B040BAA_OFFSET UNITYSDK_OFFSET(0x12C6A1E0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0x12C68CA0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C6A1A0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x12C68DF0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x12C69FD0)
#define CLASS_2_0E6D6DF95E505CA6_METHOD_2_DD271902C4314EB8_OFFSET UNITYSDK_OFFSET(0x12C68C20)
#define CLASS_2_0E6D6DF95E505CA6_SET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x12C6A2E0)
#define CLASS_2_0E6D6DF95E505CA6__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C68B70)
#define CLASS_2_0E6D6DF95E505CA6__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C68BB0)
#define CLASS_2_0E6D6DF95E505CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x12C68A50)
#define CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x12C6A2F0)
#define CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C6A380)
#define CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x12C6A3E0)

inline static constexpr unsigned int Class_2_0E6D6DF95E505CA6_TypeDefinitionIndex = 60567;

class Class_2_0E6D6DF95E505CA6 : public ::RPG::Client::BaseModule
{
public:
	::XLua::LuaFunction* Field_2_5; // 0x10
	::Il2CppArray<::System::Byte>* Field_2_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_2_0E6D6DF95E505CA6_LuaDataInvokeType, ::XLua::LuaFunction*>* Field_2_4; // 0x20
	::System::Single Field_2_1; // 0x28
	::System::UInt32 Field_2_2; // 0x2C
	::System::UInt32 Field_2_3; // 0x30
	::System::Boolean _IsLuaRunEnable_k__BackingField; // 0x34
	::System::Single Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DD271902C4314EB8(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_DD271902C4314EB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_2_979F687A22CC9A41(::Class_1_86AB4C0412B98D67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86AB4C0412B98D67*))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_2_00240878C5E7C2ED(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_00240878C5E7C2ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_3A04F694896F0AC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_3A04F694896F0AC1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_5396021F46DB7C28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_5396021F46DB7C28_OFFSET))(this);
	}

	::System::Void Method_2_8506E6586B040BAA(::Class_2_0E6D6DF95E505CA6_LuaDataInvokeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0E6D6DF95E505CA6_LuaDataInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_8506E6586B040BAA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean get_IsLuaRunEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_GET_ISLUARUNENABLE_OFFSET))(this);
	}

	::System::Void set_IsLuaRunEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6_SET_ISLUARUNENABLE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6D6DF95E505CA6___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
