#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_5A29526E092142ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10260C90)
#define CLASS_2_5A29526E092142ED_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x10260F50)
#define CLASS_2_5A29526E092142ED_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x10261890)
#define CLASS_2_5A29526E092142ED_METHOD_2_92BE766FE7637517_OFFSET UNITYSDK_OFFSET(0x10261650)
#define CLASS_2_5A29526E092142ED_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x102614B0)
#define CLASS_2_5A29526E092142ED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10261460)
#define CLASS_2_5A29526E092142ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10260DD0)
#define CLASS_2_5A29526E092142ED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10261240)
#define CLASS_2_5A29526E092142ED_TICK_OFFSET UNITYSDK_OFFSET(0x10261320)
#define CLASS_2_5A29526E092142ED__CTOR_OFFSET UNITYSDK_OFFSET(0x10260BA0)

inline static constexpr unsigned int Class_2_5A29526E092142ED_TypeDefinitionIndex = 41608;

class Class_2_5A29526E092142ED : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x18
	::RPG::GameCore::ConsumeOrigamiItem* Field_2_0; // 0x20
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_2_5; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x40
	::System::UInt32 Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_92BE766FE7637517(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_METHOD_2_92BE766FE7637517_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A29526E092142ED_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
