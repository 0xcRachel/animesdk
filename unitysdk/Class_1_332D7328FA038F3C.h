#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_332D7328FA038F3C_Class_1_5471DE95B98B5E61;
class SerializedWarmupPSO;
namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class WebException; }

#define CLASS_1_332D7328FA038F3C_METHOD_1_1981C2CE7A328A58_1_OFFSET UNITYSDK_OFFSET(0x8D835F0)
#define CLASS_1_332D7328FA038F3C_METHOD_1_1981C2CE7A328A58_OFFSET UNITYSDK_OFFSET(0x8D83560)
#define CLASS_1_332D7328FA038F3C_METHOD_1_1C3E4592CD4F0AF1_OFFSET UNITYSDK_OFFSET(0x8D83FD0)
#define CLASS_1_332D7328FA038F3C_METHOD_1_1FAEC01A09668ED7_OFFSET UNITYSDK_OFFSET(0x8D84230)
#define CLASS_1_332D7328FA038F3C_METHOD_1_222B23B7C2F12EEF_OFFSET UNITYSDK_OFFSET(0x8D83680)
#define CLASS_1_332D7328FA038F3C_METHOD_1_2F452FB11383B174_OFFSET UNITYSDK_OFFSET(0x8D83E60)
#define CLASS_1_332D7328FA038F3C_METHOD_1_873158A6B2EDE4B2_OFFSET UNITYSDK_OFFSET(0x8D83B90)
#define CLASS_1_332D7328FA038F3C_METHOD_1_C801DF1C310101E9_OFFSET UNITYSDK_OFFSET(0x8D83740)
#define CLASS_1_332D7328FA038F3C_METHOD_1_CE99EE77B329EEFB_OFFSET UNITYSDK_OFFSET(0x8D840E0)
#define CLASS_1_332D7328FA038F3C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D84770)
#define CLASS_1_332D7328FA038F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D84760)

inline static constexpr unsigned int Class_1_332D7328FA038F3C_TypeDefinitionIndex = 38269;

class Class_1_332D7328FA038F3C : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_332D7328FA038F3C_TypeDefinitionIndex)->GetStaticField(0x12BF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_1981C2CE7A328A58_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_1981C2CE7A328A58_1_OFFSET))();
	}

	::System::Net::HttpWebResponse* Method_1_222B23B7C2F12EEF(::System::Net::HttpWebRequest* a1)
	{
		return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_222B23B7C2F12EEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C801DF1C310101E9(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_C801DF1C310101E9_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_CE99EE77B329EEFB(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_CE99EE77B329EEFB_OFFSET))(this, a1, a2);
	}

	::System::Net::HttpWebRequest* Method_1_1FAEC01A09668ED7(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_1FAEC01A09668ED7_OFFSET))(this, a1, a2, a3);
	}

	::System::Net::HttpWebRequest* Method_1_873158A6B2EDE4B2(::System::String* a1, ::Class_1_332D7328FA038F3C_Class_1_5471DE95B98B5E61* a2)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::Class_1_332D7328FA038F3C_Class_1_5471DE95B98B5E61*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_873158A6B2EDE4B2_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_2F452FB11383B174(::System::Net::HttpWebResponse* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_2F452FB11383B174_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C3E4592CD4F0AF1(::System::String* a1, ::System::Net::WebException* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_METHOD_1_1C3E4592CD4F0AF1_OFFSET))(this, a1, a2);
	}
};
