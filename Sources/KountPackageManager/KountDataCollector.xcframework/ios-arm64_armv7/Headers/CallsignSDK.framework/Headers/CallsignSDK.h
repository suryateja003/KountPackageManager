//
//  CallsignSDK.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/ActivityItem.h>
#import <CallsignSDK/Address.h>
#import <CallsignSDK/AROCustomBaseViewController.h>
#import <CallsignSDK/CallsignSDKErrorCodes.h>
#import <CallsignSDK/Configuration.h>
#import <CallsignSDK/ContextObjects.h>
#import <CallsignSDK/CSTextFieldView.h>
#import <CallsignSDK/DataCollectionDetails.h>
#import <CallsignSDK/Email.h>
#import <CallsignSDK/Macros.h>
#import <CallsignSDK/Name.h>
#import <CallsignSDK/Notifications.h>
#import <CallsignSDK/NSError+CallsignSDKErrors.h>
#import <CallsignSDK/PendingRequest.h>
#import <CallsignSDK/PhoneNumber.h>
#import <CallsignSDK/Profile.h>
#import <CallsignSDK/SwipeCardDetails.h>
#import <CallsignSDK/TransactionContext.h>
#import <CallsignSDK/CallsignSDKDelegate.h>
#import <CallsignSDK/CSUserDevice.h>
#import <CallsignSDK/ARORequestDetails.h>
#import <CallsignSDK/CSResult.h>

@class AROAuthMechanismQuery;

// CallsignSDK state
typedef NS_ENUM(NSInteger, CSSDKState) {
    CSSDKStateNotInitialized        NS_SWIFT_NAME(notInitialized),
    CSSDKStateNoActiveAccount       NS_SWIFT_NAME(noActiveAccount),
    CSSDKStateActiveAccount         NS_SWIFT_NAME(activeAccount),
} NS_SWIFT_NAME(SDKState);

// Result of user available call
typedef NS_ENUM(NSInteger, CSSDKUserAvailableState) {
    UserAvailableStateToRegister    NS_SWIFT_NAME(availableToRegister),
    UserAvailableStateToBind        NS_SWIFT_NAME(availableToBind),
    UserAvailableStateError         NS_SWIFT_NAME(error),
} NS_SWIFT_NAME(UserAvailableState);

/**
 * A completion handler that is called when request finishes.
 *
 * @param result  The result object containing the details about operation.
 */
typedef void(^ResultCompletionHandler)(CSResult * _Nonnull result);

/**
 * A generic completion handler that returns a `BOOL` and an `NSError`.
 *
 * @param success   If YES, the operation was successful; if NO, the operation failed (check the `error` parameter).
 * @param error     Non-nil if an error occured.
 */
typedef void (^GeneralCompletionHandler)(BOOL success, NSError * _Nullable error);

/**
 * Completion handler for User Availability checks
 *
 * @param state     The state of the given user account.
 * @param error     Non-nil if an error occured.
 */
typedef void (^UserAvailableCompletionHandler)(CSSDKUserAvailableState state, NSError * _Nullable error);

/**
 * Completion handler for the User Profile.
 *
 * @param profile    A `Profile` object, or nil if the call failed.
 * @param error      Non-nil if an error occurred.
 */
typedef void (^UserProfileCompletionBlock)(CSSDKProfile * _Nullable profile, NSError * _Nullable error);

/**
 * Type of result block used in `fetchActivityItemsBefore` and `fetchActivityItemsAfter` to return `ActivityItem` objects. If no activities are available, the array will be empty.
 *
 * @param activityItems    An array of `ActivityItem` objects. If the call succeeds but no activities are available the array will be empty.
 * @param error         An error describing why fetching activities failed
 */
typedef void (^ActivityItemsResultBlock)(NSArray<CSSDKActivityItem *> * _Nullable activityItems, NSError * _Nullable error);

/**
 * Type of result block used in `getPendingRequest` calls.
 *
 * @param requests  An array of `CSSDKPendingRequest` objects, which may be empty, or `nil` if something went wrong
 * @param error     An error, if something went wrong
 */
typedef void (^PendingRequestResultBlock)(NSArray<CSSDKPendingRequest *> * _Nullable requests, NSError * _Nullable error);

/**
 * A Passcode completion handler that returns a Passcode as a String and an `NSError`.
 *
 * @param passcode  Returns a generated Passcode
 * @param error     Non-nil if an error occured.
 */
typedef void (^PasscodeCompletionHandler)(NSString * _Nullable passcode, NSError * _Nullable error);

/**
 * Type of result block used as callback when performing any actions on the Transaction Gateway
 *
 * @param response      The contents of the `response` property, optionally deserialised to an object
 * @param error         An error, if something went wrong, or `nil` on success
 */
typedef void (^CSSDKCompletionHandler)(id _Nullable response, NSError * _Nullable error);

/**
 * Type of result block used as callback when retrieving bound authenticators
 *
 * @param authenticators  An array of strings describing bound authenticators e.g. ["TOUCH_ID", "SWIPE"]
 * @param error           An error, if something went wrong, or `nil` on success
 */
typedef void(^CSSDKBoundAuthenticatorsHandler)(NSArray <NSString *> *_Nullable authenticators, NSError * _Nullable error);

/**
 * Completion handler for Data Collection
 *
 * @param data      On success, the data representation of a JSON object containing the encrypted data collected
 * @param error     On failure, an error describing what went wrong (including if the user cancelled collection)
 */
typedef void (^DataCollectionCompletionBlock)(NSData * _Nullable data, NSError * _Nullable error);

/**
 * Completion handler for Device Info Collection
 *
 * @param success   Whether device information was successfully collected and submitted
 * @param error     On failure, an error describing what went wrong (including if the user cancelled collection)
 */
typedef void (^DeviceInfoCollectionCompletionBlock)(BOOL success, NSError * _Nullable error);

/**
 * Completion handler for fetch registered devices
 *
 * @param devices      On success, an array of devices objects containing information about each device
 * @param error     On failure, an error describing what went wrong
 */
typedef void (^RegisteredDevicesResultBlock)(NSArray<CSUserDevice *> * _Nullable devices, NSError * _Nullable error);

@interface CallsignSDK : NSObject

// The CallsignSDK delegate
@property(class, nonatomic, weak, nullable) id<CallsignSDKDelegate> delegate;

// Returns the current state of the SDK
+ (CSSDKState)state;

// MARK: Initialization

/**
 * Initialise the SDK with the given service discovery name provided by Callsign for use here
 *
 * @param serviceDiscoveryName    The value provided by Callsign for use here
 * @param completion              A completion block which will be invoked when the SDK initialisation finishes
 */
+ (void)initializeWithSDN:(NSString * _Nonnull)serviceDiscoveryName completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("use +[CallsignSDK initializeWithConfiguration:completion:] or +[CallsignSDK initializeWithSDN:gatewayURL:tlsPinningHashes:completion:] instead");

/**
 * Initialise the SDK with the given service discovery name provided by Callsign for use here
 *
 * @param serviceDiscoveryName  The value provided by Callsign for use here
 * @param gatewayURL    Callsign Public Facing URL (See `Configuration.gatewayURL`)
 * @param tlsPinningHashes  TLS Pinning hashes of the public keys to be used by mobile for certificate pinning as a hex string.
 * @param completion    A completion block which will be invoked when the SDK initialisation finishes
 */
+ (void)initializeWithSDN:(NSString * _Nonnull)serviceDiscoveryName
               gatewayURL:(NSString * _Nonnull)gatewayURL
         tlsPinningHashes:(NSArray <NSString*>* _Nonnull)tlsPinningHashes
               completion:(nonnull GeneralCompletionHandler)completion;

/**
 * Initialise the SDK with the given configuration.
 * This method is unavailable and has been replaced by +[CallsignSDK initializeWithSDN:completion:]
 *
 * @param configuration     The `CSSDKConfiguration` object with which to initialise the SDK
 * @param error             An optional pointer to an error object which will be populated if initialisation fails
 * @return Whether SDK initialisation was successful
 */
+ (BOOL)initializeWithConfiguration:(CSSDKConfiguration * _Nonnull)configuration error:(NSError * _Nullable * _Nullable)error CS_UNAVAILABLE("use +[CallsignSDK initializeWithConfiguration:completion:] instead");

/**
 * Initialise the SDK with the given configuration.
 *
 * @param configuration     The `CSSDKConfiguration` object with which to initialise the SDK
 * @param completion        A completion block which will be invoked when the SDK initialisation finishes
 */
+ (void)initializeWithConfiguration:(CSSDKConfiguration * _Nonnull)configuration completion:(nonnull GeneralCompletionHandler)completion NS_SWIFT_NAME(initialize(configuration:completion:));

/**
 * Perform a minimal initialisation of the SDK
 * This method is unavailable and has been replaced by +[CallsignSDK initializeWithSDN:completion:]
 *
 * @param SDKKey    The SDK key which was issued to you by Callsign
 * @param orgID     The Organization ID (Tenant ID) which was issued to you by Callsign
 *
 * @return YES if the SDK was successfully initialized; NO if something went wrong
 */
+ (BOOL)initializeWithSDKKey:(NSString * _Nonnull)SDKKey orgID:(NSString * _Nonnull)orgID CS_UNAVAILABLE("use +[CallsignSDK initializeWithConfiguration:completion:] instead");

// MARK: Other methods

/**
 * Cancel an in-flight request. Pass the token returned by the operation you want to cancel.
 *
 * @param token     The token returned by the operation you want to cancel
 */
+ (void)cancelRequest:(nonnull id)token;

/**
 * Check whether a subscribed account with the given `userName` exists.
 *
 * @param userName   The subscriber ID to check
 * @param completion A block which will be invoked with the result of the check
 */
+ (void)isUserAvailable:(NSString * _Nonnull)userName completion:(nonnull UserAvailableCompletionHandler)completion;

/**
 * Register a user by filling in the required fields in the profile object.
 *
 * The `userName` should have previously returned `UserAvailableStateToRegister` from `+isUserAvailable:completion:`
 *
 * @param profile    The Profile data that contains all relevant information to register an user.
 * @param completion A completion block which will be invoked when the operation finishes
 */
+ (void)registerUser:(CSSDKProfile * _Nonnull)profile completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("use +[CallsignSDK registerAccount:requestDetails:completion:] instead");

/**
 * Register a user.
 *
 * @param profile            The profile data that contains all relevant information to register an user
 * @param requestDetails Optional transaction details
 * @param completion         A completion block which will be invoked when the operation finishes
 */
+ (void)registerAccount:(CSSDKProfile * _Nonnull)profile requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull GeneralCompletionHandler)completion NS_SWIFT_NAME(registerAccount(profile:requestDetails:completion:));

/**
 * Register a user.
 *
 * @param profile            The profile data that contains all relevant information to register an user
 * @param requestDetails Optional transaction details
 * @param completion         A completion block which will be invoked when the operation finishes
 */
+ (void)registerAccountWithProfile:(CSSDKProfile * _Nonnull)profile requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull ResultCompletionHandler)completion NS_SWIFT_NAME(registerAccount(profile:requestDetails:completion:));

/**
 * Reactivate (bind to this device) the user with the given subscriber ID
 *
 * The `userName` should have previously returned `UserAvailableStateToBind` from `+isUserAvailable:completion:`
 *
 * @param userName   The subscriber ID to reactivate
 * @param completion A block which will be invoked once re-binding is complete
 */
+ (void)reactivateUser:(NSString * _Nonnull)userName completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("use +[CallsignSDK reactivateAccount:requestDetails:completion:] instead");

/**
 * Reactivate a user.
 *
 * @param profile            The profile  that contains the user name to reactivate
 * @param requestDetails Optional transaction details
 * @param completion         A completion block which will be invoked when the operation finishes
 */
+ (void)reactivateAccount:(CSSDKProfile * _Nonnull)profile requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull GeneralCompletionHandler)completion NS_SWIFT_NAME(reactivateAccount(profile:requestDetails:completion:));

/**
 * Reactivate a user.
 *
 * @param profile            The profile  that contains the user name to reactivate
 * @param requestDetails Optional transaction details
 * @param completion         A completion block which will be invoked when the operation finishes
 */
+ (void)reactivateAccountWithProfile:(CSSDKProfile * _Nonnull)profile requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull ResultCompletionHandler)completion NS_SWIFT_NAME(reactivateAccount(profile:requestDetails:completion:));

/**
 * Fetch the up-to-date user profile from the Platform.
 *
 * @param completion    A block which will be invoked once the operation finishes
 */
+ (void)fetchUserProfile:(nonnull UserProfileCompletionBlock)completion;

/**
 * Register a push notification token which the platform will use to communicate with the device
 *
 * Depending on the point in the SDK's lifecycle at which this method is called, the token may not be sent to the platform immediately.
 *
 * @param token      The push notification token, and returned to `application:didRegisterForRemoteNotificationsWithDeviceToken:`
 * @param sandbox    Whether this token is for the development sandbox or live environement
 * @param completion A completion block which will be invoked when the operation finishes
 */
+ (void)setPushNotificationToken:(NSData * _Nonnull)token sandbox:(BOOL)sandbox completion:(nonnull GeneralCompletionHandler)completion;

/**
 * Register a push notification token which the platform will use to communicate with the device
 *
 * Depending on the point in the SDK's lifecycle at which this method is called, the token may not be sent to the platform immediately.
 *
 * @param stringToken   String representation of the token object
 * @param sandbox       Whether this token is for the development sandbox or live environement
 * @param completion    A completion block which will be invoked when the operation finishes
 */
+ (void)setPushNotificationTokenWithString:(NSString * _Nonnull)stringToken sandbox:(BOOL)sandbox completion:(nonnull GeneralCompletionHandler)completion NS_SWIFT_NAME(setPushNotificationToken(_:sandbox:completion:)); 

/**
 * Attempts to interpret a Push Notification which has been delivered to the Host App as a Callsign
 * pending transaction notification. If it is a pending transaction notification, an object representing
 * the transaction is returned. The `.transactionID` property can be used in the `-fetchPendingRequests:`
 * call.
 *
 * @param userInfo  The notification dictionary, as delivered to e.g. `-application:didReceiveRemoteNotification:fetchCompletionHandler:`
 *
 * @return A `CSSDKPendingRequest` object if the notification was a Callsign pending transaction notification, `nil` otherwise
 */
+ (CSSDKPendingRequest * _Nullable)pendingRequestFromPushNotification:(NSDictionary * _Nonnull)userInfo;

/**
 * Check for pending requests.
 *
 * @param completion        A PendingRequestResultBlock which will be invoked upon completion
 */
+ (void)fetchPendingRequests:(nonnull PendingRequestResultBlock)completion;

/**
 * Fetch and process a request.
 *
 * @param transactionID     The ID of the request to fetch
 * @param completion        The block which will be invoked upon completion
 */
+ (void)processRequest:(NSString * _Nonnull)transactionID completion:(nonnull GeneralCompletionHandler)completion;

/**
 * Fetch Activity Items which follow a given item.
 *
 * Returns activity items for the current active user. This call returns all activity items which occurred chronologically later than that item and returns `count` items.
 *
 * If fewer than `count` items are returned, you should assume that there are no more to fetch.
 *
 * This method requires a working Internet connection.
 *
 * @param count             The maximum number of activities to return per fetch
 * @param date              It provides the starting point for fetching more activities. This would typically be the last (chronologically most recent) activity returned by a previous call to a fetch method.
 * @param completion        A block that will be invoked when the operation finishes
 */
+ (void)fetch:(NSUInteger)count activityItemsAfter:(NSNumber * _Nonnull)date completion:(nonnull ActivityItemsResultBlock)completion CS_DEPRECATED("Use +[CallsignSDK activityItemsAfter:limit:completion:] instead");

/**
 * Fetch Activity Items that follow a given item.
 *
 * Returns activity items for the currently active user.
 * This call returns all activity items which occurred chronologically later than that item and returns `count` items.
 *
 * If fewer than `count` items are returned, you should assume that there are no more to fetch.
 *
 * This method requires a working Internet connection.
 *
 * @param date              It provides the starting point for fetching more activities.
 *                          This would typically be the last (chronologically most recent) activity returned by a previous call to a fetch method.
 * @param limit             The maximum number of activities to return per fetch
 * @param completion        A block that will be invoked when the operation finishes
 */
 + (void)fetchActivityItemsAfter:(NSDate* _Nonnull)date limit:(NSUInteger)limit completion:(nonnull ActivityItemsResultBlock)completion;

/**
 * Fetch Activity Items which come before a given item.
 *
 * Returns activity items for the current active user. This call returns all activity items which occurred chronologically earlier than that item and returns `count` items.
 *
 * If fewer than `count` items are returned, you should assume that there are no more to fetch.
 *
 * This method requires a working Internet connection.
 *
 * @param count             The maximum number of activities to return per fetch
 * @param date              It provides the starting point for fetching more activities. This would typically be the first (chronologically oldest) activity returned by a previous call to a fetch method.
 * @param completion        A block that will be invoked when the operation finishes
 */
+ (void)fetch:(NSUInteger)count activityItemsBefore:(NSNumber * _Nonnull)date completion:(nonnull ActivityItemsResultBlock)completion CS_DEPRECATED("Use +[CallsignSDK fetchActivityItemsBefore:limit:completion:] instead");

/**
 * Fetch Activity Items that come before a given item.
 *
 * Returns activity items for the currently active user.
 * This call returns all activity items which occurred chronologically earlier than that item and returns `count` items.
 *
 * If fewer than `count` items are returned, you should assume that there are no more to fetch.
 *
 * This method requires a working Internet connection.
 *
 * @param date              It provides the starting point for fetching more activities.
 *                          This would typically be the first (chronologically oldest) activity returned by a previous call to a fetch method.
 * @param limit             The maximum number of activities to return per fetch
 * @param completion        A block that will be invoked when the operation finishes
 */
+ (void)fetchActivityItemsBefore:(NSDate* _Nonnull)date limit:(NSUInteger)limit completion:(nonnull ActivityItemsResultBlock)completion;

/**
 * Performs logout functions, and removes the user from the app.
 *
 *  The actual logout UI transition is left up to the client application.
 *  Once the logoutUser method is called, the SDK must be initialized by calling:
 *       - `CallsignSDK.initialize(with: GetSDKConfiguration())`  then
 */
+ (void)logoutUser CS_DEPRECATED("Use +[CallsignSDK wipeData:completion] instead");

/**
 * Erases all the data, and removes the user from the app.
 *
 * The UI transition is left up to the client application.
 * Once the wipeData method is called, the SDK must be initialized by calling `+initializeWithSDN:completion:`
 */
+ (void)wipeData CS_DEPRECATED("Use +[CallsignSDK wipeData:completion] instead");

/**
 * Erases all the data, and removes the user from the app.
 * Can be invoked offline, service errors are ignored and all the local data is wiped regardless.
 *
 * The UI transition is left up to the client application.
 * Once the wipeData method is called, the SDK must be initialized by calling `+initializeWithSDN:completion:`
 *
 * @param completion        A block that will be invoked when the operation finishes
 */

+ (void)wipeData:(nonnull GeneralCompletionHandler)completion;

/**
 * Initiates a login transaction
 *
 * This method requires a working Internet connection.
 *
 * @param completion        A block that will be invoked when the operation finishes
*/
+ (void)loginTransaction:(nonnull GeneralCompletionHandler)completion;

/**
 * Generate a Passcode for a PIN entry
 *
 * Returns a one time generated HOTP passcode
 *
 * This method requires a working Internet connection.
 *
 * @param completion        A block that will be invoked when the operation finishes
 */
+ (void)generatePasscode:(nonnull PasscodeCompletionHandler)completion;

/**
 * Collect device information profiling data
 *
 * @param details       A `CSSDKDataCollectionDetails` object containing collection-specific values
 * @param completion    A block that will be invoked when the operation finishes
 */
+ (void)performDeviceInfoCollectionWithDetails:(CSSDKDataCollectionDetails * _Nonnull)details completion:(nonnull DeviceInfoCollectionCompletionBlock)completion;

/**
 * Initiates a self started request
 *
 * @param transactionType   A string that correlates to the transactionTypes set in the Policy
 * @param completion        A block that will be invoked when the operation finishes
 */
+ (void)initiateRequest:(NSString * _Nonnull)transactionType completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("Use +[CallsignSDK initiateRequest:requestDetails:completion:] instead");

/**
 * Initiates a self started request
 *
 * @param transactionType  A string that correlates to the transactionTypes set in the Policy
 * @param context                Optional context for the request
 * @param completion          A block that will be invoked when the operation finishes
 */
+ (void)initiateRequest:(NSString * _Nonnull)transactionType context:(TransactionContext * _Nullable)context completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("Use +[CallsignSDK initiateRequest:requestDetails:completion:] instead");

/**
 * Initiates a self started request
 *
 * @param transactionType A string that correlates to the transactionTypes set in the Policy
 * @param transactionChannel The channel of a specific transaction (mobile, internet etc.).
 * @param transactionId A unique ID associated with the current business transaction. If not provided, one will be generated.
 * @param externalSessionId The external session identifier of the transaction
 * @param service Used by policy engine to determine the policies to trigger
 * @param segment Used by policy engine to determine the policies to trigger
 * @param transactionTags Used by policy engine to determine the policies to trigger
 * @param additionalMetadata Additional key-value data, which may be used by the organization to describe the transaction.
 * @param additionalTransactionInformation Additional Ids, which may be used by the organization to describe the transaction
 * @param context Any context provided with the decision request
 * @param completion A block that will be invoked when the operation finishes
 */
+ (void)initiateRequest:(NSString * _Nonnull)transactionType
                channel:(NSString * _Nullable)transactionChannel
             identifier:(NSString * _Nullable)transactionId
      sessionIdentifier:(NSString * _Nullable)externalSessionId
                service:(NSString * _Nullable)service
                segment:(NSString * _Nullable)segment
                   tags:(NSArray<NSString *>* _Nullable)transactionTags
               metadata:(NSDictionary<NSString *, NSString *>* _Nullable)additionalMetadata
            information:(NSDictionary<NSString *, NSString *>* _Nullable)additionalTransactionInformation
                context:(TransactionContext * _Nullable)context
             completion:(nonnull GeneralCompletionHandler)completion CS_DEPRECATED("Use +[CallsignSDK initiateRequest:requestDetails:completion:] instead");

/**
 * Initiates a self started request
 *
 * @param transactionType    A transaction type defined in policy
 * @param requestDetails The transaction details
 * @param completion         A block that will be invoked when the operation finishes
 */
+ (void)initiateRequest:(NSString * _Nonnull)transactionType requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull GeneralCompletionHandler)completion;

/**
 * Initiates a self started request
 *
 * @param transactionType    A transaction type defined in policy
 * @param requestDetails The transaction details
 * @param completion         A block that will be invoked when the operation finishes
 */
+ (void)initiateRequestForTransactionType:(NSString * _Nonnull)transactionType requestDetails:(ARORequestDetails * _Nullable)requestDetails completion:(nonnull ResultCompletionHandler)completion NS_SWIFT_NAME(initiateRequest(transactionType:requestDetails:completion:));

/**
 * Retrieve a list of bound authenticators from the service
 *
 * @param useCache Whether to retrieve from cache (`TRUE`) or make a network call (`FALSE`)
 * @param completion A block with a return type of array of strings describing all the bound authenticators e.g. TOUCH_ID, SWIPE and an NSError type
 */
+ (void)retrieveBoundAuthenticatorsFromCache:(BOOL)useCache completion:(nonnull CSSDKBoundAuthenticatorsHandler)completion;

/**
 * Checks whether we've persisted any bound authenticators
 *
 * @return a bool indicating whether there are any bound authenticators in memory
 */
+ (BOOL)cachedBoundAuthenticatorsExist;

/**
 * Registers an external Authenticator for an Authentication Class Name (Callsign Portal)
 *
 * @param className       The Swift or Objective-C class name of the authenticator you wish to register
 * @param authClassName   The Callsign Portal Authenticator `Class Name` of the authenticator you wish to register
 * @return `YES` if the authenticator was registered, `NO` if registration failed
*/
+ (BOOL)registerExternalAuthenticator:(NSString * _Nonnull)className authClassName:(NSString * _Nonnull)authClassName CS_DEPRECATED("Implement CallsignSDKDelegate.callsignSDKAuthenticatorForClassName:mechanismType:authenticationMode: instead");

/**
 * Fetch all the devices of user
 *
 * @param completion        The block which will be invoked upon completion
 */
+ (void)fetchRegisteredDevices:(nonnull RegisteredDevicesResultBlock)completion;

/**
 * Include profileIdOld field as part of the collected metadata.
 *
 * Do not use this property unless explicitly directed by Callsign, as it will be removed in the next version of the SDK. Defaults to `NO`.
*/
@property (class, nonatomic, assign) BOOL includeLegacyProfileId CS_DEPRECATED();

/**
 * Starts diagnostic data collection within the SDK
 *
 */
@property (nonatomic, class, assign) BOOL collectDiagnosticData;

/**
 * Diagnostic data dump
 *
 * @return a string containing diagnostic data for providing to app support
 */
+ (NSString *_Nonnull)diagnosticData;

/**
 * Flush diagnostic data stream for callback method
 *
 */
+ (void)flushDiagnosticData;

/**
 *  Delete any diagnost data logs inside the SDK
 *
 */
+ (void)deleteDiagnosticData;

@end
