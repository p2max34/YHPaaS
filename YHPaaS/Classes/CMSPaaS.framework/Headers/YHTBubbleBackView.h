//
//  YHTBubbleBackView.h
//  cmsmobilesecurities
//
//  Created by 蒲公英 on 2018/12/13.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>


#pragma mark - JDFTooltipViewArrowDirection
typedef NS_ENUM(NSInteger, YHTBubbleTipViewArrowDirection){
    YHTBubbleTipViewArrowDirectionUp,
    YHTBubbleTipViewArrowDirectionRight,
    YHTBubbleTipViewArrowDirectionDown,
    YHTBubbleTipViewArrowDirectionLeft
};

NS_ASSUME_NONNULL_BEGIN

@interface YHTBubbleBackView : UIView
@property (nonatomic, strong) UIColor *fillColor;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) YHTBubbleTipViewArrowDirection direction;
@end

NS_ASSUME_NONNULL_END
