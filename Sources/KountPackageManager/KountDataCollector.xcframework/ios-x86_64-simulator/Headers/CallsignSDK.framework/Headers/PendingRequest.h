//
//  PendingRequest.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import Foundation;

NS_SWIFT_NAME(PendingRequest)
@interface CSSDKPendingRequest : NSObject

/**
 * A unique ID associated with the current business transaction. If not provided, one will be generated.
 */
@property (nonatomic, readonly, nonnull) NSString *transactionID;

@end
