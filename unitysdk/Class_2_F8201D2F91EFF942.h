#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace CriWare { class CriManaMovieController; }
namespace RPG::Client { class VideoTexture; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_F8201D2F91EFF942_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xEEB4700)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xEEB44A0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xEEB4B10)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xEEB55D0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xEEB4090)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET UNITYSDK_OFFSET(0xEEB4650)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_2_OFFSET UNITYSDK_OFFSET(0xEEB5580)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0xEEB4450)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xEEB4340)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xEEB4810)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xEEB48F0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xEEB4040)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_AB808BBC9E093207_OFFSET UNITYSDK_OFFSET(0xEEB3FD0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xEEB46A0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xEEB4390)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xEEB4BE0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xEEB5320)
#define CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET UNITYSDK_OFFSET(0xEEB5650)
#define CLASS_2_F8201D2F91EFF942__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB5640)

inline static constexpr unsigned int Class_2_F8201D2F91EFF942_TypeDefinitionIndex = 67425;

class Class_2_F8201D2F91EFF942 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x112F0);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x112F4);
	}
	::CriWare::CriManaMovieController* Field_2_1; // 0x18
	::UnityEngine::Material* Field_2_4; // 0x20
	::System::String* Field_2_0; // 0x28
	::System::Action* Field_2_9; // 0x30
	::UnityEngine::MeshRenderer* Field_2_3; // 0x38
	::System::Int32 Field_2_2; // 0x40
	::System::Boolean Field_2_10; // 0x44
	::System::Boolean Field_2_5; // 0x45
	::System::Boolean Field_2_7; // 0x46
	::System::UInt32 Field_2_8; // 0x48
	::CriWare::CriMana::Player_Status Field_2_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET))();
	}

	::RPG::Client::VideoTexture* Method_2_AB808BBC9E093207()
	{
		return ((::RPG::Client::VideoTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_AB808BBC9E093207_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_E67B8EE7D04609D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_41AA181104E03F2C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_2_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET))(this);
	}
};
