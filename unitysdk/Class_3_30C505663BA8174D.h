#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_3_1E72A78E8E12A198;
namespace RPG::Client::MVVM::Service { class LimaoNewsPostService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_30C505663BA8174D_GET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x84A8C90)
#define CLASS_3_30C505663BA8174D_GET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x84A8CB0)
#define CLASS_3_30C505663BA8174D_METHOD_3_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x84A8530)
#define CLASS_3_30C505663BA8174D_METHOD_3_64EBEF26471EC26C_OFFSET UNITYSDK_OFFSET(0x84A8430)
#define CLASS_3_30C505663BA8174D_METHOD_3_8AB67EADA91947EF_OFFSET UNITYSDK_OFFSET(0x84A84B0)
#define CLASS_3_30C505663BA8174D_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x84A8C00)
#define CLASS_3_30C505663BA8174D_METHOD_3_BFC96F21B49EA128_OFFSET UNITYSDK_OFFSET(0x84A8690)
#define CLASS_3_30C505663BA8174D_METHOD_3_C7EE6D1A5A18F99F_OFFSET UNITYSDK_OFFSET(0x84A8920)
#define CLASS_3_30C505663BA8174D_METHOD_3_DC1A4A15DB18B077_OFFSET UNITYSDK_OFFSET(0x84A82D0)
#define CLASS_3_30C505663BA8174D_SET_ALLCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x84A8CA0)
#define CLASS_3_30C505663BA8174D_SET_SHOWCOMMENTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x84A8CC0)
#define CLASS_3_30C505663BA8174D__CTOR_OFFSET UNITYSDK_OFFSET(0x84A83A0)

inline static constexpr unsigned int Class_3_30C505663BA8174D_TypeDefinitionIndex = 59183;

class Class_3_30C505663BA8174D : public ::Class_2_3DE15EA7F53A0550
{
public:
	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* _ShowCommentViewModels_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* _AllCommentViewModels_k__BackingField; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsPostService* Field_3_3; // 0x28
	::System::UInt32 Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D__CTOR_OFFSET))(this);
	}

	static ::Class_3_30C505663BA8174D* Method_3_DC1A4A15DB18B077()
	{
		return ((::Class_3_30C505663BA8174D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_DC1A4A15DB18B077_OFFSET))();
	}

	::System::Void Method_3_64EBEF26471EC26C(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_64EBEF26471EC26C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_BFC96F21B49EA128()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_BFC96F21B49EA128_OFFSET))(this);
	}

	::System::Void Method_3_8AB67EADA91947EF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_8AB67EADA91947EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::Class_3_1E72A78E8E12A198* Method_3_C7EE6D1A5A18F99F(::System::UInt32 a1)
	{
		return ((::Class_3_1E72A78E8E12A198*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_C7EE6D1A5A18F99F_OFFSET))(this, a1);
	}

	::System::Void Method_3_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_METHOD_3_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* get_AllCommentViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_GET_ALLCOMMENTVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_AllCommentViewModels(::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_SET_ALLCOMMENTVIEWMODELS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* get_ShowCommentViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_GET_SHOWCOMMENTVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_ShowCommentViewModels(::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*))((::PBYTE)hIl2Cpp + CLASS_3_30C505663BA8174D_SET_SHOWCOMMENTVIEWMODELS_OFFSET))(this, value);
	}
};
