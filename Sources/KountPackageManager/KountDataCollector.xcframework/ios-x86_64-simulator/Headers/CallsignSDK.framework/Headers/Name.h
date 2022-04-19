//
//  Name.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

NS_SWIFT_NAME(Name)
@interface CSSDKName : NSObject <NSSecureCoding>

/**
* A pre-formatted version of the name
*/
@property (nonatomic, copy) NSString *formatted;

/**
* The family name
*/
@property (nonatomic, copy) NSString *familyName;

/**
* The given name
*/
@property (nonatomic, copy) NSString *givenName;

/**
* The middle name
*/
@property (nonatomic, copy) NSString *middleName;

/**
* The honorific prefix
*/
@property (nonatomic, copy) NSString *honorificPrefix;

/**
* The honorific suffix
*/
@property (nonatomic, copy) NSString *honorificSuffix;

@end
