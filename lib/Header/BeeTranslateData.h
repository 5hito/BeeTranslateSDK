//
//  BeeTranslateData.h
//  BeeTranslateSDK
//
//  Created by linshucan on 2018/11/8.
//  Copyright © 2018年 BT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeTranslateContentData : NSObject

@property (nonatomic, strong) NSString* originalText;
@property (nonatomic, strong) NSString* translateText;

@end

@interface BeeTranslateData : NSObject

@property (nonatomic, strong) NSString* oriLanguage;
@property (nonatomic, strong) NSMutableArray<BeeTranslateContentData*>* contents;

@end


