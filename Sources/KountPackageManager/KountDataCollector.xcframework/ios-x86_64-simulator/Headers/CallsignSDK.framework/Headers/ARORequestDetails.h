//
//  ARORequestDetails.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;
#import <CallsignSDK/TransactionContext.h>

NS_SWIFT_NAME(RequestDetails)
@interface ARORequestDetails : NSObject

@property (nonatomic, nullable) NSString *transactionChannel;
@property (nonatomic, nullable) NSString *service;
@property (nonatomic, nullable) NSString *segment;
@property (nonatomic, nullable) NSString *transactionId;
@property (nonatomic, nullable) NSString *externalSessionId;
@property (nonatomic, nullable) TransactionContext *context;
@property (nonatomic, nullable) NSArray<NSString *> *transactionTags;
@property (nonatomic, nullable) NSDictionary<NSString *, NSString *> *additionalMetadata;
@property (nonatomic, nullable) NSDictionary<NSString *, NSString *> *additionalTransactionInformation;

@end
