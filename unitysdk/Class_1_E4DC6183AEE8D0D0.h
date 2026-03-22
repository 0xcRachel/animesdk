#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41E1C18491ABFACE;
class Class_1_D39A50E5DCA95A6D;
namespace IFix::Core { class VirtualMachine; }
namespace RPG::Client { class ServerDispatchData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E4DC6183AEE8D0D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10EAD990)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x10EB0B20)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x10EB0B30)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_0BB5CF26D44BA0E6_OFFSET UNITYSDK_OFFSET(0x10EADF30)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_0D2D9B662F56EBBE_OFFSET UNITYSDK_OFFSET(0x10EAF920)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x10EB0AB0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10EAE470)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10EAFAA0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x10EAF2C0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_55CBDDF756DAED1D_OFFSET UNITYSDK_OFFSET(0x10EB00D0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_7174F28394B8BEBA_OFFSET UNITYSDK_OFFSET(0x10EAD9D0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_7EF7EEA8DB0D72CF_OFFSET UNITYSDK_OFFSET(0x10EAFED0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_856725C100935EB2_OFFSET UNITYSDK_OFFSET(0x10EAFB30)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x10EAE120)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_C64D856871F849EF_OFFSET UNITYSDK_OFFSET(0x10EAE0B0)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10EAD950)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_EF8CEE51D5F2162B_OFFSET UNITYSDK_OFFSET(0x10EADE50)
#define CLASS_1_E4DC6183AEE8D0D0_METHOD_1_FAA9AD6411FA76EE_OFFSET UNITYSDK_OFFSET(0x10EAE4B0)
#define CLASS_1_E4DC6183AEE8D0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x10EAD8F0)

inline static constexpr unsigned int Class_1_E4DC6183AEE8D0D0_TypeDefinitionIndex = 60013;

class Class_1_E4DC6183AEE8D0D0 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::RPG::Client::Promises::Promise* Field_1_8; // 0x10
	::Il2CppArray<::System::String*>* Field_1_4; // 0x18
	::Il2CppArray<::System::String*>* Field_1_5; // 0x20
	::Il2CppArray<::System::String*>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::IFix::Core::VirtualMachine*>* Field_1_7; // 0x38
	::Class_1_41E1C18491ABFACE* Field_1_10; // 0x40
	::System::UInt32 Field_1_0; // 0x48
	::System::Single Field_1_9; // 0x4C
	::System::UInt32 Field_1_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_7174F28394B8BEBA(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::System::Int64& a4)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_7174F28394B8BEBA_OFFSET))(a1, a2, a3, a4);
	}

	::System::String* Method_1_EF8CEE51D5F2162B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_EF8CEE51D5F2162B_OFFSET))(this);
	}

	::System::String* Method_1_0BB5CF26D44BA0E6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_0BB5CF26D44BA0E6_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_C64D856871F849EF(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_C64D856871F849EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::Boolean Method_1_FAA9AD6411FA76EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_FAA9AD6411FA76EE_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_0D2D9B662F56EBBE(::RPG::Client::ServerDispatchData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_0D2D9B662F56EBBE_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7EF7EEA8DB0D72CF(::RPG::Client::Promises::Promise* a1, ::RPG::Client::ServerDispatchData* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Promises::Promise*, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_7EF7EEA8DB0D72CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_856725C100935EB2(::RPG::Client::ServerDispatchData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_856725C100935EB2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_55CBDDF756DAED1D(::Class_1_D39A50E5DCA95A6D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D39A50E5DCA95A6D*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_55CBDDF756DAED1D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}
};
