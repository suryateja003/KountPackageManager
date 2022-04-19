//
//  DataCollectionDetails.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

// Super class of the Details object which is passed to configure data collectors

@import Foundation;

NS_SWIFT_NAME(DataCollectionDetails)
@interface CSSDKDataCollectionDetails : NSObject

/**
 * The identifier of the profile within the Intelligence domain
 */
@property (nonatomic, readonly, nonnull) NSString *profileID;

/**
 * The external session identifier of the transaction
 */
@property (nonatomic, readonly, nonnull) NSString *sessionID;

/**
 * A unique ID associated with the current business transaction. If not provided, one will be generated.
 */
@property (nonatomic, readonly, nonnull) NSString *transactionID;

/**
 * Arbitrary key-value pairs to be passed to the Intelligence domain
 */
@property (nonatomic, strong, nullable) NSDictionary <NSString*, NSString*> *customAttributes;

/**
 * Convenience method to create a data collection details object
 *
 * @param profileID    The identifier of the profile within the Intelligence domain
 * @param sessionID    The external session identifier of the transaction
 * @param transactionID    A unique ID associated with the current business transaction. If not provided, one will be generated.
 *
 * @return the data collection details object
 */
- (nonnull instancetype)initWithProfileID:(NSString * _Nonnull)profileID
                                sessionID:(NSString * _Nonnull)sessionID
                            transactionID:(NSString * _Nonnull)transactionID;

/**
 * Convenience method to create a data collection details object
 *
 * @param profileID    The identifier of the profile within the Intelligence domain
 * @param sessionID    The external session identifier of the transaction
 * @param transactionID    A unique ID associated with the current business transaction. If not provided, one will be generated.
 * @param customAttributes    Arbitrary key-value pairs to be passed to the Intelligence domain
 *
 * @return the data collection details object
*/
- (nonnull instancetype)initWithProfileID:(NSString * _Nonnull)profileID
                                sessionID:(NSString * _Nonnull)sessionID
                            transactionID:(NSString * _Nonnull)transactionID
                         customAttributes:(NSDictionary <NSString*, NSString*> *_Nullable)customAttributes;

@end
