#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0A12E545170318AA.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_3F52FC245A7D6943_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A47800)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_0279A43AB75917CE_OFFSET UNITYSDK_OFFSET(0x8A4A930)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_19FA3773AAC2AEF8_OFFSET UNITYSDK_OFFSET(0x8A49A00)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_1ABF33EF52D6BBF0_OFFSET UNITYSDK_OFFSET(0x8A4AC10)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_1D9B8F3876251E59_OFFSET UNITYSDK_OFFSET(0x8A49B90)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x8A479D0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_283FCF4CAB5CF241_OFFSET UNITYSDK_OFFSET(0x8A4A190)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_2F28A8CBB72E81C1_OFFSET UNITYSDK_OFFSET(0x8A49630)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8A49530)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_357A6CA4A438AA90_OFFSET UNITYSDK_OFFSET(0x8A48870)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0x8A49E60)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_57002A58D66C2821_OFFSET UNITYSDK_OFFSET(0x8A48CB0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_7636B0C0D1795753_OFFSET UNITYSDK_OFFSET(0x8A4B2E0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_771EBC0CF103AAB2_OFFSET UNITYSDK_OFFSET(0x8A4AF10)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_AC4264BBC5A2903C_OFFSET UNITYSDK_OFFSET(0x8A4AB10)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8A492F0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0x8A4B290)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_DBFE8394F80DC52B_OFFSET UNITYSDK_OFFSET(0x8A4A3C0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_EA3ED10C18DB0D6D_OFFSET UNITYSDK_OFFSET(0x8A491A0)
#define CLASS_3_3F52FC245A7D6943_METHOD_3_F12126633650E005_OFFSET UNITYSDK_OFFSET(0x8A4B490)
#define CLASS_3_3F52FC245A7D6943_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A47920)
#define CLASS_3_3F52FC245A7D6943_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A4B1E0)
#define CLASS_3_3F52FC245A7D6943_TICK_OFFSET UNITYSDK_OFFSET(0x8A4B230)
#define CLASS_3_3F52FC245A7D6943__CTOR_OFFSET UNITYSDK_OFFSET(0x8A475A0)
#define CLASS_3_3F52FC245A7D6943___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A4BDD0)

inline static constexpr unsigned int Class_3_3F52FC245A7D6943_TypeDefinitionIndex = 45642;

class Class_3_3F52FC245A7D6943 : public ::Class_2_0A12E545170318AA
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_3_7; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_3; // 0x50
	::Class_3_BCCE950C2E8DF1F0* Field_3_6; // 0x58
	::Class_3_BCCE950C2E8DF1F0* Field_3_5; // 0x60
	::RPG::GameCore::AdventureTriggerAttack* Field_3_0; // 0x68
	::Class_3_BCCE950C2E8DF1F0* Field_3_4; // 0x70
	::RPG::GameCore::TaskContext* Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_357A6CA4A438AA90(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_357A6CA4A438AA90_OFFSET))(this, a1);
	}

	::System::Void Method_3_57002A58D66C2821(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_57002A58D66C2821_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA3ED10C18DB0D6D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_EA3ED10C18DB0D6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_2F28A8CBB72E81C1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_2F28A8CBB72E81C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_19FA3773AAC2AEF8(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_19FA3773AAC2AEF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_3_DBFE8394F80DC52B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_DBFE8394F80DC52B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0279A43AB75917CE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_0279A43AB75917CE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC4264BBC5A2903C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_AC4264BBC5A2903C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1ABF33EF52D6BBF0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_1ABF33EF52D6BBF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_283FCF4CAB5CF241(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_283FCF4CAB5CF241_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1D9B8F3876251E59(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_1D9B8F3876251E59_OFFSET))(this, a1);
	}

	::System::Void Method_3_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_3_771EBC0CF103AAB2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_771EBC0CF103AAB2_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D98D2C67BEEB1556(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_D98D2C67BEEB1556_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_3_7636B0C0D1795753(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_7636B0C0D1795753_OFFSET))(a1);
	}

	::System::Void Method_3_F12126633650E005(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943_METHOD_3_F12126633650E005_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F52FC245A7D6943___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
