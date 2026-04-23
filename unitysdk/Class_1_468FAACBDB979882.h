#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_8091A685934855C6;
class Class_1_C4B679728AD83B32_4;
class Class_1_E4E556C7F46FB3A1_1;
class Class_2_15E317187C4E8254;
class Class_2_C8461ACA8308A704_1;
class Class_3_626F93E2306641CC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_468FAACBDB979882_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC05E00)
#define CLASS_1_468FAACBDB979882_METHOD_1_0781AAC3CA2756FC_OFFSET UNITYSDK_OFFSET(0xEC09400)
#define CLASS_1_468FAACBDB979882_METHOD_1_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xEC05930)
#define CLASS_1_468FAACBDB979882_METHOD_1_22E3DE31D0F03C64_OFFSET UNITYSDK_OFFSET(0xEC07F10)
#define CLASS_1_468FAACBDB979882_METHOD_1_25951EEBF7B13A67_OFFSET UNITYSDK_OFFSET(0xEC09510)
#define CLASS_1_468FAACBDB979882_METHOD_1_3878F2B3BB216A4E_OFFSET UNITYSDK_OFFSET(0xEC09670)
#define CLASS_1_468FAACBDB979882_METHOD_1_3C484ED18ED86035_OFFSET UNITYSDK_OFFSET(0xEC06BD0)
#define CLASS_1_468FAACBDB979882_METHOD_1_41B1DD8E33013FA4_OFFSET UNITYSDK_OFFSET(0xEC070F0)
#define CLASS_1_468FAACBDB979882_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xEC06E90)
#define CLASS_1_468FAACBDB979882_METHOD_1_4E2DE335ACF763E4_OFFSET UNITYSDK_OFFSET(0xEC09CD0)
#define CLASS_1_468FAACBDB979882_METHOD_1_5B89916B384BEF4E_OFFSET UNITYSDK_OFFSET(0xEC05FB0)
#define CLASS_1_468FAACBDB979882_METHOD_1_6694215FEB4DD482_OFFSET UNITYSDK_OFFSET(0xEC06230)
#define CLASS_1_468FAACBDB979882_METHOD_1_69232C0FA13F1FBA_OFFSET UNITYSDK_OFFSET(0xEC0AAE0)
#define CLASS_1_468FAACBDB979882_METHOD_1_694D9A671013772D_OFFSET UNITYSDK_OFFSET(0xEC059B0)
#define CLASS_1_468FAACBDB979882_METHOD_1_6C5CDD0AB73A80EA_OFFSET UNITYSDK_OFFSET(0xEC07EB0)
#define CLASS_1_468FAACBDB979882_METHOD_1_71908968AC1D9E33_OFFSET UNITYSDK_OFFSET(0xEC08D80)
#define CLASS_1_468FAACBDB979882_METHOD_1_7825043804671C2D_OFFSET UNITYSDK_OFFSET(0xEC08A60)
#define CLASS_1_468FAACBDB979882_METHOD_1_882076000F1B0907_OFFSET UNITYSDK_OFFSET(0xEC05E40)
#define CLASS_1_468FAACBDB979882_METHOD_1_8B06581671B83432_OFFSET UNITYSDK_OFFSET(0xEC07280)
#define CLASS_1_468FAACBDB979882_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xEC0A800)
#define CLASS_1_468FAACBDB979882_METHOD_1_8DAC269587F5D41F_1_OFFSET UNITYSDK_OFFSET(0xEC08C80)
#define CLASS_1_468FAACBDB979882_METHOD_1_8DAC269587F5D41F_OFFSET UNITYSDK_OFFSET(0xEC06870)
#define CLASS_1_468FAACBDB979882_METHOD_1_95AD4FE2B7895FFF_OFFSET UNITYSDK_OFFSET(0xEC07850)
#define CLASS_1_468FAACBDB979882_METHOD_1_9A092B3DE379587C_OFFSET UNITYSDK_OFFSET(0xEC08150)
#define CLASS_1_468FAACBDB979882_METHOD_1_A7CE4F1845899E1F_OFFSET UNITYSDK_OFFSET(0xEC06D30)
#define CLASS_1_468FAACBDB979882_METHOD_1_AED2B1CB68747CFB_OFFSET UNITYSDK_OFFSET(0xEC08990)
#define CLASS_1_468FAACBDB979882_METHOD_1_B0193AC2907FE320_OFFSET UNITYSDK_OFFSET(0xEC07D80)
#define CLASS_1_468FAACBDB979882_METHOD_1_B747959E65AD241D_OFFSET UNITYSDK_OFFSET(0xEC06DE0)
#define CLASS_1_468FAACBDB979882_METHOD_1_B74A3ED0C20D7548_OFFSET UNITYSDK_OFFSET(0xEC0A580)
#define CLASS_1_468FAACBDB979882_METHOD_1_BD8FE187CF1ADAA5_OFFSET UNITYSDK_OFFSET(0xEC07920)
#define CLASS_1_468FAACBDB979882_METHOD_1_C371D407FF2F4BA2_OFFSET UNITYSDK_OFFSET(0xEC06A70)
#define CLASS_1_468FAACBDB979882_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEC05DC0)
#define CLASS_1_468FAACBDB979882_METHOD_1_CCAFB890839EF174_OFFSET UNITYSDK_OFFSET(0xEC06670)
#define CLASS_1_468FAACBDB979882_METHOD_1_D0CBFC6A9FB3CD67_1_OFFSET UNITYSDK_OFFSET(0xEC08090)
#define CLASS_1_468FAACBDB979882_METHOD_1_D0CBFC6A9FB3CD67_OFFSET UNITYSDK_OFFSET(0xEC07B80)
#define CLASS_1_468FAACBDB979882_METHOD_1_D4DDFCF93975B0A6_OFFSET UNITYSDK_OFFSET(0xEC06F10)
#define CLASS_1_468FAACBDB979882_METHOD_1_E03FE44C9DFA7372_OFFSET UNITYSDK_OFFSET(0xEC07C40)
#define CLASS_1_468FAACBDB979882_METHOD_1_E558C333A5011F73_OFFSET UNITYSDK_OFFSET(0xEC071E0)
#define CLASS_1_468FAACBDB979882_METHOD_1_F208036329D1660A_OFFSET UNITYSDK_OFFSET(0xEC08B30)
#define CLASS_1_468FAACBDB979882_METHOD_1_F283923F4215702E_OFFSET UNITYSDK_OFFSET(0xEC07740)
#define CLASS_1_468FAACBDB979882_METHOD_1_F6AABD4061ECE206_OFFSET UNITYSDK_OFFSET(0xEC07AE0)
#define CLASS_1_468FAACBDB979882_METHOD_1_FA56DCE292E69C68_1_OFFSET UNITYSDK_OFFSET(0xEC08830)
#define CLASS_1_468FAACBDB979882_METHOD_1_FA56DCE292E69C68_OFFSET UNITYSDK_OFFSET(0xEC086D0)
#define CLASS_1_468FAACBDB979882__CTOR_OFFSET UNITYSDK_OFFSET(0xEC05A70)

inline static constexpr unsigned int Class_1_468FAACBDB979882_TypeDefinitionIndex = 71584;

class Class_1_468FAACBDB979882 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Int32>* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Int32>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_1_3; // 0x38
	::Class_3_626F93E2306641CC* Field_1_0; // 0x40

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882__CTOR_OFFSET))(this, a1);
	}

	::Class_2_C8461ACA8308A704_1* Method_1_08A44229CA25E941()
	{
		return ((::Class_2_C8461ACA8308A704_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_08A44229CA25E941_OFFSET))(this);
	}

	static ::Class_1_468FAACBDB979882* Method_1_694D9A671013772D(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_468FAACBDB979882*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_694D9A671013772D_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_DISPOSE_OFFSET))(this);
	}

	::Class_2_15E317187C4E8254* Method_1_882076000F1B0907(::RPG::GameCore::CakeRaceCellType a1, ::UnityEngine::Vector3Int a2, ::RPG::MVector3 a3)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_882076000F1B0907_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_15E317187C4E8254* Method_1_C371D407FF2F4BA2(::RPG::GameCore::CakeRaceCellType a1, ::System::Int32 a2, ::UnityEngine::Vector3Int a3, ::RPG::MVector3 a4)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::Int32, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_C371D407FF2F4BA2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A7CE4F1845899E1F(::Class_2_15E317187C4E8254* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_A7CE4F1845899E1F_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_5B89916B384BEF4E(::RPG::GameCore::CakeRaceCellType a1, ::UnityEngine::Vector3Int a2, ::RPG::MVector3 a3, ::System::Int32 a4)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_5B89916B384BEF4E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6694215FEB4DD482(::Class_2_15E317187C4E8254* a1, ::RPG::GameCore::CakeRaceCellType a2, ::UnityEngine::Vector3Int a3, ::RPG::MVector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_6694215FEB4DD482_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D4DDFCF93975B0A6(::Class_2_15E317187C4E8254* a1, ::RPG::GameCore::CakeRaceCellType a2, ::UnityEngine::Vector3Int a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_D4DDFCF93975B0A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E558C333A5011F73(::Class_2_15E317187C4E8254* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_E558C333A5011F73_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_41B1DD8E33013FA4(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_41B1DD8E33013FA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B06581671B83432(::Class_2_15E317187C4E8254* a1, ::RPG::GameCore::CakeRaceCellType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_8B06581671B83432_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CCAFB890839EF174(::RPG::GameCore::CakeRaceCellType a1, ::RPG::MVector3 a2, ::Class_2_15E317187C4E8254* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::RPG::MVector3, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_CCAFB890839EF174_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_15E317187C4E8254* Method_1_F283923F4215702E(::UnityEngine::Vector3Int a1)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_F283923F4215702E_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_95AD4FE2B7895FFF(::UnityEngine::Vector3Int a1)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_95AD4FE2B7895FFF_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_F6AABD4061ECE206(::System::Int32 a1)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_F6AABD4061ECE206_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_BD8FE187CF1ADAA5(::System::Int32 a1)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_BD8FE187CF1ADAA5_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_D0CBFC6A9FB3CD67(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_D0CBFC6A9FB3CD67_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* Method_1_E03FE44C9DFA7372(::Class_2_15E317187C4E8254* a1)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_E03FE44C9DFA7372_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* Method_1_B0193AC2907FE320(::Class_2_15E317187C4E8254* a1)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_B0193AC2907FE320_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* Method_1_6C5CDD0AB73A80EA(::Class_2_15E317187C4E8254* a1)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_6C5CDD0AB73A80EA_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* Method_1_22E3DE31D0F03C64(::Class_2_15E317187C4E8254* a1)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_22E3DE31D0F03C64_OFFSET))(this, a1);
	}

	::Class_2_15E317187C4E8254* Method_1_D0CBFC6A9FB3CD67_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_15E317187C4E8254*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_D0CBFC6A9FB3CD67_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9A092B3DE379587C(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_9A092B3DE379587C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FA56DCE292E69C68(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_FA56DCE292E69C68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FA56DCE292E69C68_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_FA56DCE292E69C68_1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_AED2B1CB68747CFB(::Class_2_15E317187C4E8254* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_AED2B1CB68747CFB_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceCellType Method_1_7825043804671C2D(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::GameCore::CakeRaceCellType(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_7825043804671C2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DAC269587F5D41F(::UnityEngine::Vector3Int a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_8DAC269587F5D41F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C484ED18ED86035(::System::Int32 a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_3C484ED18ED86035_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B747959E65AD241D(::UnityEngine::Vector3Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_B747959E65AD241D_OFFSET))(this, a1);
	}

	::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F208036329D1660A(::UnityEngine::Vector3Int a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_F208036329D1660A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DAC269587F5D41F_1(::UnityEngine::Vector3Int a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_8DAC269587F5D41F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71908968AC1D9E33(::System::Collections::Generic::IEnumerable_1<::Class_1_C4B679728AD83B32_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C4B679728AD83B32_4*>*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_71908968AC1D9E33_OFFSET))(this, a1);
	}

	::System::Void Method_1_0781AAC3CA2756FC(::Class_2_15E317187C4E8254* a1, ::RPG::GameCore::CakeRaceCellType a2, ::RPG::GameCore::CakeRaceCellType a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_0781AAC3CA2756FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25951EEBF7B13A67(::Class_2_15E317187C4E8254* a1, ::RPG::GameCore::CakeRaceCellType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_25951EEBF7B13A67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3878F2B3BB216A4E(::System::Collections::Generic::IEnumerable_1<::Class_1_E4E556C7F46FB3A1_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_E4E556C7F46FB3A1_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_3878F2B3BB216A4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E2DE335ACF763E4(::System::Collections::Generic::IEnumerable_1<::Class_1_8091A685934855C6*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_8091A685934855C6*>*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_4E2DE335ACF763E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B74A3ED0C20D7548(::Class_2_15E317187C4E8254* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_B74A3ED0C20D7548_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Single Method_1_69232C0FA13F1FBA(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_468FAACBDB979882_METHOD_1_69232C0FA13F1FBA_OFFSET))(this, a1);
	}
};
