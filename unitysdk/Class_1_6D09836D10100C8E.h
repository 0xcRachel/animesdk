#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_47;
class Class_0_16E4307DCC419505_49;

#define CLASS_1_6D09836D10100C8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E3D3F0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_052DB1D67985B32A_OFFSET UNITYSDK_OFFSET(0x15E3D580)
#define CLASS_1_6D09836D10100C8E_METHOD_1_05F5F71A74353C29_OFFSET UNITYSDK_OFFSET(0x15E3E3E0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_31AB3AE6F682FF67_OFFSET UNITYSDK_OFFSET(0x15E3EFD0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_4AA6AE52FDA2F545_OFFSET UNITYSDK_OFFSET(0x15E3DF80)
#define CLASS_1_6D09836D10100C8E_METHOD_1_6B24B69257E45CD5_OFFSET UNITYSDK_OFFSET(0x15E3F860)
#define CLASS_1_6D09836D10100C8E_METHOD_1_85C7F3F72F8137A0_OFFSET UNITYSDK_OFFSET(0x15E3F230)
#define CLASS_1_6D09836D10100C8E_METHOD_1_C70EECC0DFEDC57D_OFFSET UNITYSDK_OFFSET(0x15E3E760)
#define CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x15E3D3E0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15E3D3D0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_CB5EF545776D6292_1_OFFSET UNITYSDK_OFFSET(0x15E41530)
#define CLASS_1_6D09836D10100C8E_METHOD_1_CB5EF545776D6292_OFFSET UNITYSDK_OFFSET(0x15E41090)
#define CLASS_1_6D09836D10100C8E_METHOD_1_CE39B53D27CCE5BC_OFFSET UNITYSDK_OFFSET(0x15E40BB0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_D185759B0233B738_OFFSET UNITYSDK_OFFSET(0x15E3DAD0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_DDEAA67B7FA0D238_OFFSET UNITYSDK_OFFSET(0x15E3EC60)
#define CLASS_1_6D09836D10100C8E_METHOD_1_F2036561F2A2A055_OFFSET UNITYSDK_OFFSET(0x15E3FFA0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_FD251C97360D88CB_OFFSET UNITYSDK_OFFSET(0x15E40650)
#define CLASS_1_6D09836D10100C8E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E28560)

inline static constexpr unsigned int Class_1_6D09836D10100C8E_TypeDefinitionIndex = 31175;

class Class_1_6D09836D10100C8E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_49* Field_1_7; // 0x10
	::Class_0_16E4307DCC419505_47* Field_1_3; // 0x18
	::Class_0_16E4307DCC419505_49* Field_1_6; // 0x20
	::Class_0_16E4307DCC419505_47* Field_1_2; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Int32 Field_1_4; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor(::Class_0_16E4307DCC419505_47* a1, ::Class_0_16E4307DCC419505_47* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_47*, ::Class_0_16E4307DCC419505_47*))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_052DB1D67985B32A(::System::Int32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_052DB1D67985B32A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D185759B0233B738(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3, ::RPG::Client::CachedAssetLogicType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_D185759B0233B738_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4AA6AE52FDA2F545(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_4AA6AE52FDA2F545_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_05F5F71A74353C29(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_05F5F71A74353C29_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_C70EECC0DFEDC57D(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_C70EECC0DFEDC57D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DDEAA67B7FA0D238(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_DDEAA67B7FA0D238_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_31AB3AE6F682FF67(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_31AB3AE6F682FF67_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_85C7F3F72F8137A0(::System::UInt64 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_85C7F3F72F8137A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6B24B69257E45CD5(::System::UInt64 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_6B24B69257E45CD5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F2036561F2A2A055(::System::UInt64 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_F2036561F2A2A055_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_FD251C97360D88CB(::System::Int32 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_FD251C97360D88CB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_CE39B53D27CCE5BC(::System::Int32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_CE39B53D27CCE5BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CB5EF545776D6292(::System::Int32 a1, ::Class_0_16E4307DCC419505_47*& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_47*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_CB5EF545776D6292_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_CB5EF545776D6292_1(::System::Int32 a1, ::Class_0_16E4307DCC419505_47*& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_47*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_CB5EF545776D6292_1_OFFSET))(this, a1, a2, a3);
	}
};
