//
//  PhoneNumber.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/Macros.h>

NS_SWIFT_NAME(PhoneNumber)
@interface CSSDKPhoneNumber : NSObject<NSSecureCoding>

/**
 * The phone number, e.g. `+1-800-555-2368`
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
 * Convenience method to create a phone number object
 *
 * @param phoneNumber    The phone number, e.g. `+1-800-555-2368`
 *
 * @return the phone number object
 */
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber;

@end
