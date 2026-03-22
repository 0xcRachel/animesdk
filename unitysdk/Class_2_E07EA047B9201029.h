#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_438;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E07EA047B9201029_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8982C00)
#define CLASS_2_E07EA047B9201029_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8982470)
#define CLASS_2_E07EA047B9201029_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8982FD0)
#define CLASS_2_E07EA047B9201029_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x8982990)
#define CLASS_2_E07EA047B9201029_METHOD_2_4529C5CE02296024_OFFSET UNITYSDK_OFFSET(0x8982190)
#define CLASS_2_E07EA047B9201029_METHOD_2_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x89824F0)
#define CLASS_2_E07EA047B9201029_METHOD_2_81D2517876704515_OFFSET UNITYSDK_OFFSET(0x8982060)
#define CLASS_2_E07EA047B9201029_METHOD_2_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x8981EF0)
#define CLASS_2_E07EA047B9201029_METHOD_2_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0x8983400)
#define CLASS_2_E07EA047B9201029_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x8982F20)
#define CLASS_2_E07EA047B9201029_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x89822A0)
#define CLASS_2_E07EA047B9201029_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x8983370)
#define CLASS_2_E07EA047B9201029_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x89832E0)
#define CLASS_2_E07EA047B9201029_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x8983160)
#define CLASS_2_E07EA047B9201029_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x8982AA0)
#define CLASS_2_E07EA047B9201029_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x8982E80)
#define CLASS_2_E07EA047B9201029_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8981C70)
#define CLASS_2_E07EA047B9201029_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8982930)
#define CLASS_2_E07EA047B9201029_TICK_OFFSET UNITYSDK_OFFSET(0x8982D00)
#define CLASS_2_E07EA047B9201029__CTOR_OFFSET UNITYSDK_OFFSET(0x8981A90)

inline static constexpr unsigned int Class_2_E07EA047B9201029_TypeDefinitionIndex = 45941;

class Class_2_E07EA047B9201029 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_438* Field_2_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_6; // 0x28
	::System::Object* Field_2_4; // 0x30
	::RPG::GameCore::PlayMunicipalChat* Field_2_2; // 0x38
	::System::String* Field_2_10; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::System::String* Field_2_11; // 0x50
	::System::Single Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x5C
	::System::Boolean Field_2_12; // 0x5D
	::RPG::GameCore::StringHash Field_2_9; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_4529C5CE02296024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_4529C5CE02296024_OFFSET))(this);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}

	::System::Boolean Method_2_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Single Method_2_81D2517876704515()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_81D2517876704515_OFFSET))(this);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_916B8A6B72C96F5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_916B8A6B72C96F5C_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E07EA047B9201029_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}
};
