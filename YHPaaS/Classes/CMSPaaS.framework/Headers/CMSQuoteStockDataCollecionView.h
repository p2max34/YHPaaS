//
//  CMSQuoteStockDataCollecionView.h
//  Pods-CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/2/3.
//

#import "CMSStockProtocol.h"
#import "CMSQuoteStockCollectionView.h"

typedef NS_ENUM(NSInteger, CMSQuoteStockDataCollecionViewType) {
    CMSQuoteStockDataCollecionViewTypeQuote        = 0,  // 行情样式
    CMSQuoteStockDataCollecionViewTypeSelfSelected,       // 自选样式
    CMSQuoteStockDataCollecionViewTypeQuoteIndex         // 行情指数样式
};

NS_ASSUME_NONNULL_BEGIN
typedef UICollectionReusableView *(^CMSQuoteStockDataCollectionReusableViewBlock)(NSIndexPath * indexPath);

@interface CMSQuoteStockDataCollecionView : CMSQuoteStockCollectionView
@property (nonatomic,strong) NSArray <id<CMSStockProtocol>> *stocks;
/// 默认type:行情
@property (nonatomic, assign) CMSQuoteStockDataCollecionViewType type;
@property (nonatomic, copy)     void(^scrollViewDidScrollBlock)(UIScrollView *scrollView);
@property (nonatomic, copy)     CMSQuoteStockDataCollectionReusableViewBlock   configReusableFooterView;
@property (nonatomic, copy)     CMSQuoteStockDataCollectionReusableViewBlock   configReusableHeaderView;

- (void)unBindStocks;
- (void)cancelObserver;
- (void)addObserver;
@end

NS_ASSUME_NONNULL_END
