#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_865;
class Class_1_02D30900317D93FD;
class Class_1_83D980B81C9B9AFA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3D14052A5904019_1_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x8B8C3A0)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_3DC36319CC97F5E9_OFFSET UNITYSDK_OFFSET(0x8B8BC90)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x8B8BDD0)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x8B8BD40)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_CE03E91929C2E711_OFFSET UNITYSDK_OFFSET(0x8B8BED0)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x8B8BE60)
#define CLASS_1_D3D14052A5904019_1_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x8B8C3B0)
#define CLASS_1_D3D14052A5904019_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8BD30)

inline static constexpr unsigned int Class_1_D3D14052A5904019_1_TypeDefinitionIndex = 59103;

class Class_1_D3D14052A5904019_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* _ItemDatas_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_D3D14052A5904019_1* Method_1_3DC36319CC97F5E9(::Class_1_02D30900317D93FD* a1)
	{
		return ((::Class_1_D3D14052A5904019_1*(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_3DC36319CC97F5E9_OFFSET))(a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_865*>* Method_1_CE03E91929C2E711(::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_865*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_CE03E91929C2E711_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* get_ItemDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_GET_ITEMDATAS_OFFSET))(this);
	}

	::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_SET_ITEMDATAS_OFFSET))(this, value);
	}
};
