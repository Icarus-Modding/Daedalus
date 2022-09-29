#pragma once

#include <CoreUObject_classes.hpp>

#define IMPL_FIND_AND_CALL_FUNC_NO_ARGS(fname, type, varname) \
    type varname; \
    {\
        static UE4::UFunction* __sfn = UE4::UObject::FindObject<UE4::UFunction>(#fname); \
        struct {type ReturnValue;} __returnStruct; \
        UE4::UObject::ProcessEvent(__sfn, &__returnStruct); \
        varname = __returnStruct.ReturnValue; \
    }