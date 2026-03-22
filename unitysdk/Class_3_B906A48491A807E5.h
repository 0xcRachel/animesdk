#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/System/Guid.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
namespace RPG::Client::MVVM::Service { class LimaoNewsTutorialService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace System { class String; }

#define CLASS_3_B906A48491A807E5_GET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0xA6C7D40)
#define CLASS_3_B906A48491A807E5_GET_GUID_OFFSET UNITYSDK_OFFSET(0xA6C7D60)
#define CLASS_3_B906A48491A807E5_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xA6C7CE0)
#define CLASS_3_B906A48491A807E5_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xA6C7CC0)
#define CLASS_3_B906A48491A807E5_GET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0xA6C7D00)
#define CLASS_3_B906A48491A807E5_GET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA6C7D20)
#define CLASS_3_B906A48491A807E5_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xA6C7520)
#define CLASS_3_B906A48491A807E5_METHOD_3_82A29C4DF8476199_OFFSET UNITYSDK_OFFSET(0xA6C7570)
#define CLASS_3_B906A48491A807E5_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xA6C74A0)
#define CLASS_3_B906A48491A807E5_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xA6C7AA0)
#define CLASS_3_B906A48491A807E5_SET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0xA6C7D50)
#define CLASS_3_B906A48491A807E5_SET_GUID_OFFSET UNITYSDK_OFFSET(0xA6C7D70)
#define CLASS_3_B906A48491A807E5_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xA6C7CF0)
#define CLASS_3_B906A48491A807E5_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xA6C7CD0)
#define CLASS_3_B906A48491A807E5_SET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0xA6C7D10)
#define CLASS_3_B906A48491A807E5_SET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA6C7D30)
#define CLASS_3_B906A48491A807E5__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C7390)
#define CLASS_3_B906A48491A807E5___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xA6C7D80)
#define CLASS_3_B906A48491A807E5___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xA6C7E30)
#define CLASS_3_B906A48491A807E5___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0xA6C7E40)

inline static constexpr unsigned int Class_3_B906A48491A807E5_TypeDefinitionIndex = 59218;

class Class_3_B906A48491A807E5 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x18
	::Class_1_2FDE33CCAE591AA8* _OnBtnGo_k__BackingField; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsTutorialService* Field_3_6; // 0x28
	::Class_1_CB8B5340883CE90A* Field_3_7; // 0x30
	::Class_1_2FDE33CCAE591AA8* _OnBtnImage_k__BackingField; // 0x38
	::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* _PostViewModel_k__BackingField; // 0x40
	::System::UInt32 _DefaultCommentID_k__BackingField; // 0x48
	::System::Guid _Guid_k__BackingField; // 0x4C

	::System::Void _ctor(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* a1, ::Class_1_CB8B5340883CE90A* a2, ::RPG::Client::MVVM::Service::LimaoNewsTutorialService* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*, ::Class_1_CB8B5340883CE90A*, ::RPG::Client::MVVM::Service::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::String* Method_3_82A29C4DF8476199()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_METHOD_3_82A29C4DF8476199_OFFSET))(this);
	}

	::System::Void Method_3_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnGo()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_ONBTNGO_OFFSET))(this);
	}

	::System::Void set_OnBtnGo(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_ONBTNGO_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnImage()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_ONBTNIMAGE_OFFSET))(this);
	}

	::System::Void set_OnBtnImage(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_ONBTNIMAGE_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* get_PostViewModel()
	{
		return ((::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_POSTVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_PostViewModel(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_POSTVIEWMODEL_OFFSET))(this, value);
	}

	::System::UInt32 get_DefaultCommentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_DEFAULTCOMMENTID_OFFSET))(this);
	}

	::System::Void set_DefaultCommentID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_DEFAULTCOMMENTID_OFFSET))(this, value);
	}

	::System::Guid get_Guid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_GET_GUID_OFFSET))(this);
	}

	::System::Void set_Guid(::System::Guid value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5_SET_GUID_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5___CTOR_B__0_0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5___CTOR_B__0_1_OFFSET))(this);
	}

	::System::Void __ctor_b__0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B906A48491A807E5___CTOR_B__0_2_OFFSET))(this);
	}
};
