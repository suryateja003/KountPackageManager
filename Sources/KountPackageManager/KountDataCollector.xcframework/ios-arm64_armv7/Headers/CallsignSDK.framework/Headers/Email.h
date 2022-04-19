//
//  Email.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/Macros.h>

NS_SWIFT_NAME(Email)
@interface CSSDKEmail : NSObject<NSSecureCoding>

/**
 * The email address, e.g. `eleanor.arroway@callsign.com`
 */
@property (nonatomic, copy) NSString *value;

/**
 * Type of the email address, e.g. `work`
 */
@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *verificationStatus CS_DEPRECATED("Contact Callsign if you need to use this property");

/**
 * In case of multiple contact methods, marks this as the primary.
 */
@property (nonatomic) BOOL primary;

/**
 * Convenience method to create an email object
 *
 * @param email    The email address, e.g. `eleanor.arroway@callsign.com`
 *
 * @return the email object
 */
- (instancetype)initWithEmail:(NSString *)email;

@end
