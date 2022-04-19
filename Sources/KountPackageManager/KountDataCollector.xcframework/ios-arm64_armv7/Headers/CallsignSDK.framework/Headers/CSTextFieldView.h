//
//  CSTextFieldView.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CallsignSDK/DataCollectionDetails.h>

@interface CSTextFieldView : UITextField

@property (nonatomic, assign) BOOL sensitiveData;

- (instancetype _Nonnull)initWithSensitiveData:(BOOL)sensitiveData;
- (void)sendCollectedDataWithCollectionDetails:(CSSDKDataCollectionDetails * _Nonnull)collectionDetails;
- (void)stopCollection;
- (void)resetCollection;
- (void)resetKeystrokeProfile;

@end
