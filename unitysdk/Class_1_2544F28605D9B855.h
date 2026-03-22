#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2544F28605D9B855_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D19FE0)
#define CLASS_1_2544F28605D9B855_METHOD_1_08129E9A46D60112_OFFSET UNITYSDK_OFFSET(0x10D1B1C0)
#define CLASS_1_2544F28605D9B855_METHOD_1_11A4B5B9C7557187_OFFSET UNITYSDK_OFFSET(0x10D1A400)
#define CLASS_1_2544F28605D9B855_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10D19F70)
#define CLASS_1_2544F28605D9B855_METHOD_1_254BE92053B8EE01_OFFSET UNITYSDK_OFFSET(0x10D1A4A0)
#define CLASS_1_2544F28605D9B855_METHOD_1_3E07280FABB7D6EF_OFFSET UNITYSDK_OFFSET(0x10D1AC50)
#define CLASS_1_2544F28605D9B855_METHOD_1_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0x10D1AAE0)
#define CLASS_1_2544F28605D9B855_METHOD_1_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x10D1A0F0)
#define CLASS_1_2544F28605D9B855_METHOD_1_796CF69C9B160254_OFFSET UNITYSDK_OFFSET(0x10D1A740)
#define CLASS_1_2544F28605D9B855_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10D1A150)
#define CLASS_1_2544F28605D9B855_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x10D1A6B0)
#define CLASS_1_2544F28605D9B855_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10D1A030)
#define CLASS_1_2544F28605D9B855__CTOR_OFFSET UNITYSDK_OFFSET(0x10D19FD0)

inline static constexpr unsigned int Class_1_2544F28605D9B855_TypeDefinitionIndex = 48112;

class Class_1_2544F28605D9B855 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1*>* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_11A4B5B9C7557187(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_11A4B5B9C7557187_OFFSET))(this, a1);
	}

	::System::Void Method_1_254BE92053B8EE01(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_254BE92053B8EE01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_796CF69C9B160254(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_796CF69C9B160254_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_56F65626149842A5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_56F65626149842A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_3E07280FABB7D6EF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_3E07280FABB7D6EF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_08129E9A46D60112(::Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1* a1, ::Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1*, ::Class_1_2544F28605D9B855_Class_1_B601576051DF7BD1*))((::PBYTE)hIl2Cpp + CLASS_1_2544F28605D9B855_METHOD_1_08129E9A46D60112_OFFSET))(this, a1, a2);
	}
};
