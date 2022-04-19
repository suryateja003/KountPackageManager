//
//  AROChallengeData.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AROChallengeData : NSObject <NSSecureCoding>

@property (nonatomic, strong, nonnull) NSString *identifier;
@property (nonatomic, strong, nonnull) NSString *displayName;
@property (nonatomic, strong, nonnull) NSString *displayValue;
@property (nonatomic, strong, nonnull) NSArray<AROChallengeData *> *challengeData;

- (instancetype _Nonnull )initWithID:(NSString *_Nonnull)identifier value:(NSString * _Nullable)value;

/**
 * Traverses the nested `AROChallengeData` datastructure contained in the `challengeData` property and returns an instance of `AROChallengeData` with given identifier
 *
 * @param identifier AROChallengeData identification
 * @return AROChallenge object matching the given identifier
*/
- (AROChallengeData * _Nullable)challengeDataWithId:(NSString *_Nonnull)identifier;

@end
