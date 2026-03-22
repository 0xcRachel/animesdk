#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_2A65FCF94CE14510_OFFSET UNITYSDK_OFFSET(0x10B26E60)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_56EF18F92B7B40BA_OFFSET UNITYSDK_OFFSET(0x10B26950)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_64C0D6B591012675_OFFSET UNITYSDK_OFFSET(0x10B27390)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_72CA835AE372D9CC_OFFSET UNITYSDK_OFFSET(0x10B26730)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_A02BB3CD5756C6EB_OFFSET UNITYSDK_OFFSET(0x10B279A0)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_D515A9E66DA454BC_OFFSET UNITYSDK_OFFSET(0x10B26850)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_D7A76194A3C8E6ED_OFFSET UNITYSDK_OFFSET(0x10B26C30)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_EECDE140D147EF43_OFFSET UNITYSDK_OFFSET(0x10B26AD0)
#define CLASS_3_FD89ED62B5A73CE9_METHOD_3_F30F73F180186E90_OFFSET UNITYSDK_OFFSET(0x10B276B0)
#define CLASS_3_FD89ED62B5A73CE9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B26650)
#define CLASS_3_FD89ED62B5A73CE9__CTOR_OFFSET UNITYSDK_OFFSET(0x10B26620)

inline static constexpr unsigned int Class_3_FD89ED62B5A73CE9_TypeDefinitionIndex = 41433;

class Class_3_FD89ED62B5A73CE9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPassByValueClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Object* Method_3_56EF18F92B7B40BA(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_56EF18F92B7B40BA_OFFSET))(this, a1);
	}

	::System::Object* Method_3_EECDE140D147EF43(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_EECDE140D147EF43_OFFSET))(this, a1);
	}

	::System::Object* Method_3_D7A76194A3C8E6ED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_D7A76194A3C8E6ED_OFFSET))(this, a1);
	}

	::System::Object* Method_3_2A65FCF94CE14510(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_2A65FCF94CE14510_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_3_72CA835AE372D9CC(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_72CA835AE372D9CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_64C0D6B591012675(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_64C0D6B591012675_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F30F73F180186E90(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_F30F73F180186E90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A02BB3CD5756C6EB(::System::String* a1, ::System::UInt32 a2, ::System::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_A02BB3CD5756C6EB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_D515A9E66DA454BC(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FD89ED62B5A73CE9_METHOD_3_D515A9E66DA454BC_OFFSET))(this, a1, a2);
	}
};
