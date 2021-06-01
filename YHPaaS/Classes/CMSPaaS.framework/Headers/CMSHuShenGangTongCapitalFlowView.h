//
//  CMSHuShenGangTongCapitalFlowView.h
//  CMSPaaSBenchmark
//
//  Created by sway on 2021/1/2.
//  Copyright © 2021 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, CMSCapitalFlowType) {
    CMSHuGuTong = 0,
    CMSShenGuTong,
    CMSGangGuTongSZ,
    CMSGangGuTongSH
};
NS_ASSUME_NONNULL_BEGIN

@interface CMSHuShenGangTongCapitalFlowItem : NSObject
@property (nonatomic, assign) CMSCapitalFlowType type;
@property (nonatomic, assign) CGFloat availableCapital;
@property (nonatomic, assign) CGFloat inflow;

@end

@interface CMSHuShenGangTongCapitalFlowView : UIView
@property (nonatomic, strong) UILabel *availableCapitalValueLabel;
@property (nonatomic, strong) UILabel *inflowValueLabel;
@property (nonatomic, strong) CMSHuShenGangTongCapitalFlowItem *item;
- (instancetype)initWithFrame:(CGRect)frame item:(CMSHuShenGangTongCapitalFlowItem *)item;

@end

NS_ASSUME_NONNULL_END
