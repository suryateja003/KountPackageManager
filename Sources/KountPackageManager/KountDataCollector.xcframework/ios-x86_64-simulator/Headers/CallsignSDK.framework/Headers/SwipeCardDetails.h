//
//  SwipeCardDetails.h
//  CallsignSDK
//
//  Callsign SDK Version 5.11.5
//
//  Copyright (c) 2016-2022 Callsign Inc. All rights reserved.
//

// Provides information to be displayed on the swipe card

@import UIKit;

#import <CallsignSDK/DataCollectionDetails.h>

NS_SWIFT_NAME(SwipeCardDetails)
@interface CSSDKSwipeCardDetails : CSSDKDataCollectionDetails

/**
 * The title of the swipe card
 */
@property (nonatomic, strong, nullable) NSString *title;

/**
* The subtitle of the swipe card
*/
@property (nonatomic, strong, nullable) NSString *subtitle;

/**
 * This property can include HTML text styling elements. If it does, it will be wrapped
 * in a `<style>` declaration centering the text and applying the font and color defined
 * by the themeing values.
 *
 * For more information on theming the Callsign SDK, see https://developers.callsign.com/sdk/ios/getting-started/#3-1-Styling-and-Localizing-the-Callsign-SDK
 */
@property (nonatomic, strong, nullable) NSString *extraInfo;

/**
 * The `imageName` will be interpreted in the following way:
 *
 * If it begins with `https:` or `http:` the SDK will treat the name as a URL and
 *  will make a network request to fetch the image.
 *
 * If it begins with `/` the SDK will treat it as an absolute file path (as returned
 *  by NSBundle's `-pathForResource:ofType:`) and will load the image from that file.
 *
 * Otherwise, the SDK will used UIImage's `-imageNamed:` to load the image from the
 *  app's asset catalogue.
 */
@property (nonatomic, strong, nullable) NSString *imageName;

@end
