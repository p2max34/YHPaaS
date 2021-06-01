//
//  CMSTimeLineView.h
//  CMSTimeLineView
//
//  Created by sway on 2021/4/12.
//

#import <UIKit/UIKit.h>
#import "CMSStockQuotesTimeChartModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSArray <UIColor *> *_Nonnull(^CMSTimeLineViewConfigGradientColorBlock)(void);

@class CMSTimeLineItem;
@interface CMSTimeLineView : UIView
@property (nonatomic, strong) CMSStockQuotesTimeChartModel *model;
@property (nonatomic, copy)   CMSTimeLineViewConfigGradientColorBlock   gradientColorBlock;
@property (nonatomic, assign)  CGColorRef strokeColor;
@property (nonatomic, assign)  CGFloat lineWidth;
- (CGPoint)getPointLocation:(CMSStockTimeChartItem *)item;
@end

NS_ASSUME_NONNULL_END
