#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }
namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }

#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_ISMATCH_OFFSET UNITYSDK_OFFSET(0x13E4FCC0)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_LISTENERAVATARID_OFFSET UNITYSDK_OFFSET(0x13E4FCF0)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_SOURCELISTENERID_OFFSET UNITYSDK_OFFSET(0x13E4FD00)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_SPEAKERAVATARID_OFFSET UNITYSDK_OFFSET(0x13E4FCE0)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_40607E286A35C88C_OFFSET UNITYSDK_OFFSET(0x13E4EE80)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13E4F940)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_C4C3DB6ADFBC756E_OFFSET UNITYSDK_OFFSET(0x13E4FBF0)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_SET_ISMATCH_OFFSET UNITYSDK_OFFSET(0x13E4FCD0)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4EDE0)

inline static constexpr unsigned int Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA_TypeDefinitionIndex = 63731;

class Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::Client::AvatarVoiceArchiveEntry* Field_1_1; // 0x10
	::System::UInt32 _ListenerAvatarID_k__BackingField; // 0x18
	::System::UInt32 _SourceListenerID_k__BackingField; // 0x1C
	::System::Boolean _IsMatch_k__BackingField; // 0x20
	::System::UInt32 _SpeakerAvatarID_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::AvatarLinkRow* a1, ::RPG::GameCore::GenderType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarLinkRow*, ::RPG::GameCore::GenderType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_40607E286A35C88C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_40607E286A35C88C_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::String* Method_1_C4C3DB6ADFBC756E(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_METHOD_1_C4C3DB6ADFBC756E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsMatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_ISMATCH_OFFSET))(this);
	}

	::System::Void set_IsMatch(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_SET_ISMATCH_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpeakerAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_SPEAKERAVATARID_OFFSET))(this);
	}

	::System::UInt32 get_ListenerAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_LISTENERAVATARID_OFFSET))(this);
	}

	::System::UInt32 get_SourceListenerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA_GET_SOURCELISTENERID_OFFSET))(this);
	}
};
