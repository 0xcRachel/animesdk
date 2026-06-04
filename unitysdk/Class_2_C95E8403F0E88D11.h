#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_C95E8403F0E88D11_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15534190)
#define CLASS_2_C95E8403F0E88D11_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x155341B0)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x155341C0)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x155345D0)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15534570)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15534440)
#define CLASS_2_C95E8403F0E88D11_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x15534330)
#define CLASS_2_C95E8403F0E88D11_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x155341A0)
#define CLASS_2_C95E8403F0E88D11__CTOR_OFFSET UNITYSDK_OFFSET(0x155344E0)
#define CLASS_2_C95E8403F0E88D11__ONBIND_OFFSET UNITYSDK_OFFSET(0x15534130)
#define CLASS_2_C95E8403F0E88D11___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x15534510)

inline static constexpr unsigned int Class_2_C95E8403F0E88D11_TypeDefinitionIndex = 66742;

class Class_2_C95E8403F0E88D11 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Button* Field_2_2; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x68
	::System::Int32 _Index_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C95E8403F0E88D11_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
