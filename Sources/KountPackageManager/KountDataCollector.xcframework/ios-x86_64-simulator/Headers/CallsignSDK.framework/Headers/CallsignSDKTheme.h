//
//  CallsignSDKTheme.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import UIKit;

#import <CallsignSDK/Macros.h>

/**
 * This enumeration is used with the `CallsignSDKDelegate` protocol's `callsignSDKFontForKey:` method.
 *
 * Implement the `CallsignSDKDelegate` protocol to override the default SDK logic:
 * 1. `callsignSDKFontForKey:` implemented by host app (CallsignSDKDelegate) will return an UIFont or
 * 2.  Try to retrieve the font family from `callsignSDKPreferredFontFamily` delegate method and return an UIFont with default traits set by the SDK or
 * 3.  Try to retrieve the font name from old keys in Callsign.strings file and return UIFont or
 * 4.  Return system font for the specified textstyle.
 */
typedef NS_ENUM(NSUInteger, CallsignSDKFontKey) {
    /// Default weight: Medium size: 14
    CallsignSDKFontKeyBody14                      NS_SWIFT_NAME(body14) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Medium size: 15
    CallsignSDKFontKeyBody15                      NS_SWIFT_NAME(body15) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Regular size: 15
    CallsignSDKFontKeyRegularText15               NS_SWIFT_NAME(regularText15) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Bold size: 15
    CallsignSDKFontKeyTitle15                     NS_SWIFT_NAME(title15) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Bold size: 20
    CallsignSDKFontKeyTitle20                     NS_SWIFT_NAME(title20) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Bold size: 24
    CallsignSDKFontKeyTitle24                     NS_SWIFT_NAME(title24) CS_DEPRECATED("Use the New Font Keys"),
    /// Default weight: Bold size: 32
    CallsignSDKFontKeyTitle32                     NS_SWIFT_NAME(title32) CS_DEPRECATED("Use the New Font Keys"),
    
    // MARK: Enums supported by the new designs
    /// Default weight: Semibold size: 28
    CallsignSDKFontKeyTitle1                      NS_SWIFT_NAME(title1),
    /// Default weight: Semibold size: 22
    CallsignSDKFontKeyHeading                     NS_SWIFT_NAME(heading),
    /// Default weight: Regular size: 16
    CallsignSDKFontKeyPrimaryText                 NS_SWIFT_NAME(primaryText),
    /// Default weight: Regular size: 16
    CallsignSDKFontKeyPrimaryButtonText           NS_SWIFT_NAME(primaryButtonText),
    /// Default weight: Regular size: 14
    CallsignSDKFontKeySecondaryText               NS_SWIFT_NAME(secondaryText),
    /// Default weight: Regular size: 14
    CallsignSDKFontKeySecondaryButtonText         NS_SWIFT_NAME(secondaryButtonText),
    /// Default weight: Regular size: 28
    CallsignSDKFontKeyPINButton                   NS_SWIFT_NAME(pinButton),
};

/**
 * This enumeration is used with the `CallsignSDKDelegate` protocol's `callsignSDKColorForKey:` method.
 *
 * Implement the `CallsignSDKDelegate` protocol to override the default SDK logic:
 *
 * To theme the new designs
 * 1. `callsignSDKColorForKey:` implemented by host app (CallsignSDKDelegate) will return an UIColor or
 * 2. Return the SDK default
 *
 * To theme the old design keys
 * 1. `callsignSDKColorForKey:` implemented by host app (CallsignSDKDelegate) will return an UIColor or
 * 2.  SDK will try to retrieve color value from `Callsign.strings` in the host app bundle or
 * 3.  Return the SDK default
 */
typedef NS_ENUM(NSUInteger, CallsignSDKColorKey) {
    /// Default color: #F6F7F8
    CallsignSDKColorKeyBackground                 NS_SWIFT_NAME(background) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #2E323D
    CallsignSDKColorKeyBodyText                   NS_SWIFT_NAME(bodyText) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #008044
    CallsignSDKColorKeyPrimaryButton              NS_SWIFT_NAME(primaryButton) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #EFF0F1
    CallsignSDKColorKeyPrimaryButtonDisabled      NS_SWIFT_NAME(primaryButtonDisabled) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #FFFFFF
    CallsignSDKColorKeyPrimaryButtonDisabledText  NS_SWIFT_NAME(primaryButtonDisabledText) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #F6F7F8
    CallsignSDKColorKeyPrimaryButtonText          NS_SWIFT_NAME(primaryButtonText) CS_DEPRECATED("Use the New Color Keys"),
    /// Default color: #98A9BC
    CallsignSDKColorKeySubBodyText                NS_SWIFT_NAME(subBodyText) CS_DEPRECATED("Use the New Color Keys"),
    
    // MARK: Enums supported by the new designs
    /// Default color: #2E323D
    CallsignSDKColorKeyNewBackground              NS_SWIFT_NAME(newBackground),
    /// Default color: #6B707B
    CallsignSDKColorKeyNewForegroundBodyText      NS_SWIFT_NAME(newForegroundBodyText),
    /// Default color: #D2D4D8
    CallsignSDKColorKeyNewOutline                 NS_SWIFT_NAME(newOutline),
    /// Default color: #F6F7F8
    CallsignSDKColorKeyNewPinButton               NS_SWIFT_NAME(newPinButton),
    /// Default color: #2E323D
    CallsignSDKColorKeyNewPinButtonText           NS_SWIFT_NAME(newPinButtonText),
    /// Default color: #FFFFFF
    CallsignSDKColorKeyNewForeground              NS_SWIFT_NAME(newForeground),
    /// Default color: #1FA885
    CallsignSDKColorKeyNewHighlight               NS_SWIFT_NAME(newHighlight),
    /// Default color: #928D8D
    CallsignSDKColorKeyNewLightDropShadow         NS_SWIFT_NAME(newLightDropShadown),
    /// Default color: #FFFFFF
    CallsignSDKColorKeyNewBackgroundBodyText      NS_SWIFT_NAME(newBackgroundBodyText),
    /// Default color: #2E323D
    CallsignSDKColorKeyNewForegroundTitleText     NS_SWIFT_NAME(newForegroundTitleText),
    /// Default color: #2E323D
    CallsignSDKColorKeyNewForegroundButton        NS_SWIFT_NAME(newForegroundButton),
    /// Default color: #FFFFFF
    CallsignSDKColorKeyNewForegroundButtonText    NS_SWIFT_NAME(newForegroundButtonText),
};

/**
 * This enumeration is used with the `CallsignSDKDelegate` protocol's `callsignSDKImageForKey:` method.
 * For images  add @2x and @3x pngs to your application target.
 *
 * Implement the `CallsignSDKDelegate` protocol to override the default SDK logic:
 * 1. `callsignSDKImageForKey:` implemented by host app (CallsignSDKDelegate) will return an UIImage or
 * 2. Return the SDK default
 */
typedef NS_ENUM(NSUInteger, CallsignSDKImageKey) {
    CallsignSDKImageKeyHelpIcon                   NS_SWIFT_NAME(helpIcon),
    CallsignSDKImageKeyRejectIcon                 NS_SWIFT_NAME(rejectIcon),
    CallsignSDKImageKeyApproveIcon                NS_SWIFT_NAME(approveIcon),
    CallsignSDKImageKeyPINEraseButton             NS_SWIFT_NAME(pinEraseButton),
    CallsignSDKImageKeySwipeTutorialIcon          NS_SWIFT_NAME(swipeTutorialIcon),
    CallsignSDKImageKeySwipeTutorialCloseButton   NS_SWIFT_NAME(swipeTutorialCloseButton),
    CallsignSDKImageKeyPathTutorialIcon           NS_SWIFT_NAME(pathTutorialIcon),
    CallsignSDKImageKeyWaitImage                  NS_SWIFT_NAME(waitImage),
};

@interface CallsignSDKTheme : NSObject
@end
