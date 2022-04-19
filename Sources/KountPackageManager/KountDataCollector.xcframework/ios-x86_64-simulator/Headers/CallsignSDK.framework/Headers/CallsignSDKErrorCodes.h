//
//  CallsignSDKErrorCodes.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CallsignSDK/Macros.h>

/**
 * The domain under which all Callsign SDK errors exist
 */
FOUNDATION_EXPORT NSString *const CallsignSDKErrorDomain;

/**
 * Developer Error description NSError `userInfo` key
 *
 * For error within the `CallsignSDKErrorDomain`, this key contains a description of the error to help the developer diagnose the issue. These messages should not be presented to the user.
 */
FOUNDATION_EXPORT NSString *const CallsignSDKDeveloperMessage;

/**
 * Server Error description NSError `userInfo` key
 *
 * For error within the `CallsignSDKErrorDomain`, this key contains a description of the server error to help the developer diagnose the issue. These messages should not be presented to the user.
 */
FOUNDATION_EXPORT NSString *const CallsignSDKServerMessage;

/**
 * The error `userInfo` key under which an array of field names is stored
 *
 * This can also be accessed via the `callsignInvalidParameters` method added by the `NSError+CallsignSDKErrors` category
 */
FOUNDATION_EXPORT NSString *const CallsignInvalidParametersKey;

/**
 * The error `userInfo` key under which the `errorRef` is stored
 *
 * This can also be accessed via the `callsignErrorRef` method added by the `NSError+CallsignSDKErrors` category
 */
FOUNDATION_EXPORT NSString *const CallsignErrorRefKey;

/**
 * The error `userInfo` key under which the specific result string for a `CallsignErrorCodeAuthenticatorError` is stored
 */
FOUNDATION_EXPORT NSString *const CallsignAuthenticatorResultKey;

/**
 * The error `userInfo` key under which the specific error for a `CallsignErrorCodeAuthenticatorError` is stored
 */
FOUNDATION_EXPORT NSString *const CallsignAuthenticatorErrorKey;

/**
 * The error `userInfo` key under which the raw error details are stored. Only for `ERR_RESOURCE_NOT_FOUND`.
 */
FOUNDATION_EXPORT NSString *const CallsignErrorDetailsKey;

/**
 * Callsign SDK error codes.
 *
 * When the SDK experiences an error, an `NSError` object is created and is passed back to the caller as the last parameter of the completion handler. This object has the code set to one of these values.
 *
 * The `NSError` object has a `CallsignSDKDeveloperMessage` key in the userInfo dictionary for this error which holds a textual representation of the error which is displayed the the associated comment below. This message can be helpful during development but is not intended to be localized or displayed in the released application.
 */
typedef NS_ENUM(NSUInteger, CallsignErrorCode) {
    /// An unexpected error occurred.
    CallsignErrorCodeUnexpectedError             NS_SWIFT_NAME(unexpectedError)             = 0,
    /// An internal error occurred.
    CallsignErrorCodeInternalError               NS_SWIFT_NAME(internalError)               = 1,
    /// The user cancelled the current operation.
    CallsignErrorCodeUserCancelled               NS_SWIFT_NAME(userCancelled)               = 2,
    /// No network connection.
    CallsignErrorCodeNoNetwork                   NS_SWIFT_NAME(noNetwork)                   = 3,
    /// A network error occurred.
    CallsignErrorCodeNetworkError                NS_SWIFT_NAME(networkError)                = 4,
    /// The network request was cancelled.
    CallsignErrorCodeRequestCancelled            NS_SWIFT_NAME(requestCancelled)            = 5,
    /// The response returned by the platform could not be parsed or was otherwise invalid.
    CallsignErrorCodeInvalidResponse             NS_SWIFT_NAME(invalidResponse)             = 6,
    /// Permission denied.
    CallsignErrorCodeDenied                      NS_SWIFT_NAME(denied)                      = 7,
    /// See `CallsignAuthenticatorResultCodeKey` and `CallsignAuthenticatorErrorKey` in the `userInfo` for the result code and error string returned by the platform.
    CallsignErrorCodeAuthenticatorError          NS_SWIFT_NAME(authenticatorError)          = 8,
    /// The request was not found.
    CallsignErrorCodeResourceNotFound            NS_SWIFT_NAME(resourceNotFound)            = 9,
    /// The SDK could not be initialized. The underlyingError may contain more details.
    CallsignErrorCodeSDKInitFailed               NS_SWIFT_NAME(sdkInitFailed)               = 10,
    /// The SDK is not inialized. Call `initializeWithSDN()`.
    CallsignErrorCodeSDKNotInitialized           NS_SWIFT_NAME(sdkNotInitialized)           = 11,
    CallsignErrorCodeSDKNotPrepared              NS_SWIFT_NAME(sdkNotPrepared) CS_UNAVAILABLE("Never raised as [Callsign +prepare:] no longer exists") = 12,
    /// Attempt to call an SDK method that requires a different SDK state (e.g. a method that requires an active user when there is no active user).
    CallsignErrorCodeSDKIncorrectState           NS_SWIFT_NAME(incorrectState)              = 13,
    /// Attempt to call an SDK method from a background thread where the Main Thread must be used.
    CallsignErrorCodeNotOnMainThread             NS_SWIFT_NAME(notOnMainThread)             = 14,
    /// The parameters listed under the `CallsignInvalidParameters` in the error's `userInfo` dictionary failed validation.
    CallsignErrorCodeInvalidParameter            NS_SWIFT_NAME(invalidParameter)            = 15,
    /// Attempt to change the length of PIN.
    CallsignErrorCodePinLengthMismatch           NS_SWIFT_NAME(pinLengthMismatch)           = 16,
    /// The requested `username` is not available.
    CallsignErrorCodeUsernameUnavailable         NS_SWIFT_NAME(usernameUnavailable)         = 17,
    /// The ARO structure is invalid and cannot be processed by the `AROController`.
    CallsignErrorCodeInvalidARO                  NS_SWIFT_NAME(invalidARO)                  = 18,
    /// Data collection failed or was disallowed.
    CallsignErrorCodeDataCollectionFailed        NS_SWIFT_NAME(dataCollectionFailed)        = 19,
    /// Location services not enabled or unavailable.
    CallsignErrorCodeLocationNotEnabled          NS_SWIFT_NAME(locationNotEnabled)          = 20,
    /// A request is in the process of being handled by the SDK.
    CallsignErrorCodeRequestAlreadyInProgress    NS_SWIFT_NAME(requestAlreadyInProgress)    = 21,
    /// Request has expired.
    CallsignErrorCodeRequestExpired              NS_SWIFT_NAME(requestExpired)              = 22,
    /// Failed to fetch service configuration.
    CallsignErrorCodeConfigFetchFailed           NS_SWIFT_NAME(configFetchFailed)           = 23,
    /// Failed to establish a secure connection.
    CallsignErrorCodeSecureConnectionFailed      NS_SWIFT_NAME(secureConnectionFailed)      = 24,
    /// The SDK needs to be reinitialized, call initializeWithSDN.
    CallsignErrorCodeSDKReinitializationRequired NS_SWIFT_NAME(sdkReinitializationRequired) = 25,
    /// Reached the maximum limit of registered devices per user.
    CallsignErrorCodeMaxNumberOfDevicesReached   NS_SWIFT_NAME(maxNumberOfDevicesReached)   = 26,
    /// Device error, please try again.
    CallsignErrorCodeDeviceError                 NS_SWIFT_NAME(deviceError)                 = 27,
    /// A policy error has occurred. Please check the configuration in the Policy Manager.
    CallsignErrorCodePolicyError                 NS_SWIFT_NAME(policyError)                 = 28,
    /// There was a server failure.
    CallsignErrorCodeServerFailure               NS_SWIFT_NAME(serverFailure)               = 29,
    /// The request was considered invalid by the platform.
    CallsignErrorCodeInvalidRequest              NS_SWIFT_NAME(invalidRequest)              = 30,
    /// The authenticator was blocked due to too many invalid attempts.
    CallsignErrorCodeAuthenticatorBlocked        NS_SWIFT_NAME(authenticatorBlocked)        = 31,
    /// The subscriber was blocked.
    CallsignErrorCodeSubscriberBlocked           NS_SWIFT_NAME(subscriberBlocked)           = 32,
    /// Invalid PIN.
    CallsignErrorCodeInvalidPIN                  NS_SWIFT_NAME(invalidPIN)                  = 33,
    /// Invalid code.
    CallsignErrorCodeInvalidCode                 NS_SWIFT_NAME(invalidCode)                 = 34,
    /// Invalid path.
    CallsignErrorCodeInvalidPath                 NS_SWIFT_NAME(invalidPath)                 = 35,
    /// Reached the maximum limit of registered mobile devices per user.
    CallsignErrorCodeMaxNumberOfMobileDevicesReached   NS_SWIFT_NAME(maxNumberOfMobileDevicesReached)   = 36,
    /// The SDK is already initializing while being asked to initialize again.
    CallsignErrorCodeSDKInitAlreadyInProgress             NS_SWIFT_NAME(sdkInitInProgress)  = 37,
    /// The SDK has already been initialized and is being re-initialized without wiping first.
    CallsignErrorCodeSDKAlreadyInitialized                NS_SWIFT_NAME(sdkAlreadyInitialized) = 38,
    /// The SDK was unable to save the current config on the device
    CallsignErrorCodeConfigSaveFailed                NS_SWIFT_NAME(configSaveFailed) = 39,


} NS_SWIFT_NAME(CallsignErrorCode);
