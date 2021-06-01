//
//  CMSPercentStatisticsHorizontalBar.h
//  CMSPaaS
//
//  Created by HJ on 2021/1/14.
//

#import <UIKit/UIKit.h>
#import "CMSHistogramModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSPercentStatisticsHorizontalBar : UIView

- (void)setViewDataWithTotalValue:(CGFloat)totalValue
                        riseValue:(CGFloat)riseValue
                        fallValue:(CGFloat)fallValue
                       equalValue:(CGFloat)equalValue
                       riseString:(NSString *)riseString
                       fallString:(NSString *)fallString
                        leftSpace:(CGFloat)leftSpace;
@end

NS_ASSUME_NONNULL_END
