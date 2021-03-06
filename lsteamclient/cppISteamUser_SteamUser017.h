#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser017_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser017_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser017_GetSteamID(void *);
extern int cppISteamUser_SteamUser017_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser017_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser017_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser017_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser017_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser017_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser017_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser017_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser017_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser017_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser017_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser017_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser017_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser017_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser017_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser017_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser017_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser017_GetEncryptedAppTicket(void *, void *, int, uint32 *);
extern int cppISteamUser_SteamUser017_GetGameBadgeLevel(void *, int, bool);
extern int cppISteamUser_SteamUser017_GetPlayerSteamLevel(void *);
#ifdef __cplusplus
}
#endif
