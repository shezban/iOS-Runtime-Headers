/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate> {
    int _profileToken;
    BOOL _showingChildViewController;
}

- (BOOL)_allAccountsAreDeactivated;
- (BOOL)_isMadridAccountOperational;
- (BOOL)_isMadridSwitchOn;
- (BOOL)_isSMSDevice;
- (id)_madridSettingsController;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabling;
- (void)_showMadridSetupIfNecessary:(BOOL)arg1;
- (void)_showMadridSetupIfNecessary;
- (void)_startListeningForProfileChanges;
- (void)_stopListeningForProfileChanges;
- (id)_switchFooterText:(BOOL*)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (void)_updateUIWithError:(id)arg1;
- (id)areReadReceiptsEnabled:(id)arg1;
- (id)blacklistSettingsSpecifierIdentifiers;
- (id)bundle;
- (id)characterCountSpecifierIdentifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)debugSettingsSpecifierIdentifiers;
- (id)deliveryReceiptSpecifierIdentifiers;
- (void)dumpLogs:(id)arg1;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (id)genericSettingsSpecifierIdentifiers;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)init;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)isMMSEnabled:(id)arg1;
- (id)isMadridEnabled:(id)arg1;
- (id)isRegistrationLoggingEnabledForSpecifier:(id)arg1;
- (id)isiMessageLoggingEnabledForSpecifier:(id)arg1;
- (id)logName;
- (id)madridAccountsSpecifierIdentifiers;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (void)newCarrierNotification;
- (id)readReceiptSpecifierIdentifiers;
- (id)sendAsSMSIdentifiers;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRegistrationLoggingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setSpecifierLoading:(id)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (void)setiMessageLoggingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldShowBlacklistSettings;
- (BOOL)shouldShowCharacterCount;
- (BOOL)shouldShowDebugSettings;
- (BOOL)shouldShowDeliveryReceipts;
- (BOOL)shouldShowGenericSettings;
- (BOOL)shouldShowMadridAccounts;
- (BOOL)shouldShowMadridSignin;
- (BOOL)shouldShowMadridSwitch;
- (BOOL)shouldShowReadReceipts;
- (BOOL)shouldShowSendAsSMS;
- (id)specifiers;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsWiFiChooser;
- (id)willSendGroupMMS:(id)arg1;

@end
