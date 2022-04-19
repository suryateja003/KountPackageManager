//
//  CSUserDevice.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSUserDevice : NSObject

@property (nonatomic, readonly, nullable) NSString *deviceId;
@property (nonatomic, readonly, nullable) NSString *type;
@property (nonatomic, readonly, nullable) NSString *mobileOs;
@property (nonatomic, readonly, nullable) NSString *mobileOsVersion;
@property (nonatomic, readonly, nullable) NSString *brand;
@property (nonatomic, readonly, nullable) NSString *name;
@property (nonatomic, readonly, nullable) NSString *model;
@property (nonatomic, readonly, nullable) NSString *version;
@property (nonatomic, readonly, nullable) NSString *serial;
@property (nonatomic, readonly, nullable) NSDate *createdAt;
@property (nonatomic, readonly, nullable) NSDate *lastUpdateAt;
@property (nonatomic, readonly) BOOL isCurrentDevice;
@end
