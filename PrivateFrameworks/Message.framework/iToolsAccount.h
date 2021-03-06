/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface iToolsAccount : IMAPAccount {
}

+ (id)accountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)deliveryHostName;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)hostname;
+ (void)initialize;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)usernameIsEmailAddress;

- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (void)accountDidLoad;
- (Class)connectionClass;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayUsername;
- (id)emailAddresses;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)hostname;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (void)setDeliveryAccount:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)supportsArchiving;
- (BOOL)updateEmailAliases;

@end
