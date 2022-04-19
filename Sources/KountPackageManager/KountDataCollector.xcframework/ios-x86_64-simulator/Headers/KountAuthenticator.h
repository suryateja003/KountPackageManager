//
//  KountAuthenticator.h
//  KountDataCollector
//
//  Created by Vellaturi Devi Surya Teja on 05/04/22.
//  Copyright © 2022 Kount Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface KountAuthenticator : UIViewController

+(void)initializeKAuthenticatorSDK:(void (^)(NSString *sdkKey))completionBlock;
+(void)kInitializeAuthenticatorSDK:(NSString *)sdkKey;
+(void)checkSDKState;
+(void)checkUserRegistration:(NSString *)userName ;
+(void)createUserAccount:(NSString *)name andFamilyName:(NSString *)familyName andEmail:(NSString *)email andPhoneNo:(NSString *)phoneNo;
+(void)reactivateuserAccount:(void (^)(BOOL success, NSError * _Nullable error))completionBlock;
+(void)registerTheAccountWithDetails:(NSString *)givenName andfamilyName:(NSString *)familyName andEmail:(NSString *)email completionBlock:(void (^)(BOOL success, NSError * _Nullable error))completionBlock;
+(void)resetThePath;
+(void)initiaiteRequestFromSDK;
+(void)deviceWipeData ;
@end

NS_ASSUME_NONNULL_END
