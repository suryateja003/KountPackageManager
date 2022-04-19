//
//  ActivityItem.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

#import <CallsignSDK/Macros.h>

NS_SWIFT_NAME(ActivityItem)
@interface CSSDKActivityItem : NSObject <NSSecureCoding>

/**
 * The result of the transaction, e.g. `SUCCESS`, `FAILURE`
 */
@property (nonatomic, readonly) NSString *result;

/**
 * A unique ID associated with the current business transaction. If not provided, one will be generated.
 */
@property (nonatomic, readonly) NSString *transactionId;

/**
 * The date the transaction was completed.
 */
@property (nonatomic, readonly) NSDate *completedTimestamp;

/**
 * The organization identifier returned by Service Discovery, e.g. `org-...`
 */
@property (nonatomic, readonly) NSString *organizationId;

/**
 * The display name of the organisation, e.g. Callsign.
 */
@property (nonatomic, readonly) NSString *organizationDisplayName;

/**
 * The transaction type, e.g. `REGISTRATION`, `REACTIVATION`, `LOGIN`, `SWIPE` ...
 */
@property (nonatomic, readonly) NSString *activityType;

/**
 * The name of the service requesting authentication
 */
@property (nonatomic, readonly) NSString *service;

/**
 * The logo of the service requesting authentication
 */
@property (nonatomic, readonly) NSString *logoUrl;

@property (nonatomic, readonly) NSDictionary<NSString*, NSString*> *activityDetails CS_DEPRECATED("Contact Callsign if you need to use this property");

@end
