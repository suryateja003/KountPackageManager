//
//  Configuration.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/Macros.h>

NS_SWIFT_NAME(Configuration)
@interface CSSDKConfiguration : NSObject

/**
 * Callsign Public Facing URL
 */
@property (nonatomic, copy, nonnull) NSString * gatewayURL;

/**
 * Organisation ID - supplied by Callsign during onboarding
 */
@property (nonatomic, copy, nonnull) NSString * orgId;

/**
 * SDK key - supplied by Callsign during onboarding
 */
@property (nonatomic, copy, nonnull) NSString * sdkKey;

/**
 * TLS Pinning hash of the public key to be used by mobile for certificate pinning as a hex string
 */
@property (nonatomic, copy, nonnull) NSString * tlsPinningHash CS_DEPRECATED("use tlsCertPinningHashes");

/**
 * TLS Pinning hashes of the public keys to be used by mobile for certificate pinning as a hex string.
 * tlsPinningHashes has been renamed to tlsCertPinningHashes in SDK 5.11.1 
 */
@property (nonatomic, copy, nonnull) NSArray<NSString*>* tlsCertPinningHashes;

/**
 * Mechanism of authenticator
 */
@property (nonatomic) BOOL includeUserIdentifierInResults;

/**
 * PIN length
 */
@property (nonatomic) NSInteger pinLength;

/**
 * Validation
 */
@property (nonatomic, readonly) BOOL isValid;

@end
