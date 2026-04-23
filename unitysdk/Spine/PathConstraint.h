#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class PathAttachment; }
namespace Spine { class PathConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET UNITYSDK_OFFSET(0x156C3A10)
#define SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET UNITYSDK_OFFSET(0x156C3810)
#define SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x156C3C00)
#define SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET UNITYSDK_OFFSET(0x156C08D0)
#define SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x156C1A90)
#define SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x156C4020)
#define SPINE_PATHCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x156C3FF0)
#define SPINE_PATHCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x156C4030)
#define SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x156C3F90)
#define SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x156C3FB0)
#define SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x156C3FD0)
#define SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x156C3F50)
#define SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x156C3F70)
#define SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x156C4000)
#define SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x156C3FA0)
#define SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x156C3FC0)
#define SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x156C3FE0)
#define SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x156C3F60)
#define SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x156C3F80)
#define SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x156C4010)
#define SPINE_PATHCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x156C4040)
#define SPINE_PATHCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x156C09A0)
#define SPINE_PATHCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156C0420)
#define SPINE_PATHCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x156BFF70)

namespace Spine
{
	inline static constexpr unsigned int PathConstraint_TypeDefinitionIndex = 36442;

	class PathConstraint : public ::System::Object
	{
	public:
		// static const ::System::Int32 NONE = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 BEFORE = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 AFTER = 0xFFFFFFFD; // 0x0
		// static const ::System::Single Epsilon; // 0x0
		::Spine::ExposedList_1<::System::Single>* lengths; // 0x10
		::Spine::ExposedList_1<::System::Single>* world; // 0x18
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x20
		::Spine::ExposedList_1<::System::Single>* spaces; // 0x28
		::Spine::ExposedList_1<::System::Single>* positions; // 0x30
		::Il2CppArray<::System::Single>* segments; // 0x38
		::Spine::Slot* target; // 0x40
		::Spine::PathConstraintData* data; // 0x48
		::Spine::ExposedList_1<::System::Single>* curves; // 0x50
		::System::Single spacing; // 0x58
		::System::Boolean active; // 0x5C
		::System::Single mixX; // 0x60
		::System::Single mixRotate; // 0x64
		::System::Single mixY; // 0x68
		::System::Single position; // 0x6C

		::System::Void _ctor(::Spine::PathConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::System::Void _ctor_1(::Spine::PathConstraint* constraint, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraint*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT__CTOR_1_OFFSET))(this, constraint, skeleton);
		}

		static ::System::Void ArraysFill(::Il2CppArray<::System::Single>* a, ::System::Int32 fromIndex, ::System::Int32 toIndex, ::System::Single val)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET))(a, fromIndex, toIndex, val);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_UPDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* ComputeWorldPositions(::Spine::PathAttachment* path, ::System::Int32 spacesCount, ::System::Boolean tangents)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Spine::PathAttachment*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET))(this, path, spacesCount, tangents);
		}

		static ::System::Void AddBeforePosition(::System::Single p, ::Il2CppArray<::System::Single>* temp, ::System::Int32 i, ::Il2CppArray<::System::Single>* output, ::System::Int32 o)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET))(p, temp, i, output, o);
		}

		static ::System::Void AddAfterPosition(::System::Single p, ::Il2CppArray<::System::Single>* temp, ::System::Int32 i, ::Il2CppArray<::System::Single>* output, ::System::Int32 o)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET))(p, temp, i, output, o);
		}

		static ::System::Void AddCurvePosition(::System::Single p, ::System::Single x1, ::System::Single y1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single x2, ::System::Single y2, ::Il2CppArray<::System::Single>* output, ::System::Int32 o, ::System::Boolean tangents)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET))(p, x1, y1, cx1, cy1, cx2, cy2, x2, y2, output, o, tangents);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET))(this, value);
		}

		::System::Single get_Spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_Spacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET))(this, value);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Slot* get_Target()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::Slot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET))(this);
		}

		::Spine::PathConstraintData* get_Data()
		{
			return ((::Spine::PathConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_TOSTRING_OFFSET))(this);
		}
	};
}
