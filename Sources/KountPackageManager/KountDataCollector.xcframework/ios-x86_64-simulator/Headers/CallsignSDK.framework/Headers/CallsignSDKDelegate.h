//
//  CallsignSDKDelegate.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

@import UIKit;

#import <CallsignSDK/CallsignSDKStringKey.h>
#import <CallsignSDK/CallsignSDKTheme.h>
#import <CallsignSDK/AROMechanismType.h>
#import <CallsignSDK/AROMechanismMode.h>

/**
 * This delegate extends the CallsignSDK class with functionality provided by the SDK client application.
 */
@protocol CallsignSDKDelegate <NSObject>

@optional

/**
 * Implement this method to provide a localized string for the specified `CallsignSDKStringKey`
 * Only required if the langauge is required to be change dynamically, otherwise just localize  `Callsign.strings`
 *
 * @param key   See the `CallsignSDKStringKey.h` file for available enumeration values
 */
- (NSString * _Nullable)callsignSDKLocalizedStringForKey:(CallsignSDKStringKey)key;

/**
 * The preferred languages to be used for dynamic text configured in policy.
 * This should match the language provided in `callsignSDKLocalizedStringForKey:`.
 *
 * @return an `NSArray *` of `NSString *` languages/locales, e.g. ` ["en-GB", "en", "ar"]`.
 */
- (NSArray<NSString *> * _Nonnull)callsignSDKPreferredLocalizations;

/**
 * Implement this method to provide custom image for the keys in `CallsignSDKImageKey`
 * This method provides a way for the SDK screens to use the image from the client app.
 *
 * @param key   See the `CallsignSDKTheme.h` file for available enumeration values
 * @return an UIImage
 */
- (UIImage * _Nullable)callsignSDKImageForKey:(CallsignSDKImageKey)key;

/**
 * Implement this method to provide custom color for the keys in `CallsignSDKColorKey`
 * This method provides a way for the SDK screens to use the color from the client app.
 *
 * @param key   See the `CallsignSDKTheme.h` file for available enumeration values
 * @return an UIColor
 */
- (UIColor * _Nullable)callsignSDKColorForKey:(CallsignSDKColorKey)key;

/**
 * Implement this method to provide custom font for the keys in `CallsignSDKFontKey`
 * This method provides a way for the SDK screens to use the font from the client app.
 *
 * To override only the font family use `callsignSDKPreferredFontFamily` delegate method
 *
 * @param key   See the `CallsignSDKTheme.h` file for available enumeration values
 * @return an UIFont
 */
- (UIFont * _Nullable)callsignSDKFontForKey:(CallsignSDKFontKey)key;

/**
 * The preferred font family to be used across all SDK screens
 * Include the following traits for the Font family [bold, semibold, medium, regular] in a .ttf or .otf file format
 * in your App Bundle and prepend the file name with `cs_font` eg: `cs_font_semibold.ttf`
 *
 * To individually customise font for elements use `callsignSDKFontForKey:`
 *
 * @return an  `NSString *` , e.g. "Montserrat"
 */
- (NSString * _Nullable)callsignSDKPreferredFontFamily;

/**
 * Provide a custom authenticator.
 * The Class Name, Mechanism Type and Authentication Mode of the authenticator are provided by the SDK.
 * Implement this method if you want to override a default authenticator or you want to provide a custom authenticator.
 *
 * @param className           The authenticator Class Name - this is not the Swift or Objective-C class name
 * @param mechanismType       The Mechanism Type of the authenticator
 * @param mechanismMode       The Mechanism Mode of the authenticator

 * @return an instance of a subclass of `AROCustomBaseViewController` or `nil`
  */
- (AROCustomBaseViewController * _Nullable)callsignSDKAuthenticatorForClassName:(NSString * _Nonnull)className mechanismType:(AROMechanismType)mechanismType mechanismMode:(AROMechanismMode)mechanismMode NS_SWIFT_NAME(callsignSDKAuthenticator(className:mechanismType:mechanismMode:));

@optional

/**
 *  Implement this method and set `CallsignSDK.collectDiagnosticData` = true to get a buffered diagnostic data stream.
 *  Make sure to call `CallsignSDK.flushDiagnosticData()` when terminating or suspending your app
 *
 * @param dataString            Diagnostic data provided as a string to pass to a cloud service
 * @param flushCount            Number of events contained in the diagnostic data
  */
- (void)diagnosticData:(NSString * _Nonnull)dataString writesSinceLastFlush:(unsigned long)flushCount NS_SWIFT_NAME(diagnosticData(_:writesSinceLastFlush:));

@end
