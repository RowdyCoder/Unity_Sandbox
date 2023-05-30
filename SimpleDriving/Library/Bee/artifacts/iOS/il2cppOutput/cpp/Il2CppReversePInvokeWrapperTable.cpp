#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 
{
	int32_t ___year_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___hour_3;
	int32_t ___minute_4;
	int32_t ___second_5;
	uint8_t ___repeats_6;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC 
{
	double ___latitude_0;
	double ___longitude_1;
	float ___radius_2;
	uint8_t ___notifyOnEntry_3;
	uint8_t ___notifyOnExit_4;
	uint8_t ___repeats_5;
};
struct TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 
{
	int32_t ___interval_0;
	uint8_t ___repeats_1;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC 
{
	int32_t ___granted_0;
	String_t* ___error_1;
	String_t* ___deviceToken_2;
};
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	char* ___deviceToken_2;
};
struct iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	Il2CppChar* ___deviceToken_2;
};
struct TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 ___timeInterval_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			TimeTriggerData_t110F07D01BDEC0F8D7C1E625A581638C9AEE6823 ___timeInterval_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 ___calendar_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			CalendarTriggerData_t95CDF224E7B6165CE42899A54B3BADAE1B4BBB23 ___calendar_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC ___location_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			LocationTriggerData_t6C709C3123CDD15B8FA218B532776BAB4B0172FC ___location_2_forAlignmentOnly;
		};
	};
};
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED 
{
	String_t* ___identifier_0;
	String_t* ___title_1;
	String_t* ___body_2;
	int32_t ___badge_3;
	String_t* ___subtitle_4;
	String_t* ___categoryIdentifier_5;
	String_t* ___threadIdentifier_6;
	int32_t ___soundType_7;
	float ___soundVolume_8;
	String_t* ___soundName_9;
	intptr_t ___userInfo_10;
	intptr_t ___attachments_11;
	int32_t ___triggerType_12;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_13;
};
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	int32_t ___soundType_7;
	float ___soundVolume_8;
	char* ___soundName_9;
	intptr_t ___userInfo_10;
	intptr_t ___attachments_11;
	int32_t ___triggerType_12;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_13;
};
struct iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	int32_t ___soundType_7;
	float ___soundVolume_8;
	Il2CppChar* ___soundName_9;
	intptr_t ___userInfo_10;
	intptr_t ___attachments_11;
	int32_t ___triggerType_12;
	TriggerData_t5B00176E3EB034DB9078E419981580696EB8D39E ___trigger_13;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___0_language);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___0_arg);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD(intptr_t ___0_request, iOSAuthorizationRequestData_t216987B5D9A6729184F783B5F68AE9124B9321AC_marshaled_pinvoke ___1_data);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___0_data);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856(intptr_t ___0_dict, char* ___1_key, char* ___2_value);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652(intptr_t ___0_array, char* ___1_id, char* ___2_url);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212(iOSNotificationData_t57D24EBD788D6C71F203ACE14688358AFA08BDED_marshaled_pinvoke ___0_data);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSStepCounter_OnDataReceived_m5026961D9D4D64A5930020A91D82DF64E65591C0(int32_t ___0_deviceId, int32_t ___1_numberOfSteps);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[8] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m4A6C75E5BFEA2C3E529F2F8CEEA8A813F428B3CD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_mB7F4859AF321D5AF115D70F4BD8AB131543D7524),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m57E371B7275602846E05E0770BFA78C6641BC856),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mF8194BDA3434E46D10AF292C61D4F3E00B654652),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mBF44180FD060AC5811C9979FE6E771650AA35212),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSStepCounter_OnDataReceived_m5026961D9D4D64A5930020A91D82DF64E65591C0),
};
