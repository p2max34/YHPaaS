//
//  CMSHomeRecommendModel.h
//  CMSPaaSBenchmark
//
//  Created by sway on 2020/10/19.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CMSHomeRecommendModelItem;

@interface CMSHomeRecommendColumnModel : NSObject
@property (nonatomic,copy)      NSString    *columnid;
@property (nonatomic,copy)      NSArray     <CMSHomeRecommendModelItem*>  *itemlist;
@property (nonatomic,strong)      NSArray          *modelList;
- (NSArray*)modelArrayWithClass:(Class)class;
@end

@interface CMSHomeRecommendItem : NSObject
@property (nonatomic,copy)      NSString    *itemid;
@property (nonatomic,copy)      NSString    *item;
@end

NS_ASSUME_NONNULL_END
