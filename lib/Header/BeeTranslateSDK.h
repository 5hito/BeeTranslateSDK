//
//  BeeTranslateSDK.h
//  BeeTranslateSDK
//
//  Created by linshucan on 2018/11/7.
//  Copyright © 2018年 BT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeeTranslateData.h"
#import "BeeLanguageData.h"

@interface BeeTranslateSDK : NSObject

+ (void)translateContent:(NSString*)content translateLanuage:(NSString*)tl completionHandler:(void (^)(NSError * error, BeeTranslateData* translateData))completionHandler;

+ (void)translateContent:(NSString*)content translateLanuage:(NSString*)tl sourceLanuage:(NSString*)sl completionHandler:(void (^)(NSError * error, BeeTranslateData* translateData))completionHandler;

+ (NSArray<BeeLanguageData*>*)getAllTranslateLanguage;

@end
