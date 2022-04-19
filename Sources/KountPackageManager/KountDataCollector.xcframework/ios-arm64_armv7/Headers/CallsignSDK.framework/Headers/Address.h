//
//  Address.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/Macros.h>

NS_SWIFT_NAME(Address)
@interface CSSDKAddress : NSObject<NSSecureCoding>

/**
 * First line of the address
 */
@property (nonatomic, copy) NSString *line1;

/**
 * Second line of the address
 */
@property (nonatomic, copy) NSString *line2;

/**
 * Postal Code / Zip Code
 */
@property (nonatomic, copy) NSString *postalCode;

/**
 * Country code
 */
@property (nonatomic, copy) NSString *countryCode;

/**
* Type of the email address, e.g. `work`
*/
@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *verificationStatus CS_DEPRECATED("Contact Callsign if you need to use this property");

@end
