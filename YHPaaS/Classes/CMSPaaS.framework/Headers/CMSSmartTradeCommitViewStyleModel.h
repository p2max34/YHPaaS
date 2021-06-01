//
//  CMSSmartTradeCommitStyleModel.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/11/10.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,CMSSmartTradeCommitViewComponentType) {
    CMSSmartTradeCommitViewComponentTypeCondition = 0,
    CMSSmartTradeCommitViewComponentTypeProduct,
    CMSSmartTradeCommitViewComponentTypeTrigger,
    CMSSmartTradeCommitViewComponentTypeDirection,
    CMSSmartTradeCommitViewComponentTypeEntrustPrice,
    CMSSmartTradeCommitViewComponentTypeEntrustAmount,
    CMSSmartTradeCommitViewComponentTypeDate,
    CMSSmartTradeCommitViewComponentTypeRemake,
}; 

@interface CMSSmartTradeCommitViewItemModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSAttributedString *attributeContent;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, copy) NSDictionary *datas;
@property (nonatomic, copy) NSArray<NSString *> *fields;
@property (nonatomic, assign) CMSSmartTradeCommitViewComponentType componet;
@property (nonatomic, assign) BOOL isRule;
@property (nonatomic, copy) NSString *bingStyleType;
@property (nonatomic, copy) NSString *bingStyleTypeField;
@property (nonatomic, copy) NSString *fieldJoin;

@end

@interface CMSSmartTradeCommitViewStyleModel : NSObject

@property (nonatomic, copy) NSString *cancelTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *commitTitle;
@property (nonatomic, copy) NSArray<CMSSmartTradeCommitViewItemModel *> *items;

@end
