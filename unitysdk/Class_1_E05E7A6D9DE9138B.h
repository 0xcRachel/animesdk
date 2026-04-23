#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xD1EF030)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_0F3D59CED568B39A_OFFSET UNITYSDK_OFFSET(0xD1EE6F0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_34F7947C923561B2_OFFSET UNITYSDK_OFFSET(0xD1EE950)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xD1EE8E0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xD1EEEA0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_52C2D63BCA8D83A1_OFFSET UNITYSDK_OFFSET(0xD1EDFF0)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xD1EEB00)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xD1EEC90)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_EFB5322CAF695953_OFFSET UNITYSDK_OFFSET(0xD1EE570)
#define CLASS_1_E05E7A6D9DE9138B_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0xD1EEA70)
#define CLASS_1_E05E7A6D9DE9138B__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1EF390)
#define CLASS_1_E05E7A6D9DE9138B__CTOR_OFFSET UNITYSDK_OFFSET(0xD1EF110)

inline static constexpr unsigned int Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex = 55282;

class Class_1_E05E7A6D9DE9138B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex)->GetStaticField(0x98C0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E05E7A6D9DE9138B_TypeDefinitionIndex)->GetStaticField(0x98C4);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Object*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::UnityEngine::Object*>*>* Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_52C2D63BCA8D83A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_52C2D63BCA8D83A1_OFFSET))(this);
	}

	::System::Void Method_1_EFB5322CAF695953(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_EFB5322CAF695953_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F3D59CED568B39A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_0F3D59CED568B39A_OFFSET))(this, a1);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_34F7947C923561B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_34F7947C923561B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05E7A6D9DE9138B_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}
};
