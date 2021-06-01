//
//  CMSQuotesMarketPreViewPlateModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/3/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesMarketPreViewPlateModel : NSObject
/// 两市成交总额
@property (nonatomic, assign) double totalAmount;
/// 上涨 有多少家
@property (nonatomic, assign) NSInteger riseTotalNum;
/// 平 有多少家
@property (nonatomic, assign) NSInteger equalNum;
/// 下跌 有多少家
@property (nonatomic, assign) NSInteger fallTotalNum;
/// 上涨 2% 有多少家
@property (nonatomic, assign) NSInteger riseTwoPercent;
/// 上涨 5% 有多少家
@property (nonatomic, assign) NSInteger riseFivePercent;
/// 上涨 7% 有多少家
@property (nonatomic, assign) NSInteger riseSevenPercent;
/// 上涨 >7% 有多少家
@property (nonatomic, assign) NSInteger riseGreaterThanSevenPercent;
/// 涨停 有多少家
@property (nonatomic, assign) NSInteger riseLimit;

/// 下跌 2% 有多少家
@property (nonatomic, assign) NSInteger fallTwoPercent;
/// 下跌 5% 有多少家
@property (nonatomic, assign) NSInteger fallFivePercent;
/// 下跌 7% 有多少家
@property (nonatomic, assign) NSInteger fallSevenPercent;
/// 下跌 7%< 有多少家
@property (nonatomic, assign) NSInteger fallLessThanSevenPercent;

/// 跌停 有多少家
@property (nonatomic, assign) NSInteger fallLimit;

@end

NS_ASSUME_NONNULL_END
