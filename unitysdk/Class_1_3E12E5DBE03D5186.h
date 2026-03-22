#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_30.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_94;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client::SwordTraining { class SwordTrainingGameRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_3E12E5DBE03D5186_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F06260)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_14CE3194730CF1A3_OFFSET UNITYSDK_OFFSET(0x9F06C60)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_181D38188B394471_OFFSET UNITYSDK_OFFSET(0x9F06E50)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_1988FE83B980E399_OFFSET UNITYSDK_OFFSET(0x9F06B20)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_2156BE51F15C2D64_OFFSET UNITYSDK_OFFSET(0x9F064E0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5B21866E47FB4409_OFFSET UNITYSDK_OFFSET(0x9F07290)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_1_OFFSET UNITYSDK_OFFSET(0x9F06570)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_OFFSET UNITYSDK_OFFSET(0x9F06430)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_1_OFFSET UNITYSDK_OFFSET(0x9F06950)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_2_OFFSET UNITYSDK_OFFSET(0x9F06D00)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_OFFSET UNITYSDK_OFFSET(0x9F06620)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_8149BB44980EDCD3_OFFSET UNITYSDK_OFFSET(0x9F071C0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9F07150)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_97B4409B66E3F126_OFFSET UNITYSDK_OFFSET(0x9F07430)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_1_OFFSET UNITYSDK_OFFSET(0x9F06770)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_2_OFFSET UNITYSDK_OFFSET(0x9F07510)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_3_OFFSET UNITYSDK_OFFSET(0x9F06DB0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_OFFSET UNITYSDK_OFFSET(0x9F066D0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x9F06180)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9F06370)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_1_OFFSET UNITYSDK_OFFSET(0x9F068B0)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_OFFSET UNITYSDK_OFFSET(0x9F06810)
#define CLASS_1_3E12E5DBE03D5186_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x9F06A00)
#define CLASS_1_3E12E5DBE03D5186__CTOR_OFFSET UNITYSDK_OFFSET(0x9F075B0)

inline static constexpr unsigned int Class_1_3E12E5DBE03D5186_TypeDefinitionIndex = 59849;

class Class_1_3E12E5DBE03D5186 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_5FC1511FCE339E37(::Enum_3_96F6662CA3713095_30 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_30, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FC1511FCE339E37_1(::Enum_3_96F6662CA3713095_30 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_30, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5FC1511FCE339E37_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3FC3BCB5E93217B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED8EDCF138365847(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED8EDCF138365847_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_ED8EDCF138365847_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_181D38188B394471(::Class_1_5FEFAED860528596_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_94*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_181D38188B394471_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_1988FE83B980E399(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_1988FE83B980E399_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B21866E47FB4409(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_5B21866E47FB4409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97B4409B66E3F126(::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_97B4409B66E3F126_OFFSET))(this, a1);
	}

	::System::Void Method_1_8149BB44980EDCD3(::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_8149BB44980EDCD3_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo* Method_1_2156BE51F15C2D64()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_2156BE51F15C2D64_OFFSET))(this);
	}

	::System::Void Method_1_7CC5D3421FCDA2BA_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_7CC5D3421FCDA2BA_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3FC3BCB5E93217B_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_A3FC3BCB5E93217B_3_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTrainingGameInstance* Method_1_14CE3194730CF1A3()
	{
		return ((::RPG::Client::SwordTrainingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E12E5DBE03D5186_METHOD_1_14CE3194730CF1A3_OFFSET))(this);
	}
};
