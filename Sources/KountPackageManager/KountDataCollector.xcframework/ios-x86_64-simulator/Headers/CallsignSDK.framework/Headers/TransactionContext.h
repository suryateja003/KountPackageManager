//
//  TransactionContext.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CallsignSDK/ContextObjects.h>
#import <CallsignSDK/DeviceActionContextObject.h>

NS_SWIFT_NAME(ContextObject)
@interface TransactionContext : NSObject

- (instancetype)initWithContextDictionary:(NSDictionary *)contextDictionary;

/**
 * Adds Payment information to the Transaction Context.
 *
 * @param payment Payment information
 */
- (void)addPayment:(id)payment;

/**
 * Adds a collection with additional data to the Transaction Context.
 *
 * @param other A collection of additional data that can be mapped to fields in the Policy Manager
 */
- (void)addOther:(NSDictionary <NSString *, NSString*>*)other;

/**
 *
 */
- (void)addAuthentication:(RequirementsCombinationResultContextObject *)authentication;

/**
 *
 */
- (void)addComplianceRequirement:(ComplianceRequirementContextObject *)complianceRequirement;

/**
 *
 */
- (void)addComplianceResult:(ComplianceResultContextObject *)complianceResult;

/**
 *
 */
- (void)addDevice:(DeviceContextObject *)device;

/**
 *
 */
- (void)addLocation:(LocationContextObject *)location;

/**
 *
 */
- (void)addRisk:(RiskContextObject *)risk;

/**
 *
 */
- (void)addTelephony:(TelephonyContextObject *)telephony;

/**
 *
 */
- (void)addTransaction:(TransactionContextObject *)transaction;

/**
 *
 */
- (void)addUser:(UserIdentityContextObject *)userIdentity;

- (void)addDeviceAction:(DeviceActionContextObject*)deviceActionContextObject;

@end
