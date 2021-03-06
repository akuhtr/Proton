#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends011_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends011_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends011_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends011_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends011_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends011_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends011_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends011_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends011_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends011_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends011_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends011_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends011_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends011_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends011_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends011_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends011_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends011_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends011_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends011_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends011_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends011_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends011_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends011_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends011_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends011_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends011_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends011_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends011_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends011_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends011_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends011_RequestFriendRichPresence(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends011_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends011_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends011_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends011_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends011_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends011_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends011_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends011_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends011_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends011_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends011_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends011_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends011_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_GetFollowerCount(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_IsFollowing(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends011_EnumerateFollowingList(void *, uint32);
#ifdef __cplusplus
}
#endif
