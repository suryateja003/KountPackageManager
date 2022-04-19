//
//  CSResult.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSResult : NSObject

- (instancetype _Nonnull )initWithSuccess:(BOOL)success response:(id _Nullable)response error:(NSError* _Nullable)error;

/**
 * If YES, the operation was successful; if NO, the operation failed (check the `error` property)
 */
@property (nonatomic) BOOL success;

/**
 * The response object
 */
@property (nonatomic, nullable) id response;

/**
 * Non-nil if an error occured.
 */
@property (nonatomic, nullable) NSError * error;

@end
