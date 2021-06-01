//
//  CMSQuotesTopicInvestmentViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/26.
//

#import "CMSQuotesCellViewModel.h"

NS_ASSUME_NONNULL_BEGIN
@class CMSAdaptWidthButtonItem,CMSStockTitleInfoItem,CMSRecommendTargetInfoModel;
@interface CMSQuotesTopicInvestmentViewModel : CMSQuotesCellViewModel
/// A股 主题投资 今日热门 列表数据
@property (nonatomic, strong) NSArray<CMSStockTitleInfoItem *> *jrrmList;
/// A股 主题投资 近期埋伏 列表数据
@property (nonatomic, strong) NSArray<CMSRecommendTargetInfoModel *> *jqmfList;
/// A股 主题投资  类型列表数据 （今日热门 近期埋伏） 列表数据
@property (nonatomic, strong) NSArray<CMSAdaptWidthButtonItem *> *typeList;
/// A股 主题投资  当前类型选择
@property (nonatomic, assign) NSInteger selectIndx;

/// A股 加载 今日热门 近期埋伏
- (void)loadTopicInvestmentInfoData;

@end

NS_ASSUME_NONNULL_END
