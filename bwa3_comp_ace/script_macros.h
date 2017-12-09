
#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

#define QUOTE(text) #text

#define COMPILE_FILE(func) compile preprocessFileLineNumbers '\ADDON\func##.sqf'

#ifdef DISABLE_FUNCTION_CACHE
    #define PREP(func) BWA3_fnc_##func = compileFinal preprocessFileLineNumbers '\ADDON\functions\fn_##func.sqf'
#else
    #define PREP(func) BWA3_fnc_##func = if (isNil {uiNamespace getVariable 'BWA3_fnc_##func'}) then {compileFinal preprocessFileLineNumbers '\ADDON\functions\fn_##func.sqf'} else {uiNamespace getVariable 'BWA3_fnc_##func'}
#endif

#define FORMAT_1(message,arg1) format [message, arg1]
#define FORMAT_2(message,arg1,arg2) format [message, arg1, arg2]
#define FORMAT_3(message,arg1,arg2,arg3) format [message, arg1, arg2, arg3]
#define FORMAT_4(message,arg1,arg2,arg3,arg4) format [message, arg1, arg2, arg3, arg4]
#define FORMAT_5(message,arg1,arg2,arg3,arg4,arg5) format [message, arg1, arg2, arg3, arg4, arg5]
#define FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) format [message, arg1, arg2, arg3, arg4, arg5, arg6]
#define FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) format [message, arg1, arg2, arg3, arg4, arg5, arg6, arg7]
#define FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) format [message, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8]

#define BWA3_LOG(level,message) diag_log text BWA3_LOGFORMAT(level,message)
#define BWA3_LOGFORMAT(level,message) FORMAT_2(QUOTE([BWA3] %1: %2),level,message)

#define BWA3_LOGERROR(message) BWA3_LOG("ERROR",message)
#define BWA3_LOGERROR_1(message,arg1) BWA3_LOGERROR(FORMAT_1(message,arg1))
#define BWA3_LOGERROR_2(message,arg1,arg2) BWA3_LOGERROR(FORMAT_2(message,arg1,arg2))
#define BWA3_LOGERROR_3(message,arg1,arg2,arg3) BWA3_LOGERROR(FORMAT_3(message,arg1,arg2,arg3))
#define BWA3_LOGERROR_4(message,arg1,arg2,arg3,arg4) BWA3_LOGERROR(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BWA3_LOGERROR_5(message,arg1,arg2,arg3,arg4,arg5) BWA3_LOGERROR(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BWA3_LOGERROR_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BWA3_LOGERROR(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BWA3_LOGERROR_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BWA3_LOGERROR(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BWA3_LOGERROR_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BWA3_LOGERROR(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BWA3_LOGWARNING(message) BWA3_LOG("WARNING",message)
#define BWA3_LOGWARNING_1(message,arg1) BWA3_LOGWARNING(FORMAT_1(message,arg1))
#define BWA3_LOGWARNING_2(message,arg1,arg2) BWA3_LOGWARNING(FORMAT_2(message,arg1,arg2))
#define BWA3_LOGWARNING_3(message,arg1,arg2,arg3) BWA3_LOGWARNING(FORMAT_3(message,arg1,arg2,arg3))
#define BWA3_LOGWARNING_4(message,arg1,arg2,arg3,arg4) BWA3_LOGWARNING(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BWA3_LOGWARNING_5(message,arg1,arg2,arg3,arg4,arg5) BWA3_LOGWARNING(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BWA3_LOGWARNING_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BWA3_LOGWARNING(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BWA3_LOGWARNING_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BWA3_LOGWARNING(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BWA3_LOGWARNING_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BWA3_LOGWARNING(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BWA3_LOGINFO(message) BWA3_LOG("INFO",message)
#define BWA3_LOGINFO_1(message,arg1) BWA3_LOGINFO(FORMAT_1(message,arg1))
#define BWA3_LOGINFO_2(message,arg1,arg2) BWA3_LOGINFO(FORMAT_2(message,arg1,arg2))
#define BWA3_LOGINFO_3(message,arg1,arg2,arg3) BWA3_LOGINFO(FORMAT_3(message,arg1,arg2,arg3))
#define BWA3_LOGINFO_4(message,arg1,arg2,arg3,arg4) BWA3_LOGINFO(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BWA3_LOGINFO_5(message,arg1,arg2,arg3,arg4,arg5) BWA3_LOGINFO(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BWA3_LOGINFO_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BWA3_LOGINFO(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BWA3_LOGINFO_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BWA3_LOGINFO(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BWA3_LOGINFO_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BWA3_LOGINFO(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BWA3_LOGDEBUG(message) BWA3_LOG("DEBUG",message)
#define BWA3_LOGDEBUG_1(message,arg1) BWA3_LOGDEBUG(FORMAT_1(message,arg1))
#define BWA3_LOGDEBUG_2(message,arg1,arg2) BWA3_LOGDEBUG(FORMAT_2(message,arg1,arg2))
#define BWA3_LOGDEBUG_3(message,arg1,arg2,arg3) BWA3_LOGDEBUG(FORMAT_3(message,arg1,arg2,arg3))
#define BWA3_LOGDEBUG_4(message,arg1,arg2,arg3,arg4) BWA3_LOGDEBUG(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BWA3_LOGDEBUG_5(message,arg1,arg2,arg3,arg4,arg5) BWA3_LOGDEBUG(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BWA3_LOGDEBUG_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BWA3_LOGDEBUG(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BWA3_LOGDEBUG_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BWA3_LOGDEBUG(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BWA3_LOGDEBUG_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BWA3_LOGDEBUG(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))
