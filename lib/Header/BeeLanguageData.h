//
//  BeeLanguageData.h
//  BeeTranslateSDK
//
//  Created by linshucan on 2018/11/8.
//  Copyright © 2018年 BT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeLanguageData : NSObject

@property (nonatomic, assign) BOOL isSupportSpeech;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* ggLanguage;
@property (nonatomic, strong) NSString* speechLocale;

@end


