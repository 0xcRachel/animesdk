#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_1C573B6CCA6D38AD_OFFSET UNITYSDK_OFFSET(0x8A53250)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8A52A70)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_3A2563567AA34B7E_OFFSET UNITYSDK_OFFSET(0x8A57A50)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_5890180A07FDA990_OFFSET UNITYSDK_OFFSET(0x8A53A60)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8A53AF0)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x8A51E10)
#define CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237__CTOR_OFFSET UNITYSDK_OFFSET(0x8A52890)

inline static constexpr unsigned int Class_2_B40FC3938DF1C310_Class_1_328A62CA455D0237_TypeDefinitionIndex = 45129;

class Class_2_B40FC3938DF1C310_Class_1_328A62CA455D0237 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_3; // 0x10
	::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* Field_1_6; // 0x18
	::UnityEngine::SkinnedMeshRenderer* Field_1_0; // 0x20
	::System::Action_1<::UnityEngine::Mesh*>* Field_1_5; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Int32 Field_1_2; // 0x38

	::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1C573B6CCA6D38AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_1C573B6CCA6D38AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5890180A07FDA990(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_5890180A07FDA990_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A2563567AA34B7E(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_CLASS_1_328A62CA455D0237_METHOD_1_3A2563567AA34B7E_OFFSET))(this, a1);
	}
};
