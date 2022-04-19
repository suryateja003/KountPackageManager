//
//  Profile.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

@class CSSDKName;
@class CSSDKEmail;
@class CSSDKPhoneNumber;
@class CSSDKAddress;

NS_SWIFT_NAME(Profile)
@interface CSSDKProfile : NSObject <NSSecureCoding>

/**
 * Unique user-visible identifier
 */
@property (nonatomic, nonnull, copy) NSString *userName;

/**
 * Subscriber allocated to the device
 */
@property (nonatomic, nonnull, copy) NSString *subscriberId;

/**
 * Human name associated with the profile
 */
@property (nonatomic, nonnull, strong) CSSDKName *name;

/**
 * Full name compiled from the associated name property.
 */
@property (nonatomic, nonnull, readonly) NSString *fullName;

/**
 * Email addresses associated with the profile
 */
@property (nonatomic, nullable, copy) NSArray<CSSDKEmail*> *emails;

/**
 * Phone numbers associated with the profile
 */
@property (nonatomic, nullable, copy) NSArray<CSSDKPhoneNumber*> *phoneNumbers;

/**
 * Addresses associated with the profile
 */
@property (nonatomic, nullable, copy) NSArray<CSSDKAddress*> *addresses;

/**
* Convenience method to create a profile object
*
* @param userName    Unique user-visible identifier
*
* @return the profile object
*/
- (nonnull instancetype)initWithUserName:(NSString * _Nonnull)userName;

/**
 * Convenience method to add an email address to the profile
 */
- (void)addEmail:(NSString * _Nonnull)email;

/**
 * Convenience method to add a phone number to the profile
 */
- (void)addPhoneNumber:(NSString * _Nonnull)number;

@end
