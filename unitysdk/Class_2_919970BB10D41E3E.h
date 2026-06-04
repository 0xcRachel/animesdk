#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_919970BB10D41E3E_LuaDataInvokeType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_86AB4C0412B98D67;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaFunction; }

#define CLASS_2_919970BB10D41E3E_GET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x165A2260)
#define CLASS_2_919970BB10D41E3E_INIT_OFFSET UNITYSDK_OFFSET(0x165A0860)
#define CLASS_2_919970BB10D41E3E_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x165A2250)
#define CLASS_2_919970BB10D41E3E_METHOD_2_3A04F694896F0AC1_OFFSET UNITYSDK_OFFSET(0x165A20E0)
#define CLASS_2_919970BB10D41E3E_METHOD_2_4D478C256745A551_OFFSET UNITYSDK_OFFSET(0x165A1430)
#define CLASS_2_919970BB10D41E3E_METHOD_2_7C705713E396F0F9_OFFSET UNITYSDK_OFFSET(0x165A1D50)
#define CLASS_2_919970BB10D41E3E_METHOD_2_8506E6586B040BAA_OFFSET UNITYSDK_OFFSET(0x165A2180)
#define CLASS_2_919970BB10D41E3E_METHOD_2_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0x165A0A80)
#define CLASS_2_919970BB10D41E3E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165A2140)
#define CLASS_2_919970BB10D41E3E_METHOD_2_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x165A0BD0)
#define CLASS_2_919970BB10D41E3E_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x165A1F70)
#define CLASS_2_919970BB10D41E3E_METHOD_2_DD271902C4314EB8_OFFSET UNITYSDK_OFFSET(0x165A0A00)
#define CLASS_2_919970BB10D41E3E_SET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0x165A2270)
#define CLASS_2_919970BB10D41E3E__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x165A08E0)
#define CLASS_2_919970BB10D41E3E__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x165A0920)
#define CLASS_2_919970BB10D41E3E__CTOR_OFFSET UNITYSDK_OFFSET(0x165A07C0)
#define CLASS_2_919970BB10D41E3E___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x165A2280)
#define CLASS_2_919970BB10D41E3E___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x165A2300)
#define CLASS_2_919970BB10D41E3E___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x165A2360)

inline static constexpr unsigned int Class_2_919970BB10D41E3E_TypeDefinitionIndex = 61501;

class Class_2_919970BB10D41E3E : public ::RPG::Client::BaseModule
{
public:
	::Il2CppArray<::System::Byte>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_919970BB10D41E3E_LuaDataInvokeType, ::XLua::LuaFunction*>* Field_2_1; // 0x18
	::XLua::LuaFunction* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::System::UInt32 Field_2_4; // 0x2C
	::System::UInt32 Field_2_5; // 0x30
	::System::Boolean _IsLuaRunEnable_k__BackingField; // 0x34
	::System::Single Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_INIT_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DD271902C4314EB8(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_DD271902C4314EB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Method_2_979F687A22CC9A41(::Class_1_86AB4C0412B98D67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86AB4C0412B98D67*))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C705713E396F0F9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_7C705713E396F0F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_3A04F694896F0AC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_3A04F694896F0AC1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_4D478C256745A551()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_4D478C256745A551_OFFSET))(this);
	}

	::System::Void Method_2_8506E6586B040BAA(::Class_2_919970BB10D41E3E_LuaDataInvokeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_919970BB10D41E3E_LuaDataInvokeType))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_8506E6586B040BAA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean get_IsLuaRunEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_GET_ISLUARUNENABLE_OFFSET))(this);
	}

	::System::Void set_IsLuaRunEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E_SET_ISLUARUNENABLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_919970BB10D41E3E___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
