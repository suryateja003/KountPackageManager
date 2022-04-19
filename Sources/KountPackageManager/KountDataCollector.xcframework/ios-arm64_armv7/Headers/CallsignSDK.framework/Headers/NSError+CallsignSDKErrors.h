//
//  NSError+CallsignSDKErrors.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/CallsignSDKErrorCodes.h>


@interface NSError (CallsignSDKErrors)

/**
 * Whether the error is a CallsignSDK error (if `.domain` == `CallsignSDKErrorDomain`)
 */
@property (nonatomic, readonly) BOOL isCallsignSDKError;

/**
 * Whether the error is a CallsignSDK error with the given error code
 */
- (BOOL)isCallsignSDKErrorWithCode:(CallsignErrorCode)code NS_SWIFT_NAME(isCallsignSDKError(withCode:));

/**
 * The value of the error's `userInfo` `CallsignInvalidParametersKey` key
 */
@property (nonatomic, readonly, nullable) NSArray<NSString *> *callsignInvalidParameters;

/**
 * The value of the error's `userInfo` `CallsignErrorRefKey` key
 */
@property (nonatomic, readonly, nullable) NSString *callsignErrorRef;

@end
