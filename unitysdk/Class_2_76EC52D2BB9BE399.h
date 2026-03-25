#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115B2790)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET UNITYSDK_OFFSET(0x115B2CD0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x115B0D90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_39FD7185C859CEAD_1_OFFSET UNITYSDK_OFFSET(0x115B2230)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x115B1DC0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET UNITYSDK_OFFSET(0x115B2DD0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x115B0D30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET UNITYSDK_OFFSET(0x115B2C30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x115B2740)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x115B3360)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x115B3440)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_9F1229C3CC297983_OFFSET UNITYSDK_OFFSET(0x115B0CE0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_B5E1B9F4CD5C9F3D_OFFSET UNITYSDK_OFFSET(0x115B2690)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET UNITYSDK_OFFSET(0x115B2B90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x115B31D0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET UNITYSDK_OFFSET(0x115B2B30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x115B1D20)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x115B2ED0)
#define CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET UNITYSDK_OFFSET(0x115B3430)
#define CLASS_2_76EC52D2BB9BE399___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115B34B0)

inline static constexpr unsigned int Class_2_76EC52D2BB9BE399_TypeDefinitionIndex = 57003;

class Class_2_76EC52D2BB9BE399 : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* Field_2_4; // 0x18
	::System::String* Field_2_11; // 0x20
	::UnityEngine::Texture2D* Field_2_5; // 0x28
	::UnityEngine::Texture2D* Field_2_12; // 0x30
	::System::Nullable_1<::System::Boolean> Field_2_2; // 0x38
	::System::Nullable_1<::System::Boolean> Field_2_9; // 0x3A
	::System::Boolean Field_2_17; // 0x3C
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_13; // 0x40
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_14; // 0x4C
	::System::Nullable_1<::System::Single> Field_2_1; // 0x58
	::System::Nullable_1<::System::Single> Field_2_0; // 0x60
	::System::Nullable_1<::UnityEngine::Color> Field_2_3; // 0x68
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_7; // 0x7C
	::UnityEngine::Vector2 Field_2_19; // 0x88
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_6; // 0x90
	::UnityEngine::Vector2 Field_2_18; // 0x9C
	::System::Nullable_1<::System::Single> Field_2_15; // 0xA4
	::System::Nullable_1<::System::Single> Field_2_8; // 0xAC
	::System::Nullable_1<::System::Single> Field_2_16; // 0xB4
	::System::Nullable_1<::UnityEngine::Color> Field_2_10; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET))(this);
	}

	::RPG::Client::SplitScreenVCControl* Method_2_9F1229C3CC297983()
	{
		return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_9F1229C3CC297983_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_B5E1B9F4CD5C9F3D(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_B5E1B9F4CD5C9F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_39FD7185C859CEAD_1_OFFSET))(this);
	}

	::System::Void Method_2_BA00D508D791624D(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6FCD5ED083C67CF0(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_155EBEDB7DB8B929(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3FA1D91279A7F0C8(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_DB4D7D07EC5D0482(::UnityEngine::MeshRenderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET))(this, a1);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
