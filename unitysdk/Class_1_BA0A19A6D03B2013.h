#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
class Class_2_35DC892F466147D4;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA0A19A6D03B2013_GET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x10B66A50)
#define CLASS_1_BA0A19A6D03B2013_METHOD_1_28A1377813BF469E_OFFSET UNITYSDK_OFFSET(0x10B67570)
#define CLASS_1_BA0A19A6D03B2013_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10B66A70)
#define CLASS_1_BA0A19A6D03B2013_METHOD_1_41997AFD133B2134_OFFSET UNITYSDK_OFFSET(0x10B66B10)
#define CLASS_1_BA0A19A6D03B2013_METHOD_1_7242F67245B5422D_OFFSET UNITYSDK_OFFSET(0x10B672E0)
#define CLASS_1_BA0A19A6D03B2013_METHOD_1_865093810200E1C3_OFFSET UNITYSDK_OFFSET(0x10B66F40)
#define CLASS_1_BA0A19A6D03B2013_SET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x10B66A60)
#define CLASS_1_BA0A19A6D03B2013__CTOR_OFFSET UNITYSDK_OFFSET(0x10B677E0)

inline static constexpr unsigned int Class_1_BA0A19A6D03B2013_TypeDefinitionIndex = 44761;

class Class_1_BA0A19A6D03B2013 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* Field_1_2; // 0x20
	::System::Boolean _MuteScaleNtf_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MuteScaleNtf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_GET_MUTESCALENTF_OFFSET))(this);
	}

	::System::Void set_MuteScaleNtf(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_SET_MUTESCALENTF_OFFSET))(this, value);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_41997AFD133B2134(::Class_2_35DC892F466147D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35DC892F466147D4*))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_METHOD_1_41997AFD133B2134_OFFSET))(this, a1);
	}

	::System::Void Method_1_865093810200E1C3(::Class_2_35DC892F466147D4* a1, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35DC892F466147D4*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_METHOD_1_865093810200E1C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7242F67245B5422D(::Class_2_35DC892F466147D4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35DC892F466147D4*))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_METHOD_1_7242F67245B5422D_OFFSET))(this, a1);
	}

	::System::Void Method_1_28A1377813BF469E(::Class_2_35DC892F466147D4* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35DC892F466147D4*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_1_BA0A19A6D03B2013_METHOD_1_28A1377813BF469E_OFFSET))(this, a1, a2, a3);
	}
};
