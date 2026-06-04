#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_12;
class Class_1_4BC858D7C27E10ED_13;
class Class_1_4BC858D7C27E10ED_14;
class Class_1_D17272E82AE804C2_193;
class Class_1_D1E0AD3915BCCF29_22;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_922C8BD967811B57_GET_ADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x132F2F00)
#define CLASS_1_922C8BD967811B57_GET_BUSINESSTIME_OFFSET UNITYSDK_OFFSET(0x132F2F40)
#define CLASS_1_922C8BD967811B57_GET_FEVERCNTTODAY_OFFSET UNITYSDK_OFFSET(0x132F2EE0)
#define CLASS_1_922C8BD967811B57_GET_FEVER_OFFSET UNITYSDK_OFFSET(0x132F2F60)
#define CLASS_1_922C8BD967811B57_GET_HAPPYPROGRESS_OFFSET UNITYSDK_OFFSET(0x132F2EC0)
#define CLASS_1_922C8BD967811B57_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0x132F2F20)
#define CLASS_1_922C8BD967811B57_METHOD_1_0D95214C1FCF51C2_OFFSET UNITYSDK_OFFSET(0x132F1D00)
#define CLASS_1_922C8BD967811B57_METHOD_1_4208FFAB895D1B53_OFFSET UNITYSDK_OFFSET(0x132F21B0)
#define CLASS_1_922C8BD967811B57_METHOD_1_6B1CB6DCE3FD42B9_OFFSET UNITYSDK_OFFSET(0x132F2E10)
#define CLASS_1_922C8BD967811B57_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x132F2E70)
#define CLASS_1_922C8BD967811B57_METHOD_1_8445B418B6EDF422_OFFSET UNITYSDK_OFFSET(0x132F2B10)
#define CLASS_1_922C8BD967811B57_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x132F1AA0)
#define CLASS_1_922C8BD967811B57_METHOD_1_87B9706D82F78DD6_OFFSET UNITYSDK_OFFSET(0x132F27F0)
#define CLASS_1_922C8BD967811B57_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x132F1C80)
#define CLASS_1_922C8BD967811B57_METHOD_1_B8319ACF63A51404_OFFSET UNITYSDK_OFFSET(0x132F2350)
#define CLASS_1_922C8BD967811B57_METHOD_1_C401240752BDEFA5_OFFSET UNITYSDK_OFFSET(0x132F2C60)
#define CLASS_1_922C8BD967811B57_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x132F2DD0)
#define CLASS_1_922C8BD967811B57_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x132F2D90)
#define CLASS_1_922C8BD967811B57_METHOD_1_DB878C96441E9328_OFFSET UNITYSDK_OFFSET(0x132F1EC0)
#define CLASS_1_922C8BD967811B57_SET_ADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0x132F2F10)
#define CLASS_1_922C8BD967811B57_SET_BUSINESSTIME_OFFSET UNITYSDK_OFFSET(0x132F2F50)
#define CLASS_1_922C8BD967811B57_SET_FEVERCNTTODAY_OFFSET UNITYSDK_OFFSET(0x132F2EF0)
#define CLASS_1_922C8BD967811B57_SET_FEVER_OFFSET UNITYSDK_OFFSET(0x132F2F70)
#define CLASS_1_922C8BD967811B57_SET_HAPPYPROGRESS_OFFSET UNITYSDK_OFFSET(0x132F2ED0)
#define CLASS_1_922C8BD967811B57_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0x132F2F30)
#define CLASS_1_922C8BD967811B57__CTOR_OFFSET UNITYSDK_OFFSET(0x132F2F80)

inline static constexpr unsigned int Class_1_922C8BD967811B57_TypeDefinitionIndex = 72255;

class Class_1_922C8BD967811B57 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_13*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_193*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_14*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_22*>* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_12*>* Field_1_5; // 0x38
	::System::UInt32 _PlayTime_k__BackingField; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Double _HappyProgress_k__BackingField; // 0x48
	::System::UInt32 _Fever_k__BackingField; // 0x50
	::System::Single Field_1_10; // 0x54
	::System::Single Field_1_11; // 0x58
	::System::UInt32 _BusinessTime_k__BackingField; // 0x5C
	::System::UInt32 _AdjustCount_k__BackingField; // 0x60
	::System::Single Field_1_14; // 0x64
	::System::UInt32 _FeverCntToday_k__BackingField; // 0x68
	::System::Boolean Field_1_16; // 0x6C
	::System::Boolean Field_1_17; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0D95214C1FCF51C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_0D95214C1FCF51C2_OFFSET))(this);
	}

	::System::Void Method_1_DB878C96441E9328(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_DB878C96441E9328_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4208FFAB895D1B53(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_4208FFAB895D1B53_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8319ACF63A51404(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_B8319ACF63A51404_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87B9706D82F78DD6(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_87B9706D82F78DD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_8445B418B6EDF422(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_8445B418B6EDF422_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C401240752BDEFA5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_C401240752BDEFA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6B1CB6DCE3FD42B9(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_6B1CB6DCE3FD42B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Double get_HappyProgress()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_HAPPYPROGRESS_OFFSET))(this);
	}

	::System::Void set_HappyProgress(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_HAPPYPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 get_FeverCntToday()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_FEVERCNTTODAY_OFFSET))(this);
	}

	::System::Void set_FeverCntToday(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_FEVERCNTTODAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_AdjustCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_ADJUSTCOUNT_OFFSET))(this);
	}

	::System::Void set_AdjustCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_ADJUSTCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_PLAYTIME_OFFSET))(this);
	}

	::System::Void set_PlayTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_PLAYTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_BusinessTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_BUSINESSTIME_OFFSET))(this);
	}

	::System::Void set_BusinessTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_BUSINESSTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_Fever()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_GET_FEVER_OFFSET))(this);
	}

	::System::Void set_Fever(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_922C8BD967811B57_SET_FEVER_OFFSET))(this, a1);
	}
};
