//
//  AROCustomBaseViewController.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import UIKit;
#import <CallsignSDK/ARORequirementsResult.h>
#import <CallsignSDK/AROMechanismType.h>
#import <CallsignSDK/AROMechanismMode.h>
#import <CallsignSDK/AROActionType.h>
#import <CallsignSDK/AROChallengeData.h>

@protocol AROCustomAuthenticator <NSObject>

@optional

/**
 * Implement this method if your authenticator supports retry logic and you want to provide the error UI
 */
- (void)retryWithError:(NSError * _Nonnull)error NS_SWIFT_NAME(retry(error:));

@end

/**
 * AROCustomBaseViewController is the base class for all custom authenticators.
 *
 * Return an instance of a custom authenticator in your implementation of the `[CallsignSDKDelegate callsignSDKAuthenticatorForClassName:mechanismType:mechanismMode:]` method.
 *
 */
@interface AROCustomBaseViewController : UIViewController <AROCustomAuthenticator>

// These properties are available in viewDidLoad
@property (nonatomic, readonly) AROMechanismType type;
@property (nonatomic, readonly) AROMechanismMode mode;
@property (nonatomic, readonly) AROActionType action;
/**
 * An array of challenge data objects
 */
@property (nonatomic, readonly) NSArray<AROChallengeData *> * _Nullable challengeData;

/**
 * Call resetDataRecording in a reset method in your custom authenticator to restart data recording.
 * For example if a backspace button clears any entered digits, then this method should be called.
 */
- (void)resetDataRecording;

/**
 * Add a touch observer to any buttons or views for which touches should be captured, e.g. PIN pad digits, swipe card.
 * For buttons and other static controls, the `referenceView` may be nil or can be the same as `view`.
 * For views which move with touches, e.g. a swipe card, the reference view should be a static parent or root view.
 *
 * @param view      A button, control or view to which a touch observer should be added
 * @param referenceView     The coordinate system of this view will be used when calculating the touch points
 */
- (void)addTouchObserverForView:(UIView * _Nonnull)view inView:(UIView * _Nullable)referenceView NS_SWIFT_NAME(addTouchObserver(for:referenceView:));

// MARK: Actions
- (void)didCompleteWithResult:(ARORequirementsResult)result response:(NSString * _Nullable)response;
- (void)didCancel;
- (void)didReject;

@end
