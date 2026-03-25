#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_378A705F2302A8CA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1654E8D0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1654E7C0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_0309B5E87879B7E3_OFFSET UNITYSDK_OFFSET(0x1654ECB0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x1654E7D0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_20B0D68539B6687E_OFFSET UNITYSDK_OFFSET(0x1654EB40)
#define CLASS_1_378A705F2302A8CA_METHOD_1_725A39F9CC9D54F4_OFFSET UNITYSDK_OFFSET(0x1654E8C0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_85712EAD64EB2851_OFFSET UNITYSDK_OFFSET(0x1654ED50)
#define CLASS_1_378A705F2302A8CA_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1654E770)
#define CLASS_1_378A705F2302A8CA_METHOD_1_C0BF192AE784454F_OFFSET UNITYSDK_OFFSET(0x1654E710)
#define CLASS_1_378A705F2302A8CA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1654EB00)
#define CLASS_1_378A705F2302A8CA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1654EAC0)
#define CLASS_1_378A705F2302A8CA_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x1654E9A0)
#define CLASS_1_378A705F2302A8CA_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1654E8E0)
#define CLASS_1_378A705F2302A8CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1654E8F0)

inline static constexpr unsigned int Class_1_378A705F2302A8CA_TypeDefinitionIndex = 32114;

class Class_1_378A705F2302A8CA : public ::System::Object
{
public:
	::System::IO::MemoryStream* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::UInt32 _Offset_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_C0BF192AE784454F()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_C0BF192AE784454F_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_1_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_184AE6D5B1216FA2_OFFSET))(this);
	}

	::RPG::Client::SectionType Method_1_725A39F9CC9D54F4()
	{
		return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_725A39F9CC9D54F4_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_SET_OFFSET_OFFSET))(this, value);
	}

	::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_20B0D68539B6687E(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_20B0D68539B6687E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0309B5E87879B7E3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_0309B5E87879B7E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_85712EAD64EB2851(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_378A705F2302A8CA_METHOD_1_85712EAD64EB2851_OFFSET))(this, a1);
	}
};
