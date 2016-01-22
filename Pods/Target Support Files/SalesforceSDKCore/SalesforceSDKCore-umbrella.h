#import <UIKit/UIKit.h>

#import "NSArray+SFAdditions.h"
#import "NSData+SFSDKUtils.h"
#import "NSDictionary+SFAdditions.h"
#import "NSURL+SFAdditions.h"
#import "NSURL+SFStringUtils.h"
#import "SFAbstractPasscodeViewController.h"
#import "SFApplication.h"
#import "SFAuthErrorHandler.h"
#import "SFAuthErrorHandlerList.h"
#import "SFAuthenticationManager.h"
#import "SFAuthenticationViewHandler.h"
#import "SFAuthorizingViewController.h"
#import "SFCommunityData.h"
#import "SFCrypto.h"
#import "SFDefaultUserManagementDetailViewController.h"
#import "SFDefaultUserManagementListViewController.h"
#import "SFDefaultUserManagementViewController.h"
#import "SFDirectoryManager.h"
#import "SFEncryptionKey.h"
#import "SFGeneratedKeyStore.h"
#import "SFIdentityCoordinator.h"
#import "SFIdentityData.h"
#import "SFInactivityTimerCenter.h"
#import "SFInstrumentation.h"
#import "SFJsonUtils.h"
#import "SFKeyStore.h"
#import "SFKeyStoreKey.h"
#import "SFKeyStoreManager.h"
#import "SFManagedPreferences.h"
#import "SFMethodInterceptor.h"
#import "SFOAuthCoordinator.h"
#import "SFOAuthCredentials.h"
#import "SFOAuthCrypto.h"
#import "SFOAuthInfo.h"
#import "SFOAuthKeychainCredentials.h"
#import "SFOAuthOrgAuthConfiguration.h"
#import "SFOAuthSessionRefresher.h"
#import "SFPBKDF2PasscodeProvider.h"
#import "SFPBKDFData.h"
#import "SFPasscodeKeyStore.h"
#import "SFPasscodeManager+Internal.h"
#import "SFPasscodeManager.h"
#import "SFPasscodeProviderManager.h"
#import "SFPasscodeViewController.h"
#import "SFPasscodeViewControllerTypes.h"
#import "SFPreferences.h"
#import "SFPushNotificationManager.h"
#import "SFRootViewManager.h"
#import "SFSDKAppConfig.h"
#import "SFSDKAppDelegate.h"
#import "SFSDKAsyncProcessListener.h"
#import "SFSDKCryptoUtils.h"
#import "SFSDKDatasharingHelper.h"
#import "SFSDKReachability.h"
#import "SFSDKResourceUtils.h"
#import "SFSDKTestCredentialsData.h"
#import "SFSDKTestRequestListener.h"
#import "SFSDKWebUtils.h"
#import "SFSHA256PasscodeProvider.h"
#import "SFSecurityLockout+Internal.h"
#import "SFSecurityLockout.h"
#import "SFTestContext.h"
#import "SFUserAccount.h"
#import "SFUserAccountConstants.h"
#import "SFUserAccountIdentity.h"
#import "SFUserAccountManager.h"
#import "SFUserAccountManagerUpgrade.h"
#import "SFUserActivityMonitor.h"
#import "SalesforceSDKCore.h"
#import "SalesforceSDKCoreDefines.h"
#import "SalesforceSDKManager.h"
#import "TestSetupUtils.h"
#import "UIDevice+SFHardware.h"
#import "UIScreen+SFAdditions.h"
#import "SFLogger.h"
#import "NSData+SFAdditions.h"
#import "NSString+SFAdditions.h"
#import "NSNotificationCenter+SFAdditions.h"
#import "SFPathUtil.h"
#import "SFFileProtectionHelper.h"
#import "SFCocoaLumberJackCustomFormatter.h"
#import "SalesforceSDKConstants.h"
#import "SFKeychainItemWrapper.h"

FOUNDATION_EXPORT double SalesforceSDKCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char SalesforceSDKCoreVersionString[];

